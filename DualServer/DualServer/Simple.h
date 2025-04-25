// Simple.h : Declaration of the CSimple

#pragma once
#include "resource.h"       // main symbols
#include "DualServer_i.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform..."
#endif

using namespace ATL;

// CSimple
class ATL_NO_VTABLE CSimple :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CSimple, &CLSID_Simple>,
    public IDispatchImpl<ISimple, &IID_ISimple, &LIBID_DualServerLib> // Add IDispatchImpl
{
public:
    long m_lCookie;
    ICallback* m_ICallback;

public:
    CSimple()
    {
    }

    DECLARE_REGISTRY_RESOURCEID(106)

    BEGIN_COM_MAP(CSimple)
        COM_INTERFACE_ENTRY(ISimple)
        // Remove explicit IDispatch entry; handled by IDispatchImpl<ISimple>
    END_COM_MAP()

    DECLARE_PROTECT_FINAL_CONSTRUCT()

    HRESULT FinalConstruct()
    {
        return S_OK;
    }

    void FinalRelease()
    {
    }

public:
    STDMETHOD(Later)(LONG lCode);
    STDMETHOD(Advise)(ICallback* pICallback, LONG* lCookie);
    STDMETHOD(UnAdvise)(LONG lCookie);
    STDMETHOD(Now)(LONG lCode);
};

OBJECT_ENTRY_AUTO(__uuidof(Simple), CSimple)