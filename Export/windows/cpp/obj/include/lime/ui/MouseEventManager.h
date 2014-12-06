#ifndef INCLUDED_lime_ui_MouseEventManager
#define INCLUDED_lime_ui_MouseEventManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,ui,MouseEventManager)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS3(lime,ui,_MouseEventManager,MouseEventInfo)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  MouseEventManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseEventManager_obj OBJ_;
		MouseEventManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MouseEventManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEventManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MouseEventManager"); }

		static ::lime::app::Event onMouseDown;
		static ::lime::app::Event onMouseMove;
		static ::lime::app::Event onMouseUp;
		static ::lime::app::Event onMouseWheel;
		static bool created;
		static ::lime::ui::_MouseEventManager::MouseEventInfo eventInfo;
		static Void create( );
		static Dynamic create_dyn();

		static Void handleEvent( );
		static Dynamic handleEvent_dyn();

		static Void registerWindow( ::lime::ui::Window _window);
		static Dynamic registerWindow_dyn();

		static Dynamic lime_mouse_event_manager_register;
		static Dynamic &lime_mouse_event_manager_register_dyn() { return lime_mouse_event_manager_register;}
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_MouseEventManager */ 
