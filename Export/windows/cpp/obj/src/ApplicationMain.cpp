#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::config;

::lime::app::Preloader ApplicationMain_obj::preloader;

::lime::app::Application ApplicationMain_obj::app;

Void ApplicationMain_obj::create( ){
{
		HX_STACK_FRAME("ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",14,0x0780ded5)
		HX_STACK_LINE(16)
		::lime::app::Preloader _g = ::lime::app::Preloader_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		::ApplicationMain_obj::preloader = _g;
		HX_STACK_LINE(17)
		::ApplicationMain_obj::preloader->onComplete = ::ApplicationMain_obj::start_dyn();
		HX_STACK_LINE(18)
		::ApplicationMain_obj::preloader->create(::ApplicationMain_obj::config);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,create,(void))

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",32,0x0780ded5)
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		int _g2 = (int)30;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(42)
		int _g3 = (int)800;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(48)
		int _g4 = (int)1200;		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_1{
			inline static Dynamic Block( int &_g1,int &_g,int &_g4,int &_g2,int &_g3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ApplicationMain.hx",34,0x0780ded5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("antialiasing") , _g,false);
					__result->Add(HX_CSTRING("background") , _g1,false);
					__result->Add(HX_CSTRING("borderless") , false,false);
					__result->Add(HX_CSTRING("depthBuffer") , false,false);
					__result->Add(HX_CSTRING("fps") , _g2,false);
					__result->Add(HX_CSTRING("fullscreen") , false,false);
					__result->Add(HX_CSTRING("height") , _g3,false);
					__result->Add(HX_CSTRING("orientation") , HX_CSTRING(""),false);
					__result->Add(HX_CSTRING("resizable") , true,false);
					__result->Add(HX_CSTRING("stencilBuffer") , false,false);
					__result->Add(HX_CSTRING("title") , HX_CSTRING("nextLifeGeneration"),false);
					__result->Add(HX_CSTRING("vsync") , false,false);
					__result->Add(HX_CSTRING("width") , _g4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		Dynamic _g5 = _Function_1_1::Block(_g1,_g,_g4,_g2,_g3);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(34)
		::ApplicationMain_obj::config = _g5;
		HX_STACK_LINE(57)
		::ApplicationMain_obj::create();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::start( ){
{
		HX_STACK_FRAME("ApplicationMain","start",0x45b5d9bd,"ApplicationMain.start","ApplicationMain.hx",63,0x0780ded5)
		HX_STACK_LINE(65)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		::ApplicationMain_obj::app = _g;
		HX_STACK_LINE(66)
		::ApplicationMain_obj::app->create(::ApplicationMain_obj::config);
		HX_STACK_LINE(68)
		int result = ::ApplicationMain_obj::app->exec();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(71)
		::Sys_obj::exit(result);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,start,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return app; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { return preloader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::lime::app::Preloader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("preloader"),
	HX_CSTRING("app"),
	HX_CSTRING("create"),
	HX_CSTRING("main"),
	HX_CSTRING("start"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::app,"app");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::app,"app");
};

#endif

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ApplicationMain_obj::__boot()
{
}

