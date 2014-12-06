#ifndef INCLUDED_lime_ui_Window
#define INCLUDED_lime_ui_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS3(lime,ui,_Window,WindowEventInfo)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(Dynamic config);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Window_obj > __new(Dynamic config);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Window"); }

		::lime::graphics::Renderer currentRenderer;
		Dynamic config;
		bool fullscreen;
		int height;
		int width;
		int x;
		int y;
		Dynamic handle;
		int setHeight;
		int setWidth;
		virtual Void create( ::lime::app::Application application);
		Dynamic create_dyn();

		virtual Void dispatch( );
		Dynamic dispatch_dyn();

		virtual Void move( int x,int y);
		Dynamic move_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		static ::lime::app::Event onWindowActivate;
		static ::lime::app::Event onWindowClose;
		static ::lime::app::Event onWindowDeactivate;
		static ::lime::app::Event onWindowFocusIn;
		static ::lime::app::Event onWindowFocusOut;
		static ::lime::app::Event onWindowMove;
		static ::lime::app::Event onWindowResize;
		static ::lime::ui::_Window::WindowEventInfo eventInfo;
		static bool registered;
		static Dynamic lime_window_create;
		static Dynamic &lime_window_create_dyn() { return lime_window_create;}
		static Dynamic lime_window_event_manager_register;
		static Dynamic &lime_window_event_manager_register_dyn() { return lime_window_event_manager_register;}
		static Dynamic lime_window_move;
		static Dynamic &lime_window_move_dyn() { return lime_window_move;}
		static Dynamic lime_window_resize;
		static Dynamic &lime_window_resize_dyn() { return lime_window_resize;}
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Window */ 
