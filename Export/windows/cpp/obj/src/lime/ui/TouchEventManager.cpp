#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_TouchEventManager
#include <lime/ui/TouchEventManager.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__TouchEventManager_TouchEventInfo
#include <lime/ui/_TouchEventManager/TouchEventInfo.h>
#endif
namespace lime{
namespace ui{

Void TouchEventManager_obj::__construct()
{
	return null();
}

//TouchEventManager_obj::~TouchEventManager_obj() { }

Dynamic TouchEventManager_obj::__CreateEmpty() { return  new TouchEventManager_obj; }
hx::ObjectPtr< TouchEventManager_obj > TouchEventManager_obj::__new()
{  hx::ObjectPtr< TouchEventManager_obj > result = new TouchEventManager_obj();
	result->__construct();
	return result;}

Dynamic TouchEventManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEventManager_obj > result = new TouchEventManager_obj();
	result->__construct();
	return result;}

::lime::app::Event TouchEventManager_obj::onTouchEnd;

::lime::app::Event TouchEventManager_obj::onTouchMove;

::lime::app::Event TouchEventManager_obj::onTouchStart;

::lime::ui::_TouchEventManager::TouchEventInfo TouchEventManager_obj::eventInfo;

Void TouchEventManager_obj::create( ){
{
		HX_STACK_FRAME("lime.ui.TouchEventManager","create",0x569d9cb9,"lime.ui.TouchEventManager.create","lime/ui/TouchEventManager.hx",28,0xcf5ff4ed)
		HX_STACK_LINE(30)
		::lime::ui::_TouchEventManager::TouchEventInfo _g = ::lime::ui::_TouchEventManager::TouchEventInfo_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		::lime::ui::TouchEventManager_obj::eventInfo = _g;
		HX_STACK_LINE(33)
		::lime::ui::TouchEventManager_obj::lime_touch_event_manager_register(::lime::ui::TouchEventManager_obj::handleEvent_dyn(),::lime::ui::TouchEventManager_obj::eventInfo);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TouchEventManager_obj,create,(void))

Void TouchEventManager_obj::handleEvent( ){
{
		HX_STACK_FRAME("lime.ui.TouchEventManager","handleEvent",0xc6535075,"lime.ui.TouchEventManager.handleEvent","lime/ui/TouchEventManager.hx",113,0xcf5ff4ed)
		HX_STACK_LINE(113)
		int _g = ::lime::ui::TouchEventManager_obj::eventInfo->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::TouchEventManager_obj::onTouchStart->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::TouchEventManager_obj::onTouchStart->repeat;		HX_STACK_VAR(repeat,"repeat");
				HX_STACK_LINE(54)
				int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(55)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				while((true)){
					HX_STACK_LINE(57)
					if ((!(((i < length))))){
						HX_STACK_LINE(57)
						break;
					}
					HX_STACK_LINE(59)
					listeners->__GetItem(i)(::lime::ui::TouchEventManager_obj::eventInfo->x,::lime::ui::TouchEventManager_obj::eventInfo->y,::lime::ui::TouchEventManager_obj::eventInfo->id).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::TouchEventManager_obj::onTouchStart->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::TouchEventManager_obj::onTouchEnd->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::TouchEventManager_obj::onTouchEnd->repeat;		HX_STACK_VAR(repeat,"repeat");
				HX_STACK_LINE(54)
				int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(55)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				while((true)){
					HX_STACK_LINE(57)
					if ((!(((i < length))))){
						HX_STACK_LINE(57)
						break;
					}
					HX_STACK_LINE(59)
					listeners->__GetItem(i)(::lime::ui::TouchEventManager_obj::eventInfo->x,::lime::ui::TouchEventManager_obj::eventInfo->y,::lime::ui::TouchEventManager_obj::eventInfo->id).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::TouchEventManager_obj::onTouchEnd->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::TouchEventManager_obj::onTouchMove->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::TouchEventManager_obj::onTouchMove->repeat;		HX_STACK_VAR(repeat,"repeat");
				HX_STACK_LINE(54)
				int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(55)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				while((true)){
					HX_STACK_LINE(57)
					if ((!(((i < length))))){
						HX_STACK_LINE(57)
						break;
					}
					HX_STACK_LINE(59)
					listeners->__GetItem(i)(::lime::ui::TouchEventManager_obj::eventInfo->x,::lime::ui::TouchEventManager_obj::eventInfo->y,::lime::ui::TouchEventManager_obj::eventInfo->id).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::TouchEventManager_obj::onTouchMove->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TouchEventManager_obj,handleEvent,(void))

Void TouchEventManager_obj::registerWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.ui.TouchEventManager","registerWindow",0xe853d570,"lime.ui.TouchEventManager.registerWindow","lime/ui/TouchEventManager.hx",132,0xcf5ff4ed)
		HX_STACK_ARG(window,"window")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TouchEventManager_obj,registerWindow,(void))

Dynamic TouchEventManager_obj::lime_touch_event_manager_register;


TouchEventManager_obj::TouchEventManager_obj()
{
}

Dynamic TouchEventManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventInfo") ) { return eventInfo; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove; }
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return handleEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerWindow") ) { return registerWindow_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { return lime_touch_event_manager_register; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEventManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"eventInfo") ) { eventInfo=inValue.Cast< ::lime::ui::_TouchEventManager::TouchEventInfo >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { onTouchEnd=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { onTouchMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { onTouchStart=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { lime_touch_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEventManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchStart"),
	HX_CSTRING("eventInfo"),
	HX_CSTRING("create"),
	HX_CSTRING("handleEvent"),
	HX_CSTRING("registerWindow"),
	HX_CSTRING("lime_touch_event_manager_register"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEventManager_obj::onTouchEnd,"onTouchEnd");
	HX_MARK_MEMBER_NAME(TouchEventManager_obj::onTouchMove,"onTouchMove");
	HX_MARK_MEMBER_NAME(TouchEventManager_obj::onTouchStart,"onTouchStart");
	HX_MARK_MEMBER_NAME(TouchEventManager_obj::eventInfo,"eventInfo");
	HX_MARK_MEMBER_NAME(TouchEventManager_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEventManager_obj::onTouchEnd,"onTouchEnd");
	HX_VISIT_MEMBER_NAME(TouchEventManager_obj::onTouchMove,"onTouchMove");
	HX_VISIT_MEMBER_NAME(TouchEventManager_obj::onTouchStart,"onTouchStart");
	HX_VISIT_MEMBER_NAME(TouchEventManager_obj::eventInfo,"eventInfo");
	HX_VISIT_MEMBER_NAME(TouchEventManager_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
};

#endif

Class TouchEventManager_obj::__mClass;

void TouchEventManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.TouchEventManager"), hx::TCanCast< TouchEventManager_obj> ,sStaticFields,sMemberFields,
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

void TouchEventManager_obj::__boot()
{
	onTouchEnd= ::lime::app::Event_obj::__new();
	onTouchMove= ::lime::app::Event_obj::__new();
	onTouchStart= ::lime::app::Event_obj::__new();
	lime_touch_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_touch_event_manager_register"),(int)2,null());
}

} // end namespace lime
} // end namespace ui
