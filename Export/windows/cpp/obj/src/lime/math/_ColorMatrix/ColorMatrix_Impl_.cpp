#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace math{
namespace _ColorMatrix{

Void ColorMatrix_Impl__obj::__construct()
{
	return null();
}

//ColorMatrix_Impl__obj::~ColorMatrix_Impl__obj() { }

Dynamic ColorMatrix_Impl__obj::__CreateEmpty() { return  new ColorMatrix_Impl__obj; }
hx::ObjectPtr< ColorMatrix_Impl__obj > ColorMatrix_Impl__obj::__new()
{  hx::ObjectPtr< ColorMatrix_Impl__obj > result = new ColorMatrix_Impl__obj();
	result->__construct();
	return result;}

Dynamic ColorMatrix_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrix_Impl__obj > result = new ColorMatrix_Impl__obj();
	result->__construct();
	return result;}

Array< Float > ColorMatrix_Impl__obj::__identity;

::lime::utils::Float32Array ColorMatrix_Impl__obj::_new( ::lime::utils::Float32Array data){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","_new",0x66bc06c7,"lime.math._ColorMatrix.ColorMatrix_Impl_._new","lime/math/ColorMatrix.hx",27,0x337975c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(27)
	::lime::utils::Float32Array this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(29)
	if (((bool((data != null())) && bool((data->length == (int)20))))){
		HX_STACK_LINE(31)
		this1 = data;
	}
	else{
		HX_STACK_LINE(35)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__identity,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this1 = _g;
	}
	HX_STACK_LINE(27)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,_new,return )

::lime::utils::Float32Array ColorMatrix_Impl__obj::clone( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","clone",0xca195b37,"lime.math._ColorMatrix.ColorMatrix_Impl_.clone","lime/math/ColorMatrix.hx",42,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(44)
	::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(this1,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,clone,return )

Void ColorMatrix_Impl__obj::concat( ::lime::utils::Float32Array this1,::lime::utils::Float32Array second){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","concat",0xc5989ffa,"lime.math._ColorMatrix.ColorMatrix_Impl_.concat","lime/math/ColorMatrix.hx",49,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				Float value = (_g->__get((int)0) + second->__get((int)0));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(51)
				hx::__ArrayImplRef(_g,(int)0) = value;
				HX_STACK_LINE(51)
				value;
			}
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				Float value = (_g->__get((int)6) + second->__get((int)6));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(52)
				hx::__ArrayImplRef(_g,(int)6) = value;
				HX_STACK_LINE(52)
				value;
			}
		}
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				Float value = (_g->__get((int)12) + second->__get((int)12));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(53)
				hx::__ArrayImplRef(_g,(int)12) = value;
				HX_STACK_LINE(53)
				value;
			}
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				Float value = (_g->__get((int)18) + second->__get((int)18));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(54)
				hx::__ArrayImplRef(_g,(int)18) = value;
				HX_STACK_LINE(54)
				value;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,concat,(void))

Void ColorMatrix_Impl__obj::copyFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","copyFrom",0x3aa9a825,"lime.math._ColorMatrix.ColorMatrix_Impl_.copyFrom","lime/math/ColorMatrix.hx",61,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(61)
		this1->set(other,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,copyFrom,(void))

Void ColorMatrix_Impl__obj::identity( ::lime::utils::Float32Array this1){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","identity",0x2b77e1a4,"lime.math._ColorMatrix.ColorMatrix_Impl_.identity","lime/math/ColorMatrix.hx",66,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(68)
		hx::__ArrayImplRef(this1,(int)0) = (int)1;
		HX_STACK_LINE(69)
		hx::__ArrayImplRef(this1,(int)1) = (int)0;
		HX_STACK_LINE(70)
		hx::__ArrayImplRef(this1,(int)2) = (int)0;
		HX_STACK_LINE(71)
		hx::__ArrayImplRef(this1,(int)3) = (int)0;
		HX_STACK_LINE(72)
		hx::__ArrayImplRef(this1,(int)4) = (int)0;
		HX_STACK_LINE(73)
		hx::__ArrayImplRef(this1,(int)5) = (int)0;
		HX_STACK_LINE(74)
		hx::__ArrayImplRef(this1,(int)6) = (int)1;
		HX_STACK_LINE(75)
		hx::__ArrayImplRef(this1,(int)7) = (int)0;
		HX_STACK_LINE(76)
		hx::__ArrayImplRef(this1,(int)8) = (int)0;
		HX_STACK_LINE(77)
		hx::__ArrayImplRef(this1,(int)9) = (int)0;
		HX_STACK_LINE(78)
		hx::__ArrayImplRef(this1,(int)10) = (int)0;
		HX_STACK_LINE(79)
		hx::__ArrayImplRef(this1,(int)11) = (int)0;
		HX_STACK_LINE(80)
		hx::__ArrayImplRef(this1,(int)12) = (int)1;
		HX_STACK_LINE(81)
		hx::__ArrayImplRef(this1,(int)13) = (int)0;
		HX_STACK_LINE(82)
		hx::__ArrayImplRef(this1,(int)14) = (int)0;
		HX_STACK_LINE(83)
		hx::__ArrayImplRef(this1,(int)15) = (int)0;
		HX_STACK_LINE(84)
		hx::__ArrayImplRef(this1,(int)16) = (int)0;
		HX_STACK_LINE(85)
		hx::__ArrayImplRef(this1,(int)17) = (int)0;
		HX_STACK_LINE(86)
		hx::__ArrayImplRef(this1,(int)18) = (int)1;
		HX_STACK_LINE(87)
		hx::__ArrayImplRef(this1,(int)19) = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,identity,(void))

