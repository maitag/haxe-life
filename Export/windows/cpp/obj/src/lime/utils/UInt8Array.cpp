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
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace utils{

Void UInt8Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("lime.utils.UInt8Array","new",0x64decb63,"lime.utils.UInt8Array.new","lime/utils/UInt8Array.hx",17,0x1e0ae96b)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(17)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(19)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		super::__construct(_g,null(),null());
		HX_STACK_LINE(21)
		this->length = bufferOrArray;
	}
	else{
		HX_STACK_LINE(23)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(25)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(26)
			if (((length != null()))){
				HX_STACK_LINE(26)
				this->length = length;
			}
			else{
				HX_STACK_LINE(26)
				this->length = (ints->length - start);
			}
			HX_STACK_LINE(28)
			super::__construct(this->length,null(),null());
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(34)
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(34)
				while((true)){
					HX_STACK_LINE(34)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(34)
						break;
					}
					HX_STACK_LINE(34)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(37)
					::__hxcpp_memory_set_byte(this->bytes,i,ints->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(44)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::lime::utils::UInt8Array >()))){
				HX_STACK_LINE(46)
				::lime::utils::UInt8Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(47)
				if (((length != null()))){
					HX_STACK_LINE(47)
					this->length = length;
				}
				else{
					HX_STACK_LINE(47)
					this->length = (ints->length - start);
				}
				HX_STACK_LINE(49)
				super::__construct(this->length,null(),null());
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(55)
					int _g = this->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(55)
					while((true)){
						HX_STACK_LINE(55)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(55)
							break;
						}
						HX_STACK_LINE(55)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(58)
						::__hxcpp_memory_set_byte(this->bytes,i,ints->__get((i + start)));
					}
				}
			}
			else{
				HX_STACK_LINE(67)
				super::__construct(bufferOrArray,start,length);
				HX_STACK_LINE(69)
				this->length = this->byteLength;
			}
		}
	}
}
;
	return null();
}

//UInt8Array_obj::~UInt8Array_obj() { }

Dynamic UInt8Array_obj::__CreateEmpty() { return  new UInt8Array_obj; }
hx::ObjectPtr< UInt8Array_obj > UInt8Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< UInt8Array_obj > result = new UInt8Array_obj();
	result->__construct(bufferOrArray,__o_start,length);
	return result;}

Dynamic UInt8Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UInt8Array_obj > result = new UInt8Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void UInt8Array_obj::set( Dynamic bufferOrArray,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("lime.utils.UInt8Array","set",0x64e296a5,"lime.utils.UInt8Array.set","lime/utils/UInt8Array.hx",78,0x1e0ae96b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(78)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(80)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(82)
				int _g = ints->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(82)
				while((true)){
					HX_STACK_LINE(82)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(82)
						break;
					}
					HX_STACK_LINE(82)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(84)
					::__hxcpp_memory_set_byte(this->bytes,((i + offset) + this->byteOffset),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(88)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::lime::utils::UInt8Array >()))){
				HX_STACK_LINE(90)
				::lime::utils::UInt8Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(92)
					int _g = ints->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(92)
					while((true)){
						HX_STACK_LINE(92)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(92)
							break;
						}
						HX_STACK_LINE(92)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(94)
						::__hxcpp_memory_set_byte(this->bytes,((i + offset) + this->byteOffset),ints->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(100)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,set,(void))

::lime::utils::UInt8Array UInt8Array_obj::subarray( int start,Dynamic end){
	HX_STACK_FRAME("lime.utils.UInt8Array","subarray",0xb55a8e36,"lime.utils.UInt8Array.subarray","lime/utils/UInt8Array.hx",107,0x1e0ae96b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(109)
	if (((end == null()))){
		HX_STACK_LINE(109)
		end = this->length;
	}
	else{
		HX_STACK_LINE(109)
		end = end;
	}
	HX_STACK_LINE(110)
	return ::lime::utils::UInt8Array_obj::__new(this->buffer,start,(end - start));
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,subarray,return )

int UInt8Array_obj::__get( int index){
	HX_STACK_FRAME("lime.utils.UInt8Array","__get",0xcbace339,"lime.utils.UInt8Array.__get","lime/utils/UInt8Array.hx",115,0x1e0ae96b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(115)
	int _g = ::__hxcpp_memory_get_byte(this->bytes,(index + this->byteOffset));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(115)
	return (int(_g) & int((int)255));
}


HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_obj,__get,return )

Void UInt8Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("lime.utils.UInt8Array","__set",0xcbb5fe45,"lime.utils.UInt8Array.__set","lime/utils/UInt8Array.hx",116,0x1e0ae96b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(116)
		::__hxcpp_memory_set_byte(this->bytes,(index + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,__set,(void))

int UInt8Array_obj::BYTES_PER_ELEMENT;


UInt8Array_obj::UInt8Array_obj()
{
}

Dynamic UInt8Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return subarray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UInt8Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UInt8Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BYTES_PER_ELEMENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UInt8Array_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("set"),
	HX_CSTRING("subarray"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UInt8Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

Class UInt8Array_obj::__mClass;

void UInt8Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.utils.UInt8Array"), hx::TCanCast< UInt8Array_obj> ,sStaticFields,sMemberFields,
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

void UInt8Array_obj::__boot()
{
	BYTES_PER_ELEMENT= (int)1;
}

} // end namespace lime
} // end namespace utils
