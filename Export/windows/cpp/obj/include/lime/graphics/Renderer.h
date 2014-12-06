#ifndef INCLUDED_lime_graphics_Renderer
#define INCLUDED_lime_graphics_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS3(lime,graphics,_Renderer,RenderEventInfo)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Renderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Renderer_obj OBJ_;
		Renderer_obj();
		Void __construct(::lime::ui::Window window);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Renderer_obj > __new(::lime::ui::Window window);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Renderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Renderer"); }

		::lime::graphics::RenderContext context;
		Dynamic handle;
		::lime::ui::Window window;
		virtual Void create( );
		Dynamic create_dyn();

		virtual Void createContext( );
		Dynamic createContext_dyn();

		virtual Void dispatch( );
		Dynamic dispatch_dyn();

		virtual Void flip( );
		Dynamic flip_dyn();

		static ::lime::app::Event onRenderContextLost;
		static ::lime::app::Event onRenderContextRestored;
		static ::lime::app::Event onRender;
		static ::lime::graphics::_Renderer::RenderEventInfo eventInfo;
		static bool registered;
		static Void render( );
		static Dynamic render_dyn();

		static Dynamic lime_render_event_manager_register;
		static Dynamic &lime_render_event_manager_register_dyn() { return lime_render_event_manager_register;}
		static Dynamic lime_renderer_create;
		static Dynamic &lime_renderer_create_dyn() { return lime_renderer_create;}
		static Dynamic lime_renderer_flip;
		static Dynamic &lime_renderer_flip_dyn() { return lime_renderer_flip;}
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_Renderer */ 
