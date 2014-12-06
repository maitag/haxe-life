#ifndef INCLUDED_lime_ui_TouchEventManager
#define INCLUDED_lime_ui_TouchEventManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,ui,TouchEventManager)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS3(lime,ui,_TouchEventManager,TouchEventInfo)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  TouchEventManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchEventManager_obj OBJ_;
		TouchEventManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TouchEventManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchEventManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TouchEventManager"); }

		static ::lime::app::Event onTouchEnd;
		static ::lime::app::Event onTouchMove;
		static ::lime::app::Event onTouchStart;
		static ::lime::ui::_TouchEventManager::TouchEventInfo eventInfo;
		static Void create( );
		static Dynamic create_dyn();

		static Void handleEvent( );
		static Dynamic handleEvent_dyn();

		static Void registerWindow( ::lime::ui::Window window);
		static Dynamic registerWindow_dyn();

		static Dynamic lime_touch_event_manager_register;
		static Dynamic &lime_touch_event_manager_register_dyn() { return lime_touch_event_manager_register;}
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_TouchEventManager */ 
