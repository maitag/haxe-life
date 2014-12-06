#include <hxcpp.h>

#ifndef INCLUDED_OpenglRender
#include <OpenglRender.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif

Void OpenglRender_obj::__construct()
{
HX_STACK_FRAME("OpenglRender","new",0x068234b7,"OpenglRender.new","OpenglRender.hx",19,0x52af0e99)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	::haxe::Log_obj::trace(HX_CSTRING("static class for Lime OpenGL Rendering"),hx::SourceInfo(HX_CSTRING("OpenglRender.hx"),19,HX_CSTRING("OpenglRender"),HX_CSTRING("new")));
}
;
	return null();
}

//OpenglRender_obj::~OpenglRender_obj() { }

Dynamic OpenglRender_obj::__CreateEmpty() { return  new OpenglRender_obj; }
hx::ObjectPtr< OpenglRender_obj > OpenglRender_obj::__new()
{  hx::ObjectPtr< OpenglRender_obj > result = new OpenglRender_obj();
	result->__construct();
	return result;}

Dynamic OpenglRender_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenglRender_obj > result = new OpenglRender_obj();
	result->__construct();
	return result;}

::lime::graphics::opengl::GLBuffer OpenglRender_obj::buffer;

int OpenglRender_obj::matrixUniform;

::lime::graphics::opengl::GLProgram OpenglRender_obj::program;

::lime::graphics::opengl::GLTexture OpenglRender_obj::texture;

int OpenglRender_obj::textureAttribute;

int OpenglRender_obj::vertexAttribute;

Float OpenglRender_obj::r;

Float OpenglRender_obj::g;

Float OpenglRender_obj::b;

Float OpenglRender_obj::a;