Dynamic ColorMatrix_Impl__obj::__toFlashColorTransform( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","__toFlashColorTransform",0x02badfd8,"lime.math._ColorMatrix.ColorMatrix_Impl_.__toFlashColorTransform","lime/math/ColorMatrix.hx",97,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(97)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,__toFlashColorTransform,return )

Float ColorMatrix_Impl__obj::get_alphaMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaMultiplier",0xa15814f0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaMultiplier","lime/math/ColorMatrix.hx",112,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(112)
	return this1->__get((int)18);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::set_alphaMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaMultiplier",0xddf507fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaMultiplier","lime/math/ColorMatrix.hx",117,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	hx::__ArrayImplRef(this1,(int)18) = value;
	HX_STACK_LINE(120)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::get_alphaOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaOffset",0xff81a182,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaOffset","lime/math/ColorMatrix.hx",127,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(127)
	return (this1->__get((int)19) * (int)255);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaOffset,return )

Float ColorMatrix_Impl__obj::set_alphaOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaOffset",0xfb4d1e8e,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaOffset","lime/math/ColorMatrix.hx",132,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(134)
	hx::__ArrayImplRef(this1,(int)19) = (Float(value) / Float((int)255));
	HX_STACK_LINE(135)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaOffset,return )

Float ColorMatrix_Impl__obj::get_blueMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueMultiplier",0x69726b6a,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueMultiplier","lime/math/ColorMatrix.hx",142,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(142)
	return this1->__get((int)12);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueMultiplier,return )

Float ColorMatrix_Impl__obj::set_blueMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueMultiplier",0x46219dde,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueMultiplier","lime/math/ColorMatrix.hx",147,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(149)
	hx::__ArrayImplRef(this1,(int)12) = value;
	HX_STACK_LINE(150)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueMultiplier,return )

Float ColorMatrix_Impl__obj::get_blueOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueOffset",0x2f5cb2fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueOffset","lime/math/ColorMatrix.hx",157,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(157)
	return (this1->__get((int)14) * (int)255);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueOffset,return )

Float ColorMatrix_Impl__obj::set_blueOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueOffset",0x4f7c9b70,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueOffset","lime/math/ColorMatrix.hx",162,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(164)
	hx::__ArrayImplRef(this1,(int)14) = (Float(value) / Float((int)255));
	HX_STACK_LINE(165)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueOffset,return )

int ColorMatrix_Impl__obj::get_color( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_color",0x1b460a94,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_color","lime/math/ColorMatrix.hx",170,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(172)
	int _g = ::Std_obj::_int((this1->__get((int)4) * (int)255));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(172)
	int _g1 = (int(_g) << int((int)16));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(172)
	int _g2 = ::Std_obj::_int((this1->__get((int)9) * (int)255));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(172)
	int _g3 = (int(_g2) << int((int)8));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(172)
	int _g4 = (int(_g1) | int(_g3));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(172)
	int _g5 = ::Std_obj::_int((this1->__get((int)14) * (int)255));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(172)
	return (int(_g4) | int(_g5));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_color,return )

int ColorMatrix_Impl__obj::set_color( ::lime::utils::Float32Array this1,int value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_color",0xfe96f6a0,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_color","lime/math/ColorMatrix.hx",177,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		Float value1 = (int((int(value) >> int((int)16))) & int((int)255));		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(179)
		hx::__ArrayImplRef(this1,(int)4) = (Float(value1) / Float((int)255));
		HX_STACK_LINE(179)
		value1;
	}
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		Float value1 = (int((int(value) >> int((int)8))) & int((int)255));		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(180)
		hx::__ArrayImplRef(this1,(int)9) = (Float(value1) / Float((int)255));
		HX_STACK_LINE(180)
		value1;
	}
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		Float value1 = (int(value) & int((int)255));		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(181)
		hx::__ArrayImplRef(this1,(int)14) = (Float(value1) / Float((int)255));
		HX_STACK_LINE(181)
		value1;
	}
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		hx::__ArrayImplRef(this1,(int)0) = (int)0;
		HX_STACK_LINE(183)
		(int)0;
	}
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		hx::__ArrayImplRef(this1,(int)6) = (int)0;
		HX_STACK_LINE(184)
		(int)0;
	}
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		hx::__ArrayImplRef(this1,(int)12) = (int)0;
		HX_STACK_LINE(185)
		(int)0;
	}
	HX_STACK_LINE(187)
	return ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::get_color(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_color,return )

Float ColorMatrix_Impl__obj::get_greenMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenMultiplier",0x76158c95,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenMultiplier","lime/math/ColorMatrix.hx",194,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(194)
	return this1->__get((int)6);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenMultiplier,return )

