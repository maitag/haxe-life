#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_KeyEventManager
#include <lime/ui/KeyEventManager.h>
#endif
#ifndef INCLUDED_lime_ui__KeyEventManager_KeyEventInfo
#include <lime/ui/_KeyEventManager/KeyEventInfo.h>
#endif
namespace lime{
namespace ui{

Void KeyEventManager_obj::__construct()
{
	return null();
}

//KeyEventManager_obj::~KeyEventManager_obj() { }

Dynamic KeyEventManager_obj::__CreateEmpty() { return  new KeyEventManager_obj; }
hx::ObjectPtr< KeyEventManager_obj > KeyEventManager_obj::__new()
{  hx::ObjectPtr< KeyEventManager_obj > result = new KeyEventManager_obj();
	result->__construct();
	return result;}

Dynamic KeyEventManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEventManager_obj > result = new KeyEventManager_obj();
	result->__construct();
	return result;}

::lime::app::Event KeyEventManager_obj::onKeyDown;

::lime::app::Event KeyEventManager_obj::onKeyUp;

::lime::ui::_KeyEventManager::KeyEventInfo KeyEventManager_obj::eventInfo;

Void KeyEventManager_obj::create( ){
{
		HX_STACK_FRAME("lime.ui.KeyEventManager","create",0x76eebc99,"lime.ui.KeyEventManager.create","lime/ui/KeyEventManager.hx",23,0x205ebccd)
		HX_STACK_LINE(25)
		::lime::ui::_KeyEventManager::KeyEventInfo _g = ::lime::ui::_KeyEventManager::KeyEventInfo_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		::lime::ui::KeyEventManager_obj::eventInfo = _g;
		HX_STACK_LINE(39)
		::lime::ui::KeyEventManager_obj::lime_key_event_manager_register(::lime::ui::KeyEventManager_obj::handleEvent_dyn(),::lime::ui::KeyEventManager_obj::eventInfo);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KeyEventManager_obj,create,(void))

int KeyEventManager_obj::convertKeyCode( int keyCode){
	HX_STACK_FRAME("lime.ui.KeyEventManager","convertKeyCode",0x46bafb56,"lime.ui.KeyEventManager.convertKeyCode","lime/ui/KeyEventManager.hx",143,0x205ebccd)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_LINE(143)
	return keyCode;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyEventManager_obj,convertKeyCode,return )

Void KeyEventManager_obj::handleEvent( ){
{
		HX_STACK_FRAME("lime.ui.KeyEventManager","handleEvent",0x8082a495,"lime.ui.KeyEventManager.handleEvent","lime/ui/KeyEventManager.hx",187,0x205ebccd)
		HX_STACK_LINE(187)
		int _g = ::lime::ui::KeyEventManager_obj::eventInfo->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::KeyEventManager_obj::onKeyDown->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::KeyEventManager_obj::onKeyDown->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)(::lime::ui::KeyEventManager_obj::eventInfo->keyCode,::lime::ui::KeyEventManager_obj::eventInfo->modifier).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::KeyEventManager_obj::onKeyDown->remove(listeners->__GetItem(i));
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
				Dynamic listeners = ::lime::ui::KeyEventManager_obj::onKeyUp->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::KeyEventManager_obj::onKeyUp->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)(::lime::ui::KeyEventManager_obj::eventInfo->keyCode,::lime::ui::KeyEventManager_obj::eventInfo->modifier).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::KeyEventManager_obj::onKeyUp->remove(listeners->__GetItem(i));
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


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KeyEventManager_obj,handleEvent,(void))

Dynamic KeyEventManager_obj::lime_key_event_manager_register;


KeyEventManager_obj::KeyEventManager_obj()
{
}

Dynamic KeyEventManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown; }
		if (HX_FIELD_EQ(inName,"eventInfo") ) { return eventInfo; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return handleEvent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"convertKeyCode") ) { return convertKeyCode_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { return lime_key_event_manager_register; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyEventManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { onKeyUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventInfo") ) { eventInfo=inValue.Cast< ::lime::ui::_KeyEventManager::KeyEventInfo >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { lime_key_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEventManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("eventInfo"),
	HX_CSTRING("create"),
	HX_CSTRING("convertKeyCode"),
	HX_CSTRING("handleEvent"),
	HX_CSTRING("lime_key_event_manager_register"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyEventManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyEventManager_obj::onKeyDown,"onKeyDown");
	HX_MARK_MEMBER_NAME(KeyEventManager_obj::onKeyUp,"onKeyUp");
	HX_MARK_MEMBER_NAME(KeyEventManager_obj::eventInfo,"eventInfo");
	HX_MARK_MEMBER_NAME(KeyEventManager_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyEventManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyEventManager_obj::onKeyDown,"onKeyDown");
	HX_VISIT_MEMBER_NAME(KeyEventManager_obj::onKeyUp,"onKeyUp");
	HX_VISIT_MEMBER_NAME(KeyEventManager_obj::eventInfo,"eventInfo");
	HX_VISIT_MEMBER_NAME(KeyEventManager_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
};

#endif

Class KeyEventManager_obj::__mClass;

void KeyEventManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.KeyEventManager"), hx::TCanCast< KeyEventManager_obj> ,sStaticFields,sMemberFields,
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

void KeyEventManager_obj::__boot()
{
	onKeyDown= ::lime::app::Event_obj::__new();
	onKeyUp= ::lime::app::Event_obj::__new();
	lime_key_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_key_event_manager_register"),(int)2,null());
}

} // end namespace lime
} // end namespace ui
