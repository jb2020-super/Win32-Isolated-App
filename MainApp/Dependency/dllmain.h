// dllmain.h : Declaration of module class.

class CDependencyModule : public ATL::CAtlDllModuleT< CDependencyModule >
{
public :
	DECLARE_LIBID(LIBID_DependencyLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DEPENDENCY, "{be0151fd-b587-46d2-8df0-cb3a8e8c87c5}")
};

extern class CDependencyModule _AtlModule;