Float ColorMatrix_Impl__obj::set_greenMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenMultiplier",0xb2b27fa1,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenMultiplier","lime/math/ColorMatrix.hx",199,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(201)
	hx::__ArrayImplRef(this1,(int)6) = value;
	HX_STACK_LINE(202)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenMultiplier,return )

Float ColorMatrix_Impl__obj::get_greenOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenOffset",0xe71722a7,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenOffset","lime/math/ColorMatrix.hx",209,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(209)
	return (this1->__get((int)9) * (int)255);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenOffset,return )

Float ColorMatrix_Impl__obj::set_greenOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenOffset",0xe2e29fb3,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenOffset","lime/math/ColorMatrix.hx",214,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(216)
	hx::__ArrayImplRef(this1,(int)9) = (Float(value) / Float((int)255));
	HX_STACK_LINE(217)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenOffset,return )

Float ColorMatrix_Impl__obj::get_redMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redMultiplier",0x58c9a663,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redMultiplier","lime/math/ColorMatrix.hx",224,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(224)
	return this1->__get((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redMultiplier,return )

Float ColorMatrix_Impl__obj::set_redMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redMultiplier",0x7c377e6f,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redMultiplier","lime/math/ColorMatrix.hx",229,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(231)
	hx::__ArrayImplRef(this1,(int)0) = value;
	HX_STACK_LINE(232)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redMultiplier,return )

Float ColorMatrix_Impl__obj::get_redOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redOffset",0xd26abd75,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redOffset","lime/math/ColorMatrix.hx",239,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(239)
	return (this1->__get((int)4) * (int)255);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redOffset,return )

Float ColorMatrix_Impl__obj::set_redOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redOffset",0x17709f81,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redOffset","lime/math/ColorMatrix.hx",244,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(246)
	hx::__ArrayImplRef(this1,(int)4) = (Float(value) / Float((int)255));
	HX_STACK_LINE(247)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redOffset,return )

Float ColorMatrix_Impl__obj::get( ::lime::utils::Float32Array this1,int index){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get",0xe0573df0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get","lime/math/ColorMatrix.hx",254,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(254)
	return this1->__get(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,get,return )

Float ColorMatrix_Impl__obj::set( ::lime::utils::Float32Array this1,int index,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set",0xe06058fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set","lime/math/ColorMatrix.hx",259,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(261)
	hx::__ArrayImplRef(this1,index) = value;
	HX_STACK_LINE(262)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_Impl__obj,set,return )


ColorMatrix_Impl__obj::ColorMatrix_Impl__obj()
{
}

Dynamic ColorMatrix_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_redOffset") ) { return get_redOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_redOffset") ) { return set_redOffset_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_blueOffset") ) { return get_blueOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blueOffset") ) { return set_blueOffset_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_alphaOffset") ) { return get_alphaOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaOffset") ) { return set_alphaOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_greenOffset") ) { return get_greenOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_greenOffset") ) { return set_greenOffset_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_redMultiplier") ) { return get_redMultiplier_dyn(); }
		if (HX_FIELD_EQ(inName,"set_redMultiplier") ) { return set_redMultiplier_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_blueMultiplier") ) { return get_blueMultiplier_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blueMultiplier") ) { return set_blueMultiplier_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_alphaMultiplier") ) { return get_alphaMultiplier_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaMultiplier") ) { return set_alphaMultiplier_dyn(); }
		if (HX_FIELD_EQ(inName,"get_greenMultiplier") ) { return get_greenMultiplier_dyn(); }
		if (HX_FIELD_EQ(inName,"set_greenMultiplier") ) { return set_greenMultiplier_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__toFlashColorTransform") ) { return __toFlashColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorMatrix_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorMatrix_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__identity"),
	HX_CSTRING("_new"),
	HX_CSTRING("clone"),
	HX_CSTRING("concat"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("identity"),
	HX_CSTRING("__toFlashColorTransform"),
	HX_CSTRING("get_alphaMultiplier"),
	HX_CSTRING("set_alphaMultiplier"),
	HX_CSTRING("get_alphaOffset"),
	HX_CSTRING("set_alphaOffset"),
	HX_CSTRING("get_blueMultiplier"),
	HX_CSTRING("set_blueMultiplier"),
	HX_CSTRING("get_blueOffset"),
	HX_CSTRING("set_blueOffset"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_greenMultiplier"),
	HX_CSTRING("set_greenMultiplier"),
	HX_CSTRING("get_greenOffset"),
	HX_CSTRING("set_greenOffset"),
	HX_CSTRING("get_redMultiplier"),
	HX_CSTRING("set_redMultiplier"),
	HX_CSTRING("get_redOffset"),
	HX_CSTRING("set_redOffset"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
};

#endif

Class ColorMatrix_Impl__obj::__mClass;

void ColorMatrix_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.math._ColorMatrix.ColorMatrix_Impl_"), hx::TCanCast< ColorMatrix_Impl__obj> ,sStaticFields,sMemberFields,
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

void ColorMatrix_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0);
}

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix
