// DualServer.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "DualServer_i.h"


using namespace ATL;


class CDualServerModule : public ATL::CAtlExeModuleT< CDualServerModule >
{
public :
	DECLARE_LIBID(LIBID_DualServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DUALSERVER, "{f841ea89-c9cf-4d76-ac3d-3f092e6d097f}")
};

CDualServerModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

