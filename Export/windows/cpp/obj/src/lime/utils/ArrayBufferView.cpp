#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{
HX_STACK_FRAME("lime.utils.ArrayBufferView","new",0xa2471efa,"lime.utils.ArrayBufferView.new","lime/utils/ArrayBufferView.hx",27,0xb543acf8)
HX_STACK_THIS(this)
HX_STACK_ARG(lengthOrBuffer,"lengthOrBuffer")
HX_STACK_ARG(__o_byteOffset,"byteOffset")
HX_STACK_ARG(length,"length")
int byteOffset = __o_byteOffset.Default(0);
{
	HX_STACK_LINE(29)
	if ((::Std_obj::is(lengthOrBuffer,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(31)
		int _g = ::Std_obj::_int(lengthOrBuffer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		this->byteLength = _g;
		HX_STACK_LINE(32)
		this->byteOffset = (int)0;
		HX_STACK_LINE(34)
		::lime::utils::ByteArray _g1 = ::lime::utils::ByteArray_obj::__new(this->byteLength);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		this->buffer = _g1;
	}
	else{
		HX_STACK_LINE(43)
		this->buffer = lengthOrBuffer;
		HX_STACK_LINE(45)
		if (((this->buffer == null()))){
			HX_STACK_LINE(47)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
		}
		HX_STACK_LINE(51)
		this->byteOffset = byteOffset;
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::lime::utils::ArrayBufferView_obj > __this,int &byteOffset){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/utils/ArrayBufferView.hx",53,0xb543acf8)
				{
					HX_STACK_LINE(53)
					int b = __this->buffer->length;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(53)
					bool aNeg = (byteOffset < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(53)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(53)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((byteOffset > b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		if ((_Function_2_1::Block(this,byteOffset))){
			HX_STACK_LINE(55)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid starting position"));
		}
		HX_STACK_LINE(59)
		if (((length == null()))){
			HX_STACK_LINE(61)
			this->byteLength = (this->buffer->length - byteOffset);
		}
		else{
			HX_STACK_LINE(65)
			this->byteLength = length;
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::lime::utils::ArrayBufferView_obj > __this,int &byteOffset){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/utils/ArrayBufferView.hx",67,0xb543acf8)
					{
						HX_STACK_LINE(67)
						int a = (__this->byteLength + byteOffset);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(67)
						int b = __this->buffer->length;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(67)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(67)
						bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(67)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > b)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(67)
			if ((_Function_3_1::Block(this,byteOffset))){
				HX_STACK_LINE(69)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid buffer length"));
			}
		}
	}
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		this->buffer->littleEndian = true;
		HX_STACK_LINE(80)
		false;
	}
	HX_STACK_LINE(84)
	this->bytes = this->buffer->b;
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(lengthOrBuffer,__o_byteOffset,length);
	return result;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *ArrayBufferView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::utils::IMemoryRange_obj)) return operator ::lime::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

::lime::utils::ByteArray ArrayBufferView_obj::getByteBuffer( ){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getByteBuffer",0xff38f578,"lime.utils.ArrayBufferView.getByteBuffer","lime/utils/ArrayBufferView.hx",92,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	return this->buffer;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getByteBuffer,return )

Float ArrayBufferView_obj::getFloat32( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getFloat32",0xd2f52feb,"lime.utils.ArrayBufferView.getFloat32","lime/utils/ArrayBufferView.hx",100,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(100)
	return ::__hxcpp_memory_get_float(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getFloat32,return )

int ArrayBufferView_obj::getInt8( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getInt8",0x1ca597b9,"lime.utils.ArrayBufferView.getInt8","lime/utils/ArrayBufferView.hx",112,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(112)
	return ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt8,return )

int ArrayBufferView_obj::getInt16( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getInt16",0xf43f2444,"lime.utils.ArrayBufferView.getInt16","lime/utils/ArrayBufferView.hx",124,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(124)
	return ::__hxcpp_memory_get_i16(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt16,return )

int ArrayBufferView_obj::getInt32( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getInt32",0xf43f25fe,"lime.utils.ArrayBufferView.getInt32","lime/utils/ArrayBufferView.hx",136,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(136)
	return ::__hxcpp_memory_get_i32(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt32,return )

int ArrayBufferView_obj::getLength( ){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getLength",0xc3a95c36,"lime.utils.ArrayBufferView.getLength","lime/utils/ArrayBufferView.hx",147,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return this->byteLength;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getLength,return )

int ArrayBufferView_obj::getStart( ){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getStart",0xba2a0712,"lime.utils.ArrayBufferView.getStart","lime/utils/ArrayBufferView.hx",154,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	return this->byteOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getStart,return )

int ArrayBufferView_obj::getUInt8( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getUInt8",0xc494e22e,"lime.utils.ArrayBufferView.getUInt8","lime/utils/ArrayBufferView.hx",159,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(162)
	int _g = ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(162)
	return (int(_g) & int((int)255));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt8,return )

int ArrayBufferView_obj::getUInt16( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getUInt16",0x3db1002f,"lime.utils.ArrayBufferView.getUInt16","lime/utils/ArrayBufferView.hx",171,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(174)
	int _g = ::__hxcpp_memory_get_ui16(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(174)
	return (int(_g) & int((int)65535));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt16,return )

int ArrayBufferView_obj::getUInt32( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getUInt32",0x3db101e9,"lime.utils.ArrayBufferView.getUInt32","lime/utils/ArrayBufferView.hx",186,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(186)
	return ::__hxcpp_memory_get_ui32(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt32,return )

Void ArrayBufferView_obj::setFloat32( int position,Float value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setFloat32",0xd672ce5f,"lime.utils.ArrayBufferView.setFloat32","lime/utils/ArrayBufferView.hx",198,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(198)
		::__hxcpp_memory_set_float(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setFloat32,(void))

Void ArrayBufferView_obj::setInt8( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setInt8",0x0fa728c5,"lime.utils.ArrayBufferView.setInt8","lime/utils/ArrayBufferView.hx",210,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(210)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt8,(void))

Void ArrayBufferView_obj::setInt16( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setInt16",0xa29c7db8,"lime.utils.ArrayBufferView.setInt16","lime/utils/ArrayBufferView.hx",222,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(222)
		::__hxcpp_memory_set_i16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt16,(void))

Void ArrayBufferView_obj::setInt32( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setInt32",0xa29c7f72,"lime.utils.ArrayBufferView.setInt32","lime/utils/ArrayBufferView.hx",234,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(234)
		::__hxcpp_memory_set_i32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt32,(void))

Void ArrayBufferView_obj::setUInt8( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setUInt8",0x72f23ba2,"lime.utils.ArrayBufferView.setUInt8","lime/utils/ArrayBufferView.hx",246,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(246)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt8,(void))

Void ArrayBufferView_obj::setUInt16( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setUInt16",0x2101ec3b,"lime.utils.ArrayBufferView.setUInt16","lime/utils/ArrayBufferView.hx",259,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(259)
		::__hxcpp_memory_set_ui16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt16,(void))

Void ArrayBufferView_obj::setUInt32( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setUInt32",0x2101edf5,"lime.utils.ArrayBufferView.setUInt32","lime/utils/ArrayBufferView.hx",272,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(272)
		::__hxcpp_memory_set_ui32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt32,(void))


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInt8") ) { return getInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt8") ) { return setInt8_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { return getInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt8") ) { return getUInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt16") ) { return setInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt8") ) { return setUInt8_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt16") ) { return getUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt32") ) { return getUInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt16") ) { return setUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt32") ) { return setUInt32_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return getFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return setFloat32_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("byteOffset"));
	outFields->push(HX_CSTRING("byteLength"));
	outFields->push(HX_CSTRING("bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_CSTRING("byteOffset")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_CSTRING("byteLength")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(ArrayBufferView_obj,bytes),HX_CSTRING("bytes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("byteOffset"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("bytes"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getFloat32"),
	HX_CSTRING("getInt8"),
	HX_CSTRING("getInt16"),
	HX_CSTRING("getInt32"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getStart"),
	HX_CSTRING("getUInt8"),
	HX_CSTRING("getUInt16"),
	HX_CSTRING("getUInt32"),
	HX_CSTRING("setFloat32"),
	HX_CSTRING("setInt8"),
	HX_CSTRING("setInt16"),
	HX_CSTRING("setInt32"),
	HX_CSTRING("setUInt8"),
	HX_CSTRING("setUInt16"),
	HX_CSTRING("setUInt32"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#endif

Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.utils.ArrayBufferView"), hx::TCanCast< ArrayBufferView_obj> ,sStaticFields,sMemberFields,
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

void ArrayBufferView_obj::__boot()
{
}

} // end namespace lime
} // end namespace utils
