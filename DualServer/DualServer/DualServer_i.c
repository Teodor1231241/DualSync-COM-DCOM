

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ICallback,0x282A2502,0x9BD8,0x11D6,0x83,0x26,0x52,0x54,0x05,0xC2,0x58,0xFC);


MIDL_DEFINE_GUID(IID, IID_ISimple,0xE543326A,0xA767,0x433C,0x8F,0xFC,0xAC,0x24,0xEC,0x6B,0x66,0xD3);


MIDL_DEFINE_GUID(IID, LIBID_DualServerLib,0x16863747,0xCBD4,0x4431,0xA4,0x06,0x0F,0xFD,0xB2,0xA6,0x5C,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_Simple,0x3A4B6D8F,0x1C2D,0x4E5F,0xA8,0xB7,0x6C,0x9D,0x0E,0x1F,0x2B,0x3A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



