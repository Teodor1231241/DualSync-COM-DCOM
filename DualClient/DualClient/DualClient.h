
// DualClient.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include "C:\Users\Teddy\source\repos\DualServer\DualServer\DualServer_i.h"



// CDualClientApp:
// See DualClient.cpp for the implementation of this class
//

class CDualClientApp : public CWinApp
{
public:
	CDualClientApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
	bool InitCOM();
	int ExitInstance();

public:
	ISimple* m_pSimple;
	LONG m_lCookie;
};

extern CDualClientApp theApp;
