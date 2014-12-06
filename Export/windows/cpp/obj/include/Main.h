#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/app/Application.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::lime::app::Application_obj{
	public:
		typedef ::lime::app::Application_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		Float lastTime;
		Float time;
		bool swap;
		bool spawnCells;
		::String rule;
		::lime::graphics::Image src_image;
		::lime::graphics::Image dest_image;
		Float scale;
		virtual Void init( ::lime::graphics::RenderContext context);

		virtual Void onMouseDown( Float x,Float y,int button);

		virtual Void render( ::lime::graphics::RenderContext context);

};


#endif /* INCLUDED_Main */ 
