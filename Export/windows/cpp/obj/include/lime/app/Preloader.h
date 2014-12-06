#ifndef INCLUDED_lime_app_Preloader
#define INCLUDED_lime_app_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Preloader)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Preloader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Preloader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Preloader"); }

		bool complete;
		Dynamic onComplete;
		virtual Void create( Dynamic config);
		Dynamic create_dyn();

		virtual Void load( Array< ::String > urls,Array< ::String > types);
		Dynamic load_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void update( int loaded,int total);
		Dynamic update_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Preloader */ 
