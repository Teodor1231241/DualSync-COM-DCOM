

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "DualServer_i.h"

#define TYPE_FORMAT_STRING_SIZE   25                                
#define PROC_FORMAT_STRING_SIZE   159                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _DualServer_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } DualServer_MIDL_TYPE_FORMAT_STRING;

typedef struct _DualServer_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } DualServer_MIDL_PROC_FORMAT_STRING;

typedef struct _DualServer_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } DualServer_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const DualServer_MIDL_TYPE_FORMAT_STRING DualServer__MIDL_TypeFormatString;
extern const DualServer_MIDL_PROC_FORMAT_STRING DualServer__MIDL_ProcFormatString;
extern const DualServer_MIDL_EXPR_FORMAT_STRING DualServer__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ICallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICallback_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISimple_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISimple_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const DualServer_MIDL_PROC_FORMAT_STRING DualServer__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Now */


	/* Procedure Awake */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lCode */


	/* Parameter lVal */

/* 26 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Later */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lCode */

/* 64 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Advise */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x5 ),	/* 5 */
/* 84 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x24 ),	/* 36 */
/* 90 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter lCookie */

/* 108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnAdvise */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x6 ),	/* 6 */
/* 128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lCookie */

/* 146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 148 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 154 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const DualServer_MIDL_TYPE_FORMAT_STRING DualServer__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x282a2502 ),	/* 673850626 */
/*  8 */	NdrFcShort( 0x9bd8 ),	/* -25640 */
/* 10 */	NdrFcShort( 0x11d6 ),	/* 4566 */
/* 12 */	0x83,		/* 131 */
			0x26,		/* 38 */
/* 14 */	0x52,		/* 82 */
			0x54,		/* 84 */
/* 16 */	0x5,		/* 5 */
			0xc2,		/* 194 */
/* 18 */	0x58,		/* 88 */
			0xfc,		/* 252 */
/* 20 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 22 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICallback, ver. 0.0,
   GUID={0x282A2502,0x9BD8,0x11D6,{0x83,0x26,0x52,0x54,0x05,0xC2,0x58,0xFC}} */

#pragma code_seg(".orpc")
static const unsigned short ICallback_FormatStringOffsetTable[] =
    {
    0
    };



/* Object interface: ISimple, ver. 0.0,
   GUID={0xE543326A,0xA767,0x433C,{0x8F,0xFC,0xAC,0x24,0xEC,0x6B,0x66,0xD3}} */

#pragma code_seg(".orpc")
static const unsigned short ISimple_FormatStringOffsetTable[] =
    {
    0,
    38,
    76,
    120
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag19_t;
extern const __midl_frag19_t __midl_frag19;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag19_t __midl_frag19 =
0x5    /* FC64_INT32 */;

static const __midl_frag17_t __midl_frag17 =
{ 
/* UnAdvise */
    { 
    /* UnAdvise */      /* procedure UnAdvise */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* lCookie */      /* parameter lCookie */
        &__midl_frag19,
        { 
        /* lCookie */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag19,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag14_t __midl_frag14 =
{ 
/* *LONG */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag19
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x282a2502,
        0x9bd8,
        0x11d6,
        {0x83, 0x26, 0x52, 0x54, 0x05, 0xc2, 0x58, 0xfc}
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag13
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* Advise */
    { 
    /* Advise */      /* procedure Advise */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pCallback */      /* parameter pCallback */
        &__midl_frag12,
        { 
        /* pCallback */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* lCookie */      /* parameter lCookie */
        &__midl_frag19,
        { 
        /* lCookie */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag19,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICallback, ver. 0.0,
   GUID={0x282A2502,0x9BD8,0x11D6,{0x83,0x26,0x52,0x54,0x05,0xC2,0x58,0xFC}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ICallback_Ndr64ProcTable[] =
    {
    &__midl_frag17
    };


static const MIDL_SYNTAX_INFO ICallback_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    DualServer__MIDL_ProcFormatString.Format,
    &ICallback_FormatStringOffsetTable[-3],
    DualServer__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ICallback_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ICallback_ProxyInfo =
    {
    &Object_StubDesc,
    DualServer__MIDL_ProcFormatString.Format,
    &ICallback_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ICallback_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ICallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DualServer__MIDL_ProcFormatString.Format,
    (unsigned short *) &ICallback_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ICallback_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(4) _ICallbackProxyVtbl = 
{
    &ICallback_ProxyInfo,
    &IID_ICallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ICallback::Awake */
};

const CInterfaceStubVtbl _ICallbackStubVtbl =
{
    &IID_ICallback,
    &ICallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISimple, ver. 0.0,
   GUID={0xE543326A,0xA767,0x433C,{0x8F,0xFC,0xAC,0x24,0xEC,0x6B,0x66,0xD3}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISimple_Ndr64ProcTable[] =
    {
    &__midl_frag17,
    &__midl_frag17,
    &__midl_frag11,
    &__midl_frag17
    };


static const MIDL_SYNTAX_INFO ISimple_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    DualServer__MIDL_ProcFormatString.Format,
    &ISimple_FormatStringOffsetTable[-3],
    DualServer__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISimple_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISimple_ProxyInfo =
    {
    &Object_StubDesc,
    DualServer__MIDL_ProcFormatString.Format,
    &ISimple_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISimple_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISimple_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DualServer__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISimple_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISimple_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _ISimpleProxyVtbl = 
{
    &ISimple_ProxyInfo,
    &IID_ISimple,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISimple::Now */ ,
    (void *) (INT_PTR) -1 /* ISimple::Later */ ,
    (void *) (INT_PTR) -1 /* ISimple::Advise */ ,
    (void *) (INT_PTR) -1 /* ISimple::UnAdvise */
};

const CInterfaceStubVtbl _ISimpleStubVtbl =
{
    &IID_ISimple,
    &ISimple_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    DualServer__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _DualServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ICallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISimpleProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _DualServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ICallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_ISimpleStubVtbl,
    0
};

PCInterfaceName const _DualServer_InterfaceNamesList[] = 
{
    "ICallback",
    "ISimple",
    0
};


#define _DualServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DualServer, pIID, n)

int __stdcall _DualServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _DualServer, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _DualServer, 2, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo DualServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DualServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DualServer_StubVtblList,
    (const PCInterfaceName * ) & _DualServer_InterfaceNamesList,
    0, /* no delegation */
    & _DualServer_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

