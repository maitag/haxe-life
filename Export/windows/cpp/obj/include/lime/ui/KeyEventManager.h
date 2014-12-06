#ifndef INCLUDED_lime_ui_KeyEventManager
#define INCLUDED_lime_ui_KeyEventManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,ui,KeyEventManager)
HX_DECLARE_CLASS3(lime,ui,_KeyEventManager,KeyEventInfo)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  KeyEventManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEventManager_obj OBJ_;
		KeyEventManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< KeyEventManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEventManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("KeyEventManager"); }

		static ::lime::app::Event onKeyDown;
		static ::lime::app::Event onKeyUp;
		static ::lime::ui::_KeyEventManager::KeyEventInfo eventInfo;
		static Void create( );
		static Dynamic create_dyn();

		static int convertKeyCode( int keyCode);
		static Dynamic convertKeyCode_dyn();

		static Void handleEvent( );
		static Dynamic handleEvent_dyn();

		static Dynamic lime_key_event_manager_register;
		static Dynamic &lime_key_event_manager_register_dyn() { return lime_key_event_manager_register;}
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_KeyEventManager */ 
