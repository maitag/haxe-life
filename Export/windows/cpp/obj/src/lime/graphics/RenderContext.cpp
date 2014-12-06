#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_FlashRenderContext
#include <lime/graphics/FlashRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::RenderContext  RenderContext_obj::CANVAS(::lime::graphics::CanvasRenderContext context)
	{ return hx::CreateEnum< RenderContext_obj >(HX_CSTRING("CANVAS"),1,hx::DynamicArray(0,1).Add(context)); }

::lime::graphics::RenderContext  RenderContext_obj::CUSTOM(Dynamic data)
	{ return hx::CreateEnum< RenderContext_obj >(HX_CSTRING("CUSTOM"),4,hx::DynamicArray(0,1).Add(data)); }

::lime::graphics::RenderContext  RenderContext_obj::DOM(::lime::graphics::DOMRenderContext element)
	{ return hx::CreateEnum< RenderContext_obj >(HX_CSTRING("DOM"),2,hx::DynamicArray(0,1).Add(element)); }

::lime::graphics::RenderContext  RenderContext_obj::FLASH(::lime::graphics::FlashRenderContext stage)
	{ return hx::CreateEnum< RenderContext_obj >(HX_CSTRING("FLASH"),3,hx::DynamicArray(0,1).Add(stage)); }

::lime::graphics::RenderContext  RenderContext_obj::OPENGL(::lime::graphics::GLRenderContext gl)
	{ return hx::CreateEnum< RenderContext_obj >(HX_CSTRING("OPENGL"),0,hx::DynamicArray(0,1).Add(gl)); }

HX_DEFINE_CREATE_ENUM(RenderContext_obj)

int RenderContext_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CANVAS")) return 1;
	if (inName==HX_CSTRING("CUSTOM")) return 4;
	if (inName==HX_CSTRING("DOM")) return 2;
	if (inName==HX_CSTRING("FLASH")) return 3;
	if (inName==HX_CSTRING("OPENGL")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,CANVAS,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,CUSTOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,DOM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,FLASH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderContext_obj,OPENGL,return)

int RenderContext_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CANVAS")) return 1;
	if (inName==HX_CSTRING("CUSTOM")) return 1;
	if (inName==HX_CSTRING("DOM")) return 1;
	if (inName==HX_CSTRING("FLASH")) return 1;
	if (inName==HX_CSTRING("OPENGL")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic RenderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CANVAS")) return CANVAS_dyn();
	if (inName==HX_CSTRING("CUSTOM")) return CUSTOM_dyn();
	if (inName==HX_CSTRING("DOM")) return DOM_dyn();
	if (inName==HX_CSTRING("FLASH")) return FLASH_dyn();
	if (inName==HX_CSTRING("OPENGL")) return OPENGL_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("OPENGL"),
	HX_CSTRING("CANVAS"),
	HX_CSTRING("DOM"),
	HX_CSTRING("FLASH"),
	HX_CSTRING("CUSTOM"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class RenderContext_obj::__mClass;

Dynamic __Create_RenderContext_obj() { return new RenderContext_obj; }

void RenderContext_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.RenderContext"), hx::TCanCast< RenderContext_obj >,sStaticFields,sMemberFields,
	&__Create_RenderContext_obj, &__Create,
	&super::__SGetClass(), &CreateRenderContext_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void RenderContext_obj::__boot()
{
}


} // end namespace lime
} // end namespace graphics
