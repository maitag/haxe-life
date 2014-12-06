#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_MouseEventManager
#include <lime/ui/MouseEventManager.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__MouseEventManager_MouseEventInfo
#include <lime/ui/_MouseEventManager/MouseEventInfo.h>
#endif
namespace lime{
namespace ui{

Void MouseEventManager_obj::__construct()
{
	return null();
}

//MouseEventManager_obj::~MouseEventManager_obj() { }

Dynamic MouseEventManager_obj::__CreateEmpty() { return  new MouseEventManager_obj; }
hx::ObjectPtr< MouseEventManager_obj > MouseEventManager_obj::__new()
{  hx::ObjectPtr< MouseEventManager_obj > result = new MouseEventManager_obj();
	result->__construct();
	return result;}

Dynamic MouseEventManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEventManager_obj > result = new MouseEventManager_obj();
	result->__construct();
	return result;}

::lime::app::Event MouseEventManager_obj::onMouseDown;

::lime::app::Event MouseEventManager_obj::onMouseMove;

::lime::app::Event MouseEventManager_obj::onMouseUp;

::lime::app::Event MouseEventManager_obj::onMouseWheel;

bool MouseEventManager_obj::created;

::lime::ui::_MouseEventManager::MouseEventInfo MouseEventManager_obj::eventInfo;

Void MouseEventManager_obj::create( ){
{
		HX_STACK_FRAME("lime.ui.MouseEventManager","create",0x887bf613,"lime.ui.MouseEventManager.create","lime/ui/MouseEventManager.hx",31,0xdc4c1947)
		HX_STACK_LINE(33)
		::lime::ui::_MouseEventManager::MouseEventInfo _g = ::lime::ui::_MouseEventManager::MouseEventInfo_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		::lime::ui::MouseEventManager_obj::eventInfo = _g;
		HX_STACK_LINE(36)
		::lime::ui::MouseEventManager_obj::lime_mouse_event_manager_register(::lime::ui::MouseEventManager_obj::handleEvent_dyn(),::lime::ui::MouseEventManager_obj::eventInfo);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MouseEventManager_obj,create,(void))

Void MouseEventManager_obj::handleEvent( ){
{
		HX_STACK_FRAME("lime.ui.MouseEventManager","handleEvent",0xcef0d0db,"lime.ui.MouseEventManager.handleEvent","lime/ui/MouseEventManager.hx",133,0xdc4c1947)
		HX_STACK_LINE(133)
		int _g = ::lime::ui::MouseEventManager_obj::eventInfo->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::MouseEventManager_obj::onMouseDown->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::MouseEventManager_obj::onMouseDown->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)(::lime::ui::MouseEventManager_obj::eventInfo->x,::lime::ui::MouseEventManager_obj::eventInfo->y,::lime::ui::MouseEventManager_obj::eventInfo->button).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::MouseEventManager_obj::onMouseDown->remove(listeners->__GetItem(i));
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
				Dynamic listeners = ::lime::ui::MouseEventManager_obj::onMouseUp->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::MouseEventManager_obj::onMouseUp->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)(::lime::ui::MouseEventManager_obj::eventInfo->x,::lime::ui::MouseEventManager_obj::eventInfo->y,::lime::ui::MouseEventManager_obj::eventInfo->button).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::MouseEventManager_obj::onMouseUp->remove(listeners->__GetItem(i));
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
				Dynamic listeners = ::lime::ui::MouseEventManager_obj::onMouseMove->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::MouseEventManager_obj::onMouseMove->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)(::lime::ui::MouseEventManager_obj::eventInfo->x,::lime::ui::MouseEventManager_obj::eventInfo->y,::lime::ui::MouseEventManager_obj::eventInfo->button).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::MouseEventManager_obj::onMouseMove->remove(listeners->__GetItem(i));
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
			case (int)3: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::MouseEventManager_obj::onMouseWheel->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::MouseEventManager_obj::onMouseWheel->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)(::lime::ui::MouseEventManager_obj::eventInfo->x,::lime::ui::MouseEventManager_obj::eventInfo->y).Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::MouseEventManager_obj::onMouseWheel->remove(listeners->__GetItem(i));
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


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MouseEventManager_obj,handleEvent,(void))

Void MouseEventManager_obj::registerWindow( ::lime::ui::Window _window){
{
		HX_STACK_FRAME("lime.ui.MouseEventManager","registerWindow",0x3e9218ca,"lime.ui.MouseEventManager.registerWindow","lime/ui/MouseEventManager.hx",158,0xdc4c1947)
		HX_STACK_ARG(_window,"_window")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MouseEventManager_obj,registerWindow,(void))

Dynamic MouseEventManager_obj::lime_mouse_event_manager_register;


MouseEventManager_obj::MouseEventManager_obj()
{
}

Dynamic MouseEventManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"created") ) { return created; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp; }
		if (HX_FIELD_EQ(inName,"eventInfo") ) { return eventInfo; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove; }
		if (HX_FIELD_EQ(inName,"handleEvent") ) { return handleEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerWindow") ) { return registerWindow_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { return lime_mouse_event_manager_register; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEventManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"created") ) { created=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { onMouseUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventInfo") ) { eventInfo=inValue.Cast< ::lime::ui::_MouseEventManager::MouseEventInfo >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { onMouseDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { onMouseMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { onMouseWheel=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { lime_mouse_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEventManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("created"),
	HX_CSTRING("eventInfo"),
	HX_CSTRING("create"),
	HX_CSTRING("handleEvent"),
	HX_CSTRING("registerWindow"),
	HX_CSTRING("lime_mouse_event_manager_register"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::onMouseWheel,"onMouseWheel");
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::created,"created");
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::eventInfo,"eventInfo");
	HX_MARK_MEMBER_NAME(MouseEventManager_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::onMouseWheel,"onMouseWheel");
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::created,"created");
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::eventInfo,"eventInfo");
	HX_VISIT_MEMBER_NAME(MouseEventManager_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
};

#endif

Class MouseEventManager_obj::__mClass;

void MouseEventManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.MouseEventManager"), hx::TCanCast< MouseEventManager_obj> ,sStaticFields,sMemberFields,
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

void MouseEventManager_obj::__boot()
{
	onMouseDown= ::lime::app::Event_obj::__new();
	onMouseMove= ::lime::app::Event_obj::__new();
	onMouseUp= ::lime::app::Event_obj::__new();
	onMouseWheel= ::lime::app::Event_obj::__new();
	lime_mouse_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_event_manager_register"),(int)2,null());
}

} // end namespace lime
} // end namespace ui
