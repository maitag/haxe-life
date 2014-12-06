#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Font
#include <lime/graphics/Font.h>
#endif
#ifndef INCLUDED_lime_graphics_GlyphRect
#include <lime/graphics/GlyphRect.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace graphics{

Void Font_obj::__construct(::String fontName)
{
HX_STACK_FRAME("lime.graphics.Font","new",0x14a5aecb,"lime.graphics.Font.new","lime/graphics/Font.hx",28,0xbe89b725)
HX_STACK_THIS(this)
HX_STACK_ARG(fontName,"fontName")
{
	HX_STACK_LINE(30)
	this->fontName = fontName;
	HX_STACK_LINE(31)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	this->glyphs = _g;
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String fontName)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(fontName);
	return result;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(inArgs[0]);
	return result;}

::lime::graphics::ImageBuffer Font_obj::createImage( ){
	HX_STACK_FRAME("lime.graphics.Font","createImage",0xb82b182a,"lime.graphics.Font.createImage","lime/graphics/Font.hx",36,0xbe89b725)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->glyphs = _g;
	HX_STACK_LINE(174)
	Dynamic data = ::lime::graphics::Font_obj::lime_font_create_image(this->__handle);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(176)
	if (((data == null()))){
		HX_STACK_LINE(178)
		return null();
	}
	else{
		HX_STACK_LINE(182)
		::haxe::ds::IntMap glyphRects;		HX_STACK_VAR(glyphRects,"glyphRects");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(184)
			_g11 = hx::TCastToArray(data->__Field(HX_CSTRING("glyphs"),true));
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				Dynamic glyph = _g11->__GetItem(_g1);		HX_STACK_VAR(glyph,"glyph");
				HX_STACK_LINE(184)
				++(_g1);
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::lime::graphics::Font_obj > __this,Dynamic &glyph){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Font.hx",186,0xbe89b725)
						{
							HX_STACK_LINE(186)
							int key = glyph->__Field(HX_CSTRING("size"),true);		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(186)
							return __this->glyphs->exists(key);
						}
						return null();
					}
				};
				HX_STACK_LINE(186)
				if ((_Function_4_1::Block(this,glyph))){
					HX_STACK_LINE(188)
					::haxe::ds::IntMap _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						int key = glyph->__Field(HX_CSTRING("size"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(188)
						_g12 = this->glyphs->get(key);
					}
					HX_STACK_LINE(188)
					glyphRects = _g12;
				}
				else{
					HX_STACK_LINE(192)
					::haxe::ds::IntMap _g2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(192)
					glyphRects = _g2;
					HX_STACK_LINE(193)
					{
						HX_STACK_LINE(193)
						int key = glyph->__Field(HX_CSTRING("size"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(193)
						this->glyphs->set(key,glyphRects);
					}
				}
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					int key = glyph->__Field(HX_CSTRING("codepoint"),true);		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(197)
					::lime::graphics::GlyphRect value = ::lime::graphics::GlyphRect_obj::__new(glyph->__Field(HX_CSTRING("x"),true),glyph->__Field(HX_CSTRING("y"),true),glyph->__Field(HX_CSTRING("width"),true),glyph->__Field(HX_CSTRING("height"),true),glyph->__Field(HX_CSTRING("offset"),true)->__Field(HX_CSTRING("x"),true),glyph->__Field(HX_CSTRING("offset"),true)->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(197)
					glyphRects->set(key,value);
				}
			}
		}
		HX_STACK_LINE(201)
		::lime::utils::UInt8Array _g3 = ::lime::utils::UInt8Array_obj::__new(data->__Field(HX_CSTRING("image"),true)->__Field(HX_CSTRING("data"),true),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(201)
		return ::lime::graphics::ImageBuffer_obj::__new(_g3,data->__Field(HX_CSTRING("image"),true)->__Field(HX_CSTRING("width"),true),data->__Field(HX_CSTRING("image"),true)->__Field(HX_CSTRING("height"),true),data->__Field(HX_CSTRING("image"),true)->__Field(HX_CSTRING("bpp"),true));
	}
	HX_STACK_LINE(207)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,createImage,return )

Dynamic Font_obj::decompose( ){
	HX_STACK_FRAME("lime.graphics.Font","decompose",0x202cc45c,"lime.graphics.Font.decompose","lime/graphics/Font.hx",216,0xbe89b725)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	return ::lime::graphics::Font_obj::lime_font_outline_decompose(this->__handle,(int)20480);
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,decompose,return )

