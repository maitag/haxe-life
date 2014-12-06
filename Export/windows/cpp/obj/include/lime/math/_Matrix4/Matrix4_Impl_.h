#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#define INCLUDED_lime_math__Matrix4_Matrix4_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector4)
HX_DECLARE_CLASS3(lime,math,_Matrix4,Matrix4_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace math{
namespace _Matrix4{


class HXCPP_CLASS_ATTRIBUTES  Matrix4_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix4_Impl__obj OBJ_;
		Matrix4_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Matrix4_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix4_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Matrix4_Impl_"); }

		static Array< Float > __identity;
		static ::lime::utils::Float32Array _new( ::lime::utils::Float32Array data);
		static Dynamic _new_dyn();

		static Void append( ::lime::utils::Float32Array this1,::lime::utils::Float32Array lhs);
		static Dynamic append_dyn();

		static Void appendRotation( ::lime::utils::Float32Array this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint);
		static Dynamic appendRotation_dyn();

		static Void appendScale( ::lime::utils::Float32Array this1,Float xScale,Float yScale,Float zScale);
		static Dynamic appendScale_dyn();

		static Void appendTranslation( ::lime::utils::Float32Array this1,Float x,Float y,Float z);
		static Dynamic appendTranslation_dyn();

		static ::lime::utils::Float32Array clone( ::lime::utils::Float32Array this1);
		static Dynamic clone_dyn();

		static Void copyColumnFrom( ::lime::utils::Float32Array this1,int column,::lime::math::Vector4 vector);
		static Dynamic copyColumnFrom_dyn();

		static Void copyColumnTo( ::lime::utils::Float32Array this1,int column,::lime::math::Vector4 vector);
		static Dynamic copyColumnTo_dyn();

		static Void copyFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other);
		static Dynamic copyFrom_dyn();

		static Void copythisFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array array,hx::Null< int >  index,hx::Null< bool >  transposeValues);
		static Dynamic copythisFrom_dyn();

		static Void copythisTo( ::lime::utils::Float32Array this1,::lime::utils::Float32Array array,hx::Null< int >  index,hx::Null< bool >  transposeValues);
		static Dynamic copythisTo_dyn();

		static Void copyRowFrom( ::lime::utils::Float32Array this1,int row,::lime::math::Vector4 vector);
		static Dynamic copyRowFrom_dyn();

		static ::lime::utils::Float32Array create2D( Float x,Float y,hx::Null< Float >  scale,hx::Null< Float >  rotation);
		static Dynamic create2D_dyn();

		static ::lime::utils::Float32Array createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty);
		static Dynamic createABCD_dyn();

		static ::lime::utils::Float32Array createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar);
		static Dynamic createOrtho_dyn();

		static Void copyRowTo( ::lime::utils::Float32Array this1,int row,::lime::math::Vector4 vector);
		static Dynamic copyRowTo_dyn();

		static Void copyToMatrix4( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other);
		static Dynamic copyToMatrix4_dyn();

		static ::lime::math::Vector4 deltaTransformVector( ::lime::utils::Float32Array this1,::lime::math::Vector4 v);
		static Dynamic deltaTransformVector_dyn();

		static Void identity( ::lime::utils::Float32Array this1);
		static Dynamic identity_dyn();

		static ::lime::utils::Float32Array interpolate( ::lime::utils::Float32Array thisMat,::lime::utils::Float32Array toMat,Float percent);
		static Dynamic interpolate_dyn();

		static Void interpolateTo( ::lime::utils::Float32Array this1,::lime::utils::Float32Array toMat,Float percent);
		static Dynamic interpolateTo_dyn();

		static bool invert( ::lime::utils::Float32Array this1);
		static Dynamic invert_dyn();

		static Void pointAt( ::lime::utils::Float32Array this1,::lime::math::Vector4 pos,::lime::math::Vector4 at,::lime::math::Vector4 up);
		static Dynamic pointAt_dyn();

		static Void prepend( ::lime::utils::Float32Array this1,::lime::utils::Float32Array rhs);
		static Dynamic prepend_dyn();

		static Void prependRotation( ::lime::utils::Float32Array this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint);
		static Dynamic prependRotation_dyn();

		static Void prependScale( ::lime::utils::Float32Array this1,Float xScale,Float yScale,Float zScale);
		static Dynamic prependScale_dyn();

		static Void prependTranslation( ::lime::utils::Float32Array this1,Float x,Float y,Float z);
		static Dynamic prependTranslation_dyn();

		static ::lime::math::Vector4 transformVector( ::lime::utils::Float32Array this1,::lime::math::Vector4 v);
		static Dynamic transformVector_dyn();

		static Void transformVectors( ::lime::utils::Float32Array this1,::lime::utils::Float32Array ain,::lime::utils::Float32Array aout);
		static Dynamic transformVectors_dyn();

		static Void transpose( ::lime::utils::Float32Array this1);
		static Dynamic transpose_dyn();

		static ::lime::utils::Float32Array getAxisRotation( Float x,Float y,Float z,Float degrees);
		static Dynamic getAxisRotation_dyn();

		static Float get_determinant( ::lime::utils::Float32Array this1);
		static Dynamic get_determinant_dyn();

		static ::lime::math::Vector4 get_position( ::lime::utils::Float32Array this1);
		static Dynamic get_position_dyn();

		static ::lime::math::Vector4 set_position( ::lime::utils::Float32Array this1,::lime::math::Vector4 val);
		static Dynamic set_position_dyn();

		static Float get( ::lime::utils::Float32Array this1,int index);
		static Dynamic get_dyn();

		static Float set( ::lime::utils::Float32Array this1,int index,Float value);
		static Dynamic set_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4

#endif /* INCLUDED_lime_math__Matrix4_Matrix4_Impl_ */ 
