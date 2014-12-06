#ifndef INCLUDED_OpenglRender
#define INCLUDED_OpenglRender

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(OpenglRender)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)


class HXCPP_CLASS_ATTRIBUTES  OpenglRender_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpenglRender_obj OBJ_;
		OpenglRender_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OpenglRender_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpenglRender_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("OpenglRender"); }

		static ::lime::graphics::opengl::GLBuffer buffer;
		static int matrixUniform;
		static ::lime::graphics::opengl::GLProgram program;
		static ::lime::graphics::opengl::GLTexture texture;
		static int textureAttribute;
		static int vertexAttribute;
		static Float r;
		static Float g;
		static Float b;
		static Float a;
		static Void init( Dynamic gl,int background,::lime::graphics::Image image,Float scale);
		static Dynamic init_dyn();

		static Void changeTextureData( Dynamic gl,::lime::graphics::Image image);
		static Dynamic changeTextureData_dyn();

		static Void render( Dynamic gl,int width,int height);
		static Dynamic render_dyn();

};


#endif /* INCLUDED_OpenglRender */ 
