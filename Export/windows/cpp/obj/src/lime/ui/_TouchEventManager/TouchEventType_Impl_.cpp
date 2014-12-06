#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__TouchEventManager_TouchEventType_Impl_
#include <lime/ui/_TouchEventManager/TouchEventType_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _TouchEventManager{

Void TouchEventType_Impl__obj::__construct()
{
	return null();
}

//TouchEventType_Impl__obj::~TouchEventType_Impl__obj() { }

Dynamic TouchEventType_Impl__obj::__CreateEmpty() { return  new TouchEventType_Impl__obj; }
hx::ObjectPtr< TouchEventType_Impl__obj > TouchEventType_Impl__obj::__new()
{  hx::ObjectPtr< TouchEventType_Impl__obj > result = new TouchEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic TouchEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEventType_Impl__obj > result = new TouchEventType_Impl__obj();
	result->__construct();
	return result;}

int TouchEventType_Impl__obj::TOUCH_START;

int TouchEventType_Impl__obj::TOUCH_END;

int TouchEventType_Impl__obj::TOUCH_MOVE;


TouchEventType_Impl__obj::TouchEventType_Impl__obj()
{
}

Dynamic TouchEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOUCH_START"),
	HX_CSTRING("TOUCH_END"),
	HX_CSTRING("TOUCH_MOVE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::TOUCH_START,"TOUCH_START");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEventType_Impl__obj::TOUCH_MOVE,"TOUCH_MOVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::TOUCH_START,"TOUCH_START");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEventType_Impl__obj::TOUCH_MOVE,"TOUCH_MOVE");
};

#endif

Class TouchEventType_Impl__obj::__mClass;

void TouchEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._TouchEventManager.TouchEventType_Impl_"), hx::TCanCast< TouchEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void TouchEventType_Impl__obj::__boot()
{
	TOUCH_START= (int)0;
	TOUCH_END= (int)1;
	TOUCH_MOVE= (int)2;
}

} // end namespace lime
} // end namespace ui
} // end namespace _TouchEventManager
