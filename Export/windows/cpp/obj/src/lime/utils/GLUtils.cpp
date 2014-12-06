#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
namespace lime{
namespace utils{

Void GLUtils_obj::__construct()
{
	return null();
}

//GLUtils_obj::~GLUtils_obj() { }

Dynamic GLUtils_obj::__CreateEmpty() { return  new GLUtils_obj; }
hx::ObjectPtr< GLUtils_obj > GLUtils_obj::__new()
{  hx::ObjectPtr< GLUtils_obj > result = new GLUtils_obj();
	result->__construct();
	return result;}

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLUtils_obj > result = new GLUtils_obj();
	result->__construct();
	return result;}

::lime::graphics::opengl::GLShader GLUtils_obj::compileShader( ::String source,int type){
	HX_STACK_FRAME("lime.utils.GLUtils","compileShader",0x55bd7600,"lime.utils.GLUtils.compileShader","lime/utils/GLUtils.hx",12,0xaa32e64a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(14)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_shader(type);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14)
	::lime::graphics::opengl::GLShader shader = ::lime::graphics::opengl::GLShader_obj::__new(_g,_g1);		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(15)
	::lime::graphics::opengl::GL_obj::lime_gl_shader_source(shader->id,source);
	HX_STACK_LINE(16)
	::lime::graphics::opengl::GL_obj::lime_gl_compile_shader(shader->id);
	HX_STACK_LINE(18)
	int _g2 = ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_parameter(shader->id,(int)35713);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(18)
	if (((_g2 == (int)0))){
		HX_STACK_LINE(20)
		switch( (int)(type)){
			case (int)35633: {
				HX_STACK_LINE(22)
				HX_STACK_DO_THROW(HX_CSTRING("Error compiling vertex shader"));
			}
			;break;
			case (int)35632: {
				HX_STACK_LINE(23)
				HX_STACK_DO_THROW(HX_CSTRING("Error compiling fragment shader"));
			}
			;break;
			default: {
				HX_STACK_LINE(24)
				HX_STACK_DO_THROW(HX_CSTRING("Error compiling unknown shader type"));
			}
		}
	}
	HX_STACK_LINE(30)
	return shader;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,compileShader,return )

::lime::graphics::opengl::GLProgram GLUtils_obj::createProgram( ::String vertexSource,::String fragmentSource){
	HX_STACK_FRAME("lime.utils.GLUtils","createProgram",0x574727f0,"lime.utils.GLUtils.createProgram","lime/utils/GLUtils.hx",35,0xaa32e64a)
	HX_STACK_ARG(vertexSource,"vertexSource")
	HX_STACK_ARG(fragmentSource,"fragmentSource")
	HX_STACK_LINE(37)
	::lime::graphics::opengl::GLShader vertexShader = ::lime::utils::GLUtils_obj::compileShader(vertexSource,(int)35633);		HX_STACK_VAR(vertexShader,"vertexShader");
	HX_STACK_LINE(38)
	::lime::graphics::opengl::GLShader fragmentShader = ::lime::utils::GLUtils_obj::compileShader(fragmentSource,(int)35632);		HX_STACK_VAR(fragmentShader,"fragmentShader");
	HX_STACK_LINE(40)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(40)
	::lime::graphics::opengl::GLProgram program = ::lime::graphics::opengl::GLProgram_obj::__new(_g,_g1);		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		program->attach(vertexShader);
		HX_STACK_LINE(41)
		::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(program->id,vertexShader->id);
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		program->attach(fragmentShader);
		HX_STACK_LINE(42)
		::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(program->id,fragmentShader->id);
	}
	HX_STACK_LINE(43)
	::lime::graphics::opengl::GL_obj::lime_gl_link_program(program->id);
	HX_STACK_LINE(45)
	int _g2 = ::lime::graphics::opengl::GL_obj::lime_gl_get_program_parameter(program->id,(int)35714);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(45)
	if (((_g2 == (int)0))){
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(HX_CSTRING("Unable to initialize the shader program."));
	}
	HX_STACK_LINE(51)
	return program;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,createProgram,return )


GLUtils_obj::GLUtils_obj()
{
}

Dynamic GLUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("compileShader"),
	HX_CSTRING("createProgram"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#endif

Class GLUtils_obj::__mClass;

void GLUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.utils.GLUtils"), hx::TCanCast< GLUtils_obj> ,sStaticFields,sMemberFields,
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

void GLUtils_obj::__boot()
{
}

} // end namespace lime
} // end namespace utils
