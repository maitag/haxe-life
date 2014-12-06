#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GLProgram_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("lime.graphics.opengl.GLProgram","new",0x2d826a7c,"lime.graphics.opengl.GLProgram.new","lime/graphics/opengl/GLProgram.hx",10,0x48d7ea15)
HX_STACK_THIS(this)
HX_STACK_ARG(version,"version")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(12)
	super::__construct(version,id);
	HX_STACK_LINE(13)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	this->shaders = _g;
}
;
	return null();
}

//GLProgram_obj::~GLProgram_obj() { }

Dynamic GLProgram_obj::__CreateEmpty() { return  new GLProgram_obj; }
hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLProgram_obj > result = new GLProgram_obj();
	result->__construct(version,id);
	return result;}

Dynamic GLProgram_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLProgram_obj > result = new GLProgram_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void GLProgram_obj::attach( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.opengl.GLProgram","attach",0x80ff9b29,"lime.graphics.opengl.GLProgram.attach","lime/graphics/opengl/GLProgram.hx",20,0x48d7ea15)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(20)
		this->shaders->push(shader);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLProgram_obj,attach,(void))

Array< ::Dynamic > GLProgram_obj::getShaders( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLProgram","getShaders",0x3da5291c,"lime.graphics.opengl.GLProgram.getShaders","lime/graphics/opengl/GLProgram.hx",27,0x48d7ea15)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return this->shaders->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(GLProgram_obj,getShaders,return )

::String GLProgram_obj::getType( ){
	HX_STACK_FRAME("lime.graphics.opengl.GLProgram","getType",0x50477a8c,"lime.graphics.opengl.GLProgram.getType","lime/graphics/opengl/GLProgram.hx",34,0x48d7ea15)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return HX_CSTRING("Program");
}



GLProgram_obj::GLProgram_obj()
{
}

void GLProgram_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLProgram);
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	::lime::graphics::opengl::GLObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLProgram_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	::lime::graphics::opengl::GLObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLProgram_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShaders") ) { return getShaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLProgram_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLProgram_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shaders"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLProgram_obj,shaders),HX_CSTRING("shaders")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("shaders"),
	HX_CSTRING("attach"),
	HX_CSTRING("getShaders"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#endif

Class GLProgram_obj::__mClass;

void GLProgram_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.opengl.GLProgram"), hx::TCanCast< GLProgram_obj> ,sStaticFields,sMemberFields,
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

void GLProgram_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
