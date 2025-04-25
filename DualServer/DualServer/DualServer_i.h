

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for DualServer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DualServer_i_h__
#define __DualServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ICallback_FWD_DEFINED__
#define __ICallback_FWD_DEFINED__
typedef interface ICallback ICallback;

#endif 	/* __ICallback_FWD_DEFINED__ */


#ifndef __ISimple_FWD_DEFINED__
#define __ISimple_FWD_DEFINED__
typedef interface ISimple ISimple;

#endif 	/* __ISimple_FWD_DEFINED__ */


#ifndef __Simple_FWD_DEFINED__
#define __Simple_FWD_DEFINED__

#ifdef __cplusplus
typedef class Simple Simple;
#else
typedef struct Simple Simple;
#endif /* __cplusplus */

#endif 	/* __Simple_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICallback_INTERFACE_DEFINED__
#define __ICallback_INTERFACE_DEFINED__

/* interface ICallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("282A2502-9BD8-11D6-8326-525405C258FC")
    ICallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Awake( 
            long lVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICallbackVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICallback * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICallback * This);
        
        DECLSPEC_XFGVIRT(ICallback, Awake)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Awake )( 
            ICallback * This,
            long lVal);
        
        END_INTERFACE
    } ICallbackVtbl;

    interface ICallback
    {
        CONST_VTBL struct ICallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICallback_Awake(This,lVal)	\
    ( (This)->lpVtbl -> Awake(This,lVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICallback_INTERFACE_DEFINED__ */


#ifndef __ISimple_INTERFACE_DEFINED__
#define __ISimple_INTERFACE_DEFINED__

/* interface ISimple */
/* [helpstring][unique][uuid][object] */ 


EXTERN_C const IID IID_ISimple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E543326A-A767-433C-8FFC-AC24EC6B66D3")
    ISimple : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Now( 
            /* [in] */ LONG lCode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Later( 
            /* [in] */ LONG lCode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ ICallback *pCallback,
            /* [out] */ LONG *lCookie) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnAdvise( 
            /* [in] */ LONG lCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISimpleVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimple * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimple * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimple * This);
        
        DECLSPEC_XFGVIRT(ISimple, Now)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Now )( 
            ISimple * This,
            /* [in] */ LONG lCode);
        
        DECLSPEC_XFGVIRT(ISimple, Later)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Later )( 
            ISimple * This,
            /* [in] */ LONG lCode);
        
        DECLSPEC_XFGVIRT(ISimple, Advise)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ISimple * This,
            /* [in] */ ICallback *pCallback,
            /* [out] */ LONG *lCookie);
        
        DECLSPEC_XFGVIRT(ISimple, UnAdvise)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnAdvise )( 
            ISimple * This,
            /* [in] */ LONG lCookie);
        
        END_INTERFACE
    } ISimpleVtbl;

    interface ISimple
    {
        CONST_VTBL struct ISimpleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISimple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISimple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISimple_Now(This,lCode)	\
    ( (This)->lpVtbl -> Now(This,lCode) ) 

#define ISimple_Later(This,lCode)	\
    ( (This)->lpVtbl -> Later(This,lCode) ) 

#define ISimple_Advise(This,pCallback,lCookie)	\
    ( (This)->lpVtbl -> Advise(This,pCallback,lCookie) ) 

#define ISimple_UnAdvise(This,lCookie)	\
    ( (This)->lpVtbl -> UnAdvise(This,lCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISimple_INTERFACE_DEFINED__ */



#ifndef __DualServerLib_LIBRARY_DEFINED__
#define __DualServerLib_LIBRARY_DEFINED__

/* library DualServerLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_DualServerLib;

EXTERN_C const CLSID CLSID_Simple;

#ifdef __cplusplus

class DECLSPEC_UUID("3A4B6D8F-1C2D-4E5F-A8B7-6C9D0E1F2B3A")
Simple;
#endif
#endif /* __DualServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


