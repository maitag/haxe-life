#ifndef INCLUDED_lime_utils_ByteArray
#define INCLUDED_lime_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/Bytes.h>
#include <lime/utils/IMemoryRange.h>
#include <lime/utils/IDataInput.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,system,System)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,CompressionAlgorithm)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ByteArray_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();
		Void __construct(hx::Null< int >  __o_size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< int >  __o_size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::lime::utils::IMemoryRange_obj *()
			{ return new ::lime::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
		inline operator ::lime::utils::IDataInput_obj *()
			{ return new ::lime::utils::IDataInput_delegate_< ByteArray_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		static void __init__();

		::String __ToString() const { return HX_CSTRING("ByteArray"); }

		typedef int __array_access;
		int bytesAvailable;
		int objectEncoding;
		int position;
		int allocated;
		bool littleEndian;
		int byteLength;
		virtual ::String asString( );
		Dynamic asString_dyn();

		virtual Void checkData( int length);
		Dynamic checkData_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void compress( ::lime::utils::CompressionAlgorithm algorithm);
		Dynamic compress_dyn();

		virtual Void deflate( );
		Dynamic deflate_dyn();

		virtual Void ensureElem( int size,bool updateLength);
		Dynamic ensureElem_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual ::lime::utils::ByteArray getByteBuffer( );
		Dynamic getByteBuffer_dyn();

		virtual int getStart( );
		Dynamic getStart_dyn();

		virtual Void inflate( );
		Dynamic inflate_dyn();

		virtual bool readBoolean( );
		Dynamic readBoolean_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Void readBytes( ::lime::utils::ByteArray bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic readBytes_dyn();

		virtual Float readDouble( );
		Dynamic readDouble_dyn();

		virtual Float readFloat( );
		Dynamic readFloat_dyn();

		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::String readMultiByte( int length,::String charSet);
		Dynamic readMultiByte_dyn();

		virtual int readShort( );
		Dynamic readShort_dyn();

		virtual int readUnsignedByte( );
		Dynamic readUnsignedByte_dyn();

		virtual int readUnsignedInt( );
		Dynamic readUnsignedInt_dyn();

		virtual int readUnsignedShort( );
		Dynamic readUnsignedShort_dyn();

		virtual ::String readUTF( );
		Dynamic readUTF_dyn();

		virtual ::String readUTFBytes( int len);
		Dynamic readUTFBytes_dyn();

		virtual Void setLength( int length);
		Dynamic setLength_dyn();

		virtual ::lime::utils::ByteArray slice( int begin,Dynamic inEnd);
		Dynamic slice_dyn();

		virtual int ThrowEOFi( );
		Dynamic ThrowEOFi_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void uncompress( ::lime::utils::CompressionAlgorithm algorithm);
		Dynamic uncompress_dyn();

		virtual Void write_uncheck( int byte);
		Dynamic write_uncheck_dyn();

		virtual Void writeBoolean( bool value);
		Dynamic writeBoolean_dyn();

		virtual Void writeByte( int value);
		Dynamic writeByte_dyn();

		virtual Void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic writeBytes_dyn();

		virtual Void writeDouble( Float x);
		Dynamic writeDouble_dyn();

		virtual Void writeFile( ::String path);
		Dynamic writeFile_dyn();

		virtual Void writeFloat( Float x);
		Dynamic writeFloat_dyn();

		virtual Void writeInt( int value);
		Dynamic writeInt_dyn();

		virtual Void writeShort( int value);
		Dynamic writeShort_dyn();

		virtual Void writeUnsignedInt( int value);
		Dynamic writeUnsignedInt_dyn();

		virtual Void writeUnsignedShort( int value);
		Dynamic writeUnsignedShort_dyn();

		virtual Void writeUTF( ::String value);
		Dynamic writeUTF_dyn();

		virtual Void writeUTFBytes( ::String value);
		Dynamic writeUTFBytes_dyn();

		virtual Void __fromBytes( ::haxe::io::Bytes bytes);
		Dynamic __fromBytes_dyn();

		virtual int __get( int pos);
		Dynamic __get_dyn();

		virtual Void __set( int pos,int v);
		Dynamic __set_dyn();

		virtual bool get_bigEndian( );
		Dynamic get_bigEndian_dyn();

		virtual bool set_bigEndian( bool value);
		Dynamic set_bigEndian_dyn();

		virtual int get_bytesAvailable( );
		Dynamic get_bytesAvailable_dyn();

		virtual int get_byteLength( );
		Dynamic get_byteLength_dyn();

		virtual ::String get_endian( );
		Dynamic get_endian_dyn();

		virtual ::String set_endian( ::String endian);
		Dynamic set_endian_dyn();

		virtual int set_length( int value);
		Dynamic set_length_dyn();

		static ::lime::utils::ByteArray fromBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::utils::ByteArray readFile( ::String path);
		static Dynamic readFile_dyn();

		static Dynamic lime_byte_array_overwrite_file;
		static Dynamic &lime_byte_array_overwrite_file_dyn() { return lime_byte_array_overwrite_file;}
		static Dynamic lime_byte_array_read_file;
		static Dynamic &lime_byte_array_read_file_dyn() { return lime_byte_array_read_file;}
		static Dynamic lime_lzma_decode;
		static Dynamic &lime_lzma_decode_dyn() { return lime_lzma_decode;}
		static Dynamic lime_lzma_encode;
		static Dynamic &lime_lzma_encode_dyn() { return lime_lzma_encode;}
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ByteArray */ 
