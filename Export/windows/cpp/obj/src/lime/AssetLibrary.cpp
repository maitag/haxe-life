#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
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

Void AssetLibrary_obj::__construct()
{
HX_STACK_FRAME("lime.AssetLibrary","new",0xa1312ef6,"lime.AssetLibrary.new","lime/Assets.hx",977,0x48c77341)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//AssetLibrary_obj::~AssetLibrary_obj() { }

Dynamic AssetLibrary_obj::__CreateEmpty() { return  new AssetLibrary_obj; }
hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__new()
{  hx::ObjectPtr< AssetLibrary_obj > result = new AssetLibrary_obj();
	result->__construct();
	return result;}

Dynamic AssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetLibrary_obj > result = new AssetLibrary_obj();
	result->__construct();
	return result;}

bool AssetLibrary_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.AssetLibrary","exists",0xcc578106,"lime.AssetLibrary.exists","lime/Assets.hx",986,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(986)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,exists,return )

::lime::audio::AudioBuffer AssetLibrary_obj::getAudioBuffer( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getAudioBuffer",0xf990deaa,"lime.AssetLibrary.getAudioBuffer","lime/Assets.hx",993,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(993)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getAudioBuffer,return )

::lime::utils::ByteArray AssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getBytes",0xc0e5199f,"lime.AssetLibrary.getBytes","lime/Assets.hx",1000,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1000)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getBytes,return )

Dynamic AssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getFont",0xf2426f1b,"lime.AssetLibrary.getFont","lime/Assets.hx",1007,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1007)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getFont,return )

::lime::graphics::Image AssetLibrary_obj::getImage( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getImage",0xc0b6308f,"lime.AssetLibrary.getImage","lime/Assets.hx",1014,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1014)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getImage,return )

::String AssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getPath",0xf8d3f6f1,"lime.AssetLibrary.getPath","lime/Assets.hx",1028,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1028)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getPath,return )

::String AssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getText",0xfb7bddf9,"lime.AssetLibrary.getText","lime/Assets.hx",1033,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1037)
	::lime::utils::ByteArray bytes = this->getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(1039)
	if (((bytes == null()))){
		HX_STACK_LINE(1041)
		return null();
	}
	else{
		HX_STACK_LINE(1045)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(1039)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getText,return )

bool AssetLibrary_obj::isLocal( ::String id,::String type){
	HX_STACK_FRAME("lime.AssetLibrary","isLocal",0xf175ceb7,"lime.AssetLibrary.isLocal","lime/Assets.hx",1060,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1060)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,isLocal,return )

Array< ::String > AssetLibrary_obj::list( ::String type){
	HX_STACK_FRAME("lime.AssetLibrary","list",0x68888108,"lime.AssetLibrary.list","lime/Assets.hx",1067,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1067)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,list,return )

Void AssetLibrary_obj::load( Dynamic handler){
{
		HX_STACK_FRAME("lime.AssetLibrary","load",0x688cfed0,"lime.AssetLibrary.load","lime/Assets.hx",1074,0x48c77341)
		HX_STACK_THIS(this)
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1074)
		handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,load,(void))

Void AssetLibrary_obj::loadAudioBuffer( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.AssetLibrary","loadAudioBuffer",0x68b85986,"lime.AssetLibrary.loadAudioBuffer","lime/Assets.hx",1079,0x48c77341)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1081)
		::lime::audio::AudioBuffer _g = this->getAudioBuffer(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1081)
		handler(_g).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadAudioBuffer,(void))

Void AssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.AssetLibrary","loadBytes",0x3c9ac77b,"lime.AssetLibrary.loadBytes","lime/Assets.hx",1086,0x48c77341)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1088)
		::lime::utils::ByteArray _g = this->getBytes(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1088)
		handler(_g).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadBytes,(void))

Void AssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.AssetLibrary","loadFont",0x57d630bf,"lime.AssetLibrary.loadFont","lime/Assets.hx",1093,0x48c77341)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1095)
		Dynamic _g = this->getFont(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1095)
		handler(_g).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFont,(void))

Void AssetLibrary_obj::loadImage( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.AssetLibrary","loadImage",0x3c6bde6b,"lime.AssetLibrary.loadImage","lime/Assets.hx",1100,0x48c77341)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1102)
		::lime::graphics::Image _g = this->getImage(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1102)
		handler(_g).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadImage,(void))

Void AssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.AssetLibrary","loadText",0x610f9f9d,"lime.AssetLibrary.loadText","lime/Assets.hx",1114,0x48c77341)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1114)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler1)
		Void run(::lime::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/Assets.hx",1120,0x48c77341)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(1120)
				if (((bytes == null()))){
					HX_STACK_LINE(1122)
					handler1->__GetItem((int)0)(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(1126)
					::String _g = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1126)
					handler1->__GetItem((int)0)(_g).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1118)
		Dynamic callback =  Dynamic(new _Function_1_1(handler1));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(1132)
		this->loadBytes(id,callback);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadText,(void))


AssetLibrary_obj::AssetLibrary_obj()
{
}

void AssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetLibrary);
	HX_MARK_MEMBER_NAME(eventCallback,"eventCallback");
	HX_MARK_END_CLASS();
}

void AssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(eventCallback,"eventCallback");
}

Dynamic AssetLibrary_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"eventCallback") ) { return eventCallback; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"eventCallback") ) { eventCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("eventCallback"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetLibrary_obj,eventCallback),HX_CSTRING("eventCallback")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("eventCallback"),
	HX_CSTRING("exists"),
	HX_CSTRING("getAudioBuffer"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getImage"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getText"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("list"),
	HX_CSTRING("load"),
	HX_CSTRING("loadAudioBuffer"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadImage"),
	HX_CSTRING("loadText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#endif

Class AssetLibrary_obj::__mClass;

void AssetLibrary_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.AssetLibrary"), hx::TCanCast< AssetLibrary_obj> ,sStaticFields,sMemberFields,
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

void AssetLibrary_obj::__boot()
{
}

} // end namespace lime
