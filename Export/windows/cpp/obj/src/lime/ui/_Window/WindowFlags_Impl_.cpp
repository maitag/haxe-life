#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__Window_WindowFlags_Impl_
#include <lime/ui/_Window/WindowFlags_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _Window{

Void WindowFlags_Impl__obj::__construct()
{
	return null();
}

//WindowFlags_Impl__obj::~WindowFlags_Impl__obj() { }

Dynamic WindowFlags_Impl__obj::__CreateEmpty() { return  new WindowFlags_Impl__obj; }
hx::ObjectPtr< WindowFlags_Impl__obj > WindowFlags_Impl__obj::__new()
{  hx::ObjectPtr< WindowFlags_Impl__obj > result = new WindowFlags_Impl__obj();
	result->__construct();
	return result;}

Dynamic WindowFlags_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowFlags_Impl__obj > result = new WindowFlags_Impl__obj();
	result->__construct();
	return result;}

int WindowFlags_Impl__obj::WINDOW_FLAG_FULLSCREEN;

int WindowFlags_Impl__obj::WINDOW_FLAG_BORDERLESS;

int WindowFlags_Impl__obj::WINDOW_FLAG_RESIZABLE;

int WindowFlags_Impl__obj::WINDOW_FLAG_HARDWARE;

int WindowFlags_Impl__obj::WINDOW_FLAG_VSYNC;

int WindowFlags_Impl__obj::WINDOW_FLAG_HW_AA;

int WindowFlags_Impl__obj::WINDOW_FLAG_HW_AA_HIRES;

int WindowFlags_Impl__obj::WINDOW_FLAG_ALLOW_SHADERS;

int WindowFlags_Impl__obj::WINDOW_FLAG_REQUIRE_SHADERS;

int WindowFlags_Impl__obj::WINDOW_FLAG_DEPTH_BUFFER;

int WindowFlags_Impl__obj::WINDOW_FLAG_STENCIL_BUFFER;


WindowFlags_Impl__obj::WindowFlags_Impl__obj()
{
}

Dynamic WindowFlags_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic WindowFlags_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowFlags_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WINDOW_FLAG_FULLSCREEN"),
	HX_CSTRING("WINDOW_FLAG_BORDERLESS"),
	HX_CSTRING("WINDOW_FLAG_RESIZABLE"),
	HX_CSTRING("WINDOW_FLAG_HARDWARE"),
	HX_CSTRING("WINDOW_FLAG_VSYNC"),
	HX_CSTRING("WINDOW_FLAG_HW_AA"),
	HX_CSTRING("WINDOW_FLAG_HW_AA_HIRES"),
	HX_CSTRING("WINDOW_FLAG_ALLOW_SHADERS"),
	HX_CSTRING("WINDOW_FLAG_REQUIRE_SHADERS"),
	HX_CSTRING("WINDOW_FLAG_DEPTH_BUFFER"),
	HX_CSTRING("WINDOW_FLAG_STENCIL_BUFFER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_FULLSCREEN,"WINDOW_FLAG_FULLSCREEN");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_BORDERLESS,"WINDOW_FLAG_BORDERLESS");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_RESIZABLE,"WINDOW_FLAG_RESIZABLE");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_HARDWARE,"WINDOW_FLAG_HARDWARE");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_VSYNC,"WINDOW_FLAG_VSYNC");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_HW_AA,"WINDOW_FLAG_HW_AA");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_HW_AA_HIRES,"WINDOW_FLAG_HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_ALLOW_SHADERS,"WINDOW_FLAG_ALLOW_SHADERS");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_REQUIRE_SHADERS,"WINDOW_FLAG_REQUIRE_SHADERS");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_DEPTH_BUFFER,"WINDOW_FLAG_DEPTH_BUFFER");
	HX_MARK_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_STENCIL_BUFFER,"WINDOW_FLAG_STENCIL_BUFFER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_FULLSCREEN,"WINDOW_FLAG_FULLSCREEN");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_BORDERLESS,"WINDOW_FLAG_BORDERLESS");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_RESIZABLE,"WINDOW_FLAG_RESIZABLE");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_HARDWARE,"WINDOW_FLAG_HARDWARE");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_VSYNC,"WINDOW_FLAG_VSYNC");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_HW_AA,"WINDOW_FLAG_HW_AA");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_HW_AA_HIRES,"WINDOW_FLAG_HW_AA_HIRES");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_ALLOW_SHADERS,"WINDOW_FLAG_ALLOW_SHADERS");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_REQUIRE_SHADERS,"WINDOW_FLAG_REQUIRE_SHADERS");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_DEPTH_BUFFER,"WINDOW_FLAG_DEPTH_BUFFER");
	HX_VISIT_MEMBER_NAME(WindowFlags_Impl__obj::WINDOW_FLAG_STENCIL_BUFFER,"WINDOW_FLAG_STENCIL_BUFFER");
};

#endif

Class WindowFlags_Impl__obj::__mClass;

void WindowFlags_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._Window.WindowFlags_Impl_"), hx::TCanCast< WindowFlags_Impl__obj> ,sStaticFields,sMemberFields,
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

void WindowFlags_Impl__obj::__boot()
{
	WINDOW_FLAG_FULLSCREEN= (int)1;
	WINDOW_FLAG_BORDERLESS= (int)2;
	WINDOW_FLAG_RESIZABLE= (int)4;
	WINDOW_FLAG_HARDWARE= (int)8;
	WINDOW_FLAG_VSYNC= (int)16;
	WINDOW_FLAG_HW_AA= (int)32;
	WINDOW_FLAG_HW_AA_HIRES= (int)96;
	WINDOW_FLAG_ALLOW_SHADERS= (int)128;
	WINDOW_FLAG_REQUIRE_SHADERS= (int)256;
	WINDOW_FLAG_DEPTH_BUFFER= (int)512;
	WINDOW_FLAG_STENCIL_BUFFER= (int)1024;
}

} // end namespace lime
} // end namespace ui
} // end namespace _Window
