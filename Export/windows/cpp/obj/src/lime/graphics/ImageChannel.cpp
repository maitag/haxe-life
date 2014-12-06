#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::ImageChannel ImageChannel_obj::ALPHA;

::lime::graphics::ImageChannel ImageChannel_obj::BLUE;

::lime::graphics::ImageChannel ImageChannel_obj::GREEN;

::lime::graphics::ImageChannel ImageChannel_obj::RED;

HX_DEFINE_CREATE_ENUM(ImageChannel_obj)

int ImageChannel_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ALPHA")) return 3;
	if (inName==HX_CSTRING("BLUE")) return 2;
	if (inName==HX_CSTRING("GREEN")) return 1;
	if (inName==HX_CSTRING("RED")) return 0;
	return super::__FindIndex(inName);
}

int ImageChannel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ALPHA")) return 0;
	if (inName==HX_CSTRING("BLUE")) return 0;
	if (inName==HX_CSTRING("GREEN")) return 0;
	if (inName==HX_CSTRING("RED")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ImageChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ALPHA")) return ALPHA;
	if (inName==HX_CSTRING("BLUE")) return BLUE;
	if (inName==HX_CSTRING("GREEN")) return GREEN;
	if (inName==HX_CSTRING("RED")) return RED;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("RED"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("ALPHA"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageChannel_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(ImageChannel_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(ImageChannel_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(ImageChannel_obj::RED,"RED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::RED,"RED");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ImageChannel_obj::__mClass;

Dynamic __Create_ImageChannel_obj() { return new ImageChannel_obj; }

void ImageChannel_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.ImageChannel"), hx::TCanCast< ImageChannel_obj >,sStaticFields,sMemberFields,
	&__Create_ImageChannel_obj, &__Create,
	&super::__SGetClass(), &CreateImageChannel_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ImageChannel_obj::__boot()
{
hx::Static(ALPHA) = hx::CreateEnum< ImageChannel_obj >(HX_CSTRING("ALPHA"),3);
hx::Static(BLUE) = hx::CreateEnum< ImageChannel_obj >(HX_CSTRING("BLUE"),2);
hx::Static(GREEN) = hx::CreateEnum< ImageChannel_obj >(HX_CSTRING("GREEN"),1);
hx::Static(RED) = hx::CreateEnum< ImageChannel_obj >(HX_CSTRING("RED"),0);
}


} // end namespace lime
} // end namespace graphics
