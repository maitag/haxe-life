#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__MouseEventManager_MouseEventType_Impl_
#include <lime/ui/_MouseEventManager/MouseEventType_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _MouseEventManager{

Void MouseEventType_Impl__obj::__construct()
{
	return null();
}

//MouseEventType_Impl__obj::~MouseEventType_Impl__obj() { }

Dynamic MouseEventType_Impl__obj::__CreateEmpty() { return  new MouseEventType_Impl__obj; }
hx::ObjectPtr< MouseEventType_Impl__obj > MouseEventType_Impl__obj::__new()
{  hx::ObjectPtr< MouseEventType_Impl__obj > result = new MouseEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic MouseEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEventType_Impl__obj > result = new MouseEventType_Impl__obj();
	result->__construct();
	return result;}

int MouseEventType_Impl__obj::MOUSE_DOWN;

int MouseEventType_Impl__obj::MOUSE_UP;

int MouseEventType_Impl__obj::MOUSE_MOVE;

int MouseEventType_Impl__obj::MOUSE_WHEEL;


MouseEventType_Impl__obj::MouseEventType_Impl__obj()
{
}

Dynamic MouseEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MOUSE_DOWN"),
	HX_CSTRING("MOUSE_UP"),
	HX_CSTRING("MOUSE_MOVE"),
	HX_CSTRING("MOUSE_WHEEL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_WHEEL,"MOUSE_WHEEL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::MOUSE_WHEEL,"MOUSE_WHEEL");
};

#endif

Class MouseEventType_Impl__obj::__mClass;

void MouseEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._MouseEventManager.MouseEventType_Impl_"), hx::TCanCast< MouseEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void MouseEventType_Impl__obj::__boot()
{
	MOUSE_DOWN= (int)0;
	MOUSE_UP= (int)1;
	MOUSE_MOVE= (int)2;
	MOUSE_WHEEL= (int)3;
}

} // end namespace lime
} // end namespace ui
} // end namespace _MouseEventManager
