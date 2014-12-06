#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__KeyEventManager_KeyEventType_Impl_
#include <lime/ui/_KeyEventManager/KeyEventType_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _KeyEventManager{

Void KeyEventType_Impl__obj::__construct()
{
	return null();
}

//KeyEventType_Impl__obj::~KeyEventType_Impl__obj() { }

Dynamic KeyEventType_Impl__obj::__CreateEmpty() { return  new KeyEventType_Impl__obj; }
hx::ObjectPtr< KeyEventType_Impl__obj > KeyEventType_Impl__obj::__new()
{  hx::ObjectPtr< KeyEventType_Impl__obj > result = new KeyEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic KeyEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEventType_Impl__obj > result = new KeyEventType_Impl__obj();
	result->__construct();
	return result;}

int KeyEventType_Impl__obj::KEY_DOWN;

int KeyEventType_Impl__obj::KEY_UP;


KeyEventType_Impl__obj::KeyEventType_Impl__obj()
{
}

Dynamic KeyEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic KeyEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("KEY_DOWN"),
	HX_CSTRING("KEY_UP"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::KEY_DOWN,"KEY_DOWN");
	HX_MARK_MEMBER_NAME(KeyEventType_Impl__obj::KEY_UP,"KEY_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::KEY_DOWN,"KEY_DOWN");
	HX_VISIT_MEMBER_NAME(KeyEventType_Impl__obj::KEY_UP,"KEY_UP");
};

#endif

Class KeyEventType_Impl__obj::__mClass;

void KeyEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._KeyEventManager.KeyEventType_Impl_"), hx::TCanCast< KeyEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void KeyEventType_Impl__obj::__boot()
{
	KEY_DOWN= (int)0;
	KEY_UP= (int)1;
}

} // end namespace lime
} // end namespace ui
} // end namespace _KeyEventManager
