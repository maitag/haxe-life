#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace graphics{

Void ImageBuffer_obj::__construct(::lime::utils::UInt8Array data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel)
{
HX_STACK_FRAME("lime.graphics.ImageBuffer","new",0xb261c9e3,"lime.graphics.ImageBuffer.new","lime/graphics/ImageBuffer.hx",37,0x6475c2cd)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_bitsPerPixel,"bitsPerPixel")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int bitsPerPixel = __o_bitsPerPixel.Default(4);
{
	HX_STACK_LINE(39)
	this->data = data;
	HX_STACK_LINE(40)
	this->width = width;
	HX_STACK_LINE(41)
	this->height = height;
	HX_STACK_LINE(42)
	this->bitsPerPixel = bitsPerPixel;
	HX_STACK_LINE(43)
	this->transparent = true;
}
;
	return null();
}

//ImageBuffer_obj::~ImageBuffer_obj() { }

Dynamic ImageBuffer_obj::__CreateEmpty() { return  new ImageBuffer_obj; }
hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__new(::lime::utils::UInt8Array data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel)
{  hx::ObjectPtr< ImageBuffer_obj > result = new ImageBuffer_obj();
	result->__construct(data,__o_width,__o_height,__o_bitsPerPixel);
	return result;}

Dynamic ImageBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageBuffer_obj > result = new ImageBuffer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::lime::graphics::ImageBuffer ImageBuffer_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","clone",0x1504b3a0,"lime.graphics.ImageBuffer.clone","lime/graphics/ImageBuffer.hx",48,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(this->data,this->width,this->height,this->bitsPerPixel);		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(51)
	Dynamic _g = this->get_src();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	buffer->set_src(_g);
	HX_STACK_LINE(52)
	buffer->premultiplied = this->premultiplied;
	HX_STACK_LINE(53)
	buffer->transparent = this->transparent;
	HX_STACK_LINE(54)
	return buffer;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,clone,return )

Dynamic ImageBuffer_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","get_src",0x9748e67e,"lime.graphics.ImageBuffer.get_src","lime/graphics/ImageBuffer.hx",74,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return this->__srcCustom;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_src,return )

Dynamic ImageBuffer_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","set_src",0x8a4a778a,"lime.graphics.ImageBuffer.set_src","lime/graphics/ImageBuffer.hx",80,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(96)
	this->__srcCustom = value;
	HX_STACK_LINE(99)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ImageBuffer_obj,set_src,return )


ImageBuffer_obj::ImageBuffer_obj()
{
}

void ImageBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBuffer);
	HX_MARK_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(premultiplied,"premultiplied");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_MARK_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_MARK_MEMBER_NAME(__srcContext,"__srcContext");
	HX_MARK_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(__srcImage,"__srcImage");
	HX_MARK_MEMBER_NAME(__srcImageData,"__srcImageData");
	HX_MARK_END_CLASS();
}

void ImageBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(premultiplied,"premultiplied");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_VISIT_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_VISIT_MEMBER_NAME(__srcContext,"__srcContext");
	HX_VISIT_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(__srcImage,"__srcImage");
	HX_VISIT_MEMBER_NAME(__srcImageData,"__srcImageData");
}

Dynamic ImageBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { return __srcImage; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { return __srcCanvas; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return __srcCustom; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { return bitsPerPixel; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { return __srcContext; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return premultiplied; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { return __srcImageData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { return __srcBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::UInt8Array >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { __srcImage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { __srcCanvas=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { __srcCustom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { bitsPerPixel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { __srcContext=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { premultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { __srcImageData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { __srcBitmapData=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitsPerPixel"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("premultiplied"));
	outFields->push(HX_CSTRING("src"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("__srcBitmapData"));
	outFields->push(HX_CSTRING("__srcCanvas"));
	outFields->push(HX_CSTRING("__srcContext"));
	outFields->push(HX_CSTRING("__srcCustom"));
	outFields->push(HX_CSTRING("__srcImage"));
	outFields->push(HX_CSTRING("__srcImageData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,bitsPerPixel),HX_CSTRING("bitsPerPixel")},
	{hx::fsObject /*::lime::utils::UInt8Array*/ ,(int)offsetof(ImageBuffer_obj,data),HX_CSTRING("data")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,height),HX_CSTRING("height")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,premultiplied),HX_CSTRING("premultiplied")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,transparent),HX_CSTRING("transparent")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,width),HX_CSTRING("width")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcBitmapData),HX_CSTRING("__srcBitmapData")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCanvas),HX_CSTRING("__srcCanvas")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcContext),HX_CSTRING("__srcContext")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCustom),HX_CSTRING("__srcCustom")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImage),HX_CSTRING("__srcImage")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImageData),HX_CSTRING("__srcImageData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitsPerPixel"),
	HX_CSTRING("data"),
	HX_CSTRING("height"),
	HX_CSTRING("premultiplied"),
	HX_CSTRING("transparent"),
	HX_CSTRING("width"),
	HX_CSTRING("__srcBitmapData"),
	HX_CSTRING("__srcCanvas"),
	HX_CSTRING("__srcContext"),
	HX_CSTRING("__srcCustom"),
	HX_CSTRING("__srcImage"),
	HX_CSTRING("__srcImageData"),
	HX_CSTRING("clone"),
	HX_CSTRING("get_src"),
	HX_CSTRING("set_src"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#endif

Class ImageBuffer_obj::__mClass;

void ImageBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.ImageBuffer"), hx::TCanCast< ImageBuffer_obj> ,sStaticFields,sMemberFields,
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

void ImageBuffer_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
