#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_Int32Array
#include <lime/utils/Int32Array.h>
#endif
namespace lime{
namespace graphics{
namespace opengl{

Void GL_obj::__construct()
{
	return null();
}

//GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > result = new GL_obj();
	result->__construct();
	return result;}

int GL_obj::DEPTH_BUFFER_BIT;

int GL_obj::STENCIL_BUFFER_BIT;

int GL_obj::COLOR_BUFFER_BIT;

int GL_obj::POINTS;

int GL_obj::LINES;

int GL_obj::LINE_LOOP;

int GL_obj::LINE_STRIP;

int GL_obj::TRIANGLES;

int GL_obj::TRIANGLE_STRIP;

int GL_obj::TRIANGLE_FAN;

int GL_obj::ZERO;

int GL_obj::ONE;

int GL_obj::SRC_COLOR;

int GL_obj::ONE_MINUS_SRC_COLOR;

int GL_obj::SRC_ALPHA;

int GL_obj::ONE_MINUS_SRC_ALPHA;

int GL_obj::DST_ALPHA;

int GL_obj::ONE_MINUS_DST_ALPHA;

int GL_obj::DST_COLOR;

int GL_obj::ONE_MINUS_DST_COLOR;

int GL_obj::SRC_ALPHA_SATURATE;

int GL_obj::FUNC_ADD;

int GL_obj::BLEND_EQUATION;

int GL_obj::BLEND_EQUATION_RGB;

int GL_obj::BLEND_EQUATION_ALPHA;

int GL_obj::FUNC_SUBTRACT;

int GL_obj::FUNC_REVERSE_SUBTRACT;

int GL_obj::BLEND_DST_RGB;

int GL_obj::BLEND_SRC_RGB;

int GL_obj::BLEND_DST_ALPHA;

int GL_obj::BLEND_SRC_ALPHA;

int GL_obj::CONSTANT_COLOR;

int GL_obj::ONE_MINUS_CONSTANT_COLOR;

int GL_obj::CONSTANT_ALPHA;

int GL_obj::ONE_MINUS_CONSTANT_ALPHA;

int GL_obj::BLEND_COLOR;

int GL_obj::ARRAY_BUFFER;

int GL_obj::ELEMENT_ARRAY_BUFFER;

int GL_obj::ARRAY_BUFFER_BINDING;

int GL_obj::ELEMENT_ARRAY_BUFFER_BINDING;

int GL_obj::STREAM_DRAW;

int GL_obj::STATIC_DRAW;

int GL_obj::DYNAMIC_DRAW;

int GL_obj::BUFFER_SIZE;

int GL_obj::BUFFER_USAGE;

int GL_obj::CURRENT_VERTEX_ATTRIB;

int GL_obj::FRONT;

int GL_obj::BACK;

int GL_obj::FRONT_AND_BACK;

int GL_obj::CULL_FACE;

int GL_obj::BLEND;

int GL_obj::DITHER;

int GL_obj::STENCIL_TEST;

int GL_obj::DEPTH_TEST;

int GL_obj::SCISSOR_TEST;

int GL_obj::POLYGON_OFFSET_FILL;

int GL_obj::SAMPLE_ALPHA_TO_COVERAGE;

int GL_obj::SAMPLE_COVERAGE;

int GL_obj::NO_ERROR;

int GL_obj::INVALID_ENUM;

int GL_obj::INVALID_VALUE;

int GL_obj::INVALID_OPERATION;

int GL_obj::OUT_OF_MEMORY;

int GL_obj::CW;

int GL_obj::CCW;

int GL_obj::LINE_WIDTH;

int GL_obj::ALIASED_POINT_SIZE_RANGE;

int GL_obj::ALIASED_LINE_WIDTH_RANGE;

int GL_obj::CULL_FACE_MODE;

int GL_obj::FRONT_FACE;

int GL_obj::DEPTH_RANGE;

int GL_obj::DEPTH_WRITEMASK;

int GL_obj::DEPTH_CLEAR_VALUE;

int GL_obj::DEPTH_FUNC;

int GL_obj::STENCIL_CLEAR_VALUE;

int GL_obj::STENCIL_FUNC;

int GL_obj::STENCIL_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_PASS;

int GL_obj::STENCIL_REF;

int GL_obj::STENCIL_VALUE_MASK;

int GL_obj::STENCIL_WRITEMASK;

int GL_obj::STENCIL_BACK_FUNC;

int GL_obj::STENCIL_BACK_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_PASS;

int GL_obj::STENCIL_BACK_REF;

int GL_obj::STENCIL_BACK_VALUE_MASK;

int GL_obj::STENCIL_BACK_WRITEMASK;

int GL_obj::VIEWPORT;

int GL_obj::SCISSOR_BOX;

int GL_obj::COLOR_CLEAR_VALUE;

int GL_obj::COLOR_WRITEMASK;

int GL_obj::UNPACK_ALIGNMENT;

int GL_obj::PACK_ALIGNMENT;

int GL_obj::MAX_TEXTURE_SIZE;

int GL_obj::MAX_VIEWPORT_DIMS;

int GL_obj::SUBPIXEL_BITS;

int GL_obj::RED_BITS;

int GL_obj::GREEN_BITS;

int GL_obj::BLUE_BITS;

int GL_obj::ALPHA_BITS;

int GL_obj::DEPTH_BITS;

int GL_obj::STENCIL_BITS;

int GL_obj::POLYGON_OFFSET_UNITS;

int GL_obj::POLYGON_OFFSET_FACTOR;

int GL_obj::TEXTURE_BINDING_2D;

int GL_obj::SAMPLE_BUFFERS;

int GL_obj::SAMPLES;

int GL_obj::SAMPLE_COVERAGE_VALUE;

int GL_obj::SAMPLE_COVERAGE_INVERT;

int GL_obj::COMPRESSED_TEXTURE_FORMATS;

int GL_obj::DONT_CARE;

int GL_obj::FASTEST;

int GL_obj::NICEST;

int GL_obj::GENERATE_MIPMAP_HINT;

int GL_obj::BYTE;

int GL_obj::UNSIGNED_BYTE;

int GL_obj::SHORT;

int GL_obj::UNSIGNED_SHORT;

int GL_obj::INT;

int GL_obj::UNSIGNED_INT;

int GL_obj::FLOAT;

int GL_obj::DEPTH_COMPONENT;

int GL_obj::ALPHA;

int GL_obj::RGB;

int GL_obj::RGBA;

int GL_obj::LUMINANCE;

int GL_obj::LUMINANCE_ALPHA;

int GL_obj::UNSIGNED_SHORT_4_4_4_4;

int GL_obj::UNSIGNED_SHORT_5_5_5_1;

int GL_obj::UNSIGNED_SHORT_5_6_5;

int GL_obj::FRAGMENT_SHADER;

int GL_obj::VERTEX_SHADER;

int GL_obj::MAX_VERTEX_ATTRIBS;

int GL_obj::MAX_VERTEX_UNIFORM_VECTORS;

int GL_obj::MAX_VARYING_VECTORS;

int GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS;

int GL_obj::SHADER_TYPE;

int GL_obj::DELETE_STATUS;

int GL_obj::LINK_STATUS;

int GL_obj::VALIDATE_STATUS;

int GL_obj::ATTACHED_SHADERS;

int GL_obj::ACTIVE_UNIFORMS;

int GL_obj::ACTIVE_ATTRIBUTES;

int GL_obj::SHADING_LANGUAGE_VERSION;

int GL_obj::CURRENT_PROGRAM;

int GL_obj::NEVER;

int GL_obj::LESS;

int GL_obj::EQUAL;

int GL_obj::LEQUAL;

int GL_obj::GREATER;

int GL_obj::NOTEQUAL;

int GL_obj::GEQUAL;

int GL_obj::ALWAYS;

int GL_obj::KEEP;

int GL_obj::REPLACE;

int GL_obj::INCR;

int GL_obj::DECR;

int GL_obj::INVERT;

int GL_obj::INCR_WRAP;

int GL_obj::DECR_WRAP;

int GL_obj::VENDOR;

int GL_obj::RENDERER;

int GL_obj::VERSION;

int GL_obj::NEAREST;

int GL_obj::LINEAR;

int GL_obj::NEAREST_MIPMAP_NEAREST;

int GL_obj::LINEAR_MIPMAP_NEAREST;

int GL_obj::NEAREST_MIPMAP_LINEAR;

int GL_obj::LINEAR_MIPMAP_LINEAR;

int GL_obj::TEXTURE_MAG_FILTER;

int GL_obj::TEXTURE_MIN_FILTER;

int GL_obj::TEXTURE_WRAP_S;

int GL_obj::TEXTURE_WRAP_T;

int GL_obj::TEXTURE_2D;

int GL_obj::TEXTURE;

int GL_obj::TEXTURE_CUBE_MAP;

int GL_obj::TEXTURE_BINDING_CUBE_MAP;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z;

int GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE;

int GL_obj::TEXTURE0;

int GL_obj::TEXTURE1;

int GL_obj::TEXTURE2;

int GL_obj::TEXTURE3;

int GL_obj::TEXTURE4;

int GL_obj::TEXTURE5;

int GL_obj::TEXTURE6;

int GL_obj::TEXTURE7;

int GL_obj::TEXTURE8;

int GL_obj::TEXTURE9;

int GL_obj::TEXTURE10;

int GL_obj::TEXTURE11;

int GL_obj::TEXTURE12;

int GL_obj::TEXTURE13;

int GL_obj::TEXTURE14;

int GL_obj::TEXTURE15;

int GL_obj::TEXTURE16;

int GL_obj::TEXTURE17;

int GL_obj::TEXTURE18;

int GL_obj::TEXTURE19;

int GL_obj::TEXTURE20;

int GL_obj::TEXTURE21;

int GL_obj::TEXTURE22;

int GL_obj::TEXTURE23;

int GL_obj::TEXTURE24;

int GL_obj::TEXTURE25;

int GL_obj::TEXTURE26;

int GL_obj::TEXTURE27;

int GL_obj::TEXTURE28;

int GL_obj::TEXTURE29;

int GL_obj::TEXTURE30;

int GL_obj::TEXTURE31;

int GL_obj::ACTIVE_TEXTURE;

int GL_obj::REPEAT;

int GL_obj::CLAMP_TO_EDGE;

int GL_obj::MIRRORED_REPEAT;

int GL_obj::FLOAT_VEC2;

int GL_obj::FLOAT_VEC3;

int GL_obj::FLOAT_VEC4;

int GL_obj::INT_VEC2;

int GL_obj::INT_VEC3;

int GL_obj::INT_VEC4;

int GL_obj::BOOL;

int GL_obj::BOOL_VEC2;

int GL_obj::BOOL_VEC3;

int GL_obj::BOOL_VEC4;

int GL_obj::FLOAT_MAT2;

int GL_obj::FLOAT_MAT3;

int GL_obj::FLOAT_MAT4;

int GL_obj::SAMPLER_2D;

int GL_obj::SAMPLER_CUBE;

int GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED;

int GL_obj::VERTEX_ATTRIB_ARRAY_SIZE;

int GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE;

int GL_obj::VERTEX_ATTRIB_ARRAY_TYPE;

int GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED;

int GL_obj::VERTEX_ATTRIB_ARRAY_POINTER;

int GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

int GL_obj::VERTEX_PROGRAM_POINT_SIZE;

int GL_obj::POINT_SPRITE;

int GL_obj::COMPILE_STATUS;

int GL_obj::LOW_FLOAT;

int GL_obj::MEDIUM_FLOAT;

int GL_obj::HIGH_FLOAT;

int GL_obj::LOW_INT;

int GL_obj::MEDIUM_INT;

int GL_obj::HIGH_INT;

int GL_obj::FRAMEBUFFER;

int GL_obj::RENDERBUFFER;

int GL_obj::RGBA4;

int GL_obj::RGB5_A1;

int GL_obj::RGB565;

int GL_obj::DEPTH_COMPONENT16;

int GL_obj::STENCIL_INDEX;

int GL_obj::STENCIL_INDEX8;

int GL_obj::DEPTH_STENCIL;

int GL_obj::RENDERBUFFER_WIDTH;

int GL_obj::RENDERBUFFER_HEIGHT;

int GL_obj::RENDERBUFFER_INTERNAL_FORMAT;

int GL_obj::RENDERBUFFER_RED_SIZE;

int GL_obj::RENDERBUFFER_GREEN_SIZE;

int GL_obj::RENDERBUFFER_BLUE_SIZE;

int GL_obj::RENDERBUFFER_ALPHA_SIZE;

int GL_obj::RENDERBUFFER_DEPTH_SIZE;

int GL_obj::RENDERBUFFER_STENCIL_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;

int GL_obj::COLOR_ATTACHMENT0;

int GL_obj::DEPTH_ATTACHMENT;

int GL_obj::STENCIL_ATTACHMENT;

int GL_obj::DEPTH_STENCIL_ATTACHMENT;

int GL_obj::NONE;

int GL_obj::FRAMEBUFFER_COMPLETE;

int GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS;

int GL_obj::FRAMEBUFFER_UNSUPPORTED;

int GL_obj::FRAMEBUFFER_BINDING;

int GL_obj::RENDERBUFFER_BINDING;

int GL_obj::MAX_RENDERBUFFER_SIZE;

int GL_obj::INVALID_FRAMEBUFFER_OPERATION;

int GL_obj::UNPACK_FLIP_Y_WEBGL;

int GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL;

int GL_obj::CONTEXT_LOST_WEBGL;

int GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL;

int GL_obj::BROWSER_DEFAULT_WEBGL;

int GL_obj::version;

Void GL_obj::activeTexture( int texture){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","activeTexture",0x4f66f561,"lime.graphics.opengl.GL.activeTexture","lime/graphics/opengl/GL.hx",380,0xa5aa2623)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(380)
		::lime::graphics::opengl::GL_obj::lime_gl_active_texture(texture);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,activeTexture,(void))

Void GL_obj::attachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","attachShader",0xfe33c89e,"lime.graphics.opengl.GL.attachShader","lime/graphics/opengl/GL.hx",386,0xa5aa2623)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(391)
		program->attach(shader);
		HX_STACK_LINE(392)
		::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,attachShader,(void))

Void GL_obj::bindAttribLocation( ::lime::graphics::opengl::GLProgram program,int index,::String name){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","bindAttribLocation",0x0d863510,"lime.graphics.opengl.GL.bindAttribLocation","lime/graphics/opengl/GL.hx",403,0xa5aa2623)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(403)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_attrib_location(program->id,index,name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bindAttribLocation,(void))

Void GL_obj::bindBuffer( int target,::lime::graphics::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","bindBuffer",0xbeff2d71,"lime.graphics.opengl.GL.bindBuffer","lime/graphics/opengl/GL.hx",414,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(414)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(target,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindBuffer,(void))

Void GL_obj::bindFramebuffer( int target,::lime::graphics::opengl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","bindFramebuffer",0x325b6adc,"lime.graphics.opengl.GL.bindFramebuffer","lime/graphics/opengl/GL.hx",425,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(425)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(target,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindFramebuffer,(void))

Void GL_obj::bindRenderbuffer( int target,::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","bindRenderbuffer",0x642e2807,"lime.graphics.opengl.GL.bindRenderbuffer","lime/graphics/opengl/GL.hx",436,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(436)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_renderbuffer(target,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindRenderbuffer,(void))

Void GL_obj::bindTexture( int target,::lime::graphics::opengl::GLTexture texture){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","bindTexture",0x4d98bb4a,"lime.graphics.opengl.GL.bindTexture","lime/graphics/opengl/GL.hx",447,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(447)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(target,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTexture,(void))

Void GL_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","blendColor",0xa8f4ce26,"lime.graphics.opengl.GL.blendColor","lime/graphics/opengl/GL.hx",458,0xa5aa2623)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(458)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendColor,(void))

Void GL_obj::blendEquation( int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","blendEquation",0xfb6a7aa9,"lime.graphics.opengl.GL.blendEquation","lime/graphics/opengl/GL.hx",469,0xa5aa2623)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(469)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_equation(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,blendEquation,(void))

Void GL_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","blendEquationSeparate",0xa3a0a72c,"lime.graphics.opengl.GL.blendEquationSeparate","lime/graphics/opengl/GL.hx",480,0xa5aa2623)
		HX_STACK_ARG(modeRGB,"modeRGB")
		HX_STACK_ARG(modeAlpha,"modeAlpha")
		HX_STACK_LINE(480)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_equation_separate(modeRGB,modeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendEquationSeparate,(void))

Void GL_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","blendFunc",0x1c0397e1,"lime.graphics.opengl.GL.blendFunc","lime/graphics/opengl/GL.hx",491,0xa5aa2623)
		HX_STACK_ARG(sfactor,"sfactor")
		HX_STACK_ARG(dfactor,"dfactor")
		HX_STACK_LINE(491)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_func(sfactor,dfactor);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendFunc,(void))

Void GL_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","blendFuncSeparate",0x02edbc64,"lime.graphics.opengl.GL.blendFuncSeparate","lime/graphics/opengl/GL.hx",502,0xa5aa2623)
		HX_STACK_ARG(srcRGB,"srcRGB")
		HX_STACK_ARG(dstRGB,"dstRGB")
		HX_STACK_ARG(srcAlpha,"srcAlpha")
		HX_STACK_ARG(dstAlpha,"dstAlpha")
		HX_STACK_LINE(502)
		::lime::graphics::opengl::GL_obj::lime_gl_blend_func_separate(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendFuncSeparate,(void))

Void GL_obj::bufferData( int target,::lime::utils::ArrayBufferView data,int usage){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","bufferData",0x59b45a1e,"lime.graphics.opengl.GL.bufferData","lime/graphics/opengl/GL.hx",508,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(513)
		::lime::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(513)
		int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(513)
		::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(target,_g,_g1,_g2,usage);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferData,(void))

Void GL_obj::bufferSubData( int target,int offset,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","bufferSubData",0x3ea1d856,"lime.graphics.opengl.GL.bufferSubData","lime/graphics/opengl/GL.hx",521,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(526)
		::lime::utils::ByteArray _g = data->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		int _g1 = data->getStart();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(526)
		int _g2 = data->getLength();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(526)
		::lime::graphics::opengl::GL_obj::lime_gl_buffer_sub_data(target,offset,_g,_g1,_g2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferSubData,(void))

int GL_obj::checkFramebufferStatus( int target){
	HX_STACK_FRAME("lime.graphics.opengl.GL","checkFramebufferStatus",0xbf9caeeb,"lime.graphics.opengl.GL.checkFramebufferStatus","lime/graphics/opengl/GL.hx",539,0xa5aa2623)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(539)
	return ::lime::graphics::opengl::GL_obj::lime_gl_check_framebuffer_status(target);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,checkFramebufferStatus,return )

Void GL_obj::clear( int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","clear",0x6a08c739,"lime.graphics.opengl.GL.clear","lime/graphics/opengl/GL.hx",552,0xa5aa2623)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(552)
		::lime::graphics::opengl::GL_obj::lime_gl_clear(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clear,(void))

Void GL_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","clearColor",0xe5a74b6a,"lime.graphics.opengl.GL.clearColor","lime/graphics/opengl/GL.hx",563,0xa5aa2623)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(563)
		::lime::graphics::opengl::GL_obj::lime_gl_clear_color(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearColor,(void))

Void GL_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","clearDepth",0x7274cb0a,"lime.graphics.opengl.GL.clearDepth","lime/graphics/opengl/GL.hx",574,0xa5aa2623)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(574)
		::lime::graphics::opengl::GL_obj::lime_gl_clear_depth(depth);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearDepth,(void))

Void GL_obj::clearStencil( int s){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","clearStencil",0xa73e67c3,"lime.graphics.opengl.GL.clearStencil","lime/graphics/opengl/GL.hx",585,0xa5aa2623)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(585)
		::lime::graphics::opengl::GL_obj::lime_gl_clear_stencil(s);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearStencil,(void))

Void GL_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","colorMask",0x382b679b,"lime.graphics.opengl.GL.colorMask","lime/graphics/opengl/GL.hx",596,0xa5aa2623)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(596)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(red,green,blue,alpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,colorMask,(void))

Void GL_obj::compileShader( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","compileShader",0xd36f52a4,"lime.graphics.opengl.GL.compileShader","lime/graphics/opengl/GL.hx",607,0xa5aa2623)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(607)
		::lime::graphics::opengl::GL_obj::lime_gl_compile_shader(shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,compileShader,(void))

Void GL_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","compressedTexImage2D",0xbf53c47b,"lime.graphics.opengl.GL.compressedTexImage2D","lime/graphics/opengl/GL.hx",613,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(618)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(618)
		if (((data == null()))){
			HX_STACK_LINE(618)
			_g = null();
		}
		else{
			HX_STACK_LINE(618)
			_g = data->getByteBuffer();
		}
		HX_STACK_LINE(618)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(618)
		if (((data == null()))){
			HX_STACK_LINE(618)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(618)
			_g1 = data->getStart();
		}
		HX_STACK_LINE(618)
		::lime::graphics::opengl::GL_obj::lime_gl_compressed_tex_image_2d(target,level,internalformat,width,height,border,_g,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,compressedTexImage2D,(void))

Void GL_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","compressedTexSubImage2D",0x03ede67f,"lime.graphics.opengl.GL.compressedTexSubImage2D","lime/graphics/opengl/GL.hx",626,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(631)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(631)
		if (((data == null()))){
			HX_STACK_LINE(631)
			_g = null();
		}
		else{
			HX_STACK_LINE(631)
			_g = data->getByteBuffer();
		}
		HX_STACK_LINE(631)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(631)
		if (((data == null()))){
			HX_STACK_LINE(631)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(631)
			_g1 = data->getStart();
		}
		HX_STACK_LINE(631)
		::lime::graphics::opengl::GL_obj::lime_gl_compressed_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,_g,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,compressedTexSubImage2D,(void))

Void GL_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","copyTexImage2D",0x90ff65af,"lime.graphics.opengl.GL.copyTexImage2D","lime/graphics/opengl/GL.hx",644,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_LINE(644)
		::lime::graphics::opengl::GL_obj::lime_gl_copy_tex_image_2d(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexImage2D,(void))

Void GL_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","copyTexSubImage2D",0xdcdbfdcb,"lime.graphics.opengl.GL.copyTexSubImage2D","lime/graphics/opengl/GL.hx",655,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(655)
		::lime::graphics::opengl::GL_obj::lime_gl_copy_tex_sub_image_2d(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexSubImage2D,(void))

::lime::graphics::opengl::GLBuffer GL_obj::createBuffer( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","createBuffer",0x3ea5f4f0,"lime.graphics.opengl.GL.createBuffer","lime/graphics/opengl/GL.hx",661,0xa5aa2623)
	HX_STACK_LINE(666)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(666)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(666)
	return ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createBuffer,return )

::lime::graphics::opengl::GLFramebuffer GL_obj::createFramebuffer( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","createFramebuffer",0x051616fd,"lime.graphics.opengl.GL.createFramebuffer","lime/graphics/opengl/GL.hx",674,0xa5aa2623)
	HX_STACK_LINE(679)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(679)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(679)
	return ::lime::graphics::opengl::GLFramebuffer_obj::__new(_g,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createFramebuffer,return )

::lime::graphics::opengl::GLProgram GL_obj::createProgram( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","createProgram",0xd4f90494,"lime.graphics.opengl.GL.createProgram","lime/graphics/opengl/GL.hx",687,0xa5aa2623)
	HX_STACK_LINE(692)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(692)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(692)
	return ::lime::graphics::opengl::GLProgram_obj::__new(_g,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createProgram,return )

::lime::graphics::opengl::GLRenderbuffer GL_obj::createRenderbuffer( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","createRenderbuffer",0xf4ca18c6,"lime.graphics.opengl.GL.createRenderbuffer","lime/graphics/opengl/GL.hx",700,0xa5aa2623)
	HX_STACK_LINE(705)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(705)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(705)
	return ::lime::graphics::opengl::GLRenderbuffer_obj::__new(_g,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createRenderbuffer,return )

::lime::graphics::opengl::GLShader GL_obj::createShader( int type){
	HX_STACK_FRAME("lime.graphics.opengl.GL","createShader",0x8b31f715,"lime.graphics.opengl.GL.createShader","lime/graphics/opengl/GL.hx",713,0xa5aa2623)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(718)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(718)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_shader(type);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(718)
	return ::lime::graphics::opengl::GLShader_obj::__new(_g,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,createShader,return )

::lime::graphics::opengl::GLTexture GL_obj::createTexture( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","createTexture",0x7fe082eb,"lime.graphics.opengl.GL.createTexture","lime/graphics/opengl/GL.hx",726,0xa5aa2623)
	HX_STACK_LINE(731)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(731)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(731)
	return ::lime::graphics::opengl::GLTexture_obj::__new(_g,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTexture,return )

Void GL_obj::cullFace( int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","cullFace",0xb5786543,"lime.graphics.opengl.GL.cullFace","lime/graphics/opengl/GL.hx",744,0xa5aa2623)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(744)
		::lime::graphics::opengl::GL_obj::lime_gl_cull_face(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,cullFace,(void))

Void GL_obj::deleteBuffer( ::lime::graphics::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","deleteBuffer",0x82e8db5f,"lime.graphics.opengl.GL.deleteBuffer","lime/graphics/opengl/GL.hx",750,0xa5aa2623)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(755)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
		HX_STACK_LINE(756)
		buffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteBuffer,(void))

Void GL_obj::deleteFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","deleteFramebuffer",0x882e7e2e,"lime.graphics.opengl.GL.deleteFramebuffer","lime/graphics/opengl/GL.hx",762,0xa5aa2623)
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(767)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_framebuffer(framebuffer->id);
		HX_STACK_LINE(768)
		framebuffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteFramebuffer,(void))

Void GL_obj::deleteProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","deleteProgram",0x4b3fbf45,"lime.graphics.opengl.GL.deleteProgram","lime/graphics/opengl/GL.hx",774,0xa5aa2623)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(779)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_program(program->id);
		HX_STACK_LINE(780)
		program->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteProgram,(void))

Void GL_obj::deleteRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","deleteRenderbuffer",0x270bfc75,"lime.graphics.opengl.GL.deleteRenderbuffer","lime/graphics/opengl/GL.hx",786,0xa5aa2623)
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(791)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_render_buffer(renderbuffer->id);
		HX_STACK_LINE(792)
		renderbuffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteRenderbuffer,(void))

Void GL_obj::deleteShader( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","deleteShader",0xcf74dd84,"lime.graphics.opengl.GL.deleteShader","lime/graphics/opengl/GL.hx",798,0xa5aa2623)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(803)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_shader(shader->id);
		HX_STACK_LINE(804)
		shader->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteShader,(void))

Void GL_obj::deleteTexture( ::lime::graphics::opengl::GLTexture texture){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","deleteTexture",0xf6273d9c,"lime.graphics.opengl.GL.deleteTexture","lime/graphics/opengl/GL.hx",810,0xa5aa2623)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(815)
		::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(texture->id);
		HX_STACK_LINE(816)
		texture->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteTexture,(void))

Void GL_obj::depthFunc( int func){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","depthFunc",0xaeafe193,"lime.graphics.opengl.GL.depthFunc","lime/graphics/opengl/GL.hx",827,0xa5aa2623)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(827)
		::lime::graphics::opengl::GL_obj::lime_gl_depth_func(func);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthFunc,(void))

Void GL_obj::depthMask( bool flag){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","depthMask",0xb341373b,"lime.graphics.opengl.GL.depthMask","lime/graphics/opengl/GL.hx",838,0xa5aa2623)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(838)
		::lime::graphics::opengl::GL_obj::lime_gl_depth_mask(flag);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthMask,(void))

Void GL_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","depthRange",0x06cc348e,"lime.graphics.opengl.GL.depthRange","lime/graphics/opengl/GL.hx",849,0xa5aa2623)
		HX_STACK_ARG(zNear,"zNear")
		HX_STACK_ARG(zFar,"zFar")
		HX_STACK_LINE(849)
		::lime::graphics::opengl::GL_obj::lime_gl_depth_range(zNear,zFar);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,depthRange,(void))

Void GL_obj::detachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","detachShader",0x3669c8ac,"lime.graphics.opengl.GL.detachShader","lime/graphics/opengl/GL.hx",860,0xa5aa2623)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(860)
		::lime::graphics::opengl::GL_obj::lime_gl_detach_shader(program->id,shader->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,detachShader,(void))

Void GL_obj::disable( int cap){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","disable",0x99478294,"lime.graphics.opengl.GL.disable","lime/graphics/opengl/GL.hx",871,0xa5aa2623)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(871)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disable,(void))

Void GL_obj::disableVertexAttribArray( int index){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","disableVertexAttribArray",0x3f2ecfb7,"lime.graphics.opengl.GL.disableVertexAttribArray","lime/graphics/opengl/GL.hx",882,0xa5aa2623)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(882)
		::lime::graphics::opengl::GL_obj::lime_gl_disable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disableVertexAttribArray,(void))

Void GL_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","drawArrays",0xbff48eb2,"lime.graphics.opengl.GL.drawArrays","lime/graphics/opengl/GL.hx",893,0xa5aa2623)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(893)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(mode,first,count);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,drawArrays,(void))

Void GL_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","drawElements",0xa573ba2f,"lime.graphics.opengl.GL.drawElements","lime/graphics/opengl/GL.hx",904,0xa5aa2623)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(904)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(mode,count,type,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawElements,(void))

Void GL_obj::enable( int cap){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","enable",0x4e854f57,"lime.graphics.opengl.GL.enable","lime/graphics/opengl/GL.hx",915,0xa5aa2623)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(915)
		::lime::graphics::opengl::GL_obj::lime_gl_enable(cap);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enable,(void))

Void GL_obj::enableVertexAttribArray( int index){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","enableVertexAttribArray",0x79ca7794,"lime.graphics.opengl.GL.enableVertexAttribArray","lime/graphics/opengl/GL.hx",926,0xa5aa2623)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(926)
		::lime::graphics::opengl::GL_obj::lime_gl_enable_vertex_attrib_array(index);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enableVertexAttribArray,(void))

Void GL_obj::finish( ){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","finish",0xdc7ce127,"lime.graphics.opengl.GL.finish","lime/graphics/opengl/GL.hx",937,0xa5aa2623)
		HX_STACK_LINE(937)
		::lime::graphics::opengl::GL_obj::lime_gl_finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,finish,(void))

Void GL_obj::flush( ){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","flush",0x2448b870,"lime.graphics.opengl.GL.flush","lime/graphics/opengl/GL.hx",948,0xa5aa2623)
		HX_STACK_LINE(948)
		::lime::graphics::opengl::GL_obj::lime_gl_flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,flush,(void))

Void GL_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","framebufferRenderbuffer",0x04230e0f,"lime.graphics.opengl.GL.framebufferRenderbuffer","lime/graphics/opengl/GL.hx",959,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(959)
		::lime::graphics::opengl::GL_obj::lime_gl_framebuffer_renderbuffer(target,attachment,renderbuffertarget,renderbuffer->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,framebufferRenderbuffer,(void))

Void GL_obj::framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLTexture texture,int level){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","framebufferTexture2D",0xbf185294,"lime.graphics.opengl.GL.framebufferTexture2D","lime/graphics/opengl/GL.hx",970,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(textarget,"textarget")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(970)
		::lime::graphics::opengl::GL_obj::lime_gl_framebuffer_texture2D(target,attachment,textarget,texture->id,level);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,framebufferTexture2D,(void))

Void GL_obj::frontFace( int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","frontFace",0x95289d92,"lime.graphics.opengl.GL.frontFace","lime/graphics/opengl/GL.hx",981,0xa5aa2623)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(981)
		::lime::graphics::opengl::GL_obj::lime_gl_front_face(mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,frontFace,(void))

Void GL_obj::generateMipmap( int target){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","generateMipmap",0x07966b71,"lime.graphics.opengl.GL.generateMipmap","lime/graphics/opengl/GL.hx",992,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(992)
		::lime::graphics::opengl::GL_obj::lime_gl_generate_mipmap(target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,generateMipmap,(void))

Dynamic GL_obj::getActiveAttrib( ::lime::graphics::opengl::GLProgram program,int index){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getActiveAttrib",0xae1c3012,"lime.graphics.opengl.GL.getActiveAttrib","lime/graphics/opengl/GL.hx",1003,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(1003)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_active_attrib(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveAttrib,return )

Dynamic GL_obj::getActiveUniform( ::lime::graphics::opengl::GLProgram program,int index){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getActiveUniform",0x26c4a76c,"lime.graphics.opengl.GL.getActiveUniform","lime/graphics/opengl/GL.hx",1016,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(1016)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_active_uniform(program->id,index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveUniform,return )

Array< ::Dynamic > GL_obj::getAttachedShaders( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getAttachedShaders",0x82ccbd88,"lime.graphics.opengl.GL.getAttachedShaders","lime/graphics/opengl/GL.hx",1029,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(1029)
	return program->getShaders();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getAttachedShaders,return )

int GL_obj::getAttribLocation( ::lime::graphics::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getAttribLocation",0x953d4281,"lime.graphics.opengl.GL.getAttribLocation","lime/graphics/opengl/GL.hx",1042,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1042)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_attrib_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getAttribLocation,return )

int GL_obj::getBufferParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getBufferParameter",0x0409e767,"lime.graphics.opengl.GL.getBufferParameter","lime/graphics/opengl/GL.hx",1055,0xa5aa2623)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1055)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_buffer_paramerter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferParameter,return )

Dynamic GL_obj::getContextAttributes( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getContextAttributes",0x48d7c604,"lime.graphics.opengl.GL.getContextAttributes","lime/graphics/opengl/GL.hx",1063,0xa5aa2623)
	HX_STACK_LINE(1068)
	Dynamic base = ::lime::graphics::opengl::GL_obj::lime_gl_get_context_attributes();		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(1069)
	base->__FieldRef(HX_CSTRING("premultipliedAlpha")) = false;
	HX_STACK_LINE(1070)
	base->__FieldRef(HX_CSTRING("preserveDrawingBuffer")) = false;
	HX_STACK_LINE(1071)
	return base;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getContextAttributes,return )

int GL_obj::getError( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getError",0xdc475926,"lime.graphics.opengl.GL.getError","lime/graphics/opengl/GL.hx",1084,0xa5aa2623)
	HX_STACK_LINE(1084)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_error();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getError,return )

Dynamic GL_obj::getExtension( ::String name){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getExtension",0x402327dd,"lime.graphics.opengl.GL.getExtension","lime/graphics/opengl/GL.hx",1098,0xa5aa2623)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1098)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getExtension,return )

int GL_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getFramebufferAttachmentParameter",0x4289ff3b,"lime.graphics.opengl.GL.getFramebufferAttachmentParameter","lime/graphics/opengl/GL.hx",1112,0xa5aa2623)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1112)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_framebuffer_attachment_parameter(target,attachment,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getFramebufferAttachmentParameter,return )

Dynamic GL_obj::getParameter( int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getParameter",0xa3c2ca07,"lime.graphics.opengl.GL.getParameter","lime/graphics/opengl/GL.hx",1125,0xa5aa2623)
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1125)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_parameter(pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getParameter,return )

::String GL_obj::getProgramInfoLog( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getProgramInfoLog",0x06201974,"lime.graphics.opengl.GL.getProgramInfoLog","lime/graphics/opengl/GL.hx",1138,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(1138)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_program_info_log(program->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getProgramInfoLog,return )

int GL_obj::getProgramParameter( ::lime::graphics::opengl::GLProgram program,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getProgramParameter",0x12242de7,"lime.graphics.opengl.GL.getProgramParameter","lime/graphics/opengl/GL.hx",1151,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1151)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_program_parameter(program->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramParameter,return )

int GL_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getRenderbufferParameter",0x31922751,"lime.graphics.opengl.GL.getRenderbufferParameter","lime/graphics/opengl/GL.hx",1164,0xa5aa2623)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1164)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_render_buffer_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getRenderbufferParameter,return )

::String GL_obj::getShaderInfoLog( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getShaderInfoLog",0x433f2f6f,"lime.graphics.opengl.GL.getShaderInfoLog","lime/graphics/opengl/GL.hx",1177,0xa5aa2623)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(1177)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_info_log(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderInfoLog,return )

int GL_obj::getShaderParameter( ::lime::graphics::opengl::GLShader shader,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getShaderParameter",0x25b0f8a2,"lime.graphics.opengl.GL.getShaderParameter","lime/graphics/opengl/GL.hx",1190,0xa5aa2623)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1190)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_parameter(shader->id,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderParameter,return )

Dynamic GL_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getShaderPrecisionFormat",0xc38a1ece,"lime.graphics.opengl.GL.getShaderPrecisionFormat","lime/graphics/opengl/GL.hx",1203,0xa5aa2623)
	HX_STACK_ARG(shadertype,"shadertype")
	HX_STACK_ARG(precisiontype,"precisiontype")
	HX_STACK_LINE(1203)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_precision_format(shadertype,precisiontype);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderPrecisionFormat,return )

::String GL_obj::getShaderSource( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getShaderSource",0x0ffe4842,"lime.graphics.opengl.GL.getShaderSource","lime/graphics/opengl/GL.hx",1216,0xa5aa2623)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(1216)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_source(shader->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderSource,return )

Array< ::String > GL_obj::getSupportedExtensions( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getSupportedExtensions",0x569501c0,"lime.graphics.opengl.GL.getSupportedExtensions","lime/graphics/opengl/GL.hx",1224,0xa5aa2623)
	HX_STACK_LINE(1229)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1230)
	::lime::graphics::opengl::GL_obj::lime_gl_get_supported_extensions(result);
	HX_STACK_LINE(1231)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getSupportedExtensions,return )

int GL_obj::getTexParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getTexParameter",0x1dcd3d24,"lime.graphics.opengl.GL.getTexParameter","lime/graphics/opengl/GL.hx",1244,0xa5aa2623)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1244)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_tex_parameter(target,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameter,return )

Dynamic GL_obj::getUniform( ::lime::graphics::opengl::GLProgram program,int location){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getUniform",0xcb066212,"lime.graphics.opengl.GL.getUniform","lime/graphics/opengl/GL.hx",1257,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(1257)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_uniform(program->id,location);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniform,return )

int GL_obj::getUniformLocation( ::lime::graphics::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getUniformLocation",0x3f29ee67,"lime.graphics.opengl.GL.getUniformLocation","lime/graphics/opengl/GL.hx",1270,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1270)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_uniform_location(program->id,name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformLocation,return )

int GL_obj::getVertexAttrib( int index,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getVertexAttrib",0xee15d430,"lime.graphics.opengl.GL.getVertexAttrib","lime/graphics/opengl/GL.hx",1283,0xa5aa2623)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1283)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_vertex_attrib(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttrib,return )

int GL_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_FRAME("lime.graphics.opengl.GL","getVertexAttribOffset",0x530723e3,"lime.graphics.opengl.GL.getVertexAttribOffset","lime/graphics/opengl/GL.hx",1296,0xa5aa2623)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(1296)
	return ::lime::graphics::opengl::GL_obj::lime_gl_get_vertex_attrib_offset(index,pname);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribOffset,return )

Void GL_obj::hint( int target,int mode){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","hint",0x86a4415b,"lime.graphics.opengl.GL.hint","lime/graphics/opengl/GL.hx",1309,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(1309)
		::lime::graphics::opengl::GL_obj::lime_gl_hint(target,mode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,hint,(void))

bool GL_obj::isBuffer( ::lime::graphics::opengl::GLBuffer buffer){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isBuffer",0x3244d65e,"lime.graphics.opengl.GL.isBuffer","lime/graphics/opengl/GL.hx",1320,0xa5aa2623)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(1320)
	if (((bool((buffer != null())) && bool((buffer->id > (int)0))))){
		HX_STACK_LINE(1320)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_buffer(buffer->id);
	}
	else{
		HX_STACK_LINE(1320)
		return false;
	}
	HX_STACK_LINE(1320)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isBuffer,return )

bool GL_obj::isContextLost( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isContextLost",0x269cc155,"lime.graphics.opengl.GL.isContextLost","lime/graphics/opengl/GL.hx",1333,0xa5aa2623)
	HX_STACK_LINE(1333)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,isContextLost,return )

bool GL_obj::isEnabled( int cap){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isEnabled",0x96971d63,"lime.graphics.opengl.GL.isEnabled","lime/graphics/opengl/GL.hx",1344,0xa5aa2623)
	HX_STACK_ARG(cap,"cap")
	HX_STACK_LINE(1344)
	return ::lime::graphics::opengl::GL_obj::lime_gl_is_enabled(cap);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isEnabled,return )

bool GL_obj::isFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isFramebuffer",0x7c2946cf,"lime.graphics.opengl.GL.isFramebuffer","lime/graphics/opengl/GL.hx",1357,0xa5aa2623)
	HX_STACK_ARG(framebuffer,"framebuffer")
	HX_STACK_LINE(1357)
	if (((bool((framebuffer != null())) && bool((framebuffer->id > (int)0))))){
		HX_STACK_LINE(1357)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_framebuffer(framebuffer->id);
	}
	else{
		HX_STACK_LINE(1357)
		return false;
	}
	HX_STACK_LINE(1357)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isFramebuffer,return )

bool GL_obj::isProgram( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isProgram",0x0c5f6366,"lime.graphics.opengl.GL.isProgram","lime/graphics/opengl/GL.hx",1370,0xa5aa2623)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(1370)
	if (((bool((program != null())) && bool((program->id > (int)0))))){
		HX_STACK_LINE(1370)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_program(program->id);
	}
	else{
		HX_STACK_LINE(1370)
		return false;
	}
	HX_STACK_LINE(1370)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isProgram,return )

bool GL_obj::isRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isRenderbuffer",0xae80c0b4,"lime.graphics.opengl.GL.isRenderbuffer","lime/graphics/opengl/GL.hx",1383,0xa5aa2623)
	HX_STACK_ARG(renderbuffer,"renderbuffer")
	HX_STACK_LINE(1383)
	if (((bool((renderbuffer != null())) && bool((renderbuffer->id > (int)0))))){
		HX_STACK_LINE(1383)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_renderbuffer(renderbuffer->id);
	}
	else{
		HX_STACK_LINE(1383)
		return false;
	}
	HX_STACK_LINE(1383)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isRenderbuffer,return )

bool GL_obj::isShader( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isShader",0x7ed0d883,"lime.graphics.opengl.GL.isShader","lime/graphics/opengl/GL.hx",1396,0xa5aa2623)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(1396)
	if (((bool((shader != null())) && bool((shader->id > (int)0))))){
		HX_STACK_LINE(1396)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_shader(shader->id);
	}
	else{
		HX_STACK_LINE(1396)
		return false;
	}
	HX_STACK_LINE(1396)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isShader,return )

bool GL_obj::isTexture( ::lime::graphics::opengl::GLTexture texture){
	HX_STACK_FRAME("lime.graphics.opengl.GL","isTexture",0xb746e1bd,"lime.graphics.opengl.GL.isTexture","lime/graphics/opengl/GL.hx",1409,0xa5aa2623)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(1409)
	if (((bool((texture != null())) && bool((texture->id > (int)0))))){
		HX_STACK_LINE(1409)
		return ::lime::graphics::opengl::GL_obj::lime_gl_is_texture(texture->id);
	}
	else{
		HX_STACK_LINE(1409)
		return false;
	}
	HX_STACK_LINE(1409)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isTexture,return )

Void GL_obj::lineWidth( Float width){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","lineWidth",0x25c5551e,"lime.graphics.opengl.GL.lineWidth","lime/graphics/opengl/GL.hx",1422,0xa5aa2623)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(1422)
		::lime::graphics::opengl::GL_obj::lime_gl_line_width(width);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,lineWidth,(void))

Void GL_obj::linkProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","linkProgram",0x3bc28c56,"lime.graphics.opengl.GL.linkProgram","lime/graphics/opengl/GL.hx",1433,0xa5aa2623)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1433)
		::lime::graphics::opengl::GL_obj::lime_gl_link_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,linkProgram,(void))

Void GL_obj::pixelStorei( int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","pixelStorei",0x330f133a,"lime.graphics.opengl.GL.pixelStorei","lime/graphics/opengl/GL.hx",1444,0xa5aa2623)
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1444)
		::lime::graphics::opengl::GL_obj::lime_gl_pixel_storei(pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,pixelStorei,(void))

Void GL_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","polygonOffset",0x5f0a0759,"lime.graphics.opengl.GL.polygonOffset","lime/graphics/opengl/GL.hx",1455,0xa5aa2623)
		HX_STACK_ARG(factor,"factor")
		HX_STACK_ARG(units,"units")
		HX_STACK_LINE(1455)
		::lime::graphics::opengl::GL_obj::lime_gl_polygon_offset(factor,units);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,polygonOffset,(void))

Void GL_obj::readPixels( int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","readPixels",0x4c666df7,"lime.graphics.opengl.GL.readPixels","lime/graphics/opengl/GL.hx",1461,0xa5aa2623)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1466)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1466)
		if (((pixels == null()))){
			HX_STACK_LINE(1466)
			_g = null();
		}
		else{
			HX_STACK_LINE(1466)
			_g = pixels->getByteBuffer();
		}
		HX_STACK_LINE(1466)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1466)
		if (((pixels == null()))){
			HX_STACK_LINE(1466)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(1466)
			_g1 = pixels->getStart();
		}
		HX_STACK_LINE(1466)
		::lime::graphics::opengl::GL_obj::lime_gl_read_pixels(x,y,width,height,format,type,_g,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,readPixels,(void))

Void GL_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","renderbufferStorage",0x02f80bb1,"lime.graphics.opengl.GL.renderbufferStorage","lime/graphics/opengl/GL.hx",1479,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1479)
		::lime::graphics::opengl::GL_obj::lime_gl_renderbuffer_storage(target,internalformat,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,renderbufferStorage,(void))

Void GL_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","sampleCoverage",0xe809fd06,"lime.graphics.opengl.GL.sampleCoverage","lime/graphics/opengl/GL.hx",1490,0xa5aa2623)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(1490)
		::lime::graphics::opengl::GL_obj::lime_gl_sample_coverage(value,invert);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,sampleCoverage,(void))

Void GL_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","scissor",0xecd640c8,"lime.graphics.opengl.GL.scissor","lime/graphics/opengl/GL.hx",1501,0xa5aa2623)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1501)
		::lime::graphics::opengl::GL_obj::lime_gl_scissor(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,scissor,(void))

Void GL_obj::shaderSource( ::lime::graphics::opengl::GLShader shader,::String source){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","shaderSource",0xedd645b4,"lime.graphics.opengl.GL.shaderSource","lime/graphics/opengl/GL.hx",1512,0xa5aa2623)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(1512)
		::lime::graphics::opengl::GL_obj::lime_gl_shader_source(shader->id,source);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,shaderSource,(void))

Void GL_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","stencilFunc",0xf305620c,"lime.graphics.opengl.GL.stencilFunc","lime/graphics/opengl/GL.hx",1523,0xa5aa2623)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1523)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_func(func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilFunc,(void))

Void GL_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","stencilFuncSeparate",0x2e56298f,"lime.graphics.opengl.GL.stencilFuncSeparate","lime/graphics/opengl/GL.hx",1534,0xa5aa2623)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1534)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_func_separate(face,func,ref,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilFuncSeparate,(void))

Void GL_obj::stencilMask( int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","stencilMask",0xf796b7b4,"lime.graphics.opengl.GL.stencilMask","lime/graphics/opengl/GL.hx",1545,0xa5aa2623)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1545)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_mask(mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,stencilMask,(void))

Void GL_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","stencilMaskSeparate",0x42316737,"lime.graphics.opengl.GL.stencilMaskSeparate","lime/graphics/opengl/GL.hx",1556,0xa5aa2623)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1556)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_mask_separate(face,mask);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,stencilMaskSeparate,(void))

Void GL_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","stencilOp",0x6b5415e9,"lime.graphics.opengl.GL.stencilOp","lime/graphics/opengl/GL.hx",1567,0xa5aa2623)
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1567)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op(fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilOp,(void))

Void GL_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","stencilOpSeparate",0x8b77826c,"lime.graphics.opengl.GL.stencilOpSeparate","lime/graphics/opengl/GL.hx",1578,0xa5aa2623)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1578)
		::lime::graphics::opengl::GL_obj::lime_gl_stencil_op_separate(face,fail,zfail,zpass);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilOpSeparate,(void))

Void GL_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","texImage2D",0x7fa8179a,"lime.graphics.opengl.GL.texImage2D","lime/graphics/opengl/GL.hx",1584,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1589)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1589)
		if (((pixels == null()))){
			HX_STACK_LINE(1589)
			_g = null();
		}
		else{
			HX_STACK_LINE(1589)
			_g = pixels->getByteBuffer();
		}
		HX_STACK_LINE(1589)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1589)
		if (((pixels == null()))){
			HX_STACK_LINE(1589)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(1589)
			_g1 = pixels->getStart();
		}
		HX_STACK_LINE(1589)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(target,level,internalformat,width,height,border,format,type,_g,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texImage2D,(void))

Void GL_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","texParameterf",0x34ee0910,"lime.graphics.opengl.GL.texParameterf","lime/graphics/opengl/GL.hx",1602,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1602)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameterf(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameterf,(void))

Void GL_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","texParameteri",0x34ee0913,"lime.graphics.opengl.GL.texParameteri","lime/graphics/opengl/GL.hx",1613,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1613)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(target,pname,param);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameteri,(void))

Void GL_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","texSubImage2D",0x214d10c0,"lime.graphics.opengl.GL.texSubImage2D","lime/graphics/opengl/GL.hx",1619,0xa5aa2623)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1624)
		::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1624)
		if (((pixels == null()))){
			HX_STACK_LINE(1624)
			_g = null();
		}
		else{
			HX_STACK_LINE(1624)
			_g = pixels->getByteBuffer();
		}
		HX_STACK_LINE(1624)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1624)
		if (((pixels == null()))){
			HX_STACK_LINE(1624)
			_g1 = null();
		}
		else{
			HX_STACK_LINE(1624)
			_g1 = pixels->getStart();
		}
		HX_STACK_LINE(1624)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_sub_image_2d(target,level,xoffset,yoffset,width,height,format,type,_g,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texSubImage2D,(void))

Void GL_obj::uniform1f( int location,Float x){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform1f",0x1c45bcf5,"lime.graphics.opengl.GL.uniform1f","lime/graphics/opengl/GL.hx",1637,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1637)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1f,(void))

Void GL_obj::uniform1fv( int location,::lime::utils::Float32Array x){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform1fv",0xa0bf99e1,"lime.graphics.opengl.GL.uniform1fv","lime/graphics/opengl/GL.hx",1643,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1648)
		::lime::utils::ByteArray _g = x->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1648)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1fv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1fv,(void))

Void GL_obj::uniform1i( int location,int x){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform1i",0x1c45bcf8,"lime.graphics.opengl.GL.uniform1i","lime/graphics/opengl/GL.hx",1661,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1661)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(location,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1i,(void))

Void GL_obj::uniform1iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform1iv",0xa0bf9c7e,"lime.graphics.opengl.GL.uniform1iv","lime/graphics/opengl/GL.hx",1667,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1672)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1672)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1iv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1iv,(void))

Void GL_obj::uniform2f( int location,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform2f",0x1c45bdd4,"lime.graphics.opengl.GL.uniform2f","lime/graphics/opengl/GL.hx",1685,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1685)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2f,(void))

Void GL_obj::uniform2fv( int location,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform2fv",0xa0c05c22,"lime.graphics.opengl.GL.uniform2fv","lime/graphics/opengl/GL.hx",1691,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1696)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1696)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2fv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2fv,(void))

Void GL_obj::uniform2i( int location,int x,int y){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform2i",0x1c45bdd7,"lime.graphics.opengl.GL.uniform2i","lime/graphics/opengl/GL.hx",1709,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1709)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2i(location,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2i,(void))

Void GL_obj::uniform2iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform2iv",0xa0c05ebf,"lime.graphics.opengl.GL.uniform2iv","lime/graphics/opengl/GL.hx",1715,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1720)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1720)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2iv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2iv,(void))

Void GL_obj::uniform3f( int location,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform3f",0x1c45beb3,"lime.graphics.opengl.GL.uniform3f","lime/graphics/opengl/GL.hx",1733,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1733)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3f(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3f,(void))

Void GL_obj::uniform3fv( int location,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform3fv",0xa0c11e63,"lime.graphics.opengl.GL.uniform3fv","lime/graphics/opengl/GL.hx",1739,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1744)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1744)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3fv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3fv,(void))

Void GL_obj::uniform3i( int location,int x,int y,int z){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform3i",0x1c45beb6,"lime.graphics.opengl.GL.uniform3i","lime/graphics/opengl/GL.hx",1757,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1757)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3i(location,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3i,(void))

Void GL_obj::uniform3iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform3iv",0xa0c12100,"lime.graphics.opengl.GL.uniform3iv","lime/graphics/opengl/GL.hx",1763,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1768)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1768)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform3iv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3iv,(void))

Void GL_obj::uniform4f( int location,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform4f",0x1c45bf92,"lime.graphics.opengl.GL.uniform4f","lime/graphics/opengl/GL.hx",1781,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1781)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4f,(void))

Void GL_obj::uniform4fv( int location,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform4fv",0xa0c1e0a4,"lime.graphics.opengl.GL.uniform4fv","lime/graphics/opengl/GL.hx",1787,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1792)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1792)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4fv,(void))

Void GL_obj::uniform4i( int location,int x,int y,int z,int w){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform4i",0x1c45bf95,"lime.graphics.opengl.GL.uniform4i","lime/graphics/opengl/GL.hx",1805,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1805)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4i(location,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4i,(void))

Void GL_obj::uniform4iv( int location,::lime::utils::Int32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniform4iv",0xa0c1e341,"lime.graphics.opengl.GL.uniform4iv","lime/graphics/opengl/GL.hx",1811,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1816)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1816)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4iv(location,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4iv,(void))

Void GL_obj::uniformMatrix2fv( int location,bool transpose,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniformMatrix2fv",0x14cffc61,"lime.graphics.opengl.GL.uniformMatrix2fv","lime/graphics/opengl/GL.hx",1824,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1829)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1829)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,transpose,_g,(int)2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix2fv,(void))

Void GL_obj::uniformMatrix3fv( int location,bool transpose,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniformMatrix3fv",0x14d0bea2,"lime.graphics.opengl.GL.uniformMatrix3fv","lime/graphics/opengl/GL.hx",1837,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1842)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1842)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,transpose,_g,(int)3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3fv,(void))

Void GL_obj::uniformMatrix4fv( int location,bool transpose,::lime::utils::Float32Array v){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","uniformMatrix4fv",0x14d180e3,"lime.graphics.opengl.GL.uniformMatrix4fv","lime/graphics/opengl/GL.hx",1850,0xa5aa2623)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1855)
		::lime::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1855)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,transpose,_g,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix4fv,(void))

Void GL_obj::useProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","useProgram",0xbced07d1,"lime.graphics.opengl.GL.useProgram","lime/graphics/opengl/GL.hx",1875,0xa5aa2623)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1875)
		::lime::graphics::opengl::GL_obj::lime_gl_use_program((  (((program == null()))) ? int((int)0) : int(program->id) ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,useProgram,(void))

Void GL_obj::validateProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","validateProgram",0x3a09253a,"lime.graphics.opengl.GL.validateProgram","lime/graphics/opengl/GL.hx",1886,0xa5aa2623)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1886)
		::lime::graphics::opengl::GL_obj::lime_gl_validate_program(program->id);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,validateProgram,(void))

Void GL_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib1f",0x003f2937,"lime.graphics.opengl.GL.vertexAttrib1f","lime/graphics/opengl/GL.hx",1897,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1897)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib1f(indx,x);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1f,(void))

Void GL_obj::vertexAttrib1fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib1fv",0x3704e75f,"lime.graphics.opengl.GL.vertexAttrib1fv","lime/graphics/opengl/GL.hx",1903,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1908)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1908)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib1fv(indx,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1fv,(void))

Void GL_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib2f",0x003f2a16,"lime.graphics.opengl.GL.vertexAttrib2f","lime/graphics/opengl/GL.hx",1921,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1921)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib2f(indx,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,vertexAttrib2f,(void))

Void GL_obj::vertexAttrib2fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib2fv",0x3705a9a0,"lime.graphics.opengl.GL.vertexAttrib2fv","lime/graphics/opengl/GL.hx",1927,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1932)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1932)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib2fv(indx,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib2fv,(void))

Void GL_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib3f",0x003f2af5,"lime.graphics.opengl.GL.vertexAttrib3f","lime/graphics/opengl/GL.hx",1945,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1945)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib3f(indx,x,y,z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,vertexAttrib3f,(void))

Void GL_obj::vertexAttrib3fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib3fv",0x37066be1,"lime.graphics.opengl.GL.vertexAttrib3fv","lime/graphics/opengl/GL.hx",1951,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1956)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1956)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib3fv(indx,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib3fv,(void))

Void GL_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib4f",0x003f2bd4,"lime.graphics.opengl.GL.vertexAttrib4f","lime/graphics/opengl/GL.hx",1969,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1969)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib4f(indx,x,y,z,w);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttrib4f,(void))

Void GL_obj::vertexAttrib4fv( int indx,::lime::utils::Float32Array values){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttrib4fv",0x37072e22,"lime.graphics.opengl.GL.vertexAttrib4fv","lime/graphics/opengl/GL.hx",1975,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1980)
		::lime::utils::ByteArray _g = values->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1980)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib4fv(indx,_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib4fv,(void))

Void GL_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","vertexAttribPointer",0xbb3d6f3b,"lime.graphics.opengl.GL.vertexAttribPointer","lime/graphics/opengl/GL.hx",1993,0xa5aa2623)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(normalized,"normalized")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(1993)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib_pointer(indx,size,type,normalized,stride,offset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,vertexAttribPointer,(void))

Void GL_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.opengl.GL","viewport",0xa5ebca3a,"lime.graphics.opengl.GL.viewport","lime/graphics/opengl/GL.hx",2004,0xa5aa2623)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(2004)
		::lime::graphics::opengl::GL_obj::lime_gl_viewport(x,y,width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,viewport,(void))

int GL_obj::get_version( ){
	HX_STACK_FRAME("lime.graphics.opengl.GL","get_version",0xb53325db,"lime.graphics.opengl.GL.get_version","lime/graphics/opengl/GL.hx",2010,0xa5aa2623)
	HX_STACK_LINE(2010)
	return (int)2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_version,return )

Dynamic GL_obj::lime_gl_active_texture;

Dynamic GL_obj::lime_gl_attach_shader;

Dynamic GL_obj::lime_gl_bind_attrib_location;

Dynamic GL_obj::lime_gl_bind_buffer;

Dynamic GL_obj::lime_gl_bind_framebuffer;

Dynamic GL_obj::lime_gl_bind_renderbuffer;

Dynamic GL_obj::lime_gl_bind_texture;

Dynamic GL_obj::lime_gl_blend_color;

Dynamic GL_obj::lime_gl_blend_equation;

Dynamic GL_obj::lime_gl_blend_equation_separate;

Dynamic GL_obj::lime_gl_blend_func;

Dynamic GL_obj::lime_gl_blend_func_separate;

Dynamic GL_obj::lime_gl_buffer_data;

Dynamic GL_obj::lime_gl_buffer_sub_data;

Dynamic GL_obj::lime_gl_check_framebuffer_status;

Dynamic GL_obj::lime_gl_clear;

Dynamic GL_obj::lime_gl_clear_color;

Dynamic GL_obj::lime_gl_clear_depth;

Dynamic GL_obj::lime_gl_clear_stencil;

Dynamic GL_obj::lime_gl_color_mask;

Dynamic GL_obj::lime_gl_compile_shader;

Dynamic GL_obj::lime_gl_compressed_tex_image_2d;

Dynamic GL_obj::lime_gl_compressed_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_copy_tex_image_2d;

Dynamic GL_obj::lime_gl_copy_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_create_buffer;

Dynamic GL_obj::lime_gl_create_framebuffer;

Dynamic GL_obj::lime_gl_create_program;

Dynamic GL_obj::lime_gl_create_render_buffer;

Dynamic GL_obj::lime_gl_create_shader;

Dynamic GL_obj::lime_gl_create_texture;

Dynamic GL_obj::lime_gl_cull_face;

Dynamic GL_obj::lime_gl_delete_buffer;

Dynamic GL_obj::lime_gl_delete_framebuffer;

Dynamic GL_obj::lime_gl_delete_program;

Dynamic GL_obj::lime_gl_delete_render_buffer;

Dynamic GL_obj::lime_gl_delete_shader;

Dynamic GL_obj::lime_gl_delete_texture;

Dynamic GL_obj::lime_gl_depth_func;

Dynamic GL_obj::lime_gl_depth_mask;

Dynamic GL_obj::lime_gl_depth_range;

Dynamic GL_obj::lime_gl_detach_shader;

Dynamic GL_obj::lime_gl_disable;

Dynamic GL_obj::lime_gl_disable_vertex_attrib_array;

Dynamic GL_obj::lime_gl_draw_arrays;

Dynamic GL_obj::lime_gl_draw_elements;

Dynamic GL_obj::lime_gl_enable;

Dynamic GL_obj::lime_gl_enable_vertex_attrib_array;

Dynamic GL_obj::lime_gl_finish;

Dynamic GL_obj::lime_gl_flush;

Dynamic GL_obj::lime_gl_framebuffer_renderbuffer;

Dynamic GL_obj::lime_gl_framebuffer_texture2D;

Dynamic GL_obj::lime_gl_front_face;

Dynamic GL_obj::lime_gl_generate_mipmap;

Dynamic GL_obj::lime_gl_get_active_attrib;

Dynamic GL_obj::lime_gl_get_active_uniform;

Dynamic GL_obj::lime_gl_get_attrib_location;

Dynamic GL_obj::lime_gl_get_buffer_paramerter;

Dynamic GL_obj::lime_gl_get_context_attributes;

Dynamic GL_obj::lime_gl_get_error;

Dynamic GL_obj::lime_gl_get_framebuffer_attachment_parameter;

Dynamic GL_obj::lime_gl_get_parameter;

Dynamic GL_obj::lime_gl_get_program_info_log;

Dynamic GL_obj::lime_gl_get_program_parameter;

Dynamic GL_obj::lime_gl_get_render_buffer_parameter;

Dynamic GL_obj::lime_gl_get_shader_info_log;

Dynamic GL_obj::lime_gl_get_shader_parameter;

Dynamic GL_obj::lime_gl_get_shader_precision_format;

Dynamic GL_obj::lime_gl_get_shader_source;

Dynamic GL_obj::lime_gl_get_supported_extensions;

Dynamic GL_obj::lime_gl_get_tex_parameter;

Dynamic GL_obj::lime_gl_get_uniform;

Dynamic GL_obj::lime_gl_get_uniform_location;

Dynamic GL_obj::lime_gl_get_vertex_attrib;

Dynamic GL_obj::lime_gl_get_vertex_attrib_offset;

Dynamic GL_obj::lime_gl_hint;

Dynamic GL_obj::lime_gl_is_buffer;

Dynamic GL_obj::lime_gl_is_enabled;

Dynamic GL_obj::lime_gl_is_framebuffer;

Dynamic GL_obj::lime_gl_is_program;

Dynamic GL_obj::lime_gl_is_renderbuffer;

Dynamic GL_obj::lime_gl_is_shader;

Dynamic GL_obj::lime_gl_is_texture;

Dynamic GL_obj::lime_gl_line_width;

Dynamic GL_obj::lime_gl_link_program;

Dynamic GL_obj::lime_gl_pixel_storei;

Dynamic GL_obj::lime_gl_polygon_offset;

Dynamic GL_obj::lime_gl_read_pixels;

Dynamic GL_obj::lime_gl_renderbuffer_storage;

Dynamic GL_obj::lime_gl_sample_coverage;

Dynamic GL_obj::lime_gl_scissor;

Dynamic GL_obj::lime_gl_shader_source;

Dynamic GL_obj::lime_gl_stencil_func;

Dynamic GL_obj::lime_gl_stencil_func_separate;

Dynamic GL_obj::lime_gl_stencil_mask;

Dynamic GL_obj::lime_gl_stencil_mask_separate;

Dynamic GL_obj::lime_gl_stencil_op;

Dynamic GL_obj::lime_gl_stencil_op_separate;

Dynamic GL_obj::lime_gl_tex_image_2d;

Dynamic GL_obj::lime_gl_tex_parameterf;

Dynamic GL_obj::lime_gl_tex_parameteri;

Dynamic GL_obj::lime_gl_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_uniform1f;

Dynamic GL_obj::lime_gl_uniform1fv;

Dynamic GL_obj::lime_gl_uniform1i;

Dynamic GL_obj::lime_gl_uniform1iv;

Dynamic GL_obj::lime_gl_uniform2f;

Dynamic GL_obj::lime_gl_uniform2fv;

Dynamic GL_obj::lime_gl_uniform2i;

Dynamic GL_obj::lime_gl_uniform2iv;

Dynamic GL_obj::lime_gl_uniform3f;

Dynamic GL_obj::lime_gl_uniform3fv;

Dynamic GL_obj::lime_gl_uniform3i;

Dynamic GL_obj::lime_gl_uniform3iv;

Dynamic GL_obj::lime_gl_uniform4f;

Dynamic GL_obj::lime_gl_uniform4fv;

Dynamic GL_obj::lime_gl_uniform4i;

Dynamic GL_obj::lime_gl_uniform4iv;

Dynamic GL_obj::lime_gl_uniform_matrix;

Dynamic GL_obj::lime_gl_use_program;

Dynamic GL_obj::lime_gl_validate_program;

Dynamic GL_obj::lime_gl_version;

Dynamic GL_obj::lime_gl_vertex_attrib1f;

Dynamic GL_obj::lime_gl_vertex_attrib1fv;

Dynamic GL_obj::lime_gl_vertex_attrib2f;

Dynamic GL_obj::lime_gl_vertex_attrib2fv;

Dynamic GL_obj::lime_gl_vertex_attrib3f;

Dynamic GL_obj::lime_gl_vertex_attrib3fv;

Dynamic GL_obj::lime_gl_vertex_attrib4f;

Dynamic GL_obj::lime_gl_vertex_attrib4fv;

Dynamic GL_obj::lime_gl_vertex_attrib_pointer;

Dynamic GL_obj::lime_gl_viewport;


GL_obj::GL_obj()
{
}

Dynamic GL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { return hint_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp ? get_version() : version; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"scissor") ) { return scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isShader") ) { return isShader_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return colorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"frontFace") ) { return frontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isProgram") ) { return isProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"isTexture") ) { return isTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { return stencilOp_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { return uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { return uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { return uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { return uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { return uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { return uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { return uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { return uniform4i_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"blendColor") ) { return blendColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthRange") ) { return depthRange_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { return drawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { return texImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { return uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { return uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { return uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { return uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { return uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { return uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { return uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { return uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { return pixelStorei_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { return stencilFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"detachShader") ) { return detachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_hint") ) { return lime_gl_hint; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { return blendEquation_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"isContextLost") ) { return isContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { return isFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { return polygonOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { return texParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { return texSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_clear") ) { return lime_gl_clear; }
		if (HX_FIELD_EQ(inName,"lime_gl_flush") ) { return lime_gl_flush; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { return copyTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { return generateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { return isRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { return sampleCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { return vertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { return vertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { return vertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { return vertexAttrib4f_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_enable") ) { return lime_gl_enable; }
		if (HX_FIELD_EQ(inName,"lime_gl_finish") ) { return lime_gl_finish; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { return getActiveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { return getShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { return getTexParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { return getVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { return validateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { return vertexAttrib1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { return vertexAttrib2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { return vertexAttrib3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { return vertexAttrib4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_disable") ) { return lime_gl_disable; }
		if (HX_FIELD_EQ(inName,"lime_gl_scissor") ) { return lime_gl_scissor; }
		if (HX_FIELD_EQ(inName,"lime_gl_version") ) { return lime_gl_version; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { return getActiveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return getShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { return uniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { return uniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_viewport") ) { return lime_gl_viewport; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { return blendFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { return copyTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { return createFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { return deleteFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return getProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { return stencilOpSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_cull_face") ) { return lime_gl_cull_face; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_error") ) { return lime_gl_get_error; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_buffer") ) { return lime_gl_is_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_shader") ) { return lime_gl_is_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1f") ) { return lime_gl_uniform1f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1i") ) { return lime_gl_uniform1i; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2f") ) { return lime_gl_uniform2f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2i") ) { return lime_gl_uniform2i; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3f") ) { return lime_gl_uniform3f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3i") ) { return lime_gl_uniform3i; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4f") ) { return lime_gl_uniform4f; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4i") ) { return lime_gl_uniform4i; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { return bindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { return deleteRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { return getAttachedShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { return getBufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func") ) { return lime_gl_blend_func; }
		if (HX_FIELD_EQ(inName,"lime_gl_color_mask") ) { return lime_gl_color_mask; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_func") ) { return lime_gl_depth_func; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_mask") ) { return lime_gl_depth_mask; }
		if (HX_FIELD_EQ(inName,"lime_gl_front_face") ) { return lime_gl_front_face; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_enabled") ) { return lime_gl_is_enabled; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_program") ) { return lime_gl_is_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_texture") ) { return lime_gl_is_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_line_width") ) { return lime_gl_line_width; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op") ) { return lime_gl_stencil_op; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1fv") ) { return lime_gl_uniform1fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1iv") ) { return lime_gl_uniform1iv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2fv") ) { return lime_gl_uniform2fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2iv") ) { return lime_gl_uniform2iv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3fv") ) { return lime_gl_uniform3fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3iv") ) { return lime_gl_uniform3iv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4fv") ) { return lime_gl_uniform4fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4iv") ) { return lime_gl_uniform4iv; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { return renderbufferStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { return stencilFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { return stencilMaskSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_buffer") ) { return lime_gl_bind_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_color") ) { return lime_gl_blend_color; }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_data") ) { return lime_gl_buffer_data; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_color") ) { return lime_gl_clear_color; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_depth") ) { return lime_gl_clear_depth; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_range") ) { return lime_gl_depth_range; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_arrays") ) { return lime_gl_draw_arrays; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform") ) { return lime_gl_get_uniform; }
		if (HX_FIELD_EQ(inName,"lime_gl_read_pixels") ) { return lime_gl_read_pixels; }
		if (HX_FIELD_EQ(inName,"lime_gl_use_program") ) { return lime_gl_use_program; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { return compressedTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { return framebufferTexture2D_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { return getContextAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_texture") ) { return lime_gl_bind_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_link_program") ) { return lime_gl_link_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_pixel_storei") ) { return lime_gl_pixel_storei; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func") ) { return lime_gl_stencil_func; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask") ) { return lime_gl_stencil_mask; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_image_2d") ) { return lime_gl_tex_image_2d; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { return blendEquationSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { return getVertexAttribOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_attach_shader") ) { return lime_gl_attach_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_stencil") ) { return lime_gl_clear_stencil; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_buffer") ) { return lime_gl_create_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_shader") ) { return lime_gl_create_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_buffer") ) { return lime_gl_delete_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_shader") ) { return lime_gl_delete_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_detach_shader") ) { return lime_gl_detach_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_elements") ) { return lime_gl_draw_elements; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_parameter") ) { return lime_gl_get_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_shader_source") ) { return lime_gl_shader_source; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { return checkFramebufferStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { return getSupportedExtensions_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_active_texture") ) { return lime_gl_active_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation") ) { return lime_gl_blend_equation; }
		if (HX_FIELD_EQ(inName,"lime_gl_compile_shader") ) { return lime_gl_compile_shader; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_program") ) { return lime_gl_create_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_texture") ) { return lime_gl_create_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_program") ) { return lime_gl_delete_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_texture") ) { return lime_gl_delete_texture; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_framebuffer") ) { return lime_gl_is_framebuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_polygon_offset") ) { return lime_gl_polygon_offset; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameterf") ) { return lime_gl_tex_parameterf; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameteri") ) { return lime_gl_tex_parameteri; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix") ) { return lime_gl_uniform_matrix; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { return compressedTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { return framebufferRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_sub_data") ) { return lime_gl_buffer_sub_data; }
		if (HX_FIELD_EQ(inName,"lime_gl_generate_mipmap") ) { return lime_gl_generate_mipmap; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_renderbuffer") ) { return lime_gl_is_renderbuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_sample_coverage") ) { return lime_gl_sample_coverage; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1f") ) { return lime_gl_vertex_attrib1f; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2f") ) { return lime_gl_vertex_attrib2f; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3f") ) { return lime_gl_vertex_attrib3f; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4f") ) { return lime_gl_vertex_attrib4f; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { return getRenderbufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { return getShaderPrecisionFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_framebuffer") ) { return lime_gl_bind_framebuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_sub_image_2d") ) { return lime_gl_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_validate_program") ) { return lime_gl_validate_program; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1fv") ) { return lime_gl_vertex_attrib1fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2fv") ) { return lime_gl_vertex_attrib2fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3fv") ) { return lime_gl_vertex_attrib3fv; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4fv") ) { return lime_gl_vertex_attrib4fv; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_renderbuffer") ) { return lime_gl_bind_renderbuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_image_2d") ) { return lime_gl_copy_tex_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_attrib") ) { return lime_gl_get_active_attrib; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_source") ) { return lime_gl_get_shader_source; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameter") ) { return lime_gl_get_tex_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib") ) { return lime_gl_get_vertex_attrib; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gl_create_framebuffer") ) { return lime_gl_create_framebuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_framebuffer") ) { return lime_gl_delete_framebuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_uniform") ) { return lime_gl_get_active_uniform; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func_separate") ) { return lime_gl_blend_func_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attrib_location") ) { return lime_gl_get_attrib_location; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_info_log") ) { return lime_gl_get_shader_info_log; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op_separate") ) { return lime_gl_stencil_op_separate; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_attrib_location") ) { return lime_gl_bind_attrib_location; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_render_buffer") ) { return lime_gl_create_render_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_render_buffer") ) { return lime_gl_delete_render_buffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_info_log") ) { return lime_gl_get_program_info_log; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_parameter") ) { return lime_gl_get_shader_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform_location") ) { return lime_gl_get_uniform_location; }
		if (HX_FIELD_EQ(inName,"lime_gl_renderbuffer_storage") ) { return lime_gl_renderbuffer_storage; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_sub_image_2d") ) { return lime_gl_copy_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_texture2D") ) { return lime_gl_framebuffer_texture2D; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_paramerter") ) { return lime_gl_get_buffer_paramerter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_parameter") ) { return lime_gl_get_program_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func_separate") ) { return lime_gl_stencil_func_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask_separate") ) { return lime_gl_stencil_mask_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib_pointer") ) { return lime_gl_vertex_attrib_pointer; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_gl_get_context_attributes") ) { return lime_gl_get_context_attributes; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation_separate") ) { return lime_gl_blend_equation_separate; }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_image_2d") ) { return lime_gl_compressed_tex_image_2d; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_gl_check_framebuffer_status") ) { return lime_gl_check_framebuffer_status; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_renderbuffer") ) { return lime_gl_framebuffer_renderbuffer; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_supported_extensions") ) { return lime_gl_get_supported_extensions; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib_offset") ) { return lime_gl_get_vertex_attrib_offset; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { return getFramebufferAttachmentParameter_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_gl_enable_vertex_attrib_array") ) { return lime_gl_enable_vertex_attrib_array; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_sub_image_2d") ) { return lime_gl_compressed_tex_sub_image_2d; }
		if (HX_FIELD_EQ(inName,"lime_gl_disable_vertex_attrib_array") ) { return lime_gl_disable_vertex_attrib_array; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_render_buffer_parameter") ) { return lime_gl_get_render_buffer_parameter; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_precision_format") ) { return lime_gl_get_shader_precision_format; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameter") ) { return lime_gl_get_framebuffer_attachment_parameter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lime_gl_hint") ) { lime_gl_hint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lime_gl_clear") ) { lime_gl_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_flush") ) { lime_gl_flush=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_gl_enable") ) { lime_gl_enable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_finish") ) { lime_gl_finish=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_gl_disable") ) { lime_gl_disable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_scissor") ) { lime_gl_scissor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_version") ) { lime_gl_version=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_gl_viewport") ) { lime_gl_viewport=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_gl_cull_face") ) { lime_gl_cull_face=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_error") ) { lime_gl_get_error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_buffer") ) { lime_gl_is_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_shader") ) { lime_gl_is_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1f") ) { lime_gl_uniform1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1i") ) { lime_gl_uniform1i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2f") ) { lime_gl_uniform2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2i") ) { lime_gl_uniform2i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3f") ) { lime_gl_uniform3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3i") ) { lime_gl_uniform3i=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4f") ) { lime_gl_uniform4f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4i") ) { lime_gl_uniform4i=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func") ) { lime_gl_blend_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_color_mask") ) { lime_gl_color_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_func") ) { lime_gl_depth_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_mask") ) { lime_gl_depth_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_front_face") ) { lime_gl_front_face=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_enabled") ) { lime_gl_is_enabled=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_program") ) { lime_gl_is_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_texture") ) { lime_gl_is_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_line_width") ) { lime_gl_line_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op") ) { lime_gl_stencil_op=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1fv") ) { lime_gl_uniform1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1iv") ) { lime_gl_uniform1iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2fv") ) { lime_gl_uniform2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2iv") ) { lime_gl_uniform2iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3fv") ) { lime_gl_uniform3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3iv") ) { lime_gl_uniform3iv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4fv") ) { lime_gl_uniform4fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4iv") ) { lime_gl_uniform4iv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_buffer") ) { lime_gl_bind_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_color") ) { lime_gl_blend_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_data") ) { lime_gl_buffer_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_color") ) { lime_gl_clear_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_depth") ) { lime_gl_clear_depth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_range") ) { lime_gl_depth_range=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_arrays") ) { lime_gl_draw_arrays=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform") ) { lime_gl_get_uniform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_read_pixels") ) { lime_gl_read_pixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_use_program") ) { lime_gl_use_program=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_texture") ) { lime_gl_bind_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_link_program") ) { lime_gl_link_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_pixel_storei") ) { lime_gl_pixel_storei=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func") ) { lime_gl_stencil_func=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask") ) { lime_gl_stencil_mask=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_image_2d") ) { lime_gl_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_gl_attach_shader") ) { lime_gl_attach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_stencil") ) { lime_gl_clear_stencil=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_buffer") ) { lime_gl_create_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_shader") ) { lime_gl_create_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_buffer") ) { lime_gl_delete_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_shader") ) { lime_gl_delete_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_detach_shader") ) { lime_gl_detach_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_elements") ) { lime_gl_draw_elements=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_parameter") ) { lime_gl_get_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_shader_source") ) { lime_gl_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_gl_active_texture") ) { lime_gl_active_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation") ) { lime_gl_blend_equation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_compile_shader") ) { lime_gl_compile_shader=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_program") ) { lime_gl_create_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_texture") ) { lime_gl_create_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_program") ) { lime_gl_delete_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_texture") ) { lime_gl_delete_texture=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_framebuffer") ) { lime_gl_is_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_polygon_offset") ) { lime_gl_polygon_offset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameterf") ) { lime_gl_tex_parameterf=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameteri") ) { lime_gl_tex_parameteri=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix") ) { lime_gl_uniform_matrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_sub_data") ) { lime_gl_buffer_sub_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_generate_mipmap") ) { lime_gl_generate_mipmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_renderbuffer") ) { lime_gl_is_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_sample_coverage") ) { lime_gl_sample_coverage=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1f") ) { lime_gl_vertex_attrib1f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2f") ) { lime_gl_vertex_attrib2f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3f") ) { lime_gl_vertex_attrib3f=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4f") ) { lime_gl_vertex_attrib4f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_framebuffer") ) { lime_gl_bind_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_sub_image_2d") ) { lime_gl_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_validate_program") ) { lime_gl_validate_program=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1fv") ) { lime_gl_vertex_attrib1fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2fv") ) { lime_gl_vertex_attrib2fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3fv") ) { lime_gl_vertex_attrib3fv=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4fv") ) { lime_gl_vertex_attrib4fv=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_renderbuffer") ) { lime_gl_bind_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_image_2d") ) { lime_gl_copy_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_attrib") ) { lime_gl_get_active_attrib=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_source") ) { lime_gl_get_shader_source=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameter") ) { lime_gl_get_tex_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib") ) { lime_gl_get_vertex_attrib=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gl_create_framebuffer") ) { lime_gl_create_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_framebuffer") ) { lime_gl_delete_framebuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_uniform") ) { lime_gl_get_active_uniform=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func_separate") ) { lime_gl_blend_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attrib_location") ) { lime_gl_get_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_info_log") ) { lime_gl_get_shader_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op_separate") ) { lime_gl_stencil_op_separate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_attrib_location") ) { lime_gl_bind_attrib_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_render_buffer") ) { lime_gl_create_render_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_render_buffer") ) { lime_gl_delete_render_buffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_info_log") ) { lime_gl_get_program_info_log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_parameter") ) { lime_gl_get_shader_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform_location") ) { lime_gl_get_uniform_location=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_renderbuffer_storage") ) { lime_gl_renderbuffer_storage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_sub_image_2d") ) { lime_gl_copy_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_texture2D") ) { lime_gl_framebuffer_texture2D=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_paramerter") ) { lime_gl_get_buffer_paramerter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_parameter") ) { lime_gl_get_program_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func_separate") ) { lime_gl_stencil_func_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask_separate") ) { lime_gl_stencil_mask_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib_pointer") ) { lime_gl_vertex_attrib_pointer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_gl_get_context_attributes") ) { lime_gl_get_context_attributes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation_separate") ) { lime_gl_blend_equation_separate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_image_2d") ) { lime_gl_compressed_tex_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_gl_check_framebuffer_status") ) { lime_gl_check_framebuffer_status=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_renderbuffer") ) { lime_gl_framebuffer_renderbuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_supported_extensions") ) { lime_gl_get_supported_extensions=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib_offset") ) { lime_gl_get_vertex_attrib_offset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_gl_enable_vertex_attrib_array") ) { lime_gl_enable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_sub_image_2d") ) { lime_gl_compressed_tex_sub_image_2d=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_disable_vertex_attrib_array") ) { lime_gl_disable_vertex_attrib_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_render_buffer_parameter") ) { lime_gl_get_render_buffer_parameter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_precision_format") ) { lime_gl_get_shader_precision_format=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameter") ) { lime_gl_get_framebuffer_attachment_parameter=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEPTH_BUFFER_BIT"),
	HX_CSTRING("STENCIL_BUFFER_BIT"),
	HX_CSTRING("COLOR_BUFFER_BIT"),
	HX_CSTRING("POINTS"),
	HX_CSTRING("LINES"),
	HX_CSTRING("LINE_LOOP"),
	HX_CSTRING("LINE_STRIP"),
	HX_CSTRING("TRIANGLES"),
	HX_CSTRING("TRIANGLE_STRIP"),
	HX_CSTRING("TRIANGLE_FAN"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("SRC_COLOR"),
	HX_CSTRING("ONE_MINUS_SRC_COLOR"),
	HX_CSTRING("SRC_ALPHA"),
	HX_CSTRING("ONE_MINUS_SRC_ALPHA"),
	HX_CSTRING("DST_ALPHA"),
	HX_CSTRING("ONE_MINUS_DST_ALPHA"),
	HX_CSTRING("DST_COLOR"),
	HX_CSTRING("ONE_MINUS_DST_COLOR"),
	HX_CSTRING("SRC_ALPHA_SATURATE"),
	HX_CSTRING("FUNC_ADD"),
	HX_CSTRING("BLEND_EQUATION"),
	HX_CSTRING("BLEND_EQUATION_RGB"),
	HX_CSTRING("BLEND_EQUATION_ALPHA"),
	HX_CSTRING("FUNC_SUBTRACT"),
	HX_CSTRING("FUNC_REVERSE_SUBTRACT"),
	HX_CSTRING("BLEND_DST_RGB"),
	HX_CSTRING("BLEND_SRC_RGB"),
	HX_CSTRING("BLEND_DST_ALPHA"),
	HX_CSTRING("BLEND_SRC_ALPHA"),
	HX_CSTRING("CONSTANT_COLOR"),
	HX_CSTRING("ONE_MINUS_CONSTANT_COLOR"),
	HX_CSTRING("CONSTANT_ALPHA"),
	HX_CSTRING("ONE_MINUS_CONSTANT_ALPHA"),
	HX_CSTRING("BLEND_COLOR"),
	HX_CSTRING("ARRAY_BUFFER"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER"),
	HX_CSTRING("ARRAY_BUFFER_BINDING"),
	HX_CSTRING("ELEMENT_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("STREAM_DRAW"),
	HX_CSTRING("STATIC_DRAW"),
	HX_CSTRING("DYNAMIC_DRAW"),
	HX_CSTRING("BUFFER_SIZE"),
	HX_CSTRING("BUFFER_USAGE"),
	HX_CSTRING("CURRENT_VERTEX_ATTRIB"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT_AND_BACK"),
	HX_CSTRING("CULL_FACE"),
	HX_CSTRING("BLEND"),
	HX_CSTRING("DITHER"),
	HX_CSTRING("STENCIL_TEST"),
	HX_CSTRING("DEPTH_TEST"),
	HX_CSTRING("SCISSOR_TEST"),
	HX_CSTRING("POLYGON_OFFSET_FILL"),
	HX_CSTRING("SAMPLE_ALPHA_TO_COVERAGE"),
	HX_CSTRING("SAMPLE_COVERAGE"),
	HX_CSTRING("NO_ERROR"),
	HX_CSTRING("INVALID_ENUM"),
	HX_CSTRING("INVALID_VALUE"),
	HX_CSTRING("INVALID_OPERATION"),
	HX_CSTRING("OUT_OF_MEMORY"),
	HX_CSTRING("CW"),
	HX_CSTRING("CCW"),
	HX_CSTRING("LINE_WIDTH"),
	HX_CSTRING("ALIASED_POINT_SIZE_RANGE"),
	HX_CSTRING("ALIASED_LINE_WIDTH_RANGE"),
	HX_CSTRING("CULL_FACE_MODE"),
	HX_CSTRING("FRONT_FACE"),
	HX_CSTRING("DEPTH_RANGE"),
	HX_CSTRING("DEPTH_WRITEMASK"),
	HX_CSTRING("DEPTH_CLEAR_VALUE"),
	HX_CSTRING("DEPTH_FUNC"),
	HX_CSTRING("STENCIL_CLEAR_VALUE"),
	HX_CSTRING("STENCIL_FUNC"),
	HX_CSTRING("STENCIL_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_REF"),
	HX_CSTRING("STENCIL_VALUE_MASK"),
	HX_CSTRING("STENCIL_WRITEMASK"),
	HX_CSTRING("STENCIL_BACK_FUNC"),
	HX_CSTRING("STENCIL_BACK_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_FAIL"),
	HX_CSTRING("STENCIL_BACK_PASS_DEPTH_PASS"),
	HX_CSTRING("STENCIL_BACK_REF"),
	HX_CSTRING("STENCIL_BACK_VALUE_MASK"),
	HX_CSTRING("STENCIL_BACK_WRITEMASK"),
	HX_CSTRING("VIEWPORT"),
	HX_CSTRING("SCISSOR_BOX"),
	HX_CSTRING("COLOR_CLEAR_VALUE"),
	HX_CSTRING("COLOR_WRITEMASK"),
	HX_CSTRING("UNPACK_ALIGNMENT"),
	HX_CSTRING("PACK_ALIGNMENT"),
	HX_CSTRING("MAX_TEXTURE_SIZE"),
	HX_CSTRING("MAX_VIEWPORT_DIMS"),
	HX_CSTRING("SUBPIXEL_BITS"),
	HX_CSTRING("RED_BITS"),
	HX_CSTRING("GREEN_BITS"),
	HX_CSTRING("BLUE_BITS"),
	HX_CSTRING("ALPHA_BITS"),
	HX_CSTRING("DEPTH_BITS"),
	HX_CSTRING("STENCIL_BITS"),
	HX_CSTRING("POLYGON_OFFSET_UNITS"),
	HX_CSTRING("POLYGON_OFFSET_FACTOR"),
	HX_CSTRING("TEXTURE_BINDING_2D"),
	HX_CSTRING("SAMPLE_BUFFERS"),
	HX_CSTRING("SAMPLES"),
	HX_CSTRING("SAMPLE_COVERAGE_VALUE"),
	HX_CSTRING("SAMPLE_COVERAGE_INVERT"),
	HX_CSTRING("COMPRESSED_TEXTURE_FORMATS"),
	HX_CSTRING("DONT_CARE"),
	HX_CSTRING("FASTEST"),
	HX_CSTRING("NICEST"),
	HX_CSTRING("GENERATE_MIPMAP_HINT"),
	HX_CSTRING("BYTE"),
	HX_CSTRING("UNSIGNED_BYTE"),
	HX_CSTRING("SHORT"),
	HX_CSTRING("UNSIGNED_SHORT"),
	HX_CSTRING("INT"),
	HX_CSTRING("UNSIGNED_INT"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("DEPTH_COMPONENT"),
	HX_CSTRING("ALPHA"),
	HX_CSTRING("RGB"),
	HX_CSTRING("RGBA"),
	HX_CSTRING("LUMINANCE"),
	HX_CSTRING("LUMINANCE_ALPHA"),
	HX_CSTRING("UNSIGNED_SHORT_4_4_4_4"),
	HX_CSTRING("UNSIGNED_SHORT_5_5_5_1"),
	HX_CSTRING("UNSIGNED_SHORT_5_6_5"),
	HX_CSTRING("FRAGMENT_SHADER"),
	HX_CSTRING("VERTEX_SHADER"),
	HX_CSTRING("MAX_VERTEX_ATTRIBS"),
	HX_CSTRING("MAX_VERTEX_UNIFORM_VECTORS"),
	HX_CSTRING("MAX_VARYING_VECTORS"),
	HX_CSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_TEXTURE_IMAGE_UNITS"),
	HX_CSTRING("MAX_FRAGMENT_UNIFORM_VECTORS"),
	HX_CSTRING("SHADER_TYPE"),
	HX_CSTRING("DELETE_STATUS"),
	HX_CSTRING("LINK_STATUS"),
	HX_CSTRING("VALIDATE_STATUS"),
	HX_CSTRING("ATTACHED_SHADERS"),
	HX_CSTRING("ACTIVE_UNIFORMS"),
	HX_CSTRING("ACTIVE_ATTRIBUTES"),
	HX_CSTRING("SHADING_LANGUAGE_VERSION"),
	HX_CSTRING("CURRENT_PROGRAM"),
	HX_CSTRING("NEVER"),
	HX_CSTRING("LESS"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("LEQUAL"),
	HX_CSTRING("GREATER"),
	HX_CSTRING("NOTEQUAL"),
	HX_CSTRING("GEQUAL"),
	HX_CSTRING("ALWAYS"),
	HX_CSTRING("KEEP"),
	HX_CSTRING("REPLACE"),
	HX_CSTRING("INCR"),
	HX_CSTRING("DECR"),
	HX_CSTRING("INVERT"),
	HX_CSTRING("INCR_WRAP"),
	HX_CSTRING("DECR_WRAP"),
	HX_CSTRING("VENDOR"),
	HX_CSTRING("RENDERER"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("NEAREST"),
	HX_CSTRING("LINEAR"),
	HX_CSTRING("NEAREST_MIPMAP_NEAREST"),
	HX_CSTRING("LINEAR_MIPMAP_NEAREST"),
	HX_CSTRING("NEAREST_MIPMAP_LINEAR"),
	HX_CSTRING("LINEAR_MIPMAP_LINEAR"),
	HX_CSTRING("TEXTURE_MAG_FILTER"),
	HX_CSTRING("TEXTURE_MIN_FILTER"),
	HX_CSTRING("TEXTURE_WRAP_S"),
	HX_CSTRING("TEXTURE_WRAP_T"),
	HX_CSTRING("TEXTURE_2D"),
	HX_CSTRING("TEXTURE"),
	HX_CSTRING("TEXTURE_CUBE_MAP"),
	HX_CSTRING("TEXTURE_BINDING_CUBE_MAP"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y"),
	HX_CSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z"),
	HX_CSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z"),
	HX_CSTRING("MAX_CUBE_MAP_TEXTURE_SIZE"),
	HX_CSTRING("TEXTURE0"),
	HX_CSTRING("TEXTURE1"),
	HX_CSTRING("TEXTURE2"),
	HX_CSTRING("TEXTURE3"),
	HX_CSTRING("TEXTURE4"),
	HX_CSTRING("TEXTURE5"),
	HX_CSTRING("TEXTURE6"),
	HX_CSTRING("TEXTURE7"),
	HX_CSTRING("TEXTURE8"),
	HX_CSTRING("TEXTURE9"),
	HX_CSTRING("TEXTURE10"),
	HX_CSTRING("TEXTURE11"),
	HX_CSTRING("TEXTURE12"),
	HX_CSTRING("TEXTURE13"),
	HX_CSTRING("TEXTURE14"),
	HX_CSTRING("TEXTURE15"),
	HX_CSTRING("TEXTURE16"),
	HX_CSTRING("TEXTURE17"),
	HX_CSTRING("TEXTURE18"),
	HX_CSTRING("TEXTURE19"),
	HX_CSTRING("TEXTURE20"),
	HX_CSTRING("TEXTURE21"),
	HX_CSTRING("TEXTURE22"),
	HX_CSTRING("TEXTURE23"),
	HX_CSTRING("TEXTURE24"),
	HX_CSTRING("TEXTURE25"),
	HX_CSTRING("TEXTURE26"),
	HX_CSTRING("TEXTURE27"),
	HX_CSTRING("TEXTURE28"),
	HX_CSTRING("TEXTURE29"),
	HX_CSTRING("TEXTURE30"),
	HX_CSTRING("TEXTURE31"),
	HX_CSTRING("ACTIVE_TEXTURE"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("CLAMP_TO_EDGE"),
	HX_CSTRING("MIRRORED_REPEAT"),
	HX_CSTRING("FLOAT_VEC2"),
	HX_CSTRING("FLOAT_VEC3"),
	HX_CSTRING("FLOAT_VEC4"),
	HX_CSTRING("INT_VEC2"),
	HX_CSTRING("INT_VEC3"),
	HX_CSTRING("INT_VEC4"),
	HX_CSTRING("BOOL"),
	HX_CSTRING("BOOL_VEC2"),
	HX_CSTRING("BOOL_VEC3"),
	HX_CSTRING("BOOL_VEC4"),
	HX_CSTRING("FLOAT_MAT2"),
	HX_CSTRING("FLOAT_MAT3"),
	HX_CSTRING("FLOAT_MAT4"),
	HX_CSTRING("SAMPLER_2D"),
	HX_CSTRING("SAMPLER_CUBE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_ENABLED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_SIZE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_STRIDE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_TYPE"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_POINTER"),
	HX_CSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING"),
	HX_CSTRING("VERTEX_PROGRAM_POINT_SIZE"),
	HX_CSTRING("POINT_SPRITE"),
	HX_CSTRING("COMPILE_STATUS"),
	HX_CSTRING("LOW_FLOAT"),
	HX_CSTRING("MEDIUM_FLOAT"),
	HX_CSTRING("HIGH_FLOAT"),
	HX_CSTRING("LOW_INT"),
	HX_CSTRING("MEDIUM_INT"),
	HX_CSTRING("HIGH_INT"),
	HX_CSTRING("FRAMEBUFFER"),
	HX_CSTRING("RENDERBUFFER"),
	HX_CSTRING("RGBA4"),
	HX_CSTRING("RGB5_A1"),
	HX_CSTRING("RGB565"),
	HX_CSTRING("DEPTH_COMPONENT16"),
	HX_CSTRING("STENCIL_INDEX"),
	HX_CSTRING("STENCIL_INDEX8"),
	HX_CSTRING("DEPTH_STENCIL"),
	HX_CSTRING("RENDERBUFFER_WIDTH"),
	HX_CSTRING("RENDERBUFFER_HEIGHT"),
	HX_CSTRING("RENDERBUFFER_INTERNAL_FORMAT"),
	HX_CSTRING("RENDERBUFFER_RED_SIZE"),
	HX_CSTRING("RENDERBUFFER_GREEN_SIZE"),
	HX_CSTRING("RENDERBUFFER_BLUE_SIZE"),
	HX_CSTRING("RENDERBUFFER_ALPHA_SIZE"),
	HX_CSTRING("RENDERBUFFER_DEPTH_SIZE"),
	HX_CSTRING("RENDERBUFFER_STENCIL_SIZE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL"),
	HX_CSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE"),
	HX_CSTRING("COLOR_ATTACHMENT0"),
	HX_CSTRING("DEPTH_ATTACHMENT"),
	HX_CSTRING("STENCIL_ATTACHMENT"),
	HX_CSTRING("DEPTH_STENCIL_ATTACHMENT"),
	HX_CSTRING("NONE"),
	HX_CSTRING("FRAMEBUFFER_COMPLETE"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT"),
	HX_CSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS"),
	HX_CSTRING("FRAMEBUFFER_UNSUPPORTED"),
	HX_CSTRING("FRAMEBUFFER_BINDING"),
	HX_CSTRING("RENDERBUFFER_BINDING"),
	HX_CSTRING("MAX_RENDERBUFFER_SIZE"),
	HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION"),
	HX_CSTRING("UNPACK_FLIP_Y_WEBGL"),
	HX_CSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL"),
	HX_CSTRING("CONTEXT_LOST_WEBGL"),
	HX_CSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL"),
	HX_CSTRING("BROWSER_DEFAULT_WEBGL"),
	HX_CSTRING("version"),
	HX_CSTRING("activeTexture"),
	HX_CSTRING("attachShader"),
	HX_CSTRING("bindAttribLocation"),
	HX_CSTRING("bindBuffer"),
	HX_CSTRING("bindFramebuffer"),
	HX_CSTRING("bindRenderbuffer"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("blendColor"),
	HX_CSTRING("blendEquation"),
	HX_CSTRING("blendEquationSeparate"),
	HX_CSTRING("blendFunc"),
	HX_CSTRING("blendFuncSeparate"),
	HX_CSTRING("bufferData"),
	HX_CSTRING("bufferSubData"),
	HX_CSTRING("checkFramebufferStatus"),
	HX_CSTRING("clear"),
	HX_CSTRING("clearColor"),
	HX_CSTRING("clearDepth"),
	HX_CSTRING("clearStencil"),
	HX_CSTRING("colorMask"),
	HX_CSTRING("compileShader"),
	HX_CSTRING("compressedTexImage2D"),
	HX_CSTRING("compressedTexSubImage2D"),
	HX_CSTRING("copyTexImage2D"),
	HX_CSTRING("copyTexSubImage2D"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("createFramebuffer"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createRenderbuffer"),
	HX_CSTRING("createShader"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("cullFace"),
	HX_CSTRING("deleteBuffer"),
	HX_CSTRING("deleteFramebuffer"),
	HX_CSTRING("deleteProgram"),
	HX_CSTRING("deleteRenderbuffer"),
	HX_CSTRING("deleteShader"),
	HX_CSTRING("deleteTexture"),
	HX_CSTRING("depthFunc"),
	HX_CSTRING("depthMask"),
	HX_CSTRING("depthRange"),
	HX_CSTRING("detachShader"),
	HX_CSTRING("disable"),
	HX_CSTRING("disableVertexAttribArray"),
	HX_CSTRING("drawArrays"),
	HX_CSTRING("drawElements"),
	HX_CSTRING("enable"),
	HX_CSTRING("enableVertexAttribArray"),
	HX_CSTRING("finish"),
	HX_CSTRING("flush"),
	HX_CSTRING("framebufferRenderbuffer"),
	HX_CSTRING("framebufferTexture2D"),
	HX_CSTRING("frontFace"),
	HX_CSTRING("generateMipmap"),
	HX_CSTRING("getActiveAttrib"),
	HX_CSTRING("getActiveUniform"),
	HX_CSTRING("getAttachedShaders"),
	HX_CSTRING("getAttribLocation"),
	HX_CSTRING("getBufferParameter"),
	HX_CSTRING("getContextAttributes"),
	HX_CSTRING("getError"),
	HX_CSTRING("getExtension"),
	HX_CSTRING("getFramebufferAttachmentParameter"),
	HX_CSTRING("getParameter"),
	HX_CSTRING("getProgramInfoLog"),
	HX_CSTRING("getProgramParameter"),
	HX_CSTRING("getRenderbufferParameter"),
	HX_CSTRING("getShaderInfoLog"),
	HX_CSTRING("getShaderParameter"),
	HX_CSTRING("getShaderPrecisionFormat"),
	HX_CSTRING("getShaderSource"),
	HX_CSTRING("getSupportedExtensions"),
	HX_CSTRING("getTexParameter"),
	HX_CSTRING("getUniform"),
	HX_CSTRING("getUniformLocation"),
	HX_CSTRING("getVertexAttrib"),
	HX_CSTRING("getVertexAttribOffset"),
	HX_CSTRING("hint"),
	HX_CSTRING("isBuffer"),
	HX_CSTRING("isContextLost"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("isFramebuffer"),
	HX_CSTRING("isProgram"),
	HX_CSTRING("isRenderbuffer"),
	HX_CSTRING("isShader"),
	HX_CSTRING("isTexture"),
	HX_CSTRING("lineWidth"),
	HX_CSTRING("linkProgram"),
	HX_CSTRING("pixelStorei"),
	HX_CSTRING("polygonOffset"),
	HX_CSTRING("readPixels"),
	HX_CSTRING("renderbufferStorage"),
	HX_CSTRING("sampleCoverage"),
	HX_CSTRING("scissor"),
	HX_CSTRING("shaderSource"),
	HX_CSTRING("stencilFunc"),
	HX_CSTRING("stencilFuncSeparate"),
	HX_CSTRING("stencilMask"),
	HX_CSTRING("stencilMaskSeparate"),
	HX_CSTRING("stencilOp"),
	HX_CSTRING("stencilOpSeparate"),
	HX_CSTRING("texImage2D"),
	HX_CSTRING("texParameterf"),
	HX_CSTRING("texParameteri"),
	HX_CSTRING("texSubImage2D"),
	HX_CSTRING("uniform1f"),
	HX_CSTRING("uniform1fv"),
	HX_CSTRING("uniform1i"),
	HX_CSTRING("uniform1iv"),
	HX_CSTRING("uniform2f"),
	HX_CSTRING("uniform2fv"),
	HX_CSTRING("uniform2i"),
	HX_CSTRING("uniform2iv"),
	HX_CSTRING("uniform3f"),
	HX_CSTRING("uniform3fv"),
	HX_CSTRING("uniform3i"),
	HX_CSTRING("uniform3iv"),
	HX_CSTRING("uniform4f"),
	HX_CSTRING("uniform4fv"),
	HX_CSTRING("uniform4i"),
	HX_CSTRING("uniform4iv"),
	HX_CSTRING("uniformMatrix2fv"),
	HX_CSTRING("uniformMatrix3fv"),
	HX_CSTRING("uniformMatrix4fv"),
	HX_CSTRING("useProgram"),
	HX_CSTRING("validateProgram"),
	HX_CSTRING("vertexAttrib1f"),
	HX_CSTRING("vertexAttrib1fv"),
	HX_CSTRING("vertexAttrib2f"),
	HX_CSTRING("vertexAttrib2fv"),
	HX_CSTRING("vertexAttrib3f"),
	HX_CSTRING("vertexAttrib3fv"),
	HX_CSTRING("vertexAttrib4f"),
	HX_CSTRING("vertexAttrib4fv"),
	HX_CSTRING("vertexAttribPointer"),
	HX_CSTRING("viewport"),
	HX_CSTRING("get_version"),
	HX_CSTRING("lime_gl_active_texture"),
	HX_CSTRING("lime_gl_attach_shader"),
	HX_CSTRING("lime_gl_bind_attrib_location"),
	HX_CSTRING("lime_gl_bind_buffer"),
	HX_CSTRING("lime_gl_bind_framebuffer"),
	HX_CSTRING("lime_gl_bind_renderbuffer"),
	HX_CSTRING("lime_gl_bind_texture"),
	HX_CSTRING("lime_gl_blend_color"),
	HX_CSTRING("lime_gl_blend_equation"),
	HX_CSTRING("lime_gl_blend_equation_separate"),
	HX_CSTRING("lime_gl_blend_func"),
	HX_CSTRING("lime_gl_blend_func_separate"),
	HX_CSTRING("lime_gl_buffer_data"),
	HX_CSTRING("lime_gl_buffer_sub_data"),
	HX_CSTRING("lime_gl_check_framebuffer_status"),
	HX_CSTRING("lime_gl_clear"),
	HX_CSTRING("lime_gl_clear_color"),
	HX_CSTRING("lime_gl_clear_depth"),
	HX_CSTRING("lime_gl_clear_stencil"),
	HX_CSTRING("lime_gl_color_mask"),
	HX_CSTRING("lime_gl_compile_shader"),
	HX_CSTRING("lime_gl_compressed_tex_image_2d"),
	HX_CSTRING("lime_gl_compressed_tex_sub_image_2d"),
	HX_CSTRING("lime_gl_copy_tex_image_2d"),
	HX_CSTRING("lime_gl_copy_tex_sub_image_2d"),
	HX_CSTRING("lime_gl_create_buffer"),
	HX_CSTRING("lime_gl_create_framebuffer"),
	HX_CSTRING("lime_gl_create_program"),
	HX_CSTRING("lime_gl_create_render_buffer"),
	HX_CSTRING("lime_gl_create_shader"),
	HX_CSTRING("lime_gl_create_texture"),
	HX_CSTRING("lime_gl_cull_face"),
	HX_CSTRING("lime_gl_delete_buffer"),
	HX_CSTRING("lime_gl_delete_framebuffer"),
	HX_CSTRING("lime_gl_delete_program"),
	HX_CSTRING("lime_gl_delete_render_buffer"),
	HX_CSTRING("lime_gl_delete_shader"),
	HX_CSTRING("lime_gl_delete_texture"),
	HX_CSTRING("lime_gl_depth_func"),
	HX_CSTRING("lime_gl_depth_mask"),
	HX_CSTRING("lime_gl_depth_range"),
	HX_CSTRING("lime_gl_detach_shader"),
	HX_CSTRING("lime_gl_disable"),
	HX_CSTRING("lime_gl_disable_vertex_attrib_array"),
	HX_CSTRING("lime_gl_draw_arrays"),
	HX_CSTRING("lime_gl_draw_elements"),
	HX_CSTRING("lime_gl_enable"),
	HX_CSTRING("lime_gl_enable_vertex_attrib_array"),
	HX_CSTRING("lime_gl_finish"),
	HX_CSTRING("lime_gl_flush"),
	HX_CSTRING("lime_gl_framebuffer_renderbuffer"),
	HX_CSTRING("lime_gl_framebuffer_texture2D"),
	HX_CSTRING("lime_gl_front_face"),
	HX_CSTRING("lime_gl_generate_mipmap"),
	HX_CSTRING("lime_gl_get_active_attrib"),
	HX_CSTRING("lime_gl_get_active_uniform"),
	HX_CSTRING("lime_gl_get_attrib_location"),
	HX_CSTRING("lime_gl_get_buffer_paramerter"),
	HX_CSTRING("lime_gl_get_context_attributes"),
	HX_CSTRING("lime_gl_get_error"),
	HX_CSTRING("lime_gl_get_framebuffer_attachment_parameter"),
	HX_CSTRING("lime_gl_get_parameter"),
	HX_CSTRING("lime_gl_get_program_info_log"),
	HX_CSTRING("lime_gl_get_program_parameter"),
	HX_CSTRING("lime_gl_get_render_buffer_parameter"),
	HX_CSTRING("lime_gl_get_shader_info_log"),
	HX_CSTRING("lime_gl_get_shader_parameter"),
	HX_CSTRING("lime_gl_get_shader_precision_format"),
	HX_CSTRING("lime_gl_get_shader_source"),
	HX_CSTRING("lime_gl_get_supported_extensions"),
	HX_CSTRING("lime_gl_get_tex_parameter"),
	HX_CSTRING("lime_gl_get_uniform"),
	HX_CSTRING("lime_gl_get_uniform_location"),
	HX_CSTRING("lime_gl_get_vertex_attrib"),
	HX_CSTRING("lime_gl_get_vertex_attrib_offset"),
	HX_CSTRING("lime_gl_hint"),
	HX_CSTRING("lime_gl_is_buffer"),
	HX_CSTRING("lime_gl_is_enabled"),
	HX_CSTRING("lime_gl_is_framebuffer"),
	HX_CSTRING("lime_gl_is_program"),
	HX_CSTRING("lime_gl_is_renderbuffer"),
	HX_CSTRING("lime_gl_is_shader"),
	HX_CSTRING("lime_gl_is_texture"),
	HX_CSTRING("lime_gl_line_width"),
	HX_CSTRING("lime_gl_link_program"),
	HX_CSTRING("lime_gl_pixel_storei"),
	HX_CSTRING("lime_gl_polygon_offset"),
	HX_CSTRING("lime_gl_read_pixels"),
	HX_CSTRING("lime_gl_renderbuffer_storage"),
	HX_CSTRING("lime_gl_sample_coverage"),
	HX_CSTRING("lime_gl_scissor"),
	HX_CSTRING("lime_gl_shader_source"),
	HX_CSTRING("lime_gl_stencil_func"),
	HX_CSTRING("lime_gl_stencil_func_separate"),
	HX_CSTRING("lime_gl_stencil_mask"),
	HX_CSTRING("lime_gl_stencil_mask_separate"),
	HX_CSTRING("lime_gl_stencil_op"),
	HX_CSTRING("lime_gl_stencil_op_separate"),
	HX_CSTRING("lime_gl_tex_image_2d"),
	HX_CSTRING("lime_gl_tex_parameterf"),
	HX_CSTRING("lime_gl_tex_parameteri"),
	HX_CSTRING("lime_gl_tex_sub_image_2d"),
	HX_CSTRING("lime_gl_uniform1f"),
	HX_CSTRING("lime_gl_uniform1fv"),
	HX_CSTRING("lime_gl_uniform1i"),
	HX_CSTRING("lime_gl_uniform1iv"),
	HX_CSTRING("lime_gl_uniform2f"),
	HX_CSTRING("lime_gl_uniform2fv"),
	HX_CSTRING("lime_gl_uniform2i"),
	HX_CSTRING("lime_gl_uniform2iv"),
	HX_CSTRING("lime_gl_uniform3f"),
	HX_CSTRING("lime_gl_uniform3fv"),
	HX_CSTRING("lime_gl_uniform3i"),
	HX_CSTRING("lime_gl_uniform3iv"),
	HX_CSTRING("lime_gl_uniform4f"),
	HX_CSTRING("lime_gl_uniform4fv"),
	HX_CSTRING("lime_gl_uniform4i"),
	HX_CSTRING("lime_gl_uniform4iv"),
	HX_CSTRING("lime_gl_uniform_matrix"),
	HX_CSTRING("lime_gl_use_program"),
	HX_CSTRING("lime_gl_validate_program"),
	HX_CSTRING("lime_gl_version"),
	HX_CSTRING("lime_gl_vertex_attrib1f"),
	HX_CSTRING("lime_gl_vertex_attrib1fv"),
	HX_CSTRING("lime_gl_vertex_attrib2f"),
	HX_CSTRING("lime_gl_vertex_attrib2fv"),
	HX_CSTRING("lime_gl_vertex_attrib3f"),
	HX_CSTRING("lime_gl_vertex_attrib3fv"),
	HX_CSTRING("lime_gl_vertex_attrib4f"),
	HX_CSTRING("lime_gl_vertex_attrib4fv"),
	HX_CSTRING("lime_gl_vertex_attrib_pointer"),
	HX_CSTRING("lime_gl_viewport"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(GL_obj::CW,"CW");
	HX_MARK_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::INT,"INT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_MARK_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_MARK_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_MARK_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::version,"version");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_active_texture,"lime_gl_active_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_attach_shader,"lime_gl_attach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_attrib_location,"lime_gl_bind_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_buffer,"lime_gl_bind_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_framebuffer,"lime_gl_bind_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_renderbuffer,"lime_gl_bind_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_texture,"lime_gl_bind_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_color,"lime_gl_blend_color");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_equation,"lime_gl_blend_equation");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_equation_separate,"lime_gl_blend_equation_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_func,"lime_gl_blend_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_func_separate,"lime_gl_blend_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_buffer_data,"lime_gl_buffer_data");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_buffer_sub_data,"lime_gl_buffer_sub_data");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_check_framebuffer_status,"lime_gl_check_framebuffer_status");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear,"lime_gl_clear");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_color,"lime_gl_clear_color");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_depth,"lime_gl_clear_depth");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_stencil,"lime_gl_clear_stencil");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_color_mask,"lime_gl_color_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compile_shader,"lime_gl_compile_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_image_2d,"lime_gl_compressed_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_sub_image_2d,"lime_gl_compressed_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_copy_tex_image_2d,"lime_gl_copy_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_copy_tex_sub_image_2d,"lime_gl_copy_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_buffer,"lime_gl_create_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_framebuffer,"lime_gl_create_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_program,"lime_gl_create_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_render_buffer,"lime_gl_create_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_shader,"lime_gl_create_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_texture,"lime_gl_create_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_cull_face,"lime_gl_cull_face");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_buffer,"lime_gl_delete_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_framebuffer,"lime_gl_delete_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_program,"lime_gl_delete_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_render_buffer,"lime_gl_delete_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_shader,"lime_gl_delete_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_texture,"lime_gl_delete_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_func,"lime_gl_depth_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_mask,"lime_gl_depth_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_range,"lime_gl_depth_range");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_detach_shader,"lime_gl_detach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_disable,"lime_gl_disable");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_disable_vertex_attrib_array,"lime_gl_disable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_draw_arrays,"lime_gl_draw_arrays");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_draw_elements,"lime_gl_draw_elements");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_enable,"lime_gl_enable");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_enable_vertex_attrib_array,"lime_gl_enable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_finish,"lime_gl_finish");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_flush,"lime_gl_flush");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_framebuffer_renderbuffer,"lime_gl_framebuffer_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_framebuffer_texture2D,"lime_gl_framebuffer_texture2D");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_front_face,"lime_gl_front_face");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_generate_mipmap,"lime_gl_generate_mipmap");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_active_attrib,"lime_gl_get_active_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_active_uniform,"lime_gl_get_active_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_attrib_location,"lime_gl_get_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_buffer_paramerter,"lime_gl_get_buffer_paramerter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_context_attributes,"lime_gl_get_context_attributes");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_error,"lime_gl_get_error");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_framebuffer_attachment_parameter,"lime_gl_get_framebuffer_attachment_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_parameter,"lime_gl_get_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_program_info_log,"lime_gl_get_program_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_program_parameter,"lime_gl_get_program_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_render_buffer_parameter,"lime_gl_get_render_buffer_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_info_log,"lime_gl_get_shader_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_parameter,"lime_gl_get_shader_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_precision_format,"lime_gl_get_shader_precision_format");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_source,"lime_gl_get_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_supported_extensions,"lime_gl_get_supported_extensions");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_tex_parameter,"lime_gl_get_tex_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_uniform,"lime_gl_get_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_uniform_location,"lime_gl_get_uniform_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib,"lime_gl_get_vertex_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib_offset,"lime_gl_get_vertex_attrib_offset");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_hint,"lime_gl_hint");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_buffer,"lime_gl_is_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_enabled,"lime_gl_is_enabled");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_framebuffer,"lime_gl_is_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_program,"lime_gl_is_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_renderbuffer,"lime_gl_is_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_shader,"lime_gl_is_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_texture,"lime_gl_is_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_line_width,"lime_gl_line_width");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_link_program,"lime_gl_link_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_pixel_storei,"lime_gl_pixel_storei");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_polygon_offset,"lime_gl_polygon_offset");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_read_pixels,"lime_gl_read_pixels");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_renderbuffer_storage,"lime_gl_renderbuffer_storage");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_sample_coverage,"lime_gl_sample_coverage");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_scissor,"lime_gl_scissor");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_shader_source,"lime_gl_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_func,"lime_gl_stencil_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_func_separate,"lime_gl_stencil_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_mask,"lime_gl_stencil_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_mask_separate,"lime_gl_stencil_mask_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_op,"lime_gl_stencil_op");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_op_separate,"lime_gl_stencil_op_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_image_2d,"lime_gl_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_parameterf,"lime_gl_tex_parameterf");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_parameteri,"lime_gl_tex_parameteri");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_sub_image_2d,"lime_gl_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1f,"lime_gl_uniform1f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1fv,"lime_gl_uniform1fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1i,"lime_gl_uniform1i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1iv,"lime_gl_uniform1iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2f,"lime_gl_uniform2f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2fv,"lime_gl_uniform2fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2i,"lime_gl_uniform2i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2iv,"lime_gl_uniform2iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3f,"lime_gl_uniform3f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3fv,"lime_gl_uniform3fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3i,"lime_gl_uniform3i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3iv,"lime_gl_uniform3iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4f,"lime_gl_uniform4f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4fv,"lime_gl_uniform4fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4i,"lime_gl_uniform4i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4iv,"lime_gl_uniform4iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform_matrix,"lime_gl_uniform_matrix");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_use_program,"lime_gl_use_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_validate_program,"lime_gl_validate_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_version,"lime_gl_version");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1f,"lime_gl_vertex_attrib1f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1fv,"lime_gl_vertex_attrib1fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2f,"lime_gl_vertex_attrib2f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2fv,"lime_gl_vertex_attrib2fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3f,"lime_gl_vertex_attrib3f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3fv,"lime_gl_vertex_attrib3fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4f,"lime_gl_vertex_attrib4f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4fv,"lime_gl_vertex_attrib4fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib_pointer,"lime_gl_vertex_attrib_pointer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_viewport,"lime_gl_viewport");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(GL_obj::CW,"CW");
	HX_VISIT_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::version,"version");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_active_texture,"lime_gl_active_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_attach_shader,"lime_gl_attach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_attrib_location,"lime_gl_bind_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_buffer,"lime_gl_bind_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_framebuffer,"lime_gl_bind_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_renderbuffer,"lime_gl_bind_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_texture,"lime_gl_bind_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_color,"lime_gl_blend_color");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_equation,"lime_gl_blend_equation");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_equation_separate,"lime_gl_blend_equation_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_func,"lime_gl_blend_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_func_separate,"lime_gl_blend_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_buffer_data,"lime_gl_buffer_data");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_buffer_sub_data,"lime_gl_buffer_sub_data");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_check_framebuffer_status,"lime_gl_check_framebuffer_status");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear,"lime_gl_clear");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_color,"lime_gl_clear_color");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_depth,"lime_gl_clear_depth");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_stencil,"lime_gl_clear_stencil");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_color_mask,"lime_gl_color_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compile_shader,"lime_gl_compile_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_image_2d,"lime_gl_compressed_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_sub_image_2d,"lime_gl_compressed_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_copy_tex_image_2d,"lime_gl_copy_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_copy_tex_sub_image_2d,"lime_gl_copy_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_buffer,"lime_gl_create_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_framebuffer,"lime_gl_create_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_program,"lime_gl_create_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_render_buffer,"lime_gl_create_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_shader,"lime_gl_create_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_texture,"lime_gl_create_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_cull_face,"lime_gl_cull_face");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_buffer,"lime_gl_delete_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_framebuffer,"lime_gl_delete_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_program,"lime_gl_delete_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_render_buffer,"lime_gl_delete_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_shader,"lime_gl_delete_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_texture,"lime_gl_delete_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_func,"lime_gl_depth_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_mask,"lime_gl_depth_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_range,"lime_gl_depth_range");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_detach_shader,"lime_gl_detach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_disable,"lime_gl_disable");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_disable_vertex_attrib_array,"lime_gl_disable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_draw_arrays,"lime_gl_draw_arrays");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_draw_elements,"lime_gl_draw_elements");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_enable,"lime_gl_enable");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_enable_vertex_attrib_array,"lime_gl_enable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_finish,"lime_gl_finish");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_flush,"lime_gl_flush");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_framebuffer_renderbuffer,"lime_gl_framebuffer_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_framebuffer_texture2D,"lime_gl_framebuffer_texture2D");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_front_face,"lime_gl_front_face");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_generate_mipmap,"lime_gl_generate_mipmap");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_active_attrib,"lime_gl_get_active_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_active_uniform,"lime_gl_get_active_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_attrib_location,"lime_gl_get_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_buffer_paramerter,"lime_gl_get_buffer_paramerter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_context_attributes,"lime_gl_get_context_attributes");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_error,"lime_gl_get_error");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_framebuffer_attachment_parameter,"lime_gl_get_framebuffer_attachment_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_parameter,"lime_gl_get_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_program_info_log,"lime_gl_get_program_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_program_parameter,"lime_gl_get_program_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_render_buffer_parameter,"lime_gl_get_render_buffer_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_info_log,"lime_gl_get_shader_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_parameter,"lime_gl_get_shader_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_precision_format,"lime_gl_get_shader_precision_format");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_source,"lime_gl_get_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_supported_extensions,"lime_gl_get_supported_extensions");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_tex_parameter,"lime_gl_get_tex_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_uniform,"lime_gl_get_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_uniform_location,"lime_gl_get_uniform_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib,"lime_gl_get_vertex_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib_offset,"lime_gl_get_vertex_attrib_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_hint,"lime_gl_hint");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_buffer,"lime_gl_is_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_enabled,"lime_gl_is_enabled");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_framebuffer,"lime_gl_is_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_program,"lime_gl_is_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_renderbuffer,"lime_gl_is_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_shader,"lime_gl_is_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_texture,"lime_gl_is_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_line_width,"lime_gl_line_width");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_link_program,"lime_gl_link_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_pixel_storei,"lime_gl_pixel_storei");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_polygon_offset,"lime_gl_polygon_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_read_pixels,"lime_gl_read_pixels");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_renderbuffer_storage,"lime_gl_renderbuffer_storage");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_sample_coverage,"lime_gl_sample_coverage");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_scissor,"lime_gl_scissor");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_shader_source,"lime_gl_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_func,"lime_gl_stencil_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_func_separate,"lime_gl_stencil_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_mask,"lime_gl_stencil_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_mask_separate,"lime_gl_stencil_mask_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_op,"lime_gl_stencil_op");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_op_separate,"lime_gl_stencil_op_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_image_2d,"lime_gl_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_parameterf,"lime_gl_tex_parameterf");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_parameteri,"lime_gl_tex_parameteri");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_sub_image_2d,"lime_gl_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1f,"lime_gl_uniform1f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1fv,"lime_gl_uniform1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1i,"lime_gl_uniform1i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1iv,"lime_gl_uniform1iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2f,"lime_gl_uniform2f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2fv,"lime_gl_uniform2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2i,"lime_gl_uniform2i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2iv,"lime_gl_uniform2iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3f,"lime_gl_uniform3f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3fv,"lime_gl_uniform3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3i,"lime_gl_uniform3i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3iv,"lime_gl_uniform3iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4f,"lime_gl_uniform4f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4fv,"lime_gl_uniform4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4i,"lime_gl_uniform4i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4iv,"lime_gl_uniform4iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform_matrix,"lime_gl_uniform_matrix");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_use_program,"lime_gl_use_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_validate_program,"lime_gl_validate_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_version,"lime_gl_version");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1f,"lime_gl_vertex_attrib1f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1fv,"lime_gl_vertex_attrib1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2f,"lime_gl_vertex_attrib2f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2fv,"lime_gl_vertex_attrib2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3f,"lime_gl_vertex_attrib3f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3fv,"lime_gl_vertex_attrib3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4f,"lime_gl_vertex_attrib4f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4fv,"lime_gl_vertex_attrib4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib_pointer,"lime_gl_vertex_attrib_pointer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_viewport,"lime_gl_viewport");
};

