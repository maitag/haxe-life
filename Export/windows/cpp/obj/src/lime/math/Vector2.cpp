#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
namespace lime{
namespace math{

Void Vector2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("lime.math.Vector2","new",0xaef3c434,"lime.math.Vector2.new","lime/math/Vector2.hx",17,0x7105521c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(19)
	this->x = x;
	HX_STACK_LINE(20)
	this->y = y;
}
;
	return null();
}

//Vector2_obj::~Vector2_obj() { }

Dynamic Vector2_obj::__CreateEmpty() { return  new Vector2_obj; }
hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(__o_x,__o_y);
	return result;}

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::lime::math::Vector2 Vector2_obj::add( ::lime::math::Vector2 v){
	HX_STACK_FRAME("lime.math.Vector2","add",0xaee9e5f5,"lime.math.Vector2.add","lime/math/Vector2.hx",27,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(27)
	return ::lime::math::Vector2_obj::__new((v->x + this->x),(v->y + this->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,add,return )

::lime::math::Vector2 Vector2_obj::clone( ){
	HX_STACK_FRAME("lime.math.Vector2","clone",0xd5c6a431,"lime.math.Vector2.clone","lime/math/Vector2.hx",34,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return ::lime::math::Vector2_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,clone,return )

bool Vector2_obj::equals( ::lime::math::Vector2 toCompare){
	HX_STACK_FRAME("lime.math.Vector2","equals",0xe9ae16eb,"lime.math.Vector2.equals","lime/math/Vector2.hx",50,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(50)
	return (bool((bool((toCompare != null())) && bool((toCompare->x == this->x)))) && bool((toCompare->y == this->y)));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,equals,return )

Void Vector2_obj::normalize( Float thickness){
{
		HX_STACK_FRAME("lime.math.Vector2","normalize",0xeaffc261,"lime.math.Vector2.normalize","lime/math/Vector2.hx",64,0x7105521c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_LINE(64)
		if (((bool((this->x == (int)0)) && bool((this->y == (int)0))))){
			HX_STACK_LINE(66)
			return null();
		}
		else{
			HX_STACK_LINE(70)
			Float _g = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			Float norm = (Float(thickness) / Float(_g));		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(71)
			hx::MultEq(this->x,norm);
			HX_STACK_LINE(72)
			hx::MultEq(this->y,norm);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,normalize,(void))

Void Vector2_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.math.Vector2","offset",0x89fac03f,"lime.math.Vector2.offset","lime/math/Vector2.hx",79,0x7105521c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(81)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(82)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,offset,(void))

Void Vector2_obj::setTo( Float xa,Float ya){
{
		HX_STACK_FRAME("lime.math.Vector2","setTo",0x07932291,"lime.math.Vector2.setTo","lime/math/Vector2.hx",94,0x7105521c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_LINE(96)
		this->x = xa;
		HX_STACK_LINE(97)
		this->y = ya;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,setTo,(void))

::lime::math::Vector2 Vector2_obj::subtract( ::lime::math::Vector2 v){
	HX_STACK_FRAME("lime.math.Vector2","subtract",0x656920c0,"lime.math.Vector2.subtract","lime/math/Vector2.hx",103,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(103)
	return ::lime::math::Vector2_obj::__new((this->x - v->x),(this->y - v->y));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,subtract,return )

Dynamic Vector2_obj::__toFlashPoint( ){
	HX_STACK_FRAME("lime.math.Vector2","__toFlashPoint",0xf695b9a7,"lime.math.Vector2.__toFlashPoint","lime/math/Vector2.hx",113,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,__toFlashPoint,return )

Float Vector2_obj::get_length( ){
	HX_STACK_FRAME("lime.math.Vector2","get_length",0xc2e9f35b,"lime.math.Vector2.get_length","lime/math/Vector2.hx",128,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_length,return )

Float Vector2_obj::distance( ::lime::math::Vector2 pt1,::lime::math::Vector2 pt2){
	HX_STACK_FRAME("lime.math.Vector2","distance",0xd9513ee1,"lime.math.Vector2.distance","lime/math/Vector2.hx",39,0x7105521c)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(41)
	Float dx = (pt1->x - pt2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(42)
	Float dy = (pt1->y - pt2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(43)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,distance,return )

::lime::math::Vector2 Vector2_obj::interpolate( ::lime::math::Vector2 pt1,::lime::math::Vector2 pt2,Float f){
	HX_STACK_FRAME("lime.math.Vector2","interpolate",0xdb68bc95,"lime.math.Vector2.interpolate","lime/math/Vector2.hx",57,0x7105521c)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(57)
	return ::lime::math::Vector2_obj::__new((pt2->x + (f * ((pt1->x - pt2->x)))),(pt2->y + (f * ((pt1->y - pt2->y)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,interpolate,return )

::lime::math::Vector2 Vector2_obj::polar( Float len,Float angle){
	HX_STACK_FRAME("lime.math.Vector2","polar",0x53f58092,"lime.math.Vector2.polar","lime/math/Vector2.hx",87,0x7105521c)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(89)
	Float _g = ::Math_obj::cos(angle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	Float _g1 = (len * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(89)
	Float _g2 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(89)
	Float _g3 = (len * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(89)
	return ::lime::math::Vector2_obj::__new(_g1,_g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,polar,return )


Vector2_obj::Vector2_obj()
{
}

Dynamic Vector2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { return polar_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__toFlashPoint") ) { return __toFlashPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("distance"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("polar"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector2_obj,length),HX_CSTRING("length")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("add"),
	HX_CSTRING("clone"),
	HX_CSTRING("equals"),
	HX_CSTRING("normalize"),
	HX_CSTRING("offset"),
	HX_CSTRING("setTo"),
	HX_CSTRING("subtract"),
	HX_CSTRING("__toFlashPoint"),
	HX_CSTRING("get_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#endif

Class Vector2_obj::__mClass;

void Vector2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.math.Vector2"), hx::TCanCast< Vector2_obj> ,sStaticFields,sMemberFields,
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

void Vector2_obj::__boot()
{
}

} // end namespace lime
} // end namespace math
