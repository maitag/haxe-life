#ifndef INCLUDED_lime_graphics_RenderContext
#define INCLUDED_lime_graphics_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,CanvasRenderContext)
HX_DECLARE_CLASS2(lime,graphics,DOMRenderContext)
HX_DECLARE_CLASS2(lime,graphics,FlashRenderContext)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
namespace lime{
namespace graphics{


class RenderContext_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef RenderContext_obj OBJ_;

	public:
		RenderContext_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("lime.graphics.RenderContext"); }
		::String __ToString() const { return HX_CSTRING("RenderContext.") + tag; }

		static ::lime::graphics::RenderContext CANVAS(::lime::graphics::CanvasRenderContext context);
		static Dynamic CANVAS_dyn();
		static ::lime::graphics::RenderContext CUSTOM(Dynamic data);
		static Dynamic CUSTOM_dyn();
		static ::lime::graphics::RenderContext DOM(::lime::graphics::DOMRenderContext element);
		static Dynamic DOM_dyn();
		static ::lime::graphics::RenderContext FLASH(::lime::graphics::FlashRenderContext stage);
		static Dynamic FLASH_dyn();
		static ::lime::graphics::RenderContext OPENGL(::lime::graphics::GLRenderContext gl);
		static Dynamic OPENGL_dyn();
};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_RenderContext */ 
