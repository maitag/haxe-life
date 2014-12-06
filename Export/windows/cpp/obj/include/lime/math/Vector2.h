#ifndef INCLUDED_lime_math_Vector2
#define INCLUDED_lime_math_Vector2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)
namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  Vector2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector2_obj OBJ_;
		Vector2_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector2_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vector2"); }

		Float length;
		Float x;
		Float y;
		virtual ::lime::math::Vector2 add( ::lime::math::Vector2 v);
		Dynamic add_dyn();

		virtual ::lime::math::Vector2 clone( );
		Dynamic clone_dyn();

		virtual bool equals( ::lime::math::Vector2 toCompare);
		Dynamic equals_dyn();

		virtual Void normalize( Float thickness);
		Dynamic normalize_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void setTo( Float xa,Float ya);
		Dynamic setTo_dyn();

		virtual ::lime::math::Vector2 subtract( ::lime::math::Vector2 v);
		Dynamic subtract_dyn();

		virtual Dynamic __toFlashPoint( );
		Dynamic __toFlashPoint_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

		static Float distance( ::lime::math::Vector2 pt1,::lime::math::Vector2 pt2);
		static Dynamic distance_dyn();

		static ::lime::math::Vector2 interpolate( ::lime::math::Vector2 pt1,::lime::math::Vector2 pt2,Float f);
		static Dynamic interpolate_dyn();

		static ::lime::math::Vector2 polar( Float len,Float angle);
		static Dynamic polar_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Vector2 */ 
