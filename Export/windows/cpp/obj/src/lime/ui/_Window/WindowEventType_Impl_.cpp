#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__Window_WindowEventType_Impl_
#include <lime/ui/_Window/WindowEventType_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _Window{

Void WindowEventType_Impl__obj::__construct()
{
	return null();
}

//WindowEventType_Impl__obj::~WindowEventType_Impl__obj() { }

Dynamic WindowEventType_Impl__obj::__CreateEmpty() { return  new WindowEventType_Impl__obj; }
hx::ObjectPtr< WindowEventType_Impl__obj > WindowEventType_Impl__obj::__new()
{  hx::ObjectPtr< WindowEventType_Impl__obj > result = new WindowEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic WindowEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowEventType_Impl__obj > result = new WindowEventType_Impl__obj();
	result->__construct();
	return result;}

int WindowEventType_Impl__obj::WINDOW_ACTIVATE;

int WindowEventType_Impl__obj::WINDOW_CLOSE;

int WindowEventType_Impl__obj::WINDOW_DEACTIVATE;

int WindowEventType_Impl__obj::WINDOW_FOCUS_IN;

int WindowEventType_Impl__obj::WINDOW_FOCUS_OUT;

int WindowEventType_Impl__obj::WINDOW_MOVE;

int WindowEventType_Impl__obj::WINDOW_RESIZE;


WindowEventType_Impl__obj::WindowEventType_Impl__obj()
{
}

Dynamic WindowEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic WindowEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WINDOW_ACTIVATE"),
	HX_CSTRING("WINDOW_CLOSE"),
	HX_CSTRING("WINDOW_DEACTIVATE"),
	HX_CSTRING("WINDOW_FOCUS_IN"),
	HX_CSTRING("WINDOW_FOCUS_OUT"),
	HX_CSTRING("WINDOW_MOVE"),
	HX_CSTRING("WINDOW_RESIZE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_ACTIVATE,"WINDOW_ACTIVATE");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_CLOSE,"WINDOW_CLOSE");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_DEACTIVATE,"WINDOW_DEACTIVATE");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_FOCUS_IN,"WINDOW_FOCUS_IN");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_FOCUS_OUT,"WINDOW_FOCUS_OUT");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_MOVE,"WINDOW_MOVE");
	HX_MARK_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_RESIZE,"WINDOW_RESIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_ACTIVATE,"WINDOW_ACTIVATE");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_CLOSE,"WINDOW_CLOSE");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_DEACTIVATE,"WINDOW_DEACTIVATE");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_FOCUS_IN,"WINDOW_FOCUS_IN");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_FOCUS_OUT,"WINDOW_FOCUS_OUT");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_MOVE,"WINDOW_MOVE");
	HX_VISIT_MEMBER_NAME(WindowEventType_Impl__obj::WINDOW_RESIZE,"WINDOW_RESIZE");
};

#endif

Class WindowEventType_Impl__obj::__mClass;

void WindowEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._Window.WindowEventType_Impl_"), hx::TCanCast< WindowEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void WindowEventType_Impl__obj::__boot()
{
	WINDOW_ACTIVATE= (int)0;
	WINDOW_CLOSE= (int)1;
	WINDOW_DEACTIVATE= (int)2;
	WINDOW_FOCUS_IN= (int)3;
	WINDOW_FOCUS_OUT= (int)4;
	WINDOW_MOVE= (int)5;
	WINDOW_RESIZE= (int)6;
}

} // end namespace lime
} // end namespace ui
} // end namespace _Window