Void OpenglRender_obj::init( Dynamic gl,int background,::lime::graphics::Image image,Float scale){
{
		HX_STACK_FRAME("OpenglRender","init",0xa824a2d9,"OpenglRender.init","OpenglRender.hx",34,0x52af0e99)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(background,"background")
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(scale,"scale")
		HX_STACK_LINE(36)
		::OpenglRender_obj::r = (Float(((int((int(background) >> int((int)16))) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(37)
		::OpenglRender_obj::g = (Float(((int((int(background) >> int((int)8))) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(38)
		::OpenglRender_obj::b = (Float(((int(background) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(39)
		::OpenglRender_obj::a = (Float(((int((int(background) >> int((int)24))) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(42)
		::String vertexSource = HX_CSTRING("attribute vec4 aPosition;\r\n\t\t\tattribute vec2 aTexCoord;\r\n\t\t\tvarying vec2 vTexCoord;\r\n\t\t\t\r\n\t\t\tuniform mat4 uMatrix;\r\n\t\t\t\r\n\t\t\tvoid main(void) {\r\n\t\t\t\t\r\n\t\t\t\tvTexCoord = aTexCoord;\r\n\t\t\t\tgl_Position = uMatrix * aPosition;\r\n\t\t\t\t\r\n\t\t\t}");		HX_STACK_VAR(vertexSource,"vertexSource");
		HX_STACK_LINE(59)
		::String fragmentSource = HX_CSTRING("varying vec2 vTexCoord;\r\n\t\t\tuniform sampler2D uImage0;\r\n\t\t\t\r\n\t\t\tvoid main(void)\r\n\t\t\t{\r\n\t\t\t\tgl_FragColor = texture2D (uImage0, vTexCoord);\r\n\t\t\t}");		HX_STACK_VAR(fragmentSource,"fragmentSource");
		HX_STACK_LINE(67)
		::lime::graphics::opengl::GLProgram _g = ::lime::utils::GLUtils_obj::createProgram(vertexSource,fragmentSource);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		::OpenglRender_obj::program = _g;
		HX_STACK_LINE(68)
		gl->__Field(HX_CSTRING("useProgram"),true)(::OpenglRender_obj::program);
		HX_STACK_LINE(70)
		Dynamic _g1 = gl->__Field(HX_CSTRING("getAttribLocation"),true)(::OpenglRender_obj::program,HX_CSTRING("aPosition"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		::OpenglRender_obj::vertexAttribute = _g1;
		HX_STACK_LINE(71)
		Dynamic _g2 = gl->__Field(HX_CSTRING("getAttribLocation"),true)(::OpenglRender_obj::program,HX_CSTRING("aTexCoord"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(71)
		::OpenglRender_obj::textureAttribute = _g2;
		HX_STACK_LINE(72)
		Dynamic _g3 = gl->__Field(HX_CSTRING("getUniformLocation"),true)(::OpenglRender_obj::program,HX_CSTRING("uMatrix"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(72)
		::OpenglRender_obj::matrixUniform = _g3;
		HX_STACK_LINE(73)
		Dynamic imageUniform = gl->__Field(HX_CSTRING("getUniformLocation"),true)(::OpenglRender_obj::program,HX_CSTRING("uImage0"));		HX_STACK_VAR(imageUniform,"imageUniform");
		HX_STACK_LINE(75)
		gl->__Field(HX_CSTRING("enableVertexAttribArray"),true)(::OpenglRender_obj::vertexAttribute);
		HX_STACK_LINE(76)
		gl->__Field(HX_CSTRING("enableVertexAttribArray"),true)(::OpenglRender_obj::textureAttribute);
		HX_STACK_LINE(77)
		gl->__Field(HX_CSTRING("uniform1i"),true)(imageUniform,(int)0);
		HX_STACK_LINE(79)
		Array< Float > data = Array_obj< Float >::__new().Add((image->width * scale)).Add((image->height * scale)).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add((image->height * scale)).Add((int)0).Add((int)0).Add((int)1).Add((image->width * scale)).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(86)
		Dynamic _g4 = gl->__Field(HX_CSTRING("createBuffer"),true)();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(86)
		::OpenglRender_obj::buffer = _g4;
		HX_STACK_LINE(87)
		gl->__Field(HX_CSTRING("bindBuffer"),true)(gl->__Field(HX_CSTRING("ARRAY_BUFFER"),true),::OpenglRender_obj::buffer);
		HX_STACK_LINE(88)
		::lime::utils::Float32Array _g5 = ::lime::utils::Float32Array_obj::__new(data,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(88)
		gl->__Field(HX_CSTRING("bufferData"),true)(gl->__Field(HX_CSTRING("ARRAY_BUFFER"),true),_g5,gl->__Field(HX_CSTRING("STATIC_DRAW"),true));
		HX_STACK_LINE(89)
		gl->__Field(HX_CSTRING("bindBuffer"),true)(gl->__Field(HX_CSTRING("ARRAY_BUFFER"),true),null());
		HX_STACK_LINE(91)
		Dynamic _g6 = gl->__Field(HX_CSTRING("createTexture"),true)();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(91)
		::OpenglRender_obj::texture = _g6;
		HX_STACK_LINE(92)
		gl->__Field(HX_CSTRING("bindTexture"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),::OpenglRender_obj::texture);
		HX_STACK_LINE(93)
		gl->__Field(HX_CSTRING("texParameteri"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),gl->__Field(HX_CSTRING("TEXTURE_WRAP_S"),true),gl->__Field(HX_CSTRING("CLAMP_TO_EDGE"),true));
		HX_STACK_LINE(94)
		gl->__Field(HX_CSTRING("texParameteri"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),gl->__Field(HX_CSTRING("TEXTURE_WRAP_T"),true),gl->__Field(HX_CSTRING("CLAMP_TO_EDGE"),true));
		HX_STACK_LINE(96)
		::lime::utils::UInt8Array _g7 = image->get_data();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(96)
		gl->__Field(HX_CSTRING("texImage2D"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),(int)0,gl->__Field(HX_CSTRING("RGBA"),true),image->buffer->width,image->buffer->height,(int)0,gl->__Field(HX_CSTRING("RGBA"),true),gl->__Field(HX_CSTRING("UNSIGNED_BYTE"),true),_g7);
		HX_STACK_LINE(98)
		gl->__Field(HX_CSTRING("texParameteri"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),gl->__Field(HX_CSTRING("TEXTURE_MAG_FILTER"),true),gl->__Field(HX_CSTRING("NEAREST"),true));
		HX_STACK_LINE(99)
		gl->__Field(HX_CSTRING("texParameteri"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),gl->__Field(HX_CSTRING("TEXTURE_MIN_FILTER"),true),gl->__Field(HX_CSTRING("NEAREST"),true));
		HX_STACK_LINE(100)
		gl->__Field(HX_CSTRING("bindTexture"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenglRender_obj,init,(void))

Void OpenglRender_obj::changeTextureData( Dynamic gl,::lime::graphics::Image image){
{
		HX_STACK_FRAME("OpenglRender","changeTextureData",0xae529fac,"OpenglRender.changeTextureData","OpenglRender.hx",105,0x52af0e99)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(106)
		gl->__Field(HX_CSTRING("bindTexture"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),::OpenglRender_obj::texture);
		HX_STACK_LINE(107)
		::lime::utils::UInt8Array _g = image->get_data();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		gl->__Field(HX_CSTRING("texImage2D"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),(int)0,gl->__Field(HX_CSTRING("RGBA"),true),image->buffer->width,image->buffer->height,(int)0,gl->__Field(HX_CSTRING("RGBA"),true),gl->__Field(HX_CSTRING("UNSIGNED_BYTE"),true),_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpenglRender_obj,changeTextureData,(void))

Void OpenglRender_obj::render( Dynamic gl,int width,int height){
{
		HX_STACK_FRAME("OpenglRender","render",0xe293175f,"OpenglRender.render","OpenglRender.hx",111,0x52af0e99)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(113)
		gl->__Field(HX_CSTRING("viewport"),true)((int)0,(int)0,width,height);
		HX_STACK_LINE(115)
		gl->__Field(HX_CSTRING("clearColor"),true)(::OpenglRender_obj::r,::OpenglRender_obj::g,::OpenglRender_obj::b,::OpenglRender_obj::a);
		HX_STACK_LINE(116)
		gl->__Field(HX_CSTRING("clear"),true)(gl->__Field(HX_CSTRING("COLOR_BUFFER_BIT"),true));
		HX_STACK_LINE(118)
		::lime::utils::Float32Array matrix = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho((int)0,width,height,(int)0,(int)-1000,(int)1000);		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(119)
		gl->__Field(HX_CSTRING("uniformMatrix4fv"),true)(::OpenglRender_obj::matrixUniform,false,matrix);
		HX_STACK_LINE(121)
		gl->__Field(HX_CSTRING("activeTexture"),true)(gl->__Field(HX_CSTRING("TEXTURE0"),true));
		HX_STACK_LINE(122)
		gl->__Field(HX_CSTRING("bindTexture"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true),::OpenglRender_obj::texture);
		HX_STACK_LINE(125)
		gl->__Field(HX_CSTRING("enable"),true)(gl->__Field(HX_CSTRING("TEXTURE_2D"),true));
		HX_STACK_LINE(128)
		gl->__Field(HX_CSTRING("bindBuffer"),true)(gl->__Field(HX_CSTRING("ARRAY_BUFFER"),true),::OpenglRender_obj::buffer);
		HX_STACK_LINE(129)
		gl->__Field(HX_CSTRING("vertexAttribPointer"),true)(::OpenglRender_obj::vertexAttribute,(int)3,gl->__Field(HX_CSTRING("FLOAT"),true),false,(int)20,(int)0);
		HX_STACK_LINE(130)
		gl->__Field(HX_CSTRING("vertexAttribPointer"),true)(::OpenglRender_obj::textureAttribute,(int)2,gl->__Field(HX_CSTRING("FLOAT"),true),false,(int)20,(int)12);
		HX_STACK_LINE(132)
		gl->__Field(HX_CSTRING("drawArrays"),true)(gl->__Field(HX_CSTRING("TRIANGLE_STRIP"),true),(int)0,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpenglRender_obj,render,(void))


OpenglRender_obj::OpenglRender_obj()
{
}

Dynamic OpenglRender_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"matrixUniform") ) { return matrixUniform; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexAttribute") ) { return vertexAttribute; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textureAttribute") ) { return textureAttribute; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"changeTextureData") ) { return changeTextureData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpenglRender_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::lime::graphics::opengl::GLProgram >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"matrixUniform") ) { matrixUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexAttribute") ) { vertexAttribute=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textureAttribute") ) { textureAttribute=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenglRender_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("matrixUniform"),
	HX_CSTRING("program"),
	HX_CSTRING("texture"),
	HX_CSTRING("textureAttribute"),
	HX_CSTRING("vertexAttribute"),
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	HX_CSTRING("init"),
	HX_CSTRING("changeTextureData"),
	HX_CSTRING("render"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenglRender_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::matrixUniform,"matrixUniform");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::program,"program");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::texture,"texture");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::textureAttribute,"textureAttribute");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::vertexAttribute,"vertexAttribute");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::r,"r");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::g,"g");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::b,"b");
	HX_MARK_MEMBER_NAME(OpenglRender_obj::a,"a");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::matrixUniform,"matrixUniform");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::program,"program");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::texture,"texture");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::textureAttribute,"textureAttribute");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::vertexAttribute,"vertexAttribute");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::r,"r");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::g,"g");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::b,"b");
	HX_VISIT_MEMBER_NAME(OpenglRender_obj::a,"a");
};

#endif

Class OpenglRender_obj::__mClass;

void OpenglRender_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("OpenglRender"), hx::TCanCast< OpenglRender_obj> ,sStaticFields,sMemberFields,
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

void OpenglRender_obj::__boot()
{
}

