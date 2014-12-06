#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__Renderer_RenderEventInfo
#include <lime/graphics/_Renderer/RenderEventInfo.h>
#endif
namespace lime{
namespace graphics{
namespace _Renderer{

Void RenderEventInfo_obj::__construct(Dynamic type,::lime::graphics::RenderContext context)
{
HX_STACK_FRAME("lime.graphics._Renderer.RenderEventInfo","new",0x20a57aee,"lime.graphics._Renderer.RenderEventInfo.new","lime/graphics/Renderer.hx",256,0x16f09331)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(258)
	this->type = type;
	HX_STACK_LINE(259)
	this->context = context;
}
;
	return null();
}

//RenderEventInfo_obj::~RenderEventInfo_obj() { }

Dynamic RenderEventInfo_obj::__CreateEmpty() { return  new RenderEventInfo_obj; }
hx::ObjectPtr< RenderEventInfo_obj > RenderEventInfo_obj::__new(Dynamic type,::lime::graphics::RenderContext context)
{  hx::ObjectPtr< RenderEventInfo_obj > result = new RenderEventInfo_obj();
	result->__construct(type,context);
	return result;}

Dynamic RenderEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderEventInfo_obj > result = new RenderEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::lime::graphics::_Renderer::RenderEventInfo RenderEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime.graphics._Renderer.RenderEventInfo","clone",0x605efd6b,"lime.graphics._Renderer.RenderEventInfo.clone","lime/graphics/Renderer.hx",266,0x16f09331)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	return ::lime::graphics::_Renderer::RenderEventInfo_obj::__new(this->type,this->context);
}


HX_DEFINE_DYNAMIC_FUNC0(RenderEventInfo_obj,clone,return )


RenderEventInfo_obj::RenderEventInfo_obj()
{
}

void RenderEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderEventInfo);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void RenderEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic RenderEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::RenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(RenderEventInfo_obj,context),HX_CSTRING("context")},
	{hx::fsInt,(int)offsetof(RenderEventInfo_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("context"),
	HX_CSTRING("type"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderEventInfo_obj::__mClass,"__mClass");
};

#endif

Class RenderEventInfo_obj::__mClass;

void RenderEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics._Renderer.RenderEventInfo"), hx::TCanCast< RenderEventInfo_obj> ,sStaticFields,sMemberFields,
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

void RenderEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
} // end namespace _Renderer
