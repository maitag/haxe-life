#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
namespace lime{
namespace math{

Void Vector4_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
HX_STACK_FRAME("lime.math.Vector4","new",0xd5c0ed36,"lime.math.Vector4.new","lime/math/Vector4.hx",19,0x7257bf5a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
HX_STACK_ARG(__o_w,"w")
Float x = __o_x.Default(0.);
Float y = __o_y.Default(0.);
Float z = __o_z.Default(0.);
Float w = __o_w.Default(0.);
{
	HX_STACK_LINE(21)
	this->w = w;
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->z = z;
}
;
	return null();
}

//Vector4_obj::~Vector4_obj() { }

Dynamic Vector4_obj::__CreateEmpty() { return  new Vector4_obj; }
hx::ObjectPtr< Vector4_obj > Vector4_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Vector4_obj > result = new Vector4_obj();
	result->__construct(__o_x,__o_y,__o_z,__o_w);
	return result;}

Dynamic Vector4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector4_obj > result = new Vector4_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::lime::math::Vector4 Vector4_obj::add( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","add",0xd5b70ef7,"lime.math.Vector4.add","lime/math/Vector4.hx",31,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(31)
	return ::lime::math::Vector4_obj::__new((this->x + a->x),(this->y + a->y),(this->z + a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,add,return )

::lime::math::Vector4 Vector4_obj::clone( ){
	HX_STACK_FRAME("lime.math.Vector4","clone",0x28f191b3,"lime.math.Vector4.clone","lime/math/Vector4.hx",50,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	return ::lime::math::Vector4_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,clone,return )

Void Vector4_obj::copyFrom( ::lime::math::Vector4 sourceVector4){
{
		HX_STACK_FRAME("lime.math.Vector4","copyFrom",0xb64da729,"lime.math.Vector4.copyFrom","lime/math/Vector4.hx",55,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceVector4,"sourceVector4")
		HX_STACK_LINE(57)
		this->x = sourceVector4->x;
		HX_STACK_LINE(58)
		this->y = sourceVector4->y;
		HX_STACK_LINE(59)
		this->z = sourceVector4->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,copyFrom,(void))

::lime::math::Vector4 Vector4_obj::crossProduct( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","crossProduct",0xdc193ff9,"lime.math.Vector4.crossProduct","lime/math/Vector4.hx",66,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(66)
	return ::lime::math::Vector4_obj::__new(((this->y * a->z) - (this->z * a->y)),((this->z * a->x) - (this->x * a->z)),((this->x * a->y) - (this->y * a->x)),(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,crossProduct,return )

Void Vector4_obj::decrementBy( ::lime::math::Vector4 a){
{
		HX_STACK_FRAME("lime.math.Vector4","decrementBy",0xf530fda0,"lime.math.Vector4.decrementBy","lime/math/Vector4.hx",71,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(73)
		hx::SubEq(this->x,a->x);
		HX_STACK_LINE(74)
		hx::SubEq(this->y,a->y);
		HX_STACK_LINE(75)
		hx::SubEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,decrementBy,(void))

Float Vector4_obj::dotProduct( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","dotProduct",0xf4c9f190,"lime.math.Vector4.dotProduct","lime/math/Vector4.hx",93,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(93)
	return (((this->x * a->x) + (this->y * a->y)) + (this->z * a->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,dotProduct,return )

bool Vector4_obj::equals( ::lime::math::Vector4 toCompare,Dynamic __o_allFour){
Dynamic allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("lime.math.Vector4","equals",0x5c12fb29,"lime.math.Vector4.equals","lime/math/Vector4.hx",100,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(100)
		return (bool((bool((bool((this->x == toCompare->x)) && bool((this->y == toCompare->y)))) && bool((this->z == toCompare->z)))) && bool(((bool(!(allFour)) || bool((this->w == toCompare->w))))));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,equals,return )

Void Vector4_obj::incrementBy( ::lime::math::Vector4 a){
{
		HX_STACK_FRAME("lime.math.Vector4","incrementBy",0x3c274cbc,"lime.math.Vector4.incrementBy","lime/math/Vector4.hx",105,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(107)
		hx::AddEq(this->x,a->x);
		HX_STACK_LINE(108)
		hx::AddEq(this->y,a->y);
		HX_STACK_LINE(109)
		hx::AddEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,incrementBy,(void))

bool Vector4_obj::nearEquals( ::lime::math::Vector4 toCompare,Float tolerance,Dynamic __o_allFour){
Dynamic allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("lime.math.Vector4","nearEquals",0xb54b3b31,"lime.math.Vector4.nearEquals","lime/math/Vector4.hx",114,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(tolerance,"tolerance")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(116)
		Float _g = ::Math_obj::abs((this->x - toCompare->x));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::lime::math::Vector4_obj > __this,::lime::math::Vector4 &toCompare,Float &tolerance){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/math/Vector4.hx",116,0x7257bf5a)
				{
					HX_STACK_LINE(116)
					Float _g1 = ::Math_obj::abs((__this->y - toCompare->y));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(116)
					return (_g1 < tolerance);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::lime::math::Vector4_obj > __this,::lime::math::Vector4 &toCompare,Float &tolerance){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/math/Vector4.hx",116,0x7257bf5a)
				{
					HX_STACK_LINE(116)
					Float _g2 = ::Math_obj::abs((__this->z - toCompare->z));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(116)
					return (_g2 < tolerance);
				}
				return null();
			}
		};
		HX_STACK_LINE(116)
		if (((  (((  (((_g < tolerance))) ? bool(_Function_1_1::Block(this,toCompare,tolerance)) : bool(false) ))) ? bool(_Function_1_2::Block(this,toCompare,tolerance)) : bool(false) ))){
			HX_STACK_LINE(116)
			if ((!((!(allFour))))){
				HX_STACK_LINE(116)
				Float _g3 = ::Math_obj::abs((this->w - toCompare->w));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(116)
				return (_g3 < tolerance);
			}
			else{
				HX_STACK_LINE(116)
				return true;
			}
		}
		else{
			HX_STACK_LINE(116)
			return false;
		}
		HX_STACK_LINE(116)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,nearEquals,return )

Void Vector4_obj::negate( ){
{
		HX_STACK_FRAME("lime.math.Vector4","negate",0x03394eac,"lime.math.Vector4.negate","lime/math/Vector4.hx",121,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		hx::MultEq(this->x,(int)-1);
		HX_STACK_LINE(124)
		hx::MultEq(this->y,(int)-1);
		HX_STACK_LINE(125)
		hx::MultEq(this->z,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,negate,(void))

Float Vector4_obj::normalize( ){
	HX_STACK_FRAME("lime.math.Vector4","normalize",0xecbc98e3,"lime.math.Vector4.normalize","lime/math/Vector4.hx",130,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	Float l = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(134)
	if (((l != (int)0))){
		HX_STACK_LINE(136)
		hx::DivEq(this->x,l);
		HX_STACK_LINE(137)
		hx::DivEq(this->y,l);
		HX_STACK_LINE(138)
		hx::DivEq(this->z,l);
	}
	HX_STACK_LINE(142)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,normalize,return )

Void Vector4_obj::project( ){
{
		HX_STACK_FRAME("lime.math.Vector4","project",0xf5d652af,"lime.math.Vector4.project","lime/math/Vector4.hx",147,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		hx::DivEq(this->x,this->w);
		HX_STACK_LINE(150)
		hx::DivEq(this->y,this->w);
		HX_STACK_LINE(151)
		hx::DivEq(this->z,this->w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,project,(void))

Void Vector4_obj::scaleBy( Float s){
{
		HX_STACK_FRAME("lime.math.Vector4","scaleBy",0x64f27ed7,"lime.math.Vector4.scaleBy","lime/math/Vector4.hx",156,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(158)
		hx::MultEq(this->x,s);
		HX_STACK_LINE(159)
		hx::MultEq(this->y,s);
		HX_STACK_LINE(160)
		hx::MultEq(this->z,s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,scaleBy,(void))

Void Vector4_obj::setTo( Float xa,Float ya,Float za){
{
		HX_STACK_FRAME("lime.math.Vector4","setTo",0x5abe1013,"lime.math.Vector4.setTo","lime/math/Vector4.hx",165,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(za,"za")
		HX_STACK_LINE(167)
		this->x = xa;
		HX_STACK_LINE(168)
		this->y = ya;
		HX_STACK_LINE(169)
		this->z = za;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,setTo,(void))

::lime::math::Vector4 Vector4_obj::subtract( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","subtract",0xe5fe107e,"lime.math.Vector4.subtract","lime/math/Vector4.hx",176,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(176)
	return ::lime::math::Vector4_obj::__new((this->x - a->x),(this->y - a->y),(this->z - a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,subtract,return )

::String Vector4_obj::toString( ){
	HX_STACK_FRAME("lime.math.Vector4","toString",0x265b6c16,"lime.math.Vector4.toString","lime/math/Vector4.hx",183,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	return ((((((HX_CSTRING("Vector4(") + this->x) + HX_CSTRING(", ")) + this->y) + HX_CSTRING(", ")) + this->z) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,toString,return )

Float Vector4_obj::get_length( ){
	HX_STACK_FRAME("lime.math.Vector4","get_length",0x4668ce99,"lime.math.Vector4.get_length","lime/math/Vector4.hx",197,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	return ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_length,return )

Float Vector4_obj::get_lengthSquared( ){
	HX_STACK_FRAME("lime.math.Vector4","get_lengthSquared",0xe5b2d78e,"lime.math.Vector4.get_lengthSquared","lime/math/Vector4.hx",204,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_lengthSquared,return )

::lime::math::Vector4 Vector4_obj::X_AXIS;

::lime::math::Vector4 Vector4_obj::Y_AXIS;

::lime::math::Vector4 Vector4_obj::Z_AXIS;

Float Vector4_obj::angleBetween( ::lime::math::Vector4 a,::lime::math::Vector4 b){
	HX_STACK_FRAME("lime.math.Vector4","angleBetween",0xe2247e9f,"lime.math.Vector4.angleBetween","lime/math/Vector4.hx",36,0x7257bf5a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(38)
	::lime::math::Vector4 a0 = ::lime::math::Vector4_obj::__new(a->x,a->y,a->z,a->w);		HX_STACK_VAR(a0,"a0");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		Float l = ::Math_obj::sqrt((((a0->x * a0->x) + (a0->y * a0->y)) + (a0->z * a0->z)));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(39)
		if (((l != (int)0))){
			HX_STACK_LINE(39)
			hx::DivEq(a0->x,l);
			HX_STACK_LINE(39)
			hx::DivEq(a0->y,l);
			HX_STACK_LINE(39)
			hx::DivEq(a0->z,l);
		}
		HX_STACK_LINE(39)
		l;
	}
	HX_STACK_LINE(40)
	::lime::math::Vector4 b0 = ::lime::math::Vector4_obj::__new(b->x,b->y,b->z,b->w);		HX_STACK_VAR(b0,"b0");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Float l = ::Math_obj::sqrt((((b0->x * b0->x) + (b0->y * b0->y)) + (b0->z * b0->z)));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(41)
		if (((l != (int)0))){
			HX_STACK_LINE(41)
			hx::DivEq(b0->x,l);
			HX_STACK_LINE(41)
			hx::DivEq(b0->y,l);
			HX_STACK_LINE(41)
			hx::DivEq(b0->z,l);
		}
		HX_STACK_LINE(41)
		l;
	}
	HX_STACK_LINE(43)
	return ::Math_obj::acos((((a0->x * b0->x) + (a0->y * b0->y)) + (a0->z * b0->z)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,angleBetween,return )

Float Vector4_obj::distance( ::lime::math::Vector4 pt1,::lime::math::Vector4 pt2){
	HX_STACK_FRAME("lime.math.Vector4","distance",0x59e62e9f,"lime.math.Vector4.distance","lime/math/Vector4.hx",80,0x7257bf5a)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(82)
	Float x = (pt2->x - pt1->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(83)
	Float y = (pt2->y - pt1->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(84)
	Float z = (pt2->z - pt1->z);		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(86)
	return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,distance,return )

::lime::math::Vector4 Vector4_obj::get_X_AXIS( ){
	HX_STACK_FRAME("lime.math.Vector4","get_X_AXIS",0xb513fadb,"lime.math.Vector4.get_X_AXIS","lime/math/Vector4.hx",211,0x7257bf5a)
	HX_STACK_LINE(211)
	return ::lime::math::Vector4_obj::__new((int)1,(int)0,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_X_AXIS,return )

::lime::math::Vector4 Vector4_obj::get_Y_AXIS( ){
	HX_STACK_FRAME("lime.math.Vector4","get_Y_AXIS",0x1b6f573a,"lime.math.Vector4.get_Y_AXIS","lime/math/Vector4.hx",218,0x7257bf5a)
	HX_STACK_LINE(218)
	return ::lime::math::Vector4_obj::__new((int)0,(int)1,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_Y_AXIS,return )

::lime::math::Vector4 Vector4_obj::get_Z_AXIS( ){
	HX_STACK_FRAME("lime.math.Vector4","get_Z_AXIS",0x81cab399,"lime.math.Vector4.get_Z_AXIS","lime/math/Vector4.hx",225,0x7257bf5a)
	HX_STACK_LINE(225)
	return ::lime::math::Vector4_obj::__new((int)0,(int)0,(int)1,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_Z_AXIS,return )


Vector4_obj::Vector4_obj()
{
}

Dynamic Vector4_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { return inCallProp ? get_X_AXIS() : X_AXIS; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { return inCallProp ? get_Y_AXIS() : Y_AXIS; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { return inCallProp ? get_Z_AXIS() : Z_AXIS; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBy") ) { return scaleBy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_X_AXIS") ) { return get_X_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y_AXIS") ) { return get_Y_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Z_AXIS") ) { return get_Z_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"nearEquals") ) { return nearEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decrementBy") ) { return decrementBy_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementBy") ) { return incrementBy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"crossProduct") ) { return crossProduct_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return inCallProp ? get_lengthSquared() : lengthSquared; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector4_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { X_AXIS=inValue.Cast< ::lime::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { Y_AXIS=inValue.Cast< ::lime::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { Z_AXIS=inValue.Cast< ::lime::math::Vector4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { lengthSquared=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthSquared"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("X_AXIS"),
	HX_CSTRING("Y_AXIS"),
	HX_CSTRING("Z_AXIS"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("distance"),
	HX_CSTRING("get_X_AXIS"),
	HX_CSTRING("get_Y_AXIS"),
	HX_CSTRING("get_Z_AXIS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector4_obj,length),HX_CSTRING("length")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,lengthSquared),HX_CSTRING("lengthSquared")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,z),HX_CSTRING("z")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("w"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("add"),
	HX_CSTRING("clone"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("crossProduct"),
	HX_CSTRING("decrementBy"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("equals"),
	HX_CSTRING("incrementBy"),
	HX_CSTRING("nearEquals"),
	HX_CSTRING("negate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("project"),
	HX_CSTRING("scaleBy"),
	HX_CSTRING("setTo"),
	HX_CSTRING("subtract"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_length"),
	HX_CSTRING("get_lengthSquared"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector4_obj::X_AXIS,"X_AXIS");
	HX_MARK_MEMBER_NAME(Vector4_obj::Y_AXIS,"Y_AXIS");
	HX_MARK_MEMBER_NAME(Vector4_obj::Z_AXIS,"Z_AXIS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector4_obj::X_AXIS,"X_AXIS");
	HX_VISIT_MEMBER_NAME(Vector4_obj::Y_AXIS,"Y_AXIS");
	HX_VISIT_MEMBER_NAME(Vector4_obj::Z_AXIS,"Z_AXIS");
};

#endif

Class Vector4_obj::__mClass;

void Vector4_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.math.Vector4"), hx::TCanCast< Vector4_obj> ,sStaticFields,sMemberFields,
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

void Vector4_obj::__boot()
{
}

} // end namespace lime
} // end namespace math
