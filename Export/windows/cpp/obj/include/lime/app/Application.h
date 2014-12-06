#ifndef INCLUDED_lime_app_Application
#define INCLUDED_lime_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/app/Module.h>
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS3(lime,app,_Application,UpdateEventInfo)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Application_obj : public ::lime::app::Module_obj{
	public:
		typedef ::lime::app::Module_obj super;
		typedef Application_obj OBJ_;
		Application_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Application_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Application"); }

		Dynamic config;
		::lime::ui::Window window;
		Array< ::Dynamic > windows;
		Dynamic __handle;
		virtual Void addWindow( ::lime::ui::Window window);
		Dynamic addWindow_dyn();

		virtual Void create( Dynamic config);
		Dynamic create_dyn();

		virtual int exec( );
		Dynamic exec_dyn();

		virtual Void __cleanup( );
		Dynamic __cleanup_dyn();

		virtual Void init( ::lime::graphics::RenderContext context);
		Dynamic init_dyn();

		virtual Void onKeyDown( int keyCode,int modifier);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( int keyCode,int modifier);
		Dynamic onKeyUp_dyn();

		virtual Void onMouseDown( Float x,Float y,int button);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( Float x,Float y,int button);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseUp( Float x,Float y,int button);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseWheel( Float deltaX,Float deltaY);
		Dynamic onMouseWheel_dyn();

		virtual Void onRenderContextLost( );
		Dynamic onRenderContextLost_dyn();

		virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context);
		Dynamic onRenderContextRestored_dyn();

		virtual Void onTouchEnd( Float x,Float y,int id);
		Dynamic onTouchEnd_dyn();

		virtual Void onTouchMove( Float x,Float y,int id);
		Dynamic onTouchMove_dyn();

		virtual Void onTouchStart( Float x,Float y,int id);
		Dynamic onTouchStart_dyn();

		virtual Void onWindowActivate( );
		Dynamic onWindowActivate_dyn();

		virtual Void onWindowClose( );
		Dynamic onWindowClose_dyn();

		virtual Void onWindowDeactivate( );
		Dynamic onWindowDeactivate_dyn();

		virtual Void onWindowFocusIn( );
		Dynamic onWindowFocusIn_dyn();

		virtual Void onWindowFocusOut( );
		Dynamic onWindowFocusOut_dyn();

		virtual Void onWindowMove( Float x,Float y);
		Dynamic onWindowMove_dyn();

		virtual Void onWindowResize( int width,int height);
		Dynamic onWindowResize_dyn();

		virtual Void render( ::lime::graphics::RenderContext context);
		Dynamic render_dyn();

		virtual Void update( int deltaTime);
		Dynamic update_dyn();

		virtual Void __triggerFrame( Dynamic _);
		Dynamic __triggerFrame_dyn();

		virtual ::lime::ui::Window get_window( );
		Dynamic get_window_dyn();

		static ::lime::app::Event onUpdate;
		static ::lime::app::_Application::UpdateEventInfo __eventInfo;
		static bool __initialized;
		static ::lime::app::Application __instance;
		static bool __registered;
		static Void __dispatch( );
		static Dynamic __dispatch_dyn();

		static Dynamic lime_application_create;
		static Dynamic &lime_application_create_dyn() { return lime_application_create;}
		static Dynamic lime_application_init;
		static Dynamic &lime_application_init_dyn() { return lime_application_init;}
		static Dynamic lime_application_update;
		static Dynamic &lime_application_update_dyn() { return lime_application_update;}
		static Dynamic lime_application_quit;
		static Dynamic &lime_application_quit_dyn() { return lime_application_quit;}
		static Dynamic lime_application_get_ticks;
		static Dynamic lime_update_event_manager_register;
		static Dynamic &lime_update_event_manager_register_dyn() { return lime_update_event_manager_register;}
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Application */ 