Void Font_obj::loadRange( int size,int start,int end){
{
		HX_STACK_FRAME("lime.graphics.Font","loadRange",0xa4dbf262,"lime.graphics.Font.loadRange","lime/graphics/Font.hx",253,0xbe89b725)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(end,"end")
		HX_STACK_LINE(253)
		::lime::graphics::Font_obj::lime_font_load_range(this->__handle,size,start,end);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Font_obj,loadRange,(void))

Void Font_obj::loadGlyphs( int size,::String glyphs){
{
		HX_STACK_FRAME("lime.graphics.Font","loadGlyphs",0x925fbd02,"lime.graphics.Font.loadGlyphs","lime/graphics/Font.hx",260,0xbe89b725)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(glyphs,"glyphs")
		HX_STACK_LINE(262)
		if (((glyphs == null()))){
			HX_STACK_LINE(264)
			glyphs = HX_CSTRING("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^`'\"/\\&*()[]{}<>|:;_-+=?,. ");
		}
		HX_STACK_LINE(274)
		::lime::graphics::Font_obj::lime_font_load_glyphs(this->__handle,size,glyphs);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,loadGlyphs,(void))

Void Font_obj::__fromFile( ::String path){
{
		HX_STACK_FRAME("lime.graphics.Font","__fromFile",0x739ba51b,"lime.graphics.Font.__fromFile","lime/graphics/Font.hx",281,0xbe89b725)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(283)
		this->__fontPath = path;
		HX_STACK_LINE(287)
		Dynamic _g = ::lime::graphics::Font_obj::lime_font_load(this->__fontPath);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		this->__handle = _g;
		HX_STACK_LINE(289)
		if (((this->__handle != null()))){
			HX_STACK_LINE(291)
			::String _g1 = ::lime::graphics::Font_obj::lime_font_get_family_name(this->__handle);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(291)
			this->fontName = _g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromFile,(void))

::lime::graphics::Font Font_obj::fromBytes( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Font","fromBytes",0x17a5f34c,"lime.graphics.Font.fromBytes","lime/graphics/Font.hx",227,0xbe89b725)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(229)
	::lime::graphics::Font font = ::lime::graphics::Font_obj::__new(null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(231)
	return font;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::lime::graphics::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.graphics.Font","fromFile",0x49e09abb,"lime.graphics.Font.fromFile","lime/graphics/Font.hx",236,0xbe89b725)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(238)
	::lime::graphics::Font font = ::lime::graphics::Font_obj::__new(null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(239)
	font->__fromFile(path);
	HX_STACK_LINE(240)
	return font;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

Dynamic Font_obj::lime_font_get_family_name;

Dynamic Font_obj::lime_font_load;

Dynamic Font_obj::lime_font_load_glyphs;

Dynamic Font_obj::lime_font_load_range;

Dynamic Font_obj::lime_font_create_image;

Dynamic Font_obj::lime_font_outline_decompose;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(__fontPath,"__fontPath");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(__fontPath,"__fontPath");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
}

Dynamic Font_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return glyphs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRange") ) { return loadRange_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return __fontPath; }
		if (HX_FIELD_EQ(inName,"loadGlyphs") ) { return loadGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createImage") ) { return createImage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { return lime_font_load; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_font_load_range") ) { return lime_font_load_range; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_font_load_glyphs") ) { return lime_font_load_glyphs; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_create_image") ) { return lime_font_create_image; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { return lime_font_get_family_name; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { return lime_font_outline_decompose; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { __fontPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { lime_font_load=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_font_load_range") ) { lime_font_load_range=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_font_load_glyphs") ) { lime_font_load_glyphs=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_create_image") ) { lime_font_create_image=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { lime_font_get_family_name=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { lime_font_outline_decompose=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fontName"));
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("glyphs"));
	outFields->push(HX_CSTRING("__fontPath"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("lime_font_get_family_name"),
	HX_CSTRING("lime_font_load"),
	HX_CSTRING("lime_font_load_glyphs"),
	HX_CSTRING("lime_font_load_range"),
	HX_CSTRING("lime_font_create_image"),
	HX_CSTRING("lime_font_outline_decompose"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Font_obj,fontName),HX_CSTRING("fontName")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(Font_obj,image),HX_CSTRING("image")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Font_obj,glyphs),HX_CSTRING("glyphs")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPath),HX_CSTRING("__fontPath")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Font_obj,__handle),HX_CSTRING("__handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fontName"),
	HX_CSTRING("image"),
	HX_CSTRING("glyphs"),
	HX_CSTRING("__fontPath"),
	HX_CSTRING("__handle"),
	HX_CSTRING("createImage"),
	HX_CSTRING("decompose"),
	HX_CSTRING("loadRange"),
	HX_CSTRING("loadGlyphs"),
	HX_CSTRING("__fromFile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_get_family_name,"lime_font_get_family_name");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_load,"lime_font_load");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_load_glyphs,"lime_font_load_glyphs");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_load_range,"lime_font_load_range");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_create_image,"lime_font_create_image");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_outline_decompose,"lime_font_outline_decompose");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_get_family_name,"lime_font_get_family_name");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_load,"lime_font_load");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_load_glyphs,"lime_font_load_glyphs");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_load_range,"lime_font_load_range");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_create_image,"lime_font_create_image");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_outline_decompose,"lime_font_outline_decompose");
};

#endif

Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.Font"), hx::TCanCast< Font_obj> ,sStaticFields,sMemberFields,
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

void Font_obj::__boot()
{
	lime_font_get_family_name= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_get_family_name"),(int)1,null());
	lime_font_load= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_load"),(int)1,null());
	lime_font_load_glyphs= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_load_glyphs"),(int)3,null());
	lime_font_load_range= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_load_range"),(int)4,null());
	lime_font_create_image= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_create_image"),(int)1,null());
	lime_font_outline_decompose= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_outline_decompose"),(int)2,null());
}

} // end namespace lime
} // end namespace graphics
