#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#define INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,math,_ColorMatrix,ColorMatrix_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace math{
namespace _ColorMatrix{


class HXCPP_CLASS_ATTRIBUTES  ColorMatrix_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColorMatrix_Impl__obj OBJ_;
		ColorMatrix_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ColorMatrix_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorMatrix_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ColorMatrix_Impl_"); }

		static Array< Float > __identity;
		static ::lime::utils::Float32Array _new( ::lime::utils::Float32Array data);
		static Dynamic _new_dyn();

		static ::lime::utils::Float32Array clone( ::lime::utils::Float32Array this1);
		static Dynamic clone_dyn();

		static Void concat( ::lime::utils::Float32Array this1,::lime::utils::Float32Array second);
		static Dynamic concat_dyn();

		static Void copyFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other);
		static Dynamic copyFrom_dyn();

		static Void identity( ::lime::utils::Float32Array this1);
		static Dynamic identity_dyn();

		static Dynamic __toFlashColorTransform( ::lime::utils::Float32Array this1);
		static Dynamic __toFlashColorTransform_dyn();

		static Float get_alphaMultiplier( ::lime::utils::Float32Array this1);
		static Dynamic get_alphaMultiplier_dyn();

		static Float set_alphaMultiplier( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_alphaMultiplier_dyn();

		static Float get_alphaOffset( ::lime::utils::Float32Array this1);
		static Dynamic get_alphaOffset_dyn();

		static Float set_alphaOffset( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_alphaOffset_dyn();

		static Float get_blueMultiplier( ::lime::utils::Float32Array this1);
		static Dynamic get_blueMultiplier_dyn();

		static Float set_blueMultiplier( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_blueMultiplier_dyn();

		static Float get_blueOffset( ::lime::utils::Float32Array this1);
		static Dynamic get_blueOffset_dyn();

		static Float set_blueOffset( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_blueOffset_dyn();

		static int get_color( ::lime::utils::Float32Array this1);
		static Dynamic get_color_dyn();

		static int set_color( ::lime::utils::Float32Array this1,int value);
		static Dynamic set_color_dyn();

		static Float get_greenMultiplier( ::lime::utils::Float32Array this1);
		static Dynamic get_greenMultiplier_dyn();

		static Float set_greenMultiplier( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_greenMultiplier_dyn();

		static Float get_greenOffset( ::lime::utils::Float32Array this1);
		static Dynamic get_greenOffset_dyn();

		static Float set_greenOffset( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_greenOffset_dyn();

		static Float get_redMultiplier( ::lime::utils::Float32Array this1);
		static Dynamic get_redMultiplier_dyn();

		static Float set_redMultiplier( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_redMultiplier_dyn();

		static Float get_redOffset( ::lime::utils::Float32Array this1);
		static Dynamic get_redOffset_dyn();

		static Float set_redOffset( ::lime::utils::Float32Array this1,Float value);
		static Dynamic set_redOffset_dyn();

		static Float get( ::lime::utils::Float32Array this1,int index);
		static Dynamic get_dyn();

		static Float set( ::lime::utils::Float32Array this1,int index,Float value);
		static Dynamic set_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix

#endif /* INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_ */ 
