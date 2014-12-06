#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
namespace lime{
namespace math{

Void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("lime.math.Rectangle","new",0xb4aa4114,"lime.math.Rectangle.new","lime/math/Rectangle.hx",25,0xce0be93c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(27)
	this->x = x;
	HX_STACK_LINE(28)
	this->y = y;
	HX_STACK_LINE(29)
	this->width = width;
	HX_STACK_LINE(30)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::lime::math::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("lime.math.Rectangle","clone",0x93be1911,"lime.math.Rectangle.clone","lime/math/Rectangle.hx",37,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::lime::math::Rectangle_obj::__new(this->x,this->y,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains( Float x,Float y){
	HX_STACK_FRAME("lime.math.Rectangle","contains",0xf10bdceb,"lime.math.Rectangle.contains","lime/math/Rectangle.hx",44,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::lime::math::Rectangle_obj > __this,Float &x){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/math/Rectangle.hx",44,0xce0be93c)
			{
				HX_STACK_LINE(44)
				Float _g = __this->get_right();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(44)
				return (x < _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	if (((  (((bool((x >= this->x)) && bool((y >= this->y))))) ? bool(_Function_1_1::Block(this,x)) : bool(false) ))){
		HX_STACK_LINE(44)
		Float _g1 = this->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		return (y < _g1);
	}
	else{
		HX_STACK_LINE(44)
		return false;
	}
	HX_STACK_LINE(44)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::lime::math::Vector2 point){
	HX_STACK_FRAME("lime.math.Rectangle","containsPoint",0x3a119365,"lime.math.Rectangle.containsPoint","lime/math/Rectangle.hx",51,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(51)
	return this->contains(point->x,point->y);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::lime::math::Rectangle rect){
	HX_STACK_FRAME("lime.math.Rectangle","containsRect",0x7fd4a7af,"lime.math.Rectangle.containsRect","lime/math/Rectangle.hx",58,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(58)
	if (((bool((rect->width <= (int)0)) || bool((rect->height <= (int)0))))){
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::lime::math::Rectangle_obj > __this,::lime::math::Rectangle &rect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/math/Rectangle.hx",60,0xce0be93c)
				{
					HX_STACK_LINE(60)
					Float _g = rect->get_right();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(60)
					Float _g1 = __this->get_right();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(60)
					return (_g < _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		if (((  (((bool((rect->x > this->x)) && bool((rect->y > this->y))))) ? bool(_Function_2_1::Block(this,rect)) : bool(false) ))){
			HX_STACK_LINE(60)
			Float _g2 = rect->get_bottom();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(60)
			Float _g3 = this->get_bottom();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(60)
			return (_g2 < _g3);
		}
		else{
			HX_STACK_LINE(60)
			return false;
		}
	}
	else{
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::lime::math::Rectangle_obj > __this,::lime::math::Rectangle &rect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/math/Rectangle.hx",64,0xce0be93c)
				{
					HX_STACK_LINE(64)
					Float _g4 = rect->get_right();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(64)
					Float _g5 = __this->get_right();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(64)
					return (_g4 <= _g5);
				}
				return null();
			}
		};
		HX_STACK_LINE(64)
		if (((  (((bool((rect->x >= this->x)) && bool((rect->y >= this->y))))) ? bool(_Function_2_1::Block(this,rect)) : bool(false) ))){
			HX_STACK_LINE(64)
			Float _g6 = rect->get_bottom();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(64)
			Float _g7 = this->get_bottom();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(64)
			return (_g6 <= _g7);
		}
		else{
			HX_STACK_LINE(64)
			return false;
		}
	}
	HX_STACK_LINE(58)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

Void Rectangle_obj::copyFrom( ::lime::math::Rectangle sourceRect){
{
		HX_STACK_FRAME("lime.math.Rectangle","copyFrom",0x8cf18e8b,"lime.math.Rectangle.copyFrom","lime/math/Rectangle.hx",71,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_LINE(73)
		this->x = sourceRect->x;
		HX_STACK_LINE(74)
		this->y = sourceRect->y;
		HX_STACK_LINE(75)
		this->width = sourceRect->width;
		HX_STACK_LINE(76)
		this->height = sourceRect->height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::lime::math::Rectangle toCompare){
	HX_STACK_FRAME("lime.math.Rectangle","equals",0x643ce60b,"lime.math.Rectangle.equals","lime/math/Rectangle.hx",83,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(83)
	return (bool((bool((bool((bool((toCompare != null())) && bool((this->x == toCompare->x)))) && bool((this->y == toCompare->y)))) && bool((this->width == toCompare->width)))) && bool((this->height == toCompare->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.math.Rectangle","inflate",0x288a773b,"lime.math.Rectangle.inflate","lime/math/Rectangle.hx",88,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(90)
		hx::SubEq(this->x,dx);
		HX_STACK_LINE(90)
		hx::AddEq(this->width,(dx * (int)2));
		HX_STACK_LINE(91)
		hx::SubEq(this->y,dy);
		HX_STACK_LINE(91)
		hx::AddEq(this->height,(dy * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::inflatePoint( ::lime::math::Vector2 point){
{
		HX_STACK_FRAME("lime.math.Rectangle","inflatePoint",0x0bf19715,"lime.math.Rectangle.inflatePoint","lime/math/Rectangle.hx",98,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(98)
		this->inflate(point->x,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

::lime::math::Rectangle Rectangle_obj::intersection( ::lime::math::Rectangle toIntersect){
	HX_STACK_FRAME("lime.math.Rectangle","intersection",0x62197b15,"lime.math.Rectangle.intersection","lime/math/Rectangle.hx",103,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(105)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(105)
	if (((this->x < toIntersect->x))){
		HX_STACK_LINE(105)
		x0 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(105)
		x0 = this->x;
	}
	HX_STACK_LINE(106)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(106)
	Float _g1 = toIntersect->get_right();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(106)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(106)
	if (((_g > _g1))){
		HX_STACK_LINE(106)
		x1 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(106)
		x1 = this->get_right();
	}
	HX_STACK_LINE(108)
	if (((x1 <= x0))){
		HX_STACK_LINE(110)
		return ::lime::math::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(114)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(114)
	if (((this->y < toIntersect->y))){
		HX_STACK_LINE(114)
		y0 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(114)
		y0 = this->y;
	}
	HX_STACK_LINE(115)
	Float _g2 = this->get_bottom();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(115)
	Float _g3 = toIntersect->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(115)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(115)
	if (((_g2 > _g3))){
		HX_STACK_LINE(115)
		y1 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(115)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(117)
	if (((y1 <= y0))){
		HX_STACK_LINE(119)
		return ::lime::math::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(123)
	return ::lime::math::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::lime::math::Rectangle toIntersect){
	HX_STACK_FRAME("lime.math.Rectangle","intersects",0x4fbb9080,"lime.math.Rectangle.intersects","lime/math/Rectangle.hx",128,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(130)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(130)
	if (((this->x < toIntersect->x))){
		HX_STACK_LINE(130)
		x0 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(130)
		x0 = this->x;
	}
	HX_STACK_LINE(131)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(131)
	Float _g1 = toIntersect->get_right();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(131)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(131)
	if (((_g > _g1))){
		HX_STACK_LINE(131)
		x1 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(131)
		x1 = this->get_right();
	}
	HX_STACK_LINE(133)
	if (((x1 <= x0))){
		HX_STACK_LINE(135)
		return false;
	}
	HX_STACK_LINE(139)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(139)
	if (((this->y < toIntersect->y))){
		HX_STACK_LINE(139)
		y0 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(139)
		y0 = this->y;
	}
	HX_STACK_LINE(140)
	Float _g2 = this->get_bottom();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(140)
	Float _g3 = toIntersect->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(140)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(140)
	if (((_g2 > _g3))){
		HX_STACK_LINE(140)
		y1 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(140)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(142)
	return (y1 > y0);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty( ){
	HX_STACK_FRAME("lime.math.Rectangle","isEmpty",0x28ceb8f7,"lime.math.Rectangle.isEmpty","lime/math/Rectangle.hx",149,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	return (bool((this->width <= (int)0)) || bool((this->height <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Void Rectangle_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.math.Rectangle","offset",0x04898f5f,"lime.math.Rectangle.offset","lime/math/Rectangle.hx",154,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(156)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(157)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

Void Rectangle_obj::offsetPoint( ::lime::math::Vector2 point){
{
		HX_STACK_FRAME("lime.math.Rectangle","offsetPoint",0x49147c71,"lime.math.Rectangle.offsetPoint","lime/math/Rectangle.hx",162,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(164)
		hx::AddEq(this->x,point->x);
		HX_STACK_LINE(165)
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::setEmpty( ){
{
		HX_STACK_FRAME("lime.math.Rectangle","setEmpty",0x429f2657,"lime.math.Rectangle.setEmpty","lime/math/Rectangle.hx",170,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		Float _g = this->height = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		Float _g1 = this->width = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		Float _g2 = this->y = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(172)
		this->x = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

Void Rectangle_obj::setTo( Float xa,Float ya,Float widtha,Float heighta){
{
		HX_STACK_FRAME("lime.math.Rectangle","setTo",0xc58a9771,"lime.math.Rectangle.setTo","lime/math/Rectangle.hx",177,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(widtha,"widtha")
		HX_STACK_ARG(heighta,"heighta")
		HX_STACK_LINE(179)
		this->x = xa;
		HX_STACK_LINE(180)
		this->y = ya;
		HX_STACK_LINE(181)
		this->width = widtha;
		HX_STACK_LINE(182)
		this->height = heighta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::lime::math::Rectangle Rectangle_obj::transform( ::lime::math::Matrix3 m){
	HX_STACK_FRAME("lime.math.Rectangle","transform",0x7f751d20,"lime.math.Rectangle.transform","lime/math/Rectangle.hx",187,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(189)
	Float tx0 = ((m->a * this->x) + (m->c * this->y));		HX_STACK_VAR(tx0,"tx0");
	HX_STACK_LINE(190)
	Float tx1 = tx0;		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(191)
	Float ty0 = ((m->b * this->x) + (m->d * this->y));		HX_STACK_VAR(ty0,"ty0");
	HX_STACK_LINE(192)
	Float ty1 = tx0;		HX_STACK_VAR(ty1,"ty1");
	HX_STACK_LINE(194)
	Float tx = ((m->a * ((this->x + this->width))) + (m->c * this->y));		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(195)
	Float ty = ((m->b * ((this->x + this->width))) + (m->d * this->y));		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(197)
	if (((tx < tx0))){
		HX_STACK_LINE(197)
		tx0 = tx;
	}
	HX_STACK_LINE(198)
	if (((ty < ty0))){
		HX_STACK_LINE(198)
		ty0 = ty;
	}
	HX_STACK_LINE(199)
	if (((tx > tx1))){
		HX_STACK_LINE(199)
		tx1 = tx;
	}
	HX_STACK_LINE(200)
	if (((ty > ty1))){
		HX_STACK_LINE(200)
		ty1 = ty;
	}
	HX_STACK_LINE(202)
	tx = ((m->a * ((this->x + this->width))) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(203)
	ty = ((m->b * ((this->x + this->width))) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(205)
	if (((tx < tx0))){
		HX_STACK_LINE(205)
		tx0 = tx;
	}
	HX_STACK_LINE(206)
	if (((ty < ty0))){
		HX_STACK_LINE(206)
		ty0 = ty;
	}
	HX_STACK_LINE(207)
	if (((tx > tx1))){
		HX_STACK_LINE(207)
		tx1 = tx;
	}
	HX_STACK_LINE(208)
	if (((ty > ty1))){
		HX_STACK_LINE(208)
		ty1 = ty;
	}
	HX_STACK_LINE(210)
	tx = ((m->a * this->x) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(211)
	ty = ((m->b * this->x) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(213)
	if (((tx < tx0))){
		HX_STACK_LINE(213)
		tx0 = tx;
	}
	HX_STACK_LINE(214)
	if (((ty < ty0))){
		HX_STACK_LINE(214)
		ty0 = ty;
	}
	HX_STACK_LINE(215)
	if (((tx > tx1))){
		HX_STACK_LINE(215)
		tx1 = tx;
	}
	HX_STACK_LINE(216)
	if (((ty > ty1))){
		HX_STACK_LINE(216)
		ty1 = ty;
	}
	HX_STACK_LINE(218)
	return ::lime::math::Rectangle_obj::__new((tx0 + m->tx),(ty0 + m->ty),(tx1 - tx0),(ty1 - ty0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,transform,return )

::lime::math::Rectangle Rectangle_obj::_union( ::lime::math::Rectangle toUnion){
	HX_STACK_FRAME("lime.math.Rectangle","union",0xf2426ac3,"lime.math.Rectangle.union","lime/math/Rectangle.hx",223,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toUnion,"toUnion")
	HX_STACK_LINE(225)
	if (((bool((this->width == (int)0)) || bool((this->height == (int)0))))){
		HX_STACK_LINE(227)
		return toUnion->clone();
	}
	else{
		HX_STACK_LINE(229)
		if (((bool((toUnion->width == (int)0)) || bool((toUnion->height == (int)0))))){
			HX_STACK_LINE(231)
			return this->clone();
		}
	}
	HX_STACK_LINE(235)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(235)
	if (((this->x > toUnion->x))){
		HX_STACK_LINE(235)
		x0 = toUnion->x;
	}
	else{
		HX_STACK_LINE(235)
		x0 = this->x;
	}
	HX_STACK_LINE(236)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(236)
	Float _g1 = toUnion->get_right();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(236)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(236)
	if (((_g < _g1))){
		HX_STACK_LINE(236)
		x1 = toUnion->get_right();
	}
	else{
		HX_STACK_LINE(236)
		x1 = this->get_right();
	}
	HX_STACK_LINE(237)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(237)
	if (((this->y > toUnion->y))){
		HX_STACK_LINE(237)
		y0 = toUnion->y;
	}
	else{
		HX_STACK_LINE(237)
		y0 = this->y;
	}
	HX_STACK_LINE(238)
	Float _g2 = this->get_bottom();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(238)
	Float _g3 = toUnion->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(238)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(238)
	if (((_g2 < _g3))){
		HX_STACK_LINE(238)
		y1 = toUnion->get_bottom();
	}
	else{
		HX_STACK_LINE(238)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(240)
	return ::lime::math::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

Void Rectangle_obj::__contract( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.math.Rectangle","__contract",0x46ba1ffe,"lime.math.Rectangle.__contract","lime/math/Rectangle.hx",245,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(247)
		if (((bool((this->width == (int)0)) && bool((this->height == (int)0))))){
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(253)
		Float cacheRight = this->get_right();		HX_STACK_VAR(cacheRight,"cacheRight");
		HX_STACK_LINE(254)
		Float cacheBottom = this->get_bottom();		HX_STACK_VAR(cacheBottom,"cacheBottom");
		HX_STACK_LINE(256)
		if (((this->x < x))){
			HX_STACK_LINE(256)
			this->x = x;
		}
		HX_STACK_LINE(257)
		if (((this->y < y))){
			HX_STACK_LINE(257)
			this->y = y;
		}
		HX_STACK_LINE(258)
		Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		if (((_g > (x + width)))){
			HX_STACK_LINE(258)
			this->width = ((x + width) - this->x);
		}
		HX_STACK_LINE(259)
		Float _g1 = this->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(259)
		if (((_g1 > (y + height)))){
			HX_STACK_LINE(259)
			this->height = ((y + height) - this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__contract,(void))

Void Rectangle_obj::__expand( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("lime.math.Rectangle","__expand",0x3132dc46,"lime.math.Rectangle.__expand","lime/math/Rectangle.hx",264,0xce0be93c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(266)
		if (((bool((this->width == (int)0)) && bool((this->height == (int)0))))){
			HX_STACK_LINE(268)
			this->x = x;
			HX_STACK_LINE(269)
			this->y = y;
			HX_STACK_LINE(270)
			this->width = width;
			HX_STACK_LINE(271)
			this->height = height;
			HX_STACK_LINE(272)
			return null();
		}
		HX_STACK_LINE(276)
		Float cacheRight = this->get_right();		HX_STACK_VAR(cacheRight,"cacheRight");
		HX_STACK_LINE(277)
		Float cacheBottom = this->get_bottom();		HX_STACK_VAR(cacheBottom,"cacheBottom");
		HX_STACK_LINE(279)
		if (((this->x > x))){
			HX_STACK_LINE(279)
			this->x = x;
		}
		HX_STACK_LINE(280)
		if (((this->y > y))){
			HX_STACK_LINE(280)
			this->y = y;
		}
		HX_STACK_LINE(281)
		if (((cacheRight < (x + width)))){
			HX_STACK_LINE(281)
			this->width = ((x + width) - this->x);
		}
		HX_STACK_LINE(282)
		if (((cacheBottom < (y + height)))){
			HX_STACK_LINE(282)
			this->height = ((y + height) - this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__expand,(void))

Dynamic Rectangle_obj::__toFlashRectangle( ){
	HX_STACK_FRAME("lime.math.Rectangle","__toFlashRectangle",0x525ed026,"lime.math.Rectangle.__toFlashRectangle","lime/math/Rectangle.hx",292,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__toFlashRectangle,return )

Float Rectangle_obj::get_bottom( ){
	HX_STACK_FRAME("lime.math.Rectangle","get_bottom",0xc1d02480,"lime.math.Rectangle.get_bottom","lime/math/Rectangle.hx",305,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom( Float b){
	HX_STACK_FRAME("lime.math.Rectangle","set_bottom",0xc54dc2f4,"lime.math.Rectangle.set_bottom","lime/math/Rectangle.hx",306,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(306)
	this->height = (b - this->y);
	HX_STACK_LINE(306)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

::lime::math::Vector2 Rectangle_obj::get_bottomRight( ){
	HX_STACK_FRAME("lime.math.Rectangle","get_bottomRight",0x2f6d073c,"lime.math.Rectangle.get_bottomRight","lime/math/Rectangle.hx",307,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	return ::lime::math::Vector2_obj::__new((this->x + this->width),(this->y + this->height));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

::lime::math::Vector2 Rectangle_obj::set_bottomRight( ::lime::math::Vector2 p){
	HX_STACK_FRAME("lime.math.Rectangle","set_bottomRight",0x2b388448,"lime.math.Rectangle.set_bottomRight","lime/math/Rectangle.hx",308,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(308)
	this->width = (p->x - this->x);
	HX_STACK_LINE(308)
	this->height = (p->y - this->y);
	HX_STACK_LINE(308)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left( ){
	HX_STACK_FRAME("lime.math.Rectangle","get_left",0x8bfb465c,"lime.math.Rectangle.get_left","lime/math/Rectangle.hx",309,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left( Float l){
	HX_STACK_FRAME("lime.math.Rectangle","set_left",0x3a589fd0,"lime.math.Rectangle.set_left","lime/math/Rectangle.hx",310,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(310)
	hx::SubEq(this->width,(l - this->x));
	HX_STACK_LINE(310)
	this->x = l;
	HX_STACK_LINE(310)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_FRAME("lime.math.Rectangle","get_right",0x66ef57e7,"lime.math.Rectangle.get_right","lime/math/Rectangle.hx",311,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right( Float r){
	HX_STACK_FRAME("lime.math.Rectangle","set_right",0x4a4043f3,"lime.math.Rectangle.set_right","lime/math/Rectangle.hx",312,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(312)
	this->width = (r - this->x);
	HX_STACK_LINE(312)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

::lime::math::Vector2 Rectangle_obj::get_size( ){
	HX_STACK_FRAME("lime.math.Rectangle","get_size",0x909edf16,"lime.math.Rectangle.get_size","lime/math/Rectangle.hx",313,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	return ::lime::math::Vector2_obj::__new(this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

::lime::math::Vector2 Rectangle_obj::set_size( ::lime::math::Vector2 p){
	HX_STACK_FRAME("lime.math.Rectangle","set_size",0x3efc388a,"lime.math.Rectangle.set_size","lime/math/Rectangle.hx",314,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(314)
	this->width = p->x;
	HX_STACK_LINE(314)
	this->height = p->y;
	HX_STACK_LINE(314)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top( ){
	HX_STACK_FRAME("lime.math.Rectangle","get_top",0x433c09e0,"lime.math.Rectangle.get_top","lime/math/Rectangle.hx",315,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top( Float t){
	HX_STACK_FRAME("lime.math.Rectangle","set_top",0x363d9aec,"lime.math.Rectangle.set_top","lime/math/Rectangle.hx",316,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(316)
	hx::SubEq(this->height,(t - this->y));
	HX_STACK_LINE(316)
	this->y = t;
	HX_STACK_LINE(316)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

::lime::math::Vector2 Rectangle_obj::get_topLeft( ){
	HX_STACK_FRAME("lime.math.Rectangle","get_topLeft",0x58bfae07,"lime.math.Rectangle.get_topLeft","lime/math/Rectangle.hx",317,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	return ::lime::math::Vector2_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

::lime::math::Vector2 Rectangle_obj::set_topLeft( ::lime::math::Vector2 p){
	HX_STACK_FRAME("lime.math.Rectangle","set_topLeft",0x632cb513,"lime.math.Rectangle.set_topLeft","lime/math/Rectangle.hx",318,0xce0be93c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(318)
	this->x = p->x;
	HX_STACK_LINE(318)
	this->y = p->y;
	HX_STACK_LINE(318)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return get_topLeft(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"__expand") ) { return __expand_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"__contract") ) { return __contract_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return get_bottomRight(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__toFlashRectangle") ) { return __toFlashRectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("bottomRight"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("topLeft"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	HX_CSTRING("contains"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("containsRect"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("equals"),
	HX_CSTRING("inflate"),
	HX_CSTRING("inflatePoint"),
	HX_CSTRING("intersection"),
	HX_CSTRING("intersects"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("offset"),
	HX_CSTRING("offsetPoint"),
	HX_CSTRING("setEmpty"),
	HX_CSTRING("setTo"),
	HX_CSTRING("transform"),
	HX_CSTRING("union"),
	HX_CSTRING("__contract"),
	HX_CSTRING("__expand"),
	HX_CSTRING("__toFlashRectangle"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("set_bottom"),
	HX_CSTRING("get_bottomRight"),
	HX_CSTRING("set_bottomRight"),
	HX_CSTRING("get_left"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_right"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_top"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_topLeft"),
	HX_CSTRING("set_topLeft"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.math.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
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

void Rectangle_obj::__boot()
{
}

} // end namespace lime
} // end namespace math
