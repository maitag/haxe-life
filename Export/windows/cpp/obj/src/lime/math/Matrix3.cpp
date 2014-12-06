#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
namespace lime{
namespace math{

Void Matrix3_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("lime.math.Matrix3","new",0xb5a52a77,"lime.math.Matrix3.new","lime/math/Matrix3.hx",17,0xeabca539)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a,"a")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_c,"c")
HX_STACK_ARG(__o_d,"d")
HX_STACK_ARG(__o_tx,"tx")
HX_STACK_ARG(__o_ty,"ty")
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(19)
	this->a = a;
	HX_STACK_LINE(20)
	this->b = b;
	HX_STACK_LINE(21)
	this->c = c;
	HX_STACK_LINE(22)
	this->d = d;
	HX_STACK_LINE(23)
	this->tx = tx;
	HX_STACK_LINE(24)
	this->ty = ty;
}
;
	return null();
}

//Matrix3_obj::~Matrix3_obj() { }

Dynamic Matrix3_obj::__CreateEmpty() { return  new Matrix3_obj; }
hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix3_obj > result = new Matrix3_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic Matrix3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3_obj > result = new Matrix3_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::lime::math::Matrix3 Matrix3_obj::clone( ){
	HX_STACK_FRAME("lime.math.Matrix3","clone",0xf8506134,"lime.math.Matrix3.clone","lime/math/Matrix3.hx",31,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return ::lime::math::Matrix3_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,clone,return )

Void Matrix3_obj::concat( ::lime::math::Matrix3 m){
{
		HX_STACK_FRAME("lime.math.Matrix3","concat",0x0786d75d,"lime.math.Matrix3.concat","lime/math/Matrix3.hx",36,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(38)
		Float a1 = ((this->a * m->a) + (this->b * m->c));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(39)
		this->b = ((this->a * m->b) + (this->b * m->d));
		HX_STACK_LINE(40)
		this->a = a1;
		HX_STACK_LINE(42)
		Float c1 = ((this->c * m->a) + (this->d * m->c));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(43)
		this->d = ((this->c * m->b) + (this->d * m->d));
		HX_STACK_LINE(44)
		this->c = c1;
		HX_STACK_LINE(46)
		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(47)
		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
		HX_STACK_LINE(48)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,concat,(void))

Void Matrix3_obj::copyColumnFrom( int column,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyColumnFrom",0x89c156be,"lime.math.Matrix3.copyColumnFrom","lime/math/Matrix3.hx",57,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(57)
		if (((column > (int)2))){
			HX_STACK_LINE(59)
			HX_STACK_DO_THROW(((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(61)
			if (((column == (int)0))){
				HX_STACK_LINE(63)
				this->a = vector4->x;
				HX_STACK_LINE(64)
				this->c = vector4->y;
			}
			else{
				HX_STACK_LINE(66)
				if (((column == (int)1))){
					HX_STACK_LINE(68)
					this->b = vector4->x;
					HX_STACK_LINE(69)
					this->d = vector4->y;
				}
				else{
					HX_STACK_LINE(73)
					this->tx = vector4->x;
					HX_STACK_LINE(74)
					this->ty = vector4->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnFrom,(void))

Void Matrix3_obj::copyColumnTo( int column,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyColumnTo",0x045a59cf,"lime.math.Matrix3.copyColumnTo","lime/math/Matrix3.hx",83,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(83)
		if (((column > (int)2))){
			HX_STACK_LINE(85)
			HX_STACK_DO_THROW(((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(87)
			if (((column == (int)0))){
				HX_STACK_LINE(89)
				vector4->x = this->a;
				HX_STACK_LINE(90)
				vector4->y = this->c;
				HX_STACK_LINE(91)
				vector4->z = (int)0;
			}
			else{
				HX_STACK_LINE(93)
				if (((column == (int)1))){
					HX_STACK_LINE(95)
					vector4->x = this->b;
					HX_STACK_LINE(96)
					vector4->y = this->d;
					HX_STACK_LINE(97)
					vector4->z = (int)0;
				}
				else{
					HX_STACK_LINE(101)
					vector4->x = this->tx;
					HX_STACK_LINE(102)
					vector4->y = this->ty;
					HX_STACK_LINE(103)
					vector4->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnTo,(void))

Void Matrix3_obj::copyFrom( ::lime::math::Matrix3 sourceMatrix3){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyFrom",0x7e1ebe48,"lime.math.Matrix3.copyFrom","lime/math/Matrix3.hx",110,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceMatrix3,"sourceMatrix3")
		HX_STACK_LINE(112)
		this->a = sourceMatrix3->a;
		HX_STACK_LINE(113)
		this->b = sourceMatrix3->b;
		HX_STACK_LINE(114)
		this->c = sourceMatrix3->c;
		HX_STACK_LINE(115)
		this->d = sourceMatrix3->d;
		HX_STACK_LINE(116)
		this->tx = sourceMatrix3->tx;
		HX_STACK_LINE(117)
		this->ty = sourceMatrix3->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,copyFrom,(void))

Void Matrix3_obj::copyRowFrom( int row,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyRowFrom",0xb0770e86,"lime.math.Matrix3.copyRowFrom","lime/math/Matrix3.hx",124,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(124)
		if (((row > (int)2))){
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(128)
			if (((row == (int)0))){
				HX_STACK_LINE(130)
				this->a = vector4->x;
				HX_STACK_LINE(131)
				this->c = vector4->y;
			}
			else{
				HX_STACK_LINE(133)
				if (((row == (int)1))){
					HX_STACK_LINE(135)
					this->b = vector4->x;
					HX_STACK_LINE(136)
					this->d = vector4->y;
				}
				else{
					HX_STACK_LINE(140)
					this->tx = vector4->x;
					HX_STACK_LINE(141)
					this->ty = vector4->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowFrom,(void))

Void Matrix3_obj::copyRowTo( int row,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyRowTo",0xc3a10f97,"lime.math.Matrix3.copyRowTo","lime/math/Matrix3.hx",150,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(150)
		if (((row > (int)2))){
			HX_STACK_LINE(152)
			HX_STACK_DO_THROW(((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(154)
			if (((row == (int)0))){
				HX_STACK_LINE(156)
				vector4->x = this->a;
				HX_STACK_LINE(157)
				vector4->y = this->b;
				HX_STACK_LINE(158)
				vector4->z = this->tx;
			}
			else{
				HX_STACK_LINE(160)
				if (((row == (int)1))){
					HX_STACK_LINE(162)
					vector4->x = this->c;
					HX_STACK_LINE(163)
					vector4->y = this->d;
					HX_STACK_LINE(164)
					vector4->z = this->ty;
				}
				else{
					HX_STACK_LINE(168)
					vector4->x = (int)0;
					HX_STACK_LINE(168)
					vector4->y = (int)0;
					HX_STACK_LINE(168)
					vector4->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowTo,(void))

Void Matrix3_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("lime.math.Matrix3","createBox",0x9a1719c6,"lime.math.Matrix3.createBox","lime/math/Matrix3.hx",175,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(177)
		this->a = scaleX;
		HX_STACK_LINE(178)
		this->d = scaleY;
		HX_STACK_LINE(179)
		this->b = rotation;
		HX_STACK_LINE(180)
		this->tx = tx;
		HX_STACK_LINE(181)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createBox,(void))

Void Matrix3_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("lime.math.Matrix3","createGradientBox",0xff9720b6,"lime.math.Matrix3.createGradientBox","lime/math/Matrix3.hx",186,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(188)
		this->a = (Float(width) / Float(1638.4));
		HX_STACK_LINE(189)
		this->d = (Float(height) / Float(1638.4));
		HX_STACK_LINE(192)
		if (((rotation != (int)0))){
			HX_STACK_LINE(194)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(195)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(197)
			this->b = (sin * this->d);
			HX_STACK_LINE(198)
			this->c = (-(sin) * this->a);
			HX_STACK_LINE(199)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(200)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(204)
			this->b = (int)0;
			HX_STACK_LINE(205)
			this->c = (int)0;
		}
		HX_STACK_LINE(209)
		this->tx = (tx + (Float(width) / Float((int)2)));
		HX_STACK_LINE(210)
		this->ty = (ty + (Float(height) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createGradientBox,(void))

bool Matrix3_obj::equals( Dynamic Matrix3){
	HX_STACK_FRAME("lime.math.Matrix3","equals",0xffa9bc88,"lime.math.Matrix3.equals","lime/math/Matrix3.hx",217,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Matrix3,"Matrix3")
	HX_STACK_LINE(217)
	return (bool((bool((bool((bool((bool((bool((Matrix3 != null())) && bool((this->tx == Matrix3->__Field(HX_CSTRING("tx"),true))))) && bool((this->ty == Matrix3->__Field(HX_CSTRING("ty"),true))))) && bool((this->a == Matrix3->__Field(HX_CSTRING("a"),true))))) && bool((this->b == Matrix3->__Field(HX_CSTRING("b"),true))))) && bool((this->c == Matrix3->__Field(HX_CSTRING("c"),true))))) && bool((this->d == Matrix3->__Field(HX_CSTRING("d"),true))));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,equals,return )

::lime::math::Vector2 Matrix3_obj::deltaTransformVector2( ::lime::math::Vector2 Vector2){
	HX_STACK_FRAME("lime.math.Matrix3","deltaTransformVector2",0xf0c299f2,"lime.math.Matrix3.deltaTransformVector2","lime/math/Matrix3.hx",224,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Vector2,"Vector2")
	HX_STACK_LINE(224)
	return ::lime::math::Vector2_obj::__new(((Vector2->x * this->a) + (Vector2->y * this->c)),((Vector2->x * this->b) + (Vector2->y * this->d)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,deltaTransformVector2,return )

Void Matrix3_obj::identity( ){
{
		HX_STACK_FRAME("lime.math.Matrix3","identity",0x6eecf7c7,"lime.math.Matrix3.identity","lime/math/Matrix3.hx",229,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->a = (int)1;
		HX_STACK_LINE(232)
		this->b = (int)0;
		HX_STACK_LINE(233)
		this->c = (int)0;
		HX_STACK_LINE(234)
		this->d = (int)1;
		HX_STACK_LINE(235)
		this->tx = (int)0;
		HX_STACK_LINE(236)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,identity,(void))

::lime::math::Matrix3 Matrix3_obj::invert( ){
	HX_STACK_FRAME("lime.math.Matrix3","invert",0xdf8fb55f,"lime.math.Matrix3.invert","lime/math/Matrix3.hx",241,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	Float norm = ((this->a * this->d) - (this->b * this->c));		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(245)
	if (((norm == (int)0))){
		HX_STACK_LINE(247)
		Float _g = this->d = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		Float _g1 = this->c = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		Float _g2 = this->b = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(247)
		this->a = _g2;
		HX_STACK_LINE(248)
		this->tx = -(this->tx);
		HX_STACK_LINE(249)
		this->ty = -(this->ty);
	}
	else{
		HX_STACK_LINE(253)
		norm = (Float(1.0) / Float(norm));
		HX_STACK_LINE(254)
		Float a1 = (this->d * norm);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(255)
		this->d = (this->a * norm);
		HX_STACK_LINE(256)
		this->a = a1;
		HX_STACK_LINE(257)
		hx::MultEq(this->b,-(norm));
		HX_STACK_LINE(258)
		hx::MultEq(this->c,-(norm));
		HX_STACK_LINE(260)
		Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(261)
		this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
		HX_STACK_LINE(262)
		this->tx = tx1;
	}
	HX_STACK_LINE(268)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,invert,return )

::lime::math::Matrix3 Matrix3_obj::mult( ::lime::math::Matrix3 m){
	HX_STACK_FRAME("lime.math.Matrix3","mult",0x3a42e1f9,"lime.math.Matrix3.mult","lime/math/Matrix3.hx",273,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(275)
	::lime::math::Matrix3 result = ::lime::math::Matrix3_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(276)
	result->concat(m);
	HX_STACK_LINE(277)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,mult,return )

Void Matrix3_obj::rotate( Float theta){
{
		HX_STACK_FRAME("lime.math.Matrix3","rotate",0x0ad714a4,"lime.math.Matrix3.rotate","lime/math/Matrix3.hx",282,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(theta,"theta")
		HX_STACK_LINE(298)
		Float cos = ::Math_obj::cos(theta);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(299)
		Float sin = ::Math_obj::sin(theta);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(301)
		Float a1 = ((this->a * cos) - (this->b * sin));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(302)
		this->b = ((this->a * sin) + (this->b * cos));
		HX_STACK_LINE(303)
		this->a = a1;
		HX_STACK_LINE(305)
		Float c1 = ((this->c * cos) - (this->d * sin));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(306)
		this->d = ((this->c * sin) + (this->d * cos));
		HX_STACK_LINE(307)
		this->c = c1;
		HX_STACK_LINE(309)
		Float tx1 = ((this->tx * cos) - (this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(310)
		this->ty = ((this->tx * sin) + (this->ty * cos));
		HX_STACK_LINE(311)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,rotate,(void))

Void Matrix3_obj::scale( Float sx,Float sy){
{
		HX_STACK_FRAME("lime.math.Matrix3","scale",0x28bc1c61,"lime.math.Matrix3.scale","lime/math/Matrix3.hx",318,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(329)
		hx::MultEq(this->a,sx);
		HX_STACK_LINE(330)
		hx::MultEq(this->b,sy);
		HX_STACK_LINE(331)
		hx::MultEq(this->c,sx);
		HX_STACK_LINE(332)
		hx::MultEq(this->d,sy);
		HX_STACK_LINE(333)
		hx::MultEq(this->tx,sx);
		HX_STACK_LINE(334)
		hx::MultEq(this->ty,sy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,scale,(void))

Void Matrix3_obj::setRotation( Float theta,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_FRAME("lime.math.Matrix3","setRotation",0xf9d2d017,"lime.math.Matrix3.setRotation","lime/math/Matrix3.hx",341,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(theta,"theta")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(343)
		Float _g = ::Math_obj::cos(theta);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(343)
		Float _g1 = (_g * scale);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(343)
		this->a = _g1;
		HX_STACK_LINE(344)
		Float _g2 = ::Math_obj::sin(theta);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(344)
		Float _g3 = (_g2 * scale);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(344)
		this->c = _g3;
		HX_STACK_LINE(345)
		this->b = -(this->c);
		HX_STACK_LINE(346)
		this->d = this->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,setRotation,(void))

Void Matrix3_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("lime.math.Matrix3","setTo",0x2a1cdf94,"lime.math.Matrix3.setTo","lime/math/Matrix3.hx",353,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(355)
		this->a = a;
		HX_STACK_LINE(356)
		this->b = b;
		HX_STACK_LINE(357)
		this->c = c;
		HX_STACK_LINE(358)
		this->d = d;
		HX_STACK_LINE(359)
		this->tx = tx;
		HX_STACK_LINE(360)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix3_obj,setTo,(void))

::String Matrix3_obj::to3DString( hx::Null< bool >  __o_roundPixels){
bool roundPixels = __o_roundPixels.Default(false);
	HX_STACK_FRAME("lime.math.Matrix3","to3DString",0x3565e3a6,"lime.math.Matrix3.to3DString","lime/math/Matrix3.hx",375,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(roundPixels,"roundPixels")
{
		HX_STACK_LINE(375)
		if ((roundPixels)){
			HX_STACK_LINE(377)
			int _g = ::Std_obj::_int(this->tx);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			::String _g1 = (((((((((((HX_CSTRING("Matrix33d(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, 0, 0, 1, 0, ")) + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(377)
			::String _g2 = (_g1 + HX_CSTRING(", "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(377)
			int _g3 = ::Std_obj::_int(this->ty);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(377)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(377)
			return (_g4 + HX_CSTRING(", 0, 1)"));
		}
		else{
			HX_STACK_LINE(381)
			return ((((((((((((((HX_CSTRING("Matrix33d(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, 0, 0, 1, 0, ")) + this->tx) + HX_CSTRING(", ")) + this->ty) + HX_CSTRING(", 0, 1)"));
		}
		HX_STACK_LINE(375)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,to3DString,return )

::String Matrix3_obj::toMozString( ){
	HX_STACK_FRAME("lime.math.Matrix3","toMozString",0xdc79a1e5,"lime.math.Matrix3.toMozString","lime/math/Matrix3.hx",390,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	return ((((((((((((HX_CSTRING("Matrix3(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + this->tx) + HX_CSTRING("px, ")) + this->ty) + HX_CSTRING("px)"));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toMozString,return )

::String Matrix3_obj::toString( ){
	HX_STACK_FRAME("lime.math.Matrix3","toString",0xee2c8335,"lime.math.Matrix3.toString","lime/math/Matrix3.hx",397,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(397)
	return ((((((((((((HX_CSTRING("Matrix3(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + this->tx) + HX_CSTRING(", ")) + this->ty) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toString,return )

::lime::math::Vector2 Matrix3_obj::transformVector2( ::lime::math::Vector2 pos){
	HX_STACK_FRAME("lime.math.Matrix3","transformVector2",0x83039d8c,"lime.math.Matrix3.transformVector2","lime/math/Matrix3.hx",404,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(404)
	return ::lime::math::Vector2_obj::__new((((pos->x * this->a) + (pos->y * this->c)) + this->tx),(((pos->x * this->b) + (pos->y * this->d)) + this->ty));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,transformVector2,return )

Void Matrix3_obj::translate( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.math.Matrix3","translate",0x99be5ca5,"lime.math.Matrix3.translate","lime/math/Matrix3.hx",409,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(411)
		::lime::math::Matrix3 m = ::lime::math::Matrix3_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(412)
		m->tx = dx;
		HX_STACK_LINE(413)
		m->ty = dy;
		HX_STACK_LINE(414)
		this->concat(m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,translate,(void))

Void Matrix3_obj::__cleanValues( ){
{
		HX_STACK_FRAME("lime.math.Matrix3","__cleanValues",0x3007f402,"lime.math.Matrix3.__cleanValues","lime/math/Matrix3.hx",419,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_LINE(421)
		int _g = ::Math_obj::round((this->a * (int)1000));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(421)
		Float _g1 = (Float(_g) / Float((int)1000));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(421)
		this->a = _g1;
		HX_STACK_LINE(422)
		int _g2 = ::Math_obj::round((this->b * (int)1000));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(422)
		Float _g3 = (Float(_g2) / Float((int)1000));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(422)
		this->b = _g3;
		HX_STACK_LINE(423)
		int _g4 = ::Math_obj::round((this->c * (int)1000));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(423)
		Float _g5 = (Float(_g4) / Float((int)1000));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(423)
		this->c = _g5;
		HX_STACK_LINE(424)
		int _g6 = ::Math_obj::round((this->d * (int)1000));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(424)
		Float _g7 = (Float(_g6) / Float((int)1000));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(424)
		this->d = _g7;
		HX_STACK_LINE(425)
		int _g8 = ::Math_obj::round((this->tx * (int)10));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(425)
		Float _g9 = (Float(_g8) / Float((int)10));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(425)
		this->tx = _g9;
		HX_STACK_LINE(426)
		int _g10 = ::Math_obj::round((this->ty * (int)10));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(426)
		Float _g11 = (Float(_g10) / Float((int)10));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(426)
		this->ty = _g11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,__cleanValues,(void))

Float Matrix3_obj::__transformX( ::lime::math::Vector2 pos){
	HX_STACK_FRAME("lime.math.Matrix3","__transformX",0xe12c3795,"lime.math.Matrix3.__transformX","lime/math/Matrix3.hx",433,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(433)
	return (((pos->x * this->a) + (pos->y * this->c)) + this->tx);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__transformX,return )

Float Matrix3_obj::__transformY( ::lime::math::Vector2 pos){
	HX_STACK_FRAME("lime.math.Matrix3","__transformY",0xe12c3796,"lime.math.Matrix3.__transformY","lime/math/Matrix3.hx",440,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(440)
	return (((pos->x * this->b) + (pos->y * this->d)) + this->ty);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__transformY,return )

Void Matrix3_obj::__translateTransformed( ::lime::math::Vector2 pos){
{
		HX_STACK_FRAME("lime.math.Matrix3","__translateTransformed",0x7b249386,"lime.math.Matrix3.__translateTransformed","lime/math/Matrix3.hx",445,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(447)
		this->tx = (((pos->x * this->a) + (pos->y * this->c)) + this->tx);
		HX_STACK_LINE(448)
		this->ty = (((pos->x * this->b) + (pos->y * this->d)) + this->ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__translateTransformed,(void))

::lime::math::Matrix3 Matrix3_obj::__identity;


Matrix3_obj::Matrix3_obj()
{
}

Dynamic Matrix3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { return __identity; }
		if (HX_FIELD_EQ(inName,"to3DString") ) { return to3DString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"toMozString") ) { return toMozString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformX") ) { return __transformX_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformY") ) { return __transformY_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cleanValues") ) { return __cleanValues_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVector2") ) { return transformVector2_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"deltaTransformVector2") ) { return deltaTransformVector2_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return __translateTransformed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { __identity=inValue.Cast< ::lime::math::Matrix3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("ty"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__identity"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3_obj,a),HX_CSTRING("a")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,b),HX_CSTRING("b")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,c),HX_CSTRING("c")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,d),HX_CSTRING("d")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,tx),HX_CSTRING("tx")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,ty),HX_CSTRING("ty")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("b"),
	HX_CSTRING("c"),
	HX_CSTRING("d"),
	HX_CSTRING("tx"),
	HX_CSTRING("ty"),
	HX_CSTRING("clone"),
	HX_CSTRING("concat"),
	HX_CSTRING("copyColumnFrom"),
	HX_CSTRING("copyColumnTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyRowFrom"),
	HX_CSTRING("copyRowTo"),
	HX_CSTRING("createBox"),
	HX_CSTRING("createGradientBox"),
	HX_CSTRING("equals"),
	HX_CSTRING("deltaTransformVector2"),
	HX_CSTRING("identity"),
	HX_CSTRING("invert"),
	HX_CSTRING("mult"),
	HX_CSTRING("rotate"),
	HX_CSTRING("scale"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("setTo"),
	HX_CSTRING("to3DString"),
	HX_CSTRING("toMozString"),
	HX_CSTRING("toString"),
	HX_CSTRING("transformVector2"),
	HX_CSTRING("translate"),
	HX_CSTRING("__cleanValues"),
	HX_CSTRING("__transformX"),
	HX_CSTRING("__transformY"),
	HX_CSTRING("__translateTransformed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix3_obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__identity,"__identity");
};

#endif

Class Matrix3_obj::__mClass;

void Matrix3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.math.Matrix3"), hx::TCanCast< Matrix3_obj> ,sStaticFields,sMemberFields,
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

void Matrix3_obj::__boot()
{
	__identity= ::lime::math::Matrix3_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace lime
} // end namespace math
