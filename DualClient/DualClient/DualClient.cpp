
// DualClient.cpp : Defines the class behaviors for the application.
//

#include "pch.h"
#include "framework.h"
#include "DualClient.h"
#include "DualClientDlg.h"
#include "C:\Users\Teddy\source\repos\DualServer\DualServer\DualServer_i.c"
#include "C:\Users\Teddy\source\repos\DualServer\DualServer\DualServer_i.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CComModule _Module; // Definire modul COM principal // (a)
// Cerut de <atlcom.h>
#include <atlcom.h> // Contine definitia clasei CcomObjectRoot
// Interfata Callback implementata in client
class CCallback : public ICallback, public CComObjectRoot // (b)
{
public:
	CCallback() {} // Constructor implicit
	// Harta de interfete COM // (c)
	BEGIN_COM_MAP(CCallback)
		COM_INTERFACE_ENTRY(ICallback)
	END_COM_MAP()
	// Icallback
public:
	// Metoda callback
	STDMETHOD(Awake)(long lVal);
};
// Harta de obiecte COM // (d)
BEGIN_OBJECT_MAP(ObjectMap)
END_OBJECT_MAP()


STDMETHODIMP CCallback::Awake(long lVal) {
	CString str;
	str.Format(_T("Mesaj %d de la server"), lVal);
	AfxMessageBox(str);
	//Beep(1000,1000);
	return S_OK;
}
// CDualClientApp

BEGIN_MESSAGE_MAP(CDualClientApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CDualClientApp construction

CDualClientApp::CDualClientApp()
{
	// support Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CDualClientApp object

CDualClientApp theApp;


// CDualClientApp initialization

BOOL CDualClientApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();
	InitCOM();
	// Create the shell manager, in case the dialog contains
	// any shell tree view or shell list view controls.
	CShellManager *pShellManager = new CShellManager;

	// Activate "Windows Native" visual manager for enabling themes in MFC controls
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CDualClientDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "Warning: dialog creation failed, so application is terminating unexpectedly.\n");
		TRACE(traceAppMsg, 0, "Warning: if you are using MFC controls on the dialog, you cannot #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS.\n");
	}

	// Delete the shell manager created above.
	if (pShellManager != nullptr)
	{
		delete pShellManager;
	}

#if !defined(_AFXDLL) && !defined(_AFX_NO_MFC_CONTROLS_IN_DIALOGS)
	ControlBarCleanUp();
#endif

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}


bool CDualClientApp::InitCOM()
{
	HRESULT hr;
	CoInitialize(0); // Initializare COM
	// Initializare obiect ATL principal
	_Module.Init(ObjectMap, 0);
	// Crearea obiectului server
	m_pSimple = NULL;
	hr = CoCreateInstance(CLSID_Simple, 0, CLSCTX_SERVER, IID_ISimple,
		(void**)&m_pSimple);
	if (SUCCEEDED(hr))
	{
		// Crearea obiectului callback
		CComObject<CCallback>* pCallback = NULL;
		CComObject<CCallback>::CreateInstance(&pCallback);
		pCallback->AddRef();
		// Inregistrarea interfetei callback in server
		hr = m_pSimple->Advise(pCallback, &m_lCookie);
		// Decrementarea numarului de referinte
		// deoarece serverul a efectuat un apel AddRef
		pCallback->Release();
	}
	return SUCCEEDED(hr);
}

int CDualClientApp::ExitInstance()
{
	// Dacă s-a creat un obiect server, se eliberează
	if (m_pSimple != NULL) {
		// Se elibereaza conexiunea callback
		m_pSimple->UnAdvise(m_lCookie);
		// Se eliberează interfaţa serverului
		m_pSimple->Release();
	}
	// Oprire COM
	CoUninitialize();
	return CWinApp::ExitInstance();
}
