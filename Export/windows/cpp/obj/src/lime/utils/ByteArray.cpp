#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("lime.utils.ByteArray","new",0x0dbc8bed,"lime.utils.ByteArray.new","lime/utils/ByteArray.hx",34,0x2063a1e5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(46)
	this->littleEndian = false;
	HX_STACK_LINE(45)
	this->allocated = (int)0;
	HX_STACK_LINE(43)
	this->position = (int)0;
	HX_STACK_LINE(122)
	this->length = (int)0;
	HX_STACK_LINE(123)
	if (((size > (int)0))){
		HX_STACK_LINE(130)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(132)
		data->__SetSizeExact(size);
		HX_STACK_LINE(136)
		super::__construct(size,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_size);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::utils::IMemoryRange_obj)) return operator ::lime::utils::IMemoryRange_obj *();
	if (inType==typeid( ::lime::utils::IDataInput_obj)) return operator ::lime::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__() {
HX_STACK_FRAME("lime.utils.ByteArray","__init__",0xb5df22a3,"lime.utils.ByteArray.__init__","lime/utils/ByteArray.hx",58,0x2063a1e5)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::lime::utils::ByteArray run(int length){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/utils/ByteArray.hx",60,0x2063a1e5)
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(60)
			return ::lime::utils::ByteArray_obj::__new(length);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(60)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::lime::utils::ByteArray bytes,int length){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","lime/utils/ByteArray.hx",67,0x2063a1e5)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(69)
			if (((length > (int)0))){
				HX_STACK_LINE(70)
				bytes->__Field(HX_CSTRING("ensureElem"),true)((length - (int)1),true);
			}
			HX_STACK_LINE(71)
			bytes->__FieldRef(HX_CSTRING("length")) = length;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(67)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::lime::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","lime/utils/ByteArray.hx",104,0x2063a1e5)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(104)
			if (((bytes == null()))){
				HX_STACK_LINE(104)
				return null();
			}
			else{
				HX_STACK_LINE(104)
				return bytes->__Field(HX_CSTRING("b"),true);
			}
			HX_STACK_LINE(104)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(104)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::lime::utils::ByteArray bytes1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","lime/utils/ByteArray.hx",105,0x2063a1e5)
		HX_STACK_ARG(bytes1,"bytes1")
		{
			HX_STACK_LINE(105)
			if (((bytes1 == null()))){
				HX_STACK_LINE(105)
				return (int)0;
			}
			else{
				HX_STACK_LINE(105)
				return bytes1->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(105)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(105)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(108)
	Dynamic init = ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_init"),(int)4,null());		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(109)
	init(factory,slen,resize,bytes);
}
}

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","asString",0x166978b6,"lime.utils.ByteArray.asString","lime/utils/ByteArray.hx",148,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	return this->readUTFBytes(this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","checkData",0xb6bc825f,"lime.utils.ByteArray.checkData","lime/utils/ByteArray.hx",157,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(157)
		if ((((length + this->position) > this->length))){
			HX_STACK_LINE(159)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","clear",0x0e13ea5a,"lime.utils.ByteArray.clear","lime/utils/ByteArray.hx",167,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		this->length = (int)0;
		HX_STACK_LINE(170)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","compress",0xfa228cf5,"lime.utils.ByteArray.compress","lime/utils/ByteArray.hx",175,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(181)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(184)
		if (((algorithm == null()))){
			HX_STACK_LINE(186)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(190)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(192)
		if (((algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(194)
			Array< unsigned char > _g = ::lime::utils::ByteArray_obj::lime_lzma_encode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			result = _g1;
		}
		else{
			HX_STACK_LINE(198)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(198)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(200)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(201)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(202)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(209)
			::haxe::io::Bytes _g2 = ::haxe::zip::Compress_obj::run(src,(int)8);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(209)
			result = _g2;
		}
		HX_STACK_LINE(214)
		this->b = result->b;
		HX_STACK_LINE(215)
		this->length = result->length;
		HX_STACK_LINE(216)
		this->position = this->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","deflate",0xa25c1178,"lime.utils.ByteArray.deflate","lime/utils/ByteArray.hx",227,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		this->compress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("lime.utils.ByteArray","ensureElem",0x67e83180,"lime.utils.ByteArray.ensureElem","lime/utils/ByteArray.hx",233,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(235)
		int len = (size + (int)1);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(248)
		if (((this->b == null()))){
			HX_STACK_LINE(249)
			Array< unsigned char > _g = Array_obj< unsigned char >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			this->b = _g;
		}
		HX_STACK_LINE(251)
		if (((this->b->length < len))){
			HX_STACK_LINE(253)
			this->b->__SetSize(len);
		}
		HX_STACK_LINE(258)
		if (((bool(updateLength) && bool((this->length < len))))){
			HX_STACK_LINE(260)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getLength",0x3bd78169,"lime.utils.ByteArray.getLength","lime/utils/ByteArray.hx",287,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

::lime::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getByteBuffer",0x574d302b,"lime.utils.ByteArray.getByteBuffer","lime/utils/ByteArray.hx",288,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getStart",0x5a45c93f,"lime.utils.ByteArray.getStart","lime/utils/ByteArray.hx",289,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(289)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","inflate",0x0b7da294,"lime.utils.ByteArray.inflate","lime/utils/ByteArray.hx",295,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(295)
		this->uncompress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readBoolean",0x0cfd0e7f,"lime.utils.ByteArray.readBoolean","lime/utils/ByteArray.hx",305,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	if (((this->position < this->length))){
		HX_STACK_LINE(305)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(305)
			_g = this->b->__get(pos);
		}
		HX_STACK_LINE(305)
		return (_g != (int)0);
	}
	else{
		HX_STACK_LINE(305)
		int _g1 = this->ThrowEOFi();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(305)
		return (_g1 != (int)0);
	}
	HX_STACK_LINE(305)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readByte",0xdf7e3ed1,"lime.utils.ByteArray.readByte","lime/utils/ByteArray.hx",311,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	int val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(317)
	if (((this->position < this->length))){
		HX_STACK_LINE(317)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(317)
		val = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(317)
		val = this->ThrowEOFi();
	}
	HX_STACK_LINE(318)
	if (((((int(val) & int((int)128))) != (int)0))){
		HX_STACK_LINE(318)
		return (val - (int)256);
	}
	else{
		HX_STACK_LINE(318)
		return val;
	}
	HX_STACK_LINE(318)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::lime::utils::ByteArray bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","readBytes",0xaef8b882,"lime.utils.ByteArray.readBytes","lime/utils/ByteArray.hx",324,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(346)
		if (((length == (int)0))){
			HX_STACK_LINE(346)
			length = (this->length - this->position);
		}
		HX_STACK_LINE(347)
		if ((((this->position + length) > this->length))){
			HX_STACK_LINE(347)
			this->ThrowEOFi();
		}
		HX_STACK_LINE(349)
		if (((bytes->length < (offset + length)))){
			HX_STACK_LINE(351)
			bytes->ensureElem(((offset + length) - (int)1),true);
		}
		HX_STACK_LINE(358)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(359)
		Array< unsigned char > b2 = bytes->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(360)
		int p = this->position;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(361)
			while((true)){
				HX_STACK_LINE(361)
				if ((!(((_g < length))))){
					HX_STACK_LINE(361)
					break;
				}
				HX_STACK_LINE(361)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(361)
				b2[(offset + i)] = b1->__get((p + i));
			}
		}
		HX_STACK_LINE(364)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readDouble",0x76048f1a,"lime.utils.ByteArray.readDouble","lime/utils/ByteArray.hx",371,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(378)
	if ((((this->position + (int)8) > this->length))){
		HX_STACK_LINE(378)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(379)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(380)
	return this->getDouble((this->position - (int)8));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readFloat",0xf3f775b3,"lime.utils.ByteArray.readFloat","lime/utils/ByteArray.hx",399,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(406)
	if ((((this->position + (int)4) > this->length))){
		HX_STACK_LINE(406)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(407)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(408)
	return this->getFloat((this->position - (int)4));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readInt",0x022bb946,"lime.utils.ByteArray.readInt","lime/utils/ByteArray.hx",414,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(421)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(421)
	if (((this->position < this->length))){
		HX_STACK_LINE(421)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(421)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(421)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(422)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(422)
	if (((this->position < this->length))){
		HX_STACK_LINE(422)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(422)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(422)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(423)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(423)
	if (((this->position < this->length))){
		HX_STACK_LINE(423)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(423)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(423)
		ch3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(424)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(424)
	if (((this->position < this->length))){
		HX_STACK_LINE(424)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(424)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(424)
		ch4 = this->ThrowEOFi();
	}
	HX_STACK_LINE(425)
	if ((this->littleEndian)){
		HX_STACK_LINE(425)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	else{
		HX_STACK_LINE(425)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	HX_STACK_LINE(425)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("lime.utils.ByteArray","readMultiByte",0x680b0db8,"lime.utils.ByteArray.readMultiByte","lime/utils/ByteArray.hx",433,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(433)
	return this->readUTFBytes(length);
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readShort",0x6d883493,"lime.utils.ByteArray.readShort","lime/utils/ByteArray.hx",438,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(445)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(445)
	if (((this->position < this->length))){
		HX_STACK_LINE(445)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(445)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(445)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(446)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(446)
	if (((this->position < this->length))){
		HX_STACK_LINE(446)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(446)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(446)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(447)
	int val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(447)
	if ((this->littleEndian)){
		HX_STACK_LINE(447)
		val = (int((int(ch2) << int((int)8))) | int(ch1));
	}
	else{
		HX_STACK_LINE(447)
		val = (int((int(ch1) << int((int)8))) | int(ch2));
	}
	HX_STACK_LINE(448)
	if (((((int(val) & int((int)32768))) != (int)0))){
		HX_STACK_LINE(448)
		return (val - (int)65536);
	}
	else{
		HX_STACK_LINE(448)
		return val;
	}
	HX_STACK_LINE(448)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedByte",0x22c35b66,"lime.utils.ByteArray.readUnsignedByte","lime/utils/ByteArray.hx",460,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(460)
	if (((this->position < this->length))){
		HX_STACK_LINE(460)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(460)
		return this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(460)
		return this->ThrowEOFi();
	}
	HX_STACK_LINE(460)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedInt",0x956a0651,"lime.utils.ByteArray.readUnsignedInt","lime/utils/ByteArray.hx",466,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(473)
	if (((this->position < this->length))){
		HX_STACK_LINE(473)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(473)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(473)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(474)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(474)
	if (((this->position < this->length))){
		HX_STACK_LINE(474)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(474)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(474)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(475)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(475)
	if (((this->position < this->length))){
		HX_STACK_LINE(475)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(475)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(475)
		ch3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(476)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(476)
	if (((this->position < this->length))){
		HX_STACK_LINE(476)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(476)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(476)
		ch4 = this->ThrowEOFi();
	}
	HX_STACK_LINE(477)
	if ((this->littleEndian)){
		HX_STACK_LINE(477)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	else{
		HX_STACK_LINE(477)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	HX_STACK_LINE(477)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedShort",0x06bc1a5e,"lime.utils.ByteArray.readUnsignedShort","lime/utils/ByteArray.hx",483,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(490)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(490)
	if (((this->position < this->length))){
		HX_STACK_LINE(490)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(490)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(490)
		ch1 = this->ThrowEOFi();
	}
	HX_STACK_LINE(491)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(491)
	if (((this->position < this->length))){
		HX_STACK_LINE(491)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(491)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(491)
		ch2 = this->ThrowEOFi();
	}
	HX_STACK_LINE(492)
	if ((this->littleEndian)){
		HX_STACK_LINE(492)
		return (((int(ch2) << int((int)8))) + ch1);
	}
	else{
		HX_STACK_LINE(492)
		return (int((int(ch1) << int((int)8))) | int(ch2));
	}
	HX_STACK_LINE(492)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTF",0x0234bd7e,"lime.utils.ByteArray.readUTF","lime/utils/ByteArray.hx",498,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(500)
	int bytesCount = this->readUnsignedShort();		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(501)
	return this->readUTFBytes(bytesCount);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int len){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTFBytes",0xa63b120d,"lime.utils.ByteArray.readUTFBytes","lime/utils/ByteArray.hx",506,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(547)
	if ((((this->position + len) > this->length))){
		HX_STACK_LINE(549)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(553)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(554)
	hx::AddEq(this->position,len);
	HX_STACK_LINE(559)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(560)
	::__hxcpp_string_of_bytes(this->b,result,p,len);
	HX_STACK_LINE(561)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","setLength",0x1f286d75,"lime.utils.ByteArray.setLength","lime/utils/ByteArray.hx",572,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(574)
		if (((length > (int)0))){
			HX_STACK_LINE(575)
			this->ensureElem((length - (int)1),false);
		}
		HX_STACK_LINE(576)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::lime::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic inEnd){
	HX_STACK_FRAME("lime.utils.ByteArray","slice",0x44803d1f,"lime.utils.ByteArray.slice","lime/utils/ByteArray.hx",583,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(inEnd,"inEnd")
	HX_STACK_LINE(585)
	if (((begin < (int)0))){
		HX_STACK_LINE(587)
		hx::AddEq(begin,this->length);
		HX_STACK_LINE(588)
		if (((begin < (int)0))){
			HX_STACK_LINE(589)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(593)
	int end;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(593)
	if (((inEnd == null()))){
		HX_STACK_LINE(593)
		end = this->length;
	}
	else{
		HX_STACK_LINE(593)
		end = inEnd;
	}
	HX_STACK_LINE(595)
	if (((end < (int)0))){
		HX_STACK_LINE(597)
		hx::AddEq(end,this->length);
		HX_STACK_LINE(599)
		if (((end < (int)0))){
			HX_STACK_LINE(600)
			end = (int)0;
		}
	}
	HX_STACK_LINE(604)
	if (((begin >= end))){
		HX_STACK_LINE(605)
		return ::lime::utils::ByteArray_obj::__new(null());
	}
	HX_STACK_LINE(607)
	::lime::utils::ByteArray result = ::lime::utils::ByteArray_obj::__new((end - begin));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(609)
	int opos = this->position;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(610)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),begin,(end - begin));
	HX_STACK_LINE(612)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_FRAME("lime.utils.ByteArray","ThrowEOFi",0x2ce113a0,"lime.utils.ByteArray.ThrowEOFi","lime/utils/ByteArray.hx",619,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(621)
	HX_STACK_DO_THROW(HX_CSTRING("new EOFError();"));
	HX_STACK_LINE(622)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

::String ByteArray_obj::toString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","toString",0xaed215ff,"lime.utils.ByteArray.toString","lime/utils/ByteArray.hx",628,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(630)
	int cachePosition = this->position;		HX_STACK_VAR(cachePosition,"cachePosition");
	HX_STACK_LINE(631)
	this->position = (int)0;
	HX_STACK_LINE(632)
	::String value = this->readUTFBytes(this->length);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(633)
	this->position = cachePosition;
	HX_STACK_LINE(634)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,toString,return )

Void ByteArray_obj::uncompress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","uncompress",0x5340af0e,"lime.utils.ByteArray.uncompress","lime/utils/ByteArray.hx",639,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(655)
		if (((algorithm == null()))){
			HX_STACK_LINE(655)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::GZIP;
		}
		HX_STACK_LINE(660)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(663)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(665)
		if (((algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(667)
			Array< unsigned char > _g = ::lime::utils::ByteArray_obj::lime_lzma_decode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(667)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(667)
			result = _g1;
		}
		else{
			HX_STACK_LINE(671)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(671)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(672)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(673)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(674)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(680)
			::haxe::io::Bytes _g2 = ::haxe::zip::Uncompress_obj::run(src,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(680)
			result = _g2;
		}
		HX_STACK_LINE(685)
		this->b = result->b;
		HX_STACK_LINE(686)
		this->length = result->length;
		HX_STACK_LINE(687)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("lime.utils.ByteArray","write_uncheck",0xb8315afc,"lime.utils.ByteArray.write_uncheck","lime/utils/ByteArray.hx",697,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(700)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(700)
		this->b->__unsafe_set(_g,byte);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeBoolean",0x97597a5c,"lime.utils.ByteArray.writeBoolean","lime/utils/ByteArray.hx",710,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(710)
		this->writeByte((  ((value)) ? int((int)1) : int((int)0) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeByte",0x6a5076d4,"lime.utils.ByteArray.writeByte","lime/utils/ByteArray.hx",715,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(723)
		this->ensureElem(this->position,true);
		HX_STACK_LINE(725)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(725)
		this->b[_g] = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","writeBytes",0x9c17831f,"lime.utils.ByteArray.writeBytes","lime/utils/ByteArray.hx",734,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(736)
		if (((bytes->length == (int)0))){
			HX_STACK_LINE(736)
			return null();
		}
		struct _Function_1_1{
			inline static Float Block( int &length){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/utils/ByteArray.hx",744,0x2063a1e5)
				{
					HX_STACK_LINE(744)
					int _int = length;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(744)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(744)
		if (((_Function_1_1::Block(length) == (int)0))){
			HX_STACK_LINE(744)
			length = (bytes->length - offset);
		}
		HX_STACK_LINE(745)
		this->ensureElem(((this->position + length) - (int)1),true);
		HX_STACK_LINE(746)
		int opos = this->position;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(747)
		this->position = (this->position + length);
		HX_STACK_LINE(748)
		this->blit(opos,bytes,offset,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeDouble",0x03d70ddd,"lime.utils.ByteArray.writeDouble","lime/utils/ByteArray.hx",754,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(761)
		this->ensureElem((this->position + (int)7),true);
		HX_STACK_LINE(762)
		this->setDouble(this->position,x);
		HX_STACK_LINE(763)
		hx::AddEq(this->position,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFile",0x6ce92648,"lime.utils.ByteArray.writeFile","lime/utils/ByteArray.hx",775,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(775)
		::lime::utils::ByteArray_obj::lime_byte_array_overwrite_file(path,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFloat",0xe1164050,"lime.utils.ByteArray.writeFloat","lime/utils/ByteArray.hx",782,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(789)
		this->ensureElem((this->position + (int)3),true);
		HX_STACK_LINE(790)
		this->setFloat(this->position,x);
		HX_STACK_LINE(791)
		hx::AddEq(this->position,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeInt",0x9a53b2a3,"lime.utils.ByteArray.writeInt","lime/utils/ByteArray.hx",797,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(804)
		this->ensureElem((this->position + (int)3),true);
		HX_STACK_LINE(806)
		if ((this->littleEndian)){
			HX_STACK_LINE(808)
			{
				HX_STACK_LINE(808)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(808)
				this->b->__unsafe_set(_g,value);
			}
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(809)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(809)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(810)
			{
				HX_STACK_LINE(810)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(810)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(811)
			{
				HX_STACK_LINE(811)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(811)
				this->b->__unsafe_set(_g3,(int(value) >> int((int)24)));
			}
		}
		else{
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(815)
				this->b->__unsafe_set(_g4,(int(value) >> int((int)24)));
			}
			HX_STACK_LINE(816)
			{
				HX_STACK_LINE(816)
				int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(816)
				this->b->__unsafe_set(_g5,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(817)
			{
				HX_STACK_LINE(817)
				int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(817)
				this->b->__unsafe_set(_g6,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(818)
			{
				HX_STACK_LINE(818)
				int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(818)
				this->b->__unsafe_set(_g7,value);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeShort",0x5aa6ff30,"lime.utils.ByteArray.writeShort","lime/utils/ByteArray.hx",826,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(833)
		this->ensureElem((this->position + (int)1),true);
		HX_STACK_LINE(835)
		if ((this->littleEndian)){
			HX_STACK_LINE(837)
			{
				HX_STACK_LINE(837)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(837)
				this->b->__unsafe_set(_g,value);
			}
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(838)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)8)));
			}
		}
		else{
			HX_STACK_LINE(842)
			{
				HX_STACK_LINE(842)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(842)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(843)
			{
				HX_STACK_LINE(843)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(843)
				this->b->__unsafe_set(_g3,value);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedInt",0x9d6624ae,"lime.utils.ByteArray.writeUnsignedInt","lime/utils/ByteArray.hx",859,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(859)
		this->writeInt(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUnsignedShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedShort",0x1cc249fb,"lime.utils.ByteArray.writeUnsignedShort","lime/utils/ByteArray.hx",872,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(872)
		this->writeShort(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedShort,(void))

Void ByteArray_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTF",0x9a5cb6db,"lime.utils.ByteArray.writeUTF","lime/utils/ByteArray.hx",878,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(887)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(889)
		this->writeShort(bytes->length);
		HX_STACK_LINE(890)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTFBytes",0x2cbd0790,"lime.utils.ByteArray.writeUTFBytes","lime/utils/ByteArray.hx",896,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(933)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(value);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(935)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__fromBytes",0xdc5fcc0e,"lime.utils.ByteArray.__fromBytes","lime/utils/ByteArray.hx",941,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(948)
		this->b = bytes->b;
		HX_STACK_LINE(949)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("lime.utils.ByteArray","__get",0xb7e35a43,"lime.utils.ByteArray.__get","lime/utils/ByteArray.hx",966,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(966)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__set",0xb7ec754f,"lime.utils.ByteArray.__set","lime/utils/ByteArray.hx",1060,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1060)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

bool ByteArray_obj::get_bigEndian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bigEndian",0x3400371f,"lime.utils.ByteArray.get_bigEndian","lime/utils/ByteArray.hx",1077,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1077)
	return !(this->littleEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bigEndian,return )

bool ByteArray_obj::set_bigEndian( bool value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_bigEndian",0x7906192b,"lime.utils.ByteArray.set_bigEndian","lime/utils/ByteArray.hx",1078,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1078)
	this->littleEndian = !(value);
	HX_STACK_LINE(1078)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_bigEndian,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bytesAvailable",0x625f77ba,"lime.utils.ByteArray.get_bytesAvailable","lime/utils/ByteArray.hx",1084,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1084)
	return (this->length - this->position);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_byteLength",0x941c2bea,"lime.utils.ByteArray.get_byteLength","lime/utils/ByteArray.hx",1092,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1092)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_endian",0x34cd8877,"lime.utils.ByteArray.get_endian","lime/utils/ByteArray.hx",1100,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1100)
	if ((this->littleEndian)){
		HX_STACK_LINE(1100)
		return HX_CSTRING("littleEndian");
	}
	else{
		HX_STACK_LINE(1100)
		return HX_CSTRING("bigEndian");
	}
	HX_STACK_LINE(1100)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String endian){
	HX_STACK_FRAME("lime.utils.ByteArray","set_endian",0x384b26eb,"lime.utils.ByteArray.set_endian","lime/utils/ByteArray.hx",1105,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(endian,"endian")
	HX_STACK_LINE(1107)
	this->littleEndian = (endian == HX_CSTRING("littleEndian"));
	HX_STACK_LINE(1108)
	return endian;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

int ByteArray_obj::set_length( int value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_length",0xdcca2336,"lime.utils.ByteArray.set_length","lime/utils/ByteArray.hx",1122,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1122)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_length,return )

::lime::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.ByteArray","fromBytes",0x929a55ee,"lime.utils.ByteArray.fromBytes","lime/utils/ByteArray.hx",277,0x2063a1e5)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(279)
	::lime::utils::ByteArray result = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(280)
		result->b = bytes->b;
		HX_STACK_LINE(280)
		result->length = bytes->length;
	}
	HX_STACK_LINE(281)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::lime::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("lime.utils.ByteArray","readFile",0xe216ee45,"lime.utils.ByteArray.readFile","lime/utils/ByteArray.hx",393,0x2063a1e5)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(393)
	return ::lime::utils::ByteArray_obj::lime_byte_array_read_file(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::lime_byte_array_overwrite_file;

Dynamic ByteArray_obj::lime_byte_array_read_file;

Dynamic ByteArray_obj::lime_lzma_decode;

Dynamic ByteArray_obj::lime_lzma_encode;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"allocated") ) { return allocated; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return get_bigEndian(); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { return littleEndian; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bigEndian") ) { return get_bigEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return set_bigEndian_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { return lime_lzma_decode; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { return lime_lzma_encode; }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeUnsignedShort") ) { return writeUnsignedShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { return lime_byte_array_read_file; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { return lime_byte_array_overwrite_file; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { allocated=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return set_bigEndian(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { littleEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { lime_lzma_decode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { lime_lzma_encode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { lime_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { lime_byte_array_overwrite_file=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytesAvailable"));
	outFields->push(HX_CSTRING("endian"));
	outFields->push(HX_CSTRING("objectEncoding"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("allocated"));
	outFields->push(HX_CSTRING("littleEndian"));
	outFields->push(HX_CSTRING("bigEndian"));
	outFields->push(HX_CSTRING("byteLength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("readFile"),
	HX_CSTRING("lime_byte_array_overwrite_file"),
	HX_CSTRING("lime_byte_array_read_file"),
	HX_CSTRING("lime_lzma_decode"),
	HX_CSTRING("lime_lzma_encode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_CSTRING("bytesAvailable")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,objectEncoding),HX_CSTRING("objectEncoding")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_CSTRING("position")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,allocated),HX_CSTRING("allocated")},
	{hx::fsBool,(int)offsetof(ByteArray_obj,littleEndian),HX_CSTRING("littleEndian")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_CSTRING("byteLength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("objectEncoding"),
	HX_CSTRING("position"),
	HX_CSTRING("allocated"),
	HX_CSTRING("littleEndian"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("asString"),
	HX_CSTRING("checkData"),
	HX_CSTRING("clear"),
	HX_CSTRING("compress"),
	HX_CSTRING("deflate"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getStart"),
	HX_CSTRING("inflate"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readMultiByte"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("setLength"),
	HX_CSTRING("slice"),
	HX_CSTRING("ThrowEOFi"),
	HX_CSTRING("toString"),
	HX_CSTRING("uncompress"),
	HX_CSTRING("write_uncheck"),
	HX_CSTRING("writeBoolean"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeDouble"),
	HX_CSTRING("writeFile"),
	HX_CSTRING("writeFloat"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeShort"),
	HX_CSTRING("writeUnsignedInt"),
	HX_CSTRING("writeUnsignedShort"),
	HX_CSTRING("writeUTF"),
	HX_CSTRING("writeUTFBytes"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	HX_CSTRING("get_bigEndian"),
	HX_CSTRING("set_bigEndian"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("get_byteLength"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("set_endian"),
	HX_CSTRING("set_length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
};

#endif

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
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

void ByteArray_obj::__boot()
{
	lime_byte_array_overwrite_file= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_overwrite_file"),(int)2,null());
	lime_byte_array_read_file= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_read_file"),(int)1,null());
	lime_lzma_decode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_lzma_decode"),(int)1,null());
	lime_lzma_encode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_lzma_encode"),(int)1,null());
}

} // end namespace lime
} // end namespace utils
