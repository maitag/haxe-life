#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
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
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace math{
namespace _Matrix4{

Void Matrix4_Impl__obj::__construct()
{
	return null();
}

//Matrix4_Impl__obj::~Matrix4_Impl__obj() { }

Dynamic Matrix4_Impl__obj::__CreateEmpty() { return  new Matrix4_Impl__obj; }
hx::ObjectPtr< Matrix4_Impl__obj > Matrix4_Impl__obj::__new()
{  hx::ObjectPtr< Matrix4_Impl__obj > result = new Matrix4_Impl__obj();
	result->__construct();
	return result;}

Dynamic Matrix4_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix4_Impl__obj > result = new Matrix4_Impl__obj();
	result->__construct();
	return result;}

Array< Float > Matrix4_Impl__obj::__identity;

::lime::utils::Float32Array Matrix4_Impl__obj::_new( ::lime::utils::Float32Array data){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","_new",0x84b003e9,"lime.math._Matrix4.Matrix4_Impl_._new","lime/math/Matrix4.hx",16,0xeb65dbd8)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(16)
	::lime::utils::Float32Array this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(18)
	if (((bool((data != null())) && bool((data->length == (int)16))))){
		HX_STACK_LINE(20)
		this1 = data;
	}
	else{
		HX_STACK_LINE(24)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(::lime::math::_Matrix4::Matrix4_Impl__obj::__identity,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		this1 = _g;
	}
	HX_STACK_LINE(16)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,_new,return )

Void Matrix4_Impl__obj::append( ::lime::utils::Float32Array this1,::lime::utils::Float32Array lhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","append",0x0e638262,"lime.math._Matrix4.Matrix4_Impl_.append","lime/math/Matrix4.hx",31,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(33)
		Float m111 = this1->__get((int)0);		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(33)
		Float m121 = this1->__get((int)4);		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(33)
		Float m131 = this1->__get((int)8);		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(33)
		Float m141 = this1->__get((int)12);		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(34)
		Float m112 = this1->__get((int)1);		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(34)
		Float m122 = this1->__get((int)5);		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(34)
		Float m132 = this1->__get((int)9);		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(34)
		Float m142 = this1->__get((int)13);		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(35)
		Float m113 = this1->__get((int)2);		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(35)
		Float m123 = this1->__get((int)6);		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(35)
		Float m133 = this1->__get((int)10);		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(35)
		Float m143 = this1->__get((int)14);		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(36)
		Float m114 = this1->__get((int)3);		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(36)
		Float m124 = this1->__get((int)7);		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(36)
		Float m134 = this1->__get((int)11);		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(36)
		Float m144 = this1->__get((int)15);		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(37)
		Float m211 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)0);		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(37)
		Float m221 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)4);		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(37)
		Float m231 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)8);		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(37)
		Float m241 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)12);		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(38)
		Float m212 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)1);		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(38)
		Float m222 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)5);		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(38)
		Float m232 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)9);		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(38)
		Float m242 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)13);		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(39)
		Float m213 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)2);		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(39)
		Float m223 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)6);		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(39)
		Float m233 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)10);		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(39)
		Float m243 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)14);		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(40)
		Float m214 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)3);		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(40)
		Float m224 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)7);		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(40)
		Float m234 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)11);		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(40)
		Float m244 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(lhs,(int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(42)
		hx::__ArrayImplRef(this1,(int)0) = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(43)
		hx::__ArrayImplRef(this1,(int)1) = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(44)
		hx::__ArrayImplRef(this1,(int)2) = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(45)
		hx::__ArrayImplRef(this1,(int)3) = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(47)
		hx::__ArrayImplRef(this1,(int)4) = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(48)
		hx::__ArrayImplRef(this1,(int)5) = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(49)
		hx::__ArrayImplRef(this1,(int)6) = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(50)
		hx::__ArrayImplRef(this1,(int)7) = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(52)
		hx::__ArrayImplRef(this1,(int)8) = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(53)
		hx::__ArrayImplRef(this1,(int)9) = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(54)
		hx::__ArrayImplRef(this1,(int)10) = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(55)
		hx::__ArrayImplRef(this1,(int)11) = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(57)
		hx::__ArrayImplRef(this1,(int)12) = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(58)
		hx::__ArrayImplRef(this1,(int)13) = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(59)
		hx::__ArrayImplRef(this1,(int)14) = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(60)
		hx::__ArrayImplRef(this1,(int)15) = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,append,(void))

Void Matrix4_Impl__obj::appendRotation( ::lime::utils::Float32Array this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendRotation",0xe357adc0,"lime.math._Matrix4.Matrix4_Impl_.appendRotation","lime/math/Matrix4.hx",65,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(67)
		::lime::utils::Float32Array m = ::lime::math::_Matrix4::Matrix4_Impl__obj::getAxisRotation(axis->x,axis->y,axis->z,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(69)
		if (((pivotPoint != null()))){
			HX_STACK_LINE(71)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(72)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(m,p->x,p->y,p->z);
		}
		HX_STACK_LINE(76)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(this1,m);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendRotation,(void))

Void Matrix4_Impl__obj::appendScale( ::lime::utils::Float32Array this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendScale",0x8a9ad8c8,"lime.math._Matrix4.Matrix4_Impl_.appendScale","lime/math/Matrix4.hx",81,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(83)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(yScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(zScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		::lime::utils::Float32Array _g1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(this1,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendScale,(void))

Void Matrix4_Impl__obj::appendTranslation( ::lime::utils::Float32Array this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendTranslation",0xe6447daf,"lime.math._Matrix4.Matrix4_Impl_.appendTranslation","lime/math/Matrix4.hx",88,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(90)
		hx::__ArrayImplRef(this1,(int)12) = (this1->__get((int)12) + x);
		HX_STACK_LINE(91)
		hx::__ArrayImplRef(this1,(int)13) = (this1->__get((int)13) + y);
		HX_STACK_LINE(92)
		hx::__ArrayImplRef(this1,(int)14) = (this1->__get((int)14) + z);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendTranslation,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::clone( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","clone",0xe1a2dbd5,"lime.math._Matrix4.Matrix4_Impl_.clone","lime/math/Matrix4.hx",97,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(99)
	::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(this1,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(99)
	return ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,clone,return )

Void Matrix4_Impl__obj::copyColumnFrom( ::lime::utils::Float32Array this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnFrom",0x5224fffd,"lime.math._Matrix4.Matrix4_Impl_.copyColumnFrom","lime/math/Matrix4.hx",106,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(106)
		switch( (int)(column)){
			case (int)0: {
				HX_STACK_LINE(109)
				hx::__ArrayImplRef(this1,(int)0) = vector->x;
				HX_STACK_LINE(110)
				hx::__ArrayImplRef(this1,(int)1) = vector->y;
				HX_STACK_LINE(111)
				hx::__ArrayImplRef(this1,(int)2) = vector->z;
				HX_STACK_LINE(112)
				hx::__ArrayImplRef(this1,(int)3) = vector->w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(114)
				hx::__ArrayImplRef(this1,(int)4) = vector->x;
				HX_STACK_LINE(115)
				hx::__ArrayImplRef(this1,(int)5) = vector->y;
				HX_STACK_LINE(116)
				hx::__ArrayImplRef(this1,(int)6) = vector->z;
				HX_STACK_LINE(117)
				hx::__ArrayImplRef(this1,(int)7) = vector->w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(119)
				hx::__ArrayImplRef(this1,(int)8) = vector->x;
				HX_STACK_LINE(120)
				hx::__ArrayImplRef(this1,(int)9) = vector->y;
				HX_STACK_LINE(121)
				hx::__ArrayImplRef(this1,(int)10) = vector->z;
				HX_STACK_LINE(122)
				hx::__ArrayImplRef(this1,(int)11) = vector->w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(124)
				hx::__ArrayImplRef(this1,(int)12) = vector->x;
				HX_STACK_LINE(125)
				hx::__ArrayImplRef(this1,(int)13) = vector->y;
				HX_STACK_LINE(126)
				hx::__ArrayImplRef(this1,(int)14) = vector->z;
				HX_STACK_LINE(127)
				hx::__ArrayImplRef(this1,(int)15) = vector->w;
			}
			;break;
			default: {
				HX_STACK_LINE(129)
				HX_STACK_DO_THROW(((HX_CSTRING("Error, Column ") + column) + HX_CSTRING(" out of bounds [0, ..., 3]")));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnFrom,(void))

Void Matrix4_Impl__obj::copyColumnTo( ::lime::utils::Float32Array this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnTo",0xcc64e54e,"lime.math._Matrix4.Matrix4_Impl_.copyColumnTo","lime/math/Matrix4.hx",138,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(138)
		switch( (int)(column)){
			case (int)0: {
				HX_STACK_LINE(141)
				vector->x = this1->__get((int)0);
				HX_STACK_LINE(142)
				vector->y = this1->__get((int)1);
				HX_STACK_LINE(143)
				vector->z = this1->__get((int)2);
				HX_STACK_LINE(144)
				vector->w = this1->__get((int)3);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(146)
				vector->x = this1->__get((int)4);
				HX_STACK_LINE(147)
				vector->y = this1->__get((int)5);
				HX_STACK_LINE(148)
				vector->z = this1->__get((int)6);
				HX_STACK_LINE(149)
				vector->w = this1->__get((int)7);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(151)
				vector->x = this1->__get((int)8);
				HX_STACK_LINE(152)
				vector->y = this1->__get((int)9);
				HX_STACK_LINE(153)
				vector->z = this1->__get((int)10);
				HX_STACK_LINE(154)
				vector->w = this1->__get((int)11);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(156)
				vector->x = this1->__get((int)12);
				HX_STACK_LINE(157)
				vector->y = this1->__get((int)13);
				HX_STACK_LINE(158)
				vector->z = this1->__get((int)14);
				HX_STACK_LINE(159)
				vector->w = this1->__get((int)15);
			}
			;break;
			default: {
				HX_STACK_LINE(161)
				HX_STACK_DO_THROW(((HX_CSTRING("Error, Column ") + column) + HX_CSTRING(" out of bounds [0, ..., 3]")));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnTo,(void))

Void Matrix4_Impl__obj::copyFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyFrom",0xc27fde47,"lime.math._Matrix4.Matrix4_Impl_.copyFrom","lime/math/Matrix4.hx",170,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(170)
		this1->set(other,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyFrom,(void))

Void Matrix4_Impl__obj::copythisFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisFrom",0x28530e25,"lime.math._Matrix4.Matrix4_Impl_.copythisFrom","lime/math/Matrix4.hx",174,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(176)
		if ((transposeValues)){
			HX_STACK_LINE(177)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(this1);
		}
		HX_STACK_LINE(179)
		int l = (array->length - index);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				if ((!(((_g < l))))){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(180)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(181)
				hx::__ArrayImplRef(this1,c) = array->__get((c + index));
			}
		}
		HX_STACK_LINE(183)
		if ((transposeValues)){
			HX_STACK_LINE(184)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(this1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisFrom,(void))

Void Matrix4_Impl__obj::copythisTo( ::lime::utils::Float32Array this1,::lime::utils::Float32Array array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisTo",0xe75f9976,"lime.math._Matrix4.Matrix4_Impl_.copythisTo","lime/math/Matrix4.hx",189,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(191)
		if ((transposeValues)){
			HX_STACK_LINE(192)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(this1);
		}
		HX_STACK_LINE(194)
		int l = this1->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			while((true)){
				HX_STACK_LINE(195)
				if ((!(((_g < l))))){
					HX_STACK_LINE(195)
					break;
				}
				HX_STACK_LINE(195)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(196)
				hx::__ArrayImplRef(array,(c + index)) = this1->__get(c);
			}
		}
		HX_STACK_LINE(198)
		if ((transposeValues)){
			HX_STACK_LINE(199)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(this1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisTo,(void))

Void Matrix4_Impl__obj::copyRowFrom( ::lime::utils::Float32Array this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowFrom",0xc4e0b7e7,"lime.math._Matrix4.Matrix4_Impl_.copyRowFrom","lime/math/Matrix4.hx",206,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(206)
		switch( (int)(row)){
			case (int)0: {
				HX_STACK_LINE(209)
				hx::__ArrayImplRef(this1,(int)0) = vector->x;
				HX_STACK_LINE(210)
				hx::__ArrayImplRef(this1,(int)4) = vector->y;
				HX_STACK_LINE(211)
				hx::__ArrayImplRef(this1,(int)8) = vector->z;
				HX_STACK_LINE(212)
				hx::__ArrayImplRef(this1,(int)12) = vector->w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(215)
				hx::__ArrayImplRef(this1,(int)1) = vector->x;
				HX_STACK_LINE(216)
				hx::__ArrayImplRef(this1,(int)5) = vector->y;
				HX_STACK_LINE(217)
				hx::__ArrayImplRef(this1,(int)9) = vector->z;
				HX_STACK_LINE(218)
				hx::__ArrayImplRef(this1,(int)13) = vector->w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(221)
				hx::__ArrayImplRef(this1,(int)2) = vector->x;
				HX_STACK_LINE(222)
				hx::__ArrayImplRef(this1,(int)6) = vector->y;
				HX_STACK_LINE(223)
				hx::__ArrayImplRef(this1,(int)10) = vector->z;
				HX_STACK_LINE(224)
				hx::__ArrayImplRef(this1,(int)14) = vector->w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(227)
				hx::__ArrayImplRef(this1,(int)3) = vector->x;
				HX_STACK_LINE(228)
				hx::__ArrayImplRef(this1,(int)7) = vector->y;
				HX_STACK_LINE(229)
				hx::__ArrayImplRef(this1,(int)11) = vector->z;
				HX_STACK_LINE(230)
				hx::__ArrayImplRef(this1,(int)15) = vector->w;
			}
			;break;
			default: {
				struct _Function_2_1{
					inline static Float Block( int &row){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/math/Matrix4.hx",233,0xeb65dbd8)
						{
							HX_STACK_LINE(233)
							int _int = row;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(233)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(233)
				::String _g = ::Std_obj::string(_Function_2_1::Block(row));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(233)
				::String _g1 = (HX_CSTRING("Error, Row ") + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(233)
				HX_STACK_DO_THROW((_g1 + HX_CSTRING(" out of bounds [0, ..., 3]")));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowFrom,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","create2D",0x26131c56,"lime.math._Matrix4.Matrix4_Impl_.create2D","lime/math/Matrix4.hx",240,0xeb65dbd8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(242)
		Float theta = (Float((rotation * ::Math_obj::PI)) / Float(180.0));		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(243)
		Float c = ::Math_obj::cos(theta);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(244)
		Float s = ::Math_obj::sin(theta);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(246)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add((c * scale)).Add((-(s) * scale)).Add((int)0).Add((int)0).Add((s * scale)).Add((c * scale)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(x).Add(y).Add((int)0).Add((int)1),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		return ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(_g);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,create2D,return )

::lime::utils::Float32Array Matrix4_Impl__obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createABCD",0x303c4746,"lime.math._Matrix4.Matrix4_Impl_.createABCD","lime/math/Matrix4.hx",256,0xeb65dbd8)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(258)
	::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(258)
	return ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix4_Impl__obj,createABCD,return )

::lime::utils::Float32Array Matrix4_Impl__obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createOrtho",0x33fdc114,"lime.math._Matrix4.Matrix4_Impl_.createOrtho","lime/math/Matrix4.hx",268,0xeb65dbd8)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(270)
	Float sx = (Float(1.0) / Float(((x1 - x0))));		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(271)
	Float sy = (Float(1.0) / Float(((y1 - y0))));		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(272)
	Float sz = (Float(1.0) / Float(((zFar - zNear))));		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(274)
	::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add((2.0 * sx)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((2.0 * sy)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((-2. * sz)).Add((int)0).Add((-(((x0 + x1))) * sx)).Add((-(((y0 + y1))) * sy)).Add((-(((zNear + zFar))) * sz)).Add((int)1),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(274)
	return ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix4_Impl__obj,createOrtho,return )

Void Matrix4_Impl__obj::copyRowTo( ::lime::utils::Float32Array this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowTo",0x543beeb8,"lime.math._Matrix4.Matrix4_Impl_.copyRowTo","lime/math/Matrix4.hx",286,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(286)
		switch( (int)(row)){
			case (int)0: {
				HX_STACK_LINE(289)
				vector->x = this1->__get((int)0);
				HX_STACK_LINE(290)
				vector->y = this1->__get((int)4);
				HX_STACK_LINE(291)
				vector->z = this1->__get((int)8);
				HX_STACK_LINE(292)
				vector->w = this1->__get((int)12);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(295)
				vector->x = this1->__get((int)1);
				HX_STACK_LINE(296)
				vector->y = this1->__get((int)5);
				HX_STACK_LINE(297)
				vector->z = this1->__get((int)9);
				HX_STACK_LINE(298)
				vector->w = this1->__get((int)13);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(301)
				vector->x = this1->__get((int)2);
				HX_STACK_LINE(302)
				vector->y = this1->__get((int)6);
				HX_STACK_LINE(303)
				vector->z = this1->__get((int)10);
				HX_STACK_LINE(304)
				vector->w = this1->__get((int)14);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(307)
				vector->x = this1->__get((int)3);
				HX_STACK_LINE(308)
				vector->y = this1->__get((int)7);
				HX_STACK_LINE(309)
				vector->z = this1->__get((int)11);
				HX_STACK_LINE(310)
				vector->w = this1->__get((int)15);
			}
			;break;
			default: {
				HX_STACK_LINE(313)
				HX_STACK_DO_THROW(((HX_CSTRING("Error, Row ") + row) + HX_CSTRING(" out of bounds [0, ..., 3]")));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowTo,(void))

Void Matrix4_Impl__obj::copyToMatrix4( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyToMatrix4",0x1032009b,"lime.math._Matrix4.Matrix4_Impl_.copyToMatrix4","lime/math/Matrix4.hx",322,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(322)
		(hx::TCast< lime::utils::Float32Array >::cast(other))->set(this1,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyToMatrix4,(void))

::lime::math::Vector4 Matrix4_Impl__obj::deltaTransformVector( ::lime::utils::Float32Array this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","deltaTransformVector",0x66f080bf,"lime.math._Matrix4.Matrix4_Impl_.deltaTransformVector","lime/math/Matrix4.hx",426,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(428)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(428)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(428)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(430)
	return ::lime::math::Vector4_obj::__new(((((x * this1->__get((int)0)) + (y * this1->__get((int)4))) + (z * this1->__get((int)8))) + this1->__get((int)3)),((((x * this1->__get((int)1)) + (y * this1->__get((int)5))) + (z * this1->__get((int)9))) + this1->__get((int)7)),((((x * this1->__get((int)2)) + (y * this1->__get((int)6))) + (z * this1->__get((int)10))) + this1->__get((int)11)),(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,deltaTransformVector,return )

Void Matrix4_Impl__obj::identity( ::lime::utils::Float32Array this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","identity",0xb34e17c6,"lime.math._Matrix4.Matrix4_Impl_.identity","lime/math/Matrix4.hx",439,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(441)
		hx::__ArrayImplRef(this1,(int)0) = (int)1;
		HX_STACK_LINE(442)
		hx::__ArrayImplRef(this1,(int)1) = (int)0;
		HX_STACK_LINE(443)
		hx::__ArrayImplRef(this1,(int)2) = (int)0;
		HX_STACK_LINE(444)
		hx::__ArrayImplRef(this1,(int)3) = (int)0;
		HX_STACK_LINE(445)
		hx::__ArrayImplRef(this1,(int)4) = (int)0;
		HX_STACK_LINE(446)
		hx::__ArrayImplRef(this1,(int)5) = (int)1;
		HX_STACK_LINE(447)
		hx::__ArrayImplRef(this1,(int)6) = (int)0;
		HX_STACK_LINE(448)
		hx::__ArrayImplRef(this1,(int)7) = (int)0;
		HX_STACK_LINE(449)
		hx::__ArrayImplRef(this1,(int)8) = (int)0;
		HX_STACK_LINE(450)
		hx::__ArrayImplRef(this1,(int)9) = (int)0;
		HX_STACK_LINE(451)
		hx::__ArrayImplRef(this1,(int)10) = (int)1;
		HX_STACK_LINE(452)
		hx::__ArrayImplRef(this1,(int)11) = (int)0;
		HX_STACK_LINE(453)
		hx::__ArrayImplRef(this1,(int)12) = (int)0;
		HX_STACK_LINE(454)
		hx::__ArrayImplRef(this1,(int)13) = (int)0;
		HX_STACK_LINE(455)
		hx::__ArrayImplRef(this1,(int)14) = (int)0;
		HX_STACK_LINE(456)
		hx::__ArrayImplRef(this1,(int)15) = (int)1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,identity,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::interpolate( ::lime::utils::Float32Array thisMat,::lime::utils::Float32Array toMat,Float percent){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolate",0xf4884739,"lime.math._Matrix4.Matrix4_Impl_.interpolate","lime/math/Matrix4.hx",461,0xeb65dbd8)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(463)
	::lime::utils::Float32Array m = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(465)
		while((true)){
			HX_STACK_LINE(465)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(465)
				break;
			}
			HX_STACK_LINE(465)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(467)
			Float _g1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(thisMat,i);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(467)
			Float _g11 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(toMat,i);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(467)
			Float _g2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(thisMat,i);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(467)
			Float _g3 = (_g11 - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(467)
			Float _g4 = (_g3 * percent);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(467)
			Float _g5 = (_g1 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(467)
			::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,i,_g5);
		}
	}
	HX_STACK_LINE(471)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolate,return )

Void Matrix4_Impl__obj::interpolateTo( ::lime::utils::Float32Array this1,::lime::utils::Float32Array toMat,Float percent){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolateTo",0x5c939114,"lime.math._Matrix4.Matrix4_Impl_.interpolateTo","lime/math/Matrix4.hx",478,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(478)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(478)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(480)
			Float _g1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(toMat,i);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(480)
			Float _g11 = (_g1 - this1->__get(i));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(480)
			Float _g2 = (_g11 * percent);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(480)
			hx::__ArrayImplRef(this1,i) = (this1->__get(i) + _g2);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolateTo,(void))

bool Matrix4_Impl__obj::invert( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","invert",0x1e68879e,"lime.math._Matrix4.Matrix4_Impl_.invert","lime/math/Matrix4.hx",487,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(489)
	Float d = ::lime::math::_Matrix4::Matrix4_Impl__obj::get_determinant(this1);		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(490)
	Float _g = ::Math_obj::abs(d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(490)
	bool invertable = (_g > 0.00000000001);		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(492)
	if ((invertable)){
		HX_STACK_LINE(494)
		d = (Float((int)1) / Float(d));
		HX_STACK_LINE(496)
		Float m11 = this1->__get((int)0);		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(496)
		Float m21 = this1->__get((int)4);		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(496)
		Float m31 = this1->__get((int)8);		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(496)
		Float m41 = this1->__get((int)12);		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(497)
		Float m12 = this1->__get((int)1);		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(497)
		Float m22 = this1->__get((int)5);		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(497)
		Float m32 = this1->__get((int)9);		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(497)
		Float m42 = this1->__get((int)13);		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(498)
		Float m13 = this1->__get((int)2);		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(498)
		Float m23 = this1->__get((int)6);		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(498)
		Float m33 = this1->__get((int)10);		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(498)
		Float m43 = this1->__get((int)14);		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(499)
		Float m14 = this1->__get((int)3);		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(499)
		Float m24 = this1->__get((int)7);		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(499)
		Float m34 = this1->__get((int)11);		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(499)
		Float m44 = this1->__get((int)15);		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(501)
		hx::__ArrayImplRef(this1,(int)0) = (d * ((((m22 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m23 * m44) - (m43 * m24))))) + (m42 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(502)
		hx::__ArrayImplRef(this1,(int)1) = (-(d) * ((((m12 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(503)
		hx::__ArrayImplRef(this1,(int)2) = (d * ((((m12 * (((m23 * m44) - (m43 * m24)))) - (m22 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(504)
		hx::__ArrayImplRef(this1,(int)3) = (-(d) * ((((m12 * (((m23 * m34) - (m33 * m24)))) - (m22 * (((m13 * m34) - (m33 * m14))))) + (m32 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(505)
		hx::__ArrayImplRef(this1,(int)4) = (-(d) * ((((m21 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m23 * m44) - (m43 * m24))))) + (m41 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(506)
		hx::__ArrayImplRef(this1,(int)5) = (d * ((((m11 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(507)
		hx::__ArrayImplRef(this1,(int)6) = (-(d) * ((((m11 * (((m23 * m44) - (m43 * m24)))) - (m21 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(508)
		hx::__ArrayImplRef(this1,(int)7) = (d * ((((m11 * (((m23 * m34) - (m33 * m24)))) - (m21 * (((m13 * m34) - (m33 * m14))))) + (m31 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(509)
		hx::__ArrayImplRef(this1,(int)8) = (d * ((((m21 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m22 * m44) - (m42 * m24))))) + (m41 * (((m22 * m34) - (m32 * m24)))))));
		HX_STACK_LINE(510)
		hx::__ArrayImplRef(this1,(int)9) = (-(d) * ((((m11 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m34) - (m32 * m14)))))));
		HX_STACK_LINE(511)
		hx::__ArrayImplRef(this1,(int)10) = (d * ((((m11 * (((m22 * m44) - (m42 * m24)))) - (m21 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(512)
		hx::__ArrayImplRef(this1,(int)11) = (-(d) * ((((m11 * (((m22 * m34) - (m32 * m24)))) - (m21 * (((m12 * m34) - (m32 * m14))))) + (m31 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(513)
		hx::__ArrayImplRef(this1,(int)12) = (-(d) * ((((m21 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m22 * m43) - (m42 * m23))))) + (m41 * (((m22 * m33) - (m32 * m23)))))));
		HX_STACK_LINE(514)
		hx::__ArrayImplRef(this1,(int)13) = (d * ((((m11 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m33) - (m32 * m13)))))));
		HX_STACK_LINE(515)
		hx::__ArrayImplRef(this1,(int)14) = (-(d) * ((((m11 * (((m22 * m43) - (m42 * m23)))) - (m21 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m23) - (m22 * m13)))))));
		HX_STACK_LINE(516)
		hx::__ArrayImplRef(this1,(int)15) = (d * ((((m11 * (((m22 * m33) - (m32 * m23)))) - (m21 * (((m12 * m33) - (m32 * m13))))) + (m31 * (((m12 * m23) - (m22 * m13)))))));
	}
	HX_STACK_LINE(520)
	return invertable;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,invert,return )

Void Matrix4_Impl__obj::pointAt( ::lime::utils::Float32Array this1,::lime::math::Vector4 pos,::lime::math::Vector4 at,::lime::math::Vector4 up){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","pointAt",0x903e77db,"lime.math._Matrix4.Matrix4_Impl_.pointAt","lime/math/Matrix4.hx",525,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(527)
		if (((at == null()))){
			HX_STACK_LINE(529)
			::lime::math::Vector4 _g = ::lime::math::Vector4_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(529)
			at = _g;
		}
		HX_STACK_LINE(533)
		if (((up == null()))){
			HX_STACK_LINE(535)
			::lime::math::Vector4 _g1 = ::lime::math::Vector4_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(535)
			up = _g1;
		}
		HX_STACK_LINE(539)
		::lime::math::Vector4 dir = ::lime::math::Vector4_obj::__new((at->x - pos->x),(at->y - pos->y),(at->z - pos->z),null());		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(540)
		::lime::math::Vector4 vup = ::lime::math::Vector4_obj::__new(up->x,up->y,up->z,up->w);		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(541)
		::lime::math::Vector4 right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			Float l = ::Math_obj::sqrt((((dir->x * dir->x) + (dir->y * dir->y)) + (dir->z * dir->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(543)
			if (((l != (int)0))){
				HX_STACK_LINE(543)
				hx::DivEq(dir->x,l);
				HX_STACK_LINE(543)
				hx::DivEq(dir->y,l);
				HX_STACK_LINE(543)
				hx::DivEq(dir->z,l);
			}
			HX_STACK_LINE(543)
			l;
		}
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			Float l = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(544)
			if (((l != (int)0))){
				HX_STACK_LINE(544)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(544)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(544)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(544)
			l;
		}
		HX_STACK_LINE(546)
		::lime::math::Vector4 dir2 = ::lime::math::Vector4_obj::__new(dir->x,dir->y,dir->z,dir->w);		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			Float s = (((vup->x * dir->x) + (vup->y * dir->y)) + (vup->z * dir->z));		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(547)
			hx::MultEq(dir2->x,s);
			HX_STACK_LINE(547)
			hx::MultEq(dir2->y,s);
			HX_STACK_LINE(547)
			hx::MultEq(dir2->z,s);
		}
		HX_STACK_LINE(549)
		::lime::math::Vector4 _g2 = ::lime::math::Vector4_obj::__new((vup->x - dir2->x),(vup->y - dir2->y),(vup->z - dir2->z),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(549)
		vup = _g2;
		HX_STACK_LINE(551)
		Float _g3 = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(551)
		if (((_g3 > (int)0))){
			HX_STACK_LINE(553)
			Float l = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(553)
			if (((l != (int)0))){
				HX_STACK_LINE(553)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(553)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(553)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(553)
			l;
		}
		else{
			HX_STACK_LINE(557)
			if (((dir->x != (int)0))){
				HX_STACK_LINE(559)
				::lime::math::Vector4 _g4 = ::lime::math::Vector4_obj::__new(-(dir->y),dir->x,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(559)
				vup = _g4;
			}
			else{
				HX_STACK_LINE(563)
				::lime::math::Vector4 _g5 = ::lime::math::Vector4_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(563)
				vup = _g5;
			}
		}
		HX_STACK_LINE(569)
		::lime::math::Vector4 _g6 = ::lime::math::Vector4_obj::__new(((vup->y * dir->z) - (vup->z * dir->y)),((vup->z * dir->x) - (vup->x * dir->z)),((vup->x * dir->y) - (vup->y * dir->x)),(int)1);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(569)
		right = _g6;
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			Float l = ::Math_obj::sqrt((((right->x * right->x) + (right->y * right->y)) + (right->z * right->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(570)
			if (((l != (int)0))){
				HX_STACK_LINE(570)
				hx::DivEq(right->x,l);
				HX_STACK_LINE(570)
				hx::DivEq(right->y,l);
				HX_STACK_LINE(570)
				hx::DivEq(right->z,l);
			}
			HX_STACK_LINE(570)
			l;
		}
		HX_STACK_LINE(572)
		hx::__ArrayImplRef(this1,(int)0) = right->x;
		HX_STACK_LINE(573)
		hx::__ArrayImplRef(this1,(int)4) = right->y;
		HX_STACK_LINE(574)
		hx::__ArrayImplRef(this1,(int)8) = right->z;
		HX_STACK_LINE(575)
		hx::__ArrayImplRef(this1,(int)12) = 0.0;
		HX_STACK_LINE(576)
		hx::__ArrayImplRef(this1,(int)1) = vup->x;
		HX_STACK_LINE(577)
		hx::__ArrayImplRef(this1,(int)5) = vup->y;
		HX_STACK_LINE(578)
		hx::__ArrayImplRef(this1,(int)9) = vup->z;
		HX_STACK_LINE(579)
		hx::__ArrayImplRef(this1,(int)13) = 0.0;
		HX_STACK_LINE(580)
		hx::__ArrayImplRef(this1,(int)2) = dir->x;
		HX_STACK_LINE(581)
		hx::__ArrayImplRef(this1,(int)6) = dir->y;
		HX_STACK_LINE(582)
		hx::__ArrayImplRef(this1,(int)10) = dir->z;
		HX_STACK_LINE(583)
		hx::__ArrayImplRef(this1,(int)14) = 0.0;
		HX_STACK_LINE(584)
		hx::__ArrayImplRef(this1,(int)3) = pos->x;
		HX_STACK_LINE(585)
		hx::__ArrayImplRef(this1,(int)7) = pos->y;
		HX_STACK_LINE(586)
		hx::__ArrayImplRef(this1,(int)11) = pos->z;
		HX_STACK_LINE(587)
		hx::__ArrayImplRef(this1,(int)15) = 1.0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,pointAt,(void))

Void Matrix4_Impl__obj::prepend( ::lime::utils::Float32Array this1,::lime::utils::Float32Array rhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prepend",0x76fd6d86,"lime.math._Matrix4.Matrix4_Impl_.prepend","lime/math/Matrix4.hx",592,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(594)
		Float m111 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)0);		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(594)
		Float m121 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)4);		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(594)
		Float m131 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)8);		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(594)
		Float m141 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)12);		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(595)
		Float m112 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)1);		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(595)
		Float m122 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)5);		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(595)
		Float m132 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)9);		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(595)
		Float m142 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)13);		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(596)
		Float m113 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)2);		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(596)
		Float m123 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)6);		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(596)
		Float m133 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)10);		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(596)
		Float m143 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)14);		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(597)
		Float m114 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)3);		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(597)
		Float m124 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)7);		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(597)
		Float m134 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)11);		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(597)
		Float m144 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(rhs,(int)15);		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(598)
		Float m211 = this1->__get((int)0);		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(598)
		Float m221 = this1->__get((int)4);		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(598)
		Float m231 = this1->__get((int)8);		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(598)
		Float m241 = this1->__get((int)12);		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(599)
		Float m212 = this1->__get((int)1);		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(599)
		Float m222 = this1->__get((int)5);		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(599)
		Float m232 = this1->__get((int)9);		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(599)
		Float m242 = this1->__get((int)13);		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(600)
		Float m213 = this1->__get((int)2);		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(600)
		Float m223 = this1->__get((int)6);		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(600)
		Float m233 = this1->__get((int)10);		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(600)
		Float m243 = this1->__get((int)14);		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(601)
		Float m214 = this1->__get((int)3);		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(601)
		Float m224 = this1->__get((int)7);		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(601)
		Float m234 = this1->__get((int)11);		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(601)
		Float m244 = this1->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(603)
		hx::__ArrayImplRef(this1,(int)0) = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(604)
		hx::__ArrayImplRef(this1,(int)1) = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(605)
		hx::__ArrayImplRef(this1,(int)2) = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(606)
		hx::__ArrayImplRef(this1,(int)3) = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(608)
		hx::__ArrayImplRef(this1,(int)4) = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(609)
		hx::__ArrayImplRef(this1,(int)5) = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(610)
		hx::__ArrayImplRef(this1,(int)6) = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(611)
		hx::__ArrayImplRef(this1,(int)7) = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(613)
		hx::__ArrayImplRef(this1,(int)8) = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(614)
		hx::__ArrayImplRef(this1,(int)9) = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(615)
		hx::__ArrayImplRef(this1,(int)10) = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(616)
		hx::__ArrayImplRef(this1,(int)11) = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(618)
		hx::__ArrayImplRef(this1,(int)12) = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(619)
		hx::__ArrayImplRef(this1,(int)13) = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(620)
		hx::__ArrayImplRef(this1,(int)14) = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(621)
		hx::__ArrayImplRef(this1,(int)15) = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,prepend,(void))

Void Matrix4_Impl__obj::prependRotation( ::lime::utils::Float32Array this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependRotation",0x52475ce4,"lime.math._Matrix4.Matrix4_Impl_.prependRotation","lime/math/Matrix4.hx",626,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(628)
		::lime::utils::Float32Array m = ::lime::math::_Matrix4::Matrix4_Impl__obj::getAxisRotation(axis->x,axis->y,axis->z,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(630)
		if (((pivotPoint != null()))){
			HX_STACK_LINE(632)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(633)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(m,p->x,p->y,p->z);
		}
		HX_STACK_LINE(637)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(this1,m);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependRotation,(void))

Void Matrix4_Impl__obj::prependScale( ::lime::utils::Float32Array this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependScale",0x9a060b24,"lime.math._Matrix4.Matrix4_Impl_.prependScale","lime/math/Matrix4.hx",642,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(644)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(yScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(zScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(644)
		::lime::utils::Float32Array _g1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(644)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(this1,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependScale,(void))

Void Matrix4_Impl__obj::prependTranslation( ::lime::utils::Float32Array this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependTranslation",0xfad7dd0b,"lime.math._Matrix4.Matrix4_Impl_.prependTranslation","lime/math/Matrix4.hx",649,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(651)
		::lime::utils::Float32Array m = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(652)
		::lime::math::Vector4 _g = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(652)
		::lime::math::_Matrix4::Matrix4_Impl__obj::set_position(m,_g);
		HX_STACK_LINE(653)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(this1,m);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependTranslation,(void))

::lime::math::Vector4 Matrix4_Impl__obj::transformVector( ::lime::utils::Float32Array this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVector",0x3cbf39c7,"lime.math._Matrix4.Matrix4_Impl_.transformVector","lime/math/Matrix4.hx",742,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(744)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(744)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(744)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(746)
	return ::lime::math::Vector4_obj::__new(((((x * this1->__get((int)0)) + (y * this1->__get((int)4))) + (z * this1->__get((int)8))) + this1->__get((int)12)),((((x * this1->__get((int)1)) + (y * this1->__get((int)5))) + (z * this1->__get((int)9))) + this1->__get((int)13)),((((x * this1->__get((int)2)) + (y * this1->__get((int)6))) + (z * this1->__get((int)10))) + this1->__get((int)14)),((((x * this1->__get((int)3)) + (y * this1->__get((int)7))) + (z * this1->__get((int)11))) + this1->__get((int)15)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,transformVector,return )

Void Matrix4_Impl__obj::transformVectors( ::lime::utils::Float32Array this1,::lime::utils::Float32Array ain,::lime::utils::Float32Array aout){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVectors",0xea9354cc,"lime.math._Matrix4.Matrix4_Impl_.transformVectors","lime/math/Matrix4.hx",755,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(ain,"ain")
		HX_STACK_ARG(aout,"aout")
		HX_STACK_LINE(757)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(759)
		while((true)){
			HX_STACK_LINE(759)
			if ((!((((i + (int)3) <= ain->length))))){
				HX_STACK_LINE(759)
				break;
			}
			HX_STACK_LINE(761)
			Float x = ain->__get(i);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(761)
			Float y = ain->__get((i + (int)1));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(761)
			Float z = ain->__get((i + (int)2));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(763)
			hx::__ArrayImplRef(aout,i) = ((((x * this1->__get((int)0)) + (y * this1->__get((int)4))) + (z * this1->__get((int)8))) + this1->__get((int)12));
			HX_STACK_LINE(764)
			hx::__ArrayImplRef(aout,(i + (int)1)) = ((((x * this1->__get((int)1)) + (y * this1->__get((int)5))) + (z * this1->__get((int)9))) + this1->__get((int)13));
			HX_STACK_LINE(765)
			hx::__ArrayImplRef(aout,(i + (int)2)) = ((((x * this1->__get((int)2)) + (y * this1->__get((int)6))) + (z * this1->__get((int)10))) + this1->__get((int)14));
			HX_STACK_LINE(767)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,transformVectors,(void))

Void Matrix4_Impl__obj::transpose( ::lime::utils::Float32Array this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transpose",0x2d08b4f1,"lime.math._Matrix4.Matrix4_Impl_.transpose","lime/math/Matrix4.hx",774,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(776)
		::lime::utils::Float32Array othis = ::lime::utils::Float32Array_obj::__new(this1,null(),null());		HX_STACK_VAR(othis,"othis");
		HX_STACK_LINE(777)
		hx::__ArrayImplRef(this1,(int)1) = othis->__get((int)4);
		HX_STACK_LINE(778)
		hx::__ArrayImplRef(this1,(int)2) = othis->__get((int)8);
		HX_STACK_LINE(779)
		hx::__ArrayImplRef(this1,(int)3) = othis->__get((int)12);
		HX_STACK_LINE(780)
		hx::__ArrayImplRef(this1,(int)4) = othis->__get((int)1);
		HX_STACK_LINE(781)
		hx::__ArrayImplRef(this1,(int)6) = othis->__get((int)9);
		HX_STACK_LINE(782)
		hx::__ArrayImplRef(this1,(int)7) = othis->__get((int)13);
		HX_STACK_LINE(783)
		hx::__ArrayImplRef(this1,(int)8) = othis->__get((int)2);
		HX_STACK_LINE(784)
		hx::__ArrayImplRef(this1,(int)9) = othis->__get((int)6);
		HX_STACK_LINE(785)
		hx::__ArrayImplRef(this1,(int)11) = othis->__get((int)14);
		HX_STACK_LINE(786)
		hx::__ArrayImplRef(this1,(int)12) = othis->__get((int)3);
		HX_STACK_LINE(787)
		hx::__ArrayImplRef(this1,(int)13) = othis->__get((int)7);
		HX_STACK_LINE(788)
		hx::__ArrayImplRef(this1,(int)14) = othis->__get((int)11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,transpose,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","getAxisRotation",0x61f6832d,"lime.math._Matrix4.Matrix4_Impl_.getAxisRotation","lime/math/Matrix4.hx",792,0xeb65dbd8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(794)
	::lime::utils::Float32Array m = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(796)
	::lime::math::Vector4 a1 = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(797)
	Float rad = (-(degrees) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(798)
	Float c = ::Math_obj::cos(rad);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(799)
	Float s = ::Math_obj::sin(rad);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(800)
	Float t = (1.0 - c);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(802)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)0,(c + ((a1->x * a1->x) * t)));
	HX_STACK_LINE(803)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)5,(c + ((a1->y * a1->y) * t)));
	HX_STACK_LINE(804)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)10,(c + ((a1->z * a1->z) * t)));
	HX_STACK_LINE(806)
	Float tmp1 = ((a1->x * a1->y) * t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(807)
	Float tmp2 = (a1->z * s);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(808)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)4,(tmp1 + tmp2));
	HX_STACK_LINE(809)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)1,(tmp1 - tmp2));
	HX_STACK_LINE(810)
	tmp1 = ((a1->x * a1->z) * t);
	HX_STACK_LINE(811)
	tmp2 = (a1->y * s);
	HX_STACK_LINE(812)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)8,(tmp1 - tmp2));
	HX_STACK_LINE(813)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)2,(tmp1 + tmp2));
	HX_STACK_LINE(814)
	tmp1 = ((a1->y * a1->z) * t);
	HX_STACK_LINE(815)
	tmp2 = (a1->x * s);
	HX_STACK_LINE(816)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)9,(tmp1 + tmp2));
	HX_STACK_LINE(817)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(m,(int)6,(tmp1 - tmp2));
	HX_STACK_LINE(819)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,getAxisRotation,return )

Float Matrix4_Impl__obj::get_determinant( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_determinant",0x5d0323a4,"lime.math._Matrix4.Matrix4_Impl_.get_determinant","lime/math/Matrix4.hx",833,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(833)
	return (((((((((this1->__get((int)0) * this1->__get((int)5)) - (this1->__get((int)4) * this1->__get((int)1)))) * (((this1->__get((int)10) * this1->__get((int)15)) - (this1->__get((int)14) * this1->__get((int)11))))) - ((((this1->__get((int)0) * this1->__get((int)9)) - (this1->__get((int)8) * this1->__get((int)1)))) * (((this1->__get((int)6) * this1->__get((int)15)) - (this1->__get((int)14) * this1->__get((int)7)))))) + ((((this1->__get((int)0) * this1->__get((int)13)) - (this1->__get((int)12) * this1->__get((int)1)))) * (((this1->__get((int)6) * this1->__get((int)11)) - (this1->__get((int)10) * this1->__get((int)7)))))) + ((((this1->__get((int)4) * this1->__get((int)9)) - (this1->__get((int)8) * this1->__get((int)5)))) * (((this1->__get((int)2) * this1->__get((int)15)) - (this1->__get((int)14) * this1->__get((int)3)))))) - ((((this1->__get((int)4) * this1->__get((int)13)) - (this1->__get((int)12) * this1->__get((int)5)))) * (((this1->__get((int)2) * this1->__get((int)11)) - (this1->__get((int)10) * this1->__get((int)3)))))) + ((((this1->__get((int)8) * this1->__get((int)13)) - (this1->__get((int)12) * this1->__get((int)9)))) * (((this1->__get((int)2) * this1->__get((int)7)) - (this1->__get((int)6) * this1->__get((int)3))))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_determinant,return )

::lime::math::Vector4 Matrix4_Impl__obj::get_position( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_position",0x55830b3a,"lime.math._Matrix4.Matrix4_Impl_.get_position","lime/math/Matrix4.hx",845,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(845)
	return ::lime::math::Vector4_obj::__new(this1->__get((int)12),this1->__get((int)13),this1->__get((int)14),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_position,return )

::lime::math::Vector4 Matrix4_Impl__obj::set_position( ::lime::utils::Float32Array this1,::lime::math::Vector4 val){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set_position",0x6a7c2eae,"lime.math._Matrix4.Matrix4_Impl_.set_position","lime/math/Matrix4.hx",850,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(852)
	hx::__ArrayImplRef(this1,(int)12) = val->x;
	HX_STACK_LINE(853)
	hx::__ArrayImplRef(this1,(int)13) = val->y;
	HX_STACK_LINE(854)
	hx::__ArrayImplRef(this1,(int)14) = val->z;
	HX_STACK_LINE(855)
	return val;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,set_position,return )

Float Matrix4_Impl__obj::get( ::lime::utils::Float32Array this1,int index){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get",0x10b0bb0e,"lime.math._Matrix4.Matrix4_Impl_.get","lime/math/Matrix4.hx",862,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(862)
	return this1->__get(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,get,return )

Float Matrix4_Impl__obj::set( ::lime::utils::Float32Array this1,int index,Float value){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set",0x10b9d61a,"lime.math._Matrix4.Matrix4_Impl_.set","lime/math/Matrix4.hx",867,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(869)
	hx::__ArrayImplRef(this1,index) = value;
	HX_STACK_LINE(870)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,set,return )


Matrix4_Impl__obj::Matrix4_Impl__obj()
{
}

Dynamic Matrix4_Impl__obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointAt") ) { return pointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"create2D") ) { return create2D_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copythisTo") ) { return copythisTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createABCD") ) { return createABCD_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"createOrtho") ) { return createOrtho_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"copythisFrom") ) { return copythisFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyToMatrix4") ) { return copyToMatrix4_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxisRotation") ) { return getAxisRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix4_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix4_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__identity"),
	HX_CSTRING("_new"),
	HX_CSTRING("append"),
	HX_CSTRING("appendRotation"),
	HX_CSTRING("appendScale"),
	HX_CSTRING("appendTranslation"),
	HX_CSTRING("clone"),
	HX_CSTRING("copyColumnFrom"),
	HX_CSTRING("copyColumnTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copythisFrom"),
	HX_CSTRING("copythisTo"),
	HX_CSTRING("copyRowFrom"),
	HX_CSTRING("create2D"),
	HX_CSTRING("createABCD"),
	HX_CSTRING("createOrtho"),
	HX_CSTRING("copyRowTo"),
	HX_CSTRING("copyToMatrix4"),
	HX_CSTRING("deltaTransformVector"),
	HX_CSTRING("identity"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("interpolateTo"),
	HX_CSTRING("invert"),
	HX_CSTRING("pointAt"),
	HX_CSTRING("prepend"),
	HX_CSTRING("prependRotation"),
	HX_CSTRING("prependScale"),
	HX_CSTRING("prependTranslation"),
	HX_CSTRING("transformVector"),
	HX_CSTRING("transformVectors"),
	HX_CSTRING("transpose"),
	HX_CSTRING("getAxisRotation"),
	HX_CSTRING("get_determinant"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#endif

Class Matrix4_Impl__obj::__mClass;

void Matrix4_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.math._Matrix4.Matrix4_Impl_"), hx::TCanCast< Matrix4_Impl__obj> ,sStaticFields,sMemberFields,
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

void Matrix4_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0);
}

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4