#endif

Class GL_obj::__mClass;

void GL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.opengl.GL"), hx::TCanCast< GL_obj> ,sStaticFields,sMemberFields,
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

void GL_obj::__boot()
{
	DEPTH_BUFFER_BIT= (int)256;
	STENCIL_BUFFER_BIT= (int)1024;
	COLOR_BUFFER_BIT= (int)16384;
	POINTS= (int)0;
	LINES= (int)1;
	LINE_LOOP= (int)2;
	LINE_STRIP= (int)3;
	TRIANGLES= (int)4;
	TRIANGLE_STRIP= (int)5;
	TRIANGLE_FAN= (int)6;
	ZERO= (int)0;
	ONE= (int)1;
	SRC_COLOR= (int)768;
	ONE_MINUS_SRC_COLOR= (int)769;
	SRC_ALPHA= (int)770;
	ONE_MINUS_SRC_ALPHA= (int)771;
	DST_ALPHA= (int)772;
	ONE_MINUS_DST_ALPHA= (int)773;
	DST_COLOR= (int)774;
	ONE_MINUS_DST_COLOR= (int)775;
	SRC_ALPHA_SATURATE= (int)776;
	FUNC_ADD= (int)32774;
	BLEND_EQUATION= (int)32777;
	BLEND_EQUATION_RGB= (int)32777;
	BLEND_EQUATION_ALPHA= (int)34877;
	FUNC_SUBTRACT= (int)32778;
	FUNC_REVERSE_SUBTRACT= (int)32779;
	BLEND_DST_RGB= (int)32968;
	BLEND_SRC_RGB= (int)32969;
	BLEND_DST_ALPHA= (int)32970;
	BLEND_SRC_ALPHA= (int)32971;
	CONSTANT_COLOR= (int)32769;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	CONSTANT_ALPHA= (int)32771;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	BLEND_COLOR= (int)32773;
	ARRAY_BUFFER= (int)34962;
	ELEMENT_ARRAY_BUFFER= (int)34963;
	ARRAY_BUFFER_BINDING= (int)34964;
	ELEMENT_ARRAY_BUFFER_BINDING= (int)34965;
	STREAM_DRAW= (int)35040;
	STATIC_DRAW= (int)35044;
	DYNAMIC_DRAW= (int)35048;
	BUFFER_SIZE= (int)34660;
	BUFFER_USAGE= (int)34661;
	CURRENT_VERTEX_ATTRIB= (int)34342;
	FRONT= (int)1028;
	BACK= (int)1029;
	FRONT_AND_BACK= (int)1032;
	CULL_FACE= (int)2884;
	BLEND= (int)3042;
	DITHER= (int)3024;
	STENCIL_TEST= (int)2960;
	DEPTH_TEST= (int)2929;
	SCISSOR_TEST= (int)3089;
	POLYGON_OFFSET_FILL= (int)32823;
	SAMPLE_ALPHA_TO_COVERAGE= (int)32926;
	SAMPLE_COVERAGE= (int)32928;
	NO_ERROR= (int)0;
	INVALID_ENUM= (int)1280;
	INVALID_VALUE= (int)1281;
	INVALID_OPERATION= (int)1282;
	OUT_OF_MEMORY= (int)1285;
	CW= (int)2304;
	CCW= (int)2305;
	LINE_WIDTH= (int)2849;
	ALIASED_POINT_SIZE_RANGE= (int)33901;
	ALIASED_LINE_WIDTH_RANGE= (int)33902;
	CULL_FACE_MODE= (int)2885;
	FRONT_FACE= (int)2886;
	DEPTH_RANGE= (int)2928;
	DEPTH_WRITEMASK= (int)2930;
	DEPTH_CLEAR_VALUE= (int)2931;
	DEPTH_FUNC= (int)2932;
	STENCIL_CLEAR_VALUE= (int)2961;
	STENCIL_FUNC= (int)2962;
	STENCIL_FAIL= (int)2964;
	STENCIL_PASS_DEPTH_FAIL= (int)2965;
	STENCIL_PASS_DEPTH_PASS= (int)2966;
	STENCIL_REF= (int)2967;
	STENCIL_VALUE_MASK= (int)2963;
	STENCIL_WRITEMASK= (int)2968;
	STENCIL_BACK_FUNC= (int)34816;
	STENCIL_BACK_FAIL= (int)34817;
	STENCIL_BACK_PASS_DEPTH_FAIL= (int)34818;
	STENCIL_BACK_PASS_DEPTH_PASS= (int)34819;
	STENCIL_BACK_REF= (int)36003;
	STENCIL_BACK_VALUE_MASK= (int)36004;
	STENCIL_BACK_WRITEMASK= (int)36005;
	VIEWPORT= (int)2978;
	SCISSOR_BOX= (int)3088;
	COLOR_CLEAR_VALUE= (int)3106;
	COLOR_WRITEMASK= (int)3107;
	UNPACK_ALIGNMENT= (int)3317;
	PACK_ALIGNMENT= (int)3333;
	MAX_TEXTURE_SIZE= (int)3379;
	MAX_VIEWPORT_DIMS= (int)3386;
	SUBPIXEL_BITS= (int)3408;
	RED_BITS= (int)3410;
	GREEN_BITS= (int)3411;
	BLUE_BITS= (int)3412;
	ALPHA_BITS= (int)3413;
	DEPTH_BITS= (int)3414;
	STENCIL_BITS= (int)3415;
	POLYGON_OFFSET_UNITS= (int)10752;
	POLYGON_OFFSET_FACTOR= (int)32824;
	TEXTURE_BINDING_2D= (int)32873;
	SAMPLE_BUFFERS= (int)32936;
	SAMPLES= (int)32937;
	SAMPLE_COVERAGE_VALUE= (int)32938;
	SAMPLE_COVERAGE_INVERT= (int)32939;
	COMPRESSED_TEXTURE_FORMATS= (int)34467;
	DONT_CARE= (int)4352;
	FASTEST= (int)4353;
	NICEST= (int)4354;
	GENERATE_MIPMAP_HINT= (int)33170;
	BYTE= (int)5120;
	UNSIGNED_BYTE= (int)5121;
	SHORT= (int)5122;
	UNSIGNED_SHORT= (int)5123;
	INT= (int)5124;
	UNSIGNED_INT= (int)5125;
	FLOAT= (int)5126;
	DEPTH_COMPONENT= (int)6402;
	ALPHA= (int)6406;
	RGB= (int)6407;
	RGBA= (int)6408;
	LUMINANCE= (int)6409;
	LUMINANCE_ALPHA= (int)6410;
	UNSIGNED_SHORT_4_4_4_4= (int)32819;
	UNSIGNED_SHORT_5_5_5_1= (int)32820;
	UNSIGNED_SHORT_5_6_5= (int)33635;
	FRAGMENT_SHADER= (int)35632;
	VERTEX_SHADER= (int)35633;
	MAX_VERTEX_ATTRIBS= (int)34921;
	MAX_VERTEX_UNIFORM_VECTORS= (int)36347;
	MAX_VARYING_VECTORS= (int)36348;
	MAX_COMBINED_TEXTURE_IMAGE_UNITS= (int)35661;
	MAX_VERTEX_TEXTURE_IMAGE_UNITS= (int)35660;
	MAX_TEXTURE_IMAGE_UNITS= (int)34930;
	MAX_FRAGMENT_UNIFORM_VECTORS= (int)36349;
	SHADER_TYPE= (int)35663;
	DELETE_STATUS= (int)35712;
	LINK_STATUS= (int)35714;
	VALIDATE_STATUS= (int)35715;
	ATTACHED_SHADERS= (int)35717;
	ACTIVE_UNIFORMS= (int)35718;
	ACTIVE_ATTRIBUTES= (int)35721;
	SHADING_LANGUAGE_VERSION= (int)35724;
	CURRENT_PROGRAM= (int)35725;
	NEVER= (int)512;
	LESS= (int)513;
	EQUAL= (int)514;
	LEQUAL= (int)515;
	GREATER= (int)516;
	NOTEQUAL= (int)517;
	GEQUAL= (int)518;
	ALWAYS= (int)519;
	KEEP= (int)7680;
	REPLACE= (int)7681;
	INCR= (int)7682;
	DECR= (int)7683;
	INVERT= (int)5386;
	INCR_WRAP= (int)34055;
	DECR_WRAP= (int)34056;
	VENDOR= (int)7936;
	RENDERER= (int)7937;
	VERSION= (int)7938;
	NEAREST= (int)9728;
	LINEAR= (int)9729;
	NEAREST_MIPMAP_NEAREST= (int)9984;
	LINEAR_MIPMAP_NEAREST= (int)9985;
	NEAREST_MIPMAP_LINEAR= (int)9986;
	LINEAR_MIPMAP_LINEAR= (int)9987;
	TEXTURE_MAG_FILTER= (int)10240;
	TEXTURE_MIN_FILTER= (int)10241;
	TEXTURE_WRAP_S= (int)10242;
	TEXTURE_WRAP_T= (int)10243;
	TEXTURE_2D= (int)3553;
	TEXTURE= (int)5890;
	TEXTURE_CUBE_MAP= (int)34067;
	TEXTURE_BINDING_CUBE_MAP= (int)34068;
	TEXTURE_CUBE_MAP_POSITIVE_X= (int)34069;
	TEXTURE_CUBE_MAP_NEGATIVE_X= (int)34070;
	TEXTURE_CUBE_MAP_POSITIVE_Y= (int)34071;
	TEXTURE_CUBE_MAP_NEGATIVE_Y= (int)34072;
	TEXTURE_CUBE_MAP_POSITIVE_Z= (int)34073;
	TEXTURE_CUBE_MAP_NEGATIVE_Z= (int)34074;
	MAX_CUBE_MAP_TEXTURE_SIZE= (int)34076;
	TEXTURE0= (int)33984;
	TEXTURE1= (int)33985;
	TEXTURE2= (int)33986;
	TEXTURE3= (int)33987;
	TEXTURE4= (int)33988;
	TEXTURE5= (int)33989;
	TEXTURE6= (int)33990;
	TEXTURE7= (int)33991;
	TEXTURE8= (int)33992;
	TEXTURE9= (int)33993;
	TEXTURE10= (int)33994;
	TEXTURE11= (int)33995;
	TEXTURE12= (int)33996;
	TEXTURE13= (int)33997;
	TEXTURE14= (int)33998;
	TEXTURE15= (int)33999;
	TEXTURE16= (int)34000;
	TEXTURE17= (int)34001;
	TEXTURE18= (int)34002;
	TEXTURE19= (int)34003;
	TEXTURE20= (int)34004;
	TEXTURE21= (int)34005;
	TEXTURE22= (int)34006;
	TEXTURE23= (int)34007;
	TEXTURE24= (int)34008;
	TEXTURE25= (int)34009;
	TEXTURE26= (int)34010;
	TEXTURE27= (int)34011;
	TEXTURE28= (int)34012;
	TEXTURE29= (int)34013;
	TEXTURE30= (int)34014;
	TEXTURE31= (int)34015;
	ACTIVE_TEXTURE= (int)34016;
	REPEAT= (int)10497;
	CLAMP_TO_EDGE= (int)33071;
	MIRRORED_REPEAT= (int)33648;
	FLOAT_VEC2= (int)35664;
	FLOAT_VEC3= (int)35665;
	FLOAT_VEC4= (int)35666;
	INT_VEC2= (int)35667;
	INT_VEC3= (int)35668;
	INT_VEC4= (int)35669;
	BOOL= (int)35670;
	BOOL_VEC2= (int)35671;
	BOOL_VEC3= (int)35672;
	BOOL_VEC4= (int)35673;
	FLOAT_MAT2= (int)35674;
	FLOAT_MAT3= (int)35675;
	FLOAT_MAT4= (int)35676;
	SAMPLER_2D= (int)35678;
	SAMPLER_CUBE= (int)35680;
	VERTEX_ATTRIB_ARRAY_ENABLED= (int)34338;
	VERTEX_ATTRIB_ARRAY_SIZE= (int)34339;
	VERTEX_ATTRIB_ARRAY_STRIDE= (int)34340;
	VERTEX_ATTRIB_ARRAY_TYPE= (int)34341;
	VERTEX_ATTRIB_ARRAY_NORMALIZED= (int)34922;
	VERTEX_ATTRIB_ARRAY_POINTER= (int)34373;
	VERTEX_ATTRIB_ARRAY_BUFFER_BINDING= (int)34975;
	VERTEX_PROGRAM_POINT_SIZE= (int)34370;
	POINT_SPRITE= (int)34913;
	COMPILE_STATUS= (int)35713;
	LOW_FLOAT= (int)36336;
	MEDIUM_FLOAT= (int)36337;
	HIGH_FLOAT= (int)36338;
	LOW_INT= (int)36339;
	MEDIUM_INT= (int)36340;
	HIGH_INT= (int)36341;
	FRAMEBUFFER= (int)36160;
	RENDERBUFFER= (int)36161;
	RGBA4= (int)32854;
	RGB5_A1= (int)32855;
	RGB565= (int)36194;
	DEPTH_COMPONENT16= (int)33189;
	STENCIL_INDEX= (int)6401;
	STENCIL_INDEX8= (int)36168;
	DEPTH_STENCIL= (int)34041;
	RENDERBUFFER_WIDTH= (int)36162;
	RENDERBUFFER_HEIGHT= (int)36163;
	RENDERBUFFER_INTERNAL_FORMAT= (int)36164;
	RENDERBUFFER_RED_SIZE= (int)36176;
	RENDERBUFFER_GREEN_SIZE= (int)36177;
	RENDERBUFFER_BLUE_SIZE= (int)36178;
	RENDERBUFFER_ALPHA_SIZE= (int)36179;
	RENDERBUFFER_DEPTH_SIZE= (int)36180;
	RENDERBUFFER_STENCIL_SIZE= (int)36181;
	FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE= (int)36048;
	FRAMEBUFFER_ATTACHMENT_OBJECT_NAME= (int)36049;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL= (int)36050;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE= (int)36051;
	COLOR_ATTACHMENT0= (int)36064;
	DEPTH_ATTACHMENT= (int)36096;
	STENCIL_ATTACHMENT= (int)36128;
	DEPTH_STENCIL_ATTACHMENT= (int)33306;
	NONE= (int)0;
	FRAMEBUFFER_COMPLETE= (int)36053;
	FRAMEBUFFER_INCOMPLETE_ATTACHMENT= (int)36054;
	FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT= (int)36055;
	FRAMEBUFFER_INCOMPLETE_DIMENSIONS= (int)36057;
	FRAMEBUFFER_UNSUPPORTED= (int)36061;
	FRAMEBUFFER_BINDING= (int)36006;
	RENDERBUFFER_BINDING= (int)36007;
	MAX_RENDERBUFFER_SIZE= (int)34024;
	INVALID_FRAMEBUFFER_OPERATION= (int)1286;
	UNPACK_FLIP_Y_WEBGL= (int)37440;
	UNPACK_PREMULTIPLY_ALPHA_WEBGL= (int)37441;
	CONTEXT_LOST_WEBGL= (int)37442;
	UNPACK_COLORSPACE_CONVERSION_WEBGL= (int)37443;
	BROWSER_DEFAULT_WEBGL= (int)37444;
	lime_gl_active_texture= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_active_texture"),(int)1,null());
	lime_gl_attach_shader= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_attach_shader"),(int)2,null());
	lime_gl_bind_attrib_location= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_bind_attrib_location"),(int)3,null());
	lime_gl_bind_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_bind_buffer"),(int)2,null());
	lime_gl_bind_framebuffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_bind_framebuffer"),(int)2,null());
	lime_gl_bind_renderbuffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_bind_renderbuffer"),(int)2,null());
	lime_gl_bind_texture= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_bind_texture"),(int)2,null());
	lime_gl_blend_color= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_blend_color"),(int)4,null());
	lime_gl_blend_equation= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_blend_equation"),(int)1,null());
	lime_gl_blend_equation_separate= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_blend_equation_separate"),(int)2,null());
	lime_gl_blend_func= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_blend_func"),(int)2,null());
	lime_gl_blend_func_separate= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_blend_func_separate"),(int)4,null());
	lime_gl_buffer_data= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_buffer_data"),(int)5,null());
	lime_gl_buffer_sub_data= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_buffer_sub_data"),(int)5,null());
	lime_gl_check_framebuffer_status= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_check_framebuffer_status"),(int)1,null());
	lime_gl_clear= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_clear"),(int)1,null());
	lime_gl_clear_color= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_clear_color"),(int)4,null());
	lime_gl_clear_depth= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_clear_depth"),(int)1,null());
	lime_gl_clear_stencil= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_clear_stencil"),(int)1,null());
	lime_gl_color_mask= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_color_mask"),(int)4,null());
	lime_gl_compile_shader= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_compile_shader"),(int)1,null());
	lime_gl_compressed_tex_image_2d= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_compressed_tex_image_2d"),(int)-1,null());
	lime_gl_compressed_tex_sub_image_2d= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_compressed_tex_sub_image_2d"),(int)-1,null());
	lime_gl_copy_tex_image_2d= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_copy_tex_image_2d"),(int)-1,null());
	lime_gl_copy_tex_sub_image_2d= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_copy_tex_sub_image_2d"),(int)-1,null());
	lime_gl_create_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_create_buffer"),(int)0,null());
	lime_gl_create_framebuffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_create_framebuffer"),(int)0,null());
	lime_gl_create_program= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_create_program"),(int)0,null());
	lime_gl_create_render_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_create_render_buffer"),(int)0,null());
	lime_gl_create_shader= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_create_shader"),(int)1,null());
	lime_gl_create_texture= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_create_texture"),(int)0,null());
	lime_gl_cull_face= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_cull_face"),(int)1,null());
	lime_gl_delete_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_delete_buffer"),(int)1,null());
	lime_gl_delete_framebuffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_delete_framebuffer"),(int)1,null());
	lime_gl_delete_program= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_delete_program"),(int)1,null());
	lime_gl_delete_render_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_delete_render_buffer"),(int)1,null());
	lime_gl_delete_shader= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_delete_shader"),(int)1,null());
	lime_gl_delete_texture= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_delete_texture"),(int)1,null());
	lime_gl_depth_func= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_depth_func"),(int)1,null());
	lime_gl_depth_mask= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_depth_mask"),(int)1,null());
	lime_gl_depth_range= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_depth_range"),(int)2,null());
	lime_gl_detach_shader= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_detach_shader"),(int)2,null());
	lime_gl_disable= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_disable"),(int)1,null());
	lime_gl_disable_vertex_attrib_array= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_disable_vertex_attrib_array"),(int)1,null());
	lime_gl_draw_arrays= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_draw_arrays"),(int)3,null());
	lime_gl_draw_elements= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_draw_elements"),(int)4,null());
	lime_gl_enable= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_enable"),(int)1,null());
	lime_gl_enable_vertex_attrib_array= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_enable_vertex_attrib_array"),(int)1,null());
	lime_gl_finish= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_finish"),(int)0,null());
	lime_gl_flush= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_flush"),(int)0,null());
	lime_gl_framebuffer_renderbuffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_framebuffer_renderbuffer"),(int)4,null());
	lime_gl_framebuffer_texture2D= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_framebuffer_texture2D"),(int)5,null());
	lime_gl_front_face= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_front_face"),(int)1,null());
	lime_gl_generate_mipmap= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_generate_mipmap"),(int)1,null());
	lime_gl_get_active_attrib= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_active_attrib"),(int)2,null());
	lime_gl_get_active_uniform= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_active_uniform"),(int)2,null());
	lime_gl_get_attrib_location= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_attrib_location"),(int)2,null());
	lime_gl_get_buffer_paramerter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_buffer_paramerter"),(int)2,null());
	lime_gl_get_context_attributes= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_context_attributes"),(int)0,null());
	lime_gl_get_error= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_error"),(int)0,null());
	lime_gl_get_framebuffer_attachment_parameter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_framebuffer_attachment_parameter"),(int)3,null());
	lime_gl_get_parameter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_parameter"),(int)1,null());
	lime_gl_get_program_info_log= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_program_info_log"),(int)1,null());
	lime_gl_get_program_parameter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_program_parameter"),(int)2,null());
	lime_gl_get_render_buffer_parameter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_render_buffer_parameter"),(int)2,null());
	lime_gl_get_shader_info_log= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_shader_info_log"),(int)1,null());
	lime_gl_get_shader_parameter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_shader_parameter"),(int)2,null());
	lime_gl_get_shader_precision_format= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_shader_precision_format"),(int)2,null());
	lime_gl_get_shader_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_shader_source"),(int)1,null());
	lime_gl_get_supported_extensions= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_supported_extensions"),(int)1,null());
	lime_gl_get_tex_parameter= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_tex_parameter"),(int)2,null());
	lime_gl_get_uniform= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_uniform"),(int)2,null());
	lime_gl_get_uniform_location= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_uniform_location"),(int)2,null());
	lime_gl_get_vertex_attrib= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_vertex_attrib"),(int)2,null());
	lime_gl_get_vertex_attrib_offset= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_get_vertex_attrib_offset"),(int)2,null());
	lime_gl_hint= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_hint"),(int)2,null());
	lime_gl_is_buffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_is_buffer"),(int)1,null());
	lime_gl_is_enabled= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_is_enabled"),(int)1,null());
	lime_gl_is_framebuffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_is_framebuffer"),(int)1,null());
	lime_gl_is_program= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_is_program"),(int)1,null());
	lime_gl_is_renderbuffer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_is_renderbuffer"),(int)1,null());
	lime_gl_is_shader= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_is_shader"),(int)1,null());
	lime_gl_is_texture= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_is_texture"),(int)1,null());
	lime_gl_line_width= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_line_width"),(int)1,null());
	lime_gl_link_program= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_link_program"),(int)1,null());
	lime_gl_pixel_storei= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_pixel_storei"),(int)2,null());
	lime_gl_polygon_offset= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_polygon_offset"),(int)2,null());
	lime_gl_read_pixels= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_read_pixels"),(int)-1,null());
	lime_gl_renderbuffer_storage= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_renderbuffer_storage"),(int)4,null());
	lime_gl_sample_coverage= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_sample_coverage"),(int)2,null());
	lime_gl_scissor= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_scissor"),(int)4,null());
	lime_gl_shader_source= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_shader_source"),(int)2,null());
	lime_gl_stencil_func= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_stencil_func"),(int)3,null());
	lime_gl_stencil_func_separate= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_stencil_func_separate"),(int)4,null());
	lime_gl_stencil_mask= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_stencil_mask"),(int)1,null());
	lime_gl_stencil_mask_separate= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_stencil_mask_separate"),(int)2,null());
	lime_gl_stencil_op= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_stencil_op"),(int)3,null());
	lime_gl_stencil_op_separate= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_stencil_op_separate"),(int)4,null());
	lime_gl_tex_image_2d= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_tex_image_2d"),(int)-1,null());
	lime_gl_tex_parameterf= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_tex_parameterf"),(int)3,null());
	lime_gl_tex_parameteri= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_tex_parameteri"),(int)3,null());
	lime_gl_tex_sub_image_2d= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_tex_sub_image_2d"),(int)-1,null());
	lime_gl_uniform1f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform1f"),(int)2,null());
	lime_gl_uniform1fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform1fv"),(int)2,null());
	lime_gl_uniform1i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform1i"),(int)2,null());
	lime_gl_uniform1iv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform1iv"),(int)2,null());
	lime_gl_uniform2f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform2f"),(int)3,null());
	lime_gl_uniform2fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform2fv"),(int)2,null());
	lime_gl_uniform2i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform2i"),(int)3,null());
	lime_gl_uniform2iv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform2iv"),(int)2,null());
	lime_gl_uniform3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform3f"),(int)4,null());
	lime_gl_uniform3fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform3fv"),(int)2,null());
	lime_gl_uniform3i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform3i"),(int)4,null());
	lime_gl_uniform3iv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform3iv"),(int)2,null());
	lime_gl_uniform4f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform4f"),(int)5,null());
	lime_gl_uniform4fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform4fv"),(int)2,null());
	lime_gl_uniform4i= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform4i"),(int)5,null());
	lime_gl_uniform4iv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform4iv"),(int)2,null());
	lime_gl_uniform_matrix= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_uniform_matrix"),(int)4,null());
	lime_gl_use_program= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_use_program"),(int)1,null());
	lime_gl_validate_program= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_validate_program"),(int)1,null());
	lime_gl_version= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_version"),(int)0,null());
	lime_gl_vertex_attrib1f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib1f"),(int)2,null());
	lime_gl_vertex_attrib1fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib1fv"),(int)2,null());
	lime_gl_vertex_attrib2f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib2f"),(int)3,null());
	lime_gl_vertex_attrib2fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib2fv"),(int)2,null());
	lime_gl_vertex_attrib3f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib3f"),(int)4,null());
	lime_gl_vertex_attrib3fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib3fv"),(int)2,null());
	lime_gl_vertex_attrib4f= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib4f"),(int)5,null());
	lime_gl_vertex_attrib4fv= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib4fv"),(int)2,null());
	lime_gl_vertex_attrib_pointer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_vertex_attrib_pointer"),(int)-1,null());
	lime_gl_viewport= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gl_viewport"),(int)4,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
