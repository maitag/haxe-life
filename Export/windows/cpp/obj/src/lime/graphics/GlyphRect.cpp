#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GlyphRect
#include <lime/graphics/GlyphRect.h>
#endif
namespace lime{
namespace graphics{

Void GlyphRect_obj::__construct(Float x,Float y,Float width,Float height,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset)
{
HX_STACK_FRAME("lime.graphics.GlyphRect","new",0xb49dc518,"lime.graphics.GlyphRect.new","lime/graphics/Font.hx",324,0xbe89b725)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_xOffset,"xOffset")
HX_STACK_ARG(__o_yOffset,"yOffset")
int xOffset = __o_xOffset.Default(0);
int yOffset = __o_yOffset.Default(0);
{
	HX_STACK_LINE(326)
	this->x = x;
	HX_STACK_LINE(327)
	this->y = y;
	HX_STACK_LINE(328)
	this->xOffset = xOffset;
	HX_STACK_LINE(329)
	this->yOffset = yOffset;
	HX_STACK_LINE(330)
	this->width = width;
	HX_STACK_LINE(331)
	this->height = height;
}
;
	return null();
}

//GlyphRect_obj::~GlyphRect_obj() { }

Dynamic GlyphRect_obj::__CreateEmpty() { return  new GlyphRect_obj; }
hx::ObjectPtr< GlyphRect_obj > GlyphRect_obj::__new(Float x,Float y,Float width,Float height,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset)
{  hx::ObjectPtr< GlyphRect_obj > result = new GlyphRect_obj();
	result->__construct(x,y,width,height,__o_xOffset,__o_yOffset);
	return result;}

Dynamic GlyphRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlyphRect_obj > result = new GlyphRect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}


GlyphRect_obj::GlyphRect_obj()
{
}

Dynamic GlyphRect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xOffset") ) { return xOffset; }
		if (HX_FIELD_EQ(inName,"yOffset") ) { return yOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GlyphRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xOffset") ) { xOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yOffset") ) { yOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("xOffset"));
	outFields->push(HX_CSTRING("yOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GlyphRect_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(GlyphRect_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(GlyphRect_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(GlyphRect_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(GlyphRect_obj,xOffset),HX_CSTRING("xOffset")},
	{hx::fsInt,(int)offsetof(GlyphRect_obj,yOffset),HX_CSTRING("yOffset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("xOffset"),
	HX_CSTRING("yOffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlyphRect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlyphRect_obj::__mClass,"__mClass");
};

#endif

Class GlyphRect_obj::__mClass;

void GlyphRect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.GlyphRect"), hx::TCanCast< GlyphRect_obj> ,sStaticFields,sMemberFields,
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

void GlyphRect_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
