#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
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

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::lime::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.Assets","exists",0x8a084f2e,"lime.Assets.exists","lime/Assets.hx",40,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(42)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(46)
	if (((type == null()))){
		HX_STACK_LINE(48)
		type = HX_CSTRING("BINARY");
	}
	HX_STACK_LINE(52)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(53)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(54)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(56)
	if (((library != null()))){
		HX_STACK_LINE(58)
		return library->exists(symbolName,type);
	}
	HX_STACK_LINE(64)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::lime::audio::AudioBuffer Assets_obj::getAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getAudioBuffer",0x1f7814d2,"lime.Assets.getAudioBuffer","lime/Assets.hx",75,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(77)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(81)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->audio->exists(id)) : bool(false) ))){
			HX_STACK_LINE(83)
			::lime::audio::AudioBuffer audio = ::lime::Assets_obj::cache->audio->get(id);		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(85)
			if ((::lime::Assets_obj::isValidAudio(audio))){
				HX_STACK_LINE(87)
				return audio;
			}
		}
		HX_STACK_LINE(93)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(94)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(94)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(95)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(97)
		if (((library != null()))){
			HX_STACK_LINE(99)
			if ((library->exists(symbolName,HX_CSTRING("SOUND")))){
				HX_STACK_LINE(101)
				if ((library->isLocal(symbolName,HX_CSTRING("SOUND")))){
					HX_STACK_LINE(103)
					::lime::audio::AudioBuffer audio = library->getAudioBuffer(symbolName);		HX_STACK_VAR(audio,"audio");
					HX_STACK_LINE(105)
					if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(107)
						::lime::Assets_obj::cache->audio->set(id,audio);
					}
					HX_STACK_LINE(111)
					return audio;
				}
				else{
					HX_STACK_LINE(115)
					::haxe::Log_obj::trace(((HX_CSTRING("[Assets] Audio asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),115,HX_CSTRING("lime.Assets"),HX_CSTRING("getAudioBuffer")));
				}
			}
			else{
				HX_STACK_LINE(121)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no audio asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),121,HX_CSTRING("lime.Assets"),HX_CSTRING("getAudioBuffer")));
			}
		}
		else{
			HX_STACK_LINE(127)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),127,HX_CSTRING("lime.Assets"),HX_CSTRING("getAudioBuffer")));
		}
		HX_STACK_LINE(133)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

::lime::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","getBytes",0xe703c1c7,"lime.Assets.getBytes","lime/Assets.hx",144,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(146)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(150)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(150)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(151)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(151)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(151)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(152)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(154)
	if (((library != null()))){
		HX_STACK_LINE(156)
		if ((library->exists(symbolName,HX_CSTRING("BINARY")))){
			HX_STACK_LINE(158)
			if ((library->isLocal(symbolName,HX_CSTRING("BINARY")))){
				HX_STACK_LINE(160)
				return library->getBytes(symbolName);
			}
			else{
				HX_STACK_LINE(164)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] String or ByteArray asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),164,HX_CSTRING("lime.Assets"),HX_CSTRING("getBytes")));
			}
		}
		else{
			HX_STACK_LINE(170)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),170,HX_CSTRING("lime.Assets"),HX_CSTRING("getBytes")));
		}
	}
	else{
		HX_STACK_LINE(176)
		::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),176,HX_CSTRING("lime.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(182)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

Dynamic Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getFont",0x2f4603f3,"lime.Assets.getFont","lime/Assets.hx",193,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(195)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(199)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->font->exists(id)) : bool(false) ))){
			HX_STACK_LINE(201)
			return ::lime::Assets_obj::cache->font->get(id);
		}
		HX_STACK_LINE(205)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(206)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(206)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(206)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(207)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(209)
		if (((library != null()))){
			HX_STACK_LINE(211)
			if ((library->exists(symbolName,HX_CSTRING("FONT")))){
				HX_STACK_LINE(213)
				if ((library->isLocal(symbolName,HX_CSTRING("FONT")))){
					HX_STACK_LINE(215)
					Dynamic font = library->getFont(symbolName);		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(217)
					if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(219)
						::lime::Assets_obj::cache->font->set(id,font);
					}
					HX_STACK_LINE(223)
					return font;
				}
				else{
					HX_STACK_LINE(227)
					::haxe::Log_obj::trace(((HX_CSTRING("[Assets] Font asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),227,HX_CSTRING("lime.Assets"),HX_CSTRING("getFont")));
				}
			}
			else{
				HX_STACK_LINE(233)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),233,HX_CSTRING("lime.Assets"),HX_CSTRING("getFont")));
			}
		}
		else{
			HX_STACK_LINE(239)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),239,HX_CSTRING("lime.Assets"),HX_CSTRING("getFont")));
		}
		HX_STACK_LINE(245)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::graphics::Image Assets_obj::getImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getImage",0xe6d4d8b7,"lime.Assets.getImage","lime/Assets.hx",257,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(259)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(263)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->image->exists(id)) : bool(false) ))){
			HX_STACK_LINE(265)
			::lime::graphics::Image image = ::lime::Assets_obj::cache->image->get(id);		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(267)
			if ((::lime::Assets_obj::isValidImage(image))){
				HX_STACK_LINE(269)
				return image;
			}
		}
		HX_STACK_LINE(275)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(275)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(276)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(276)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(277)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(279)
		if (((library != null()))){
			HX_STACK_LINE(281)
			if ((library->exists(symbolName,HX_CSTRING("IMAGE")))){
				HX_STACK_LINE(283)
				if ((library->isLocal(symbolName,HX_CSTRING("IMAGE")))){
					HX_STACK_LINE(285)
					::lime::graphics::Image image = library->getImage(symbolName);		HX_STACK_VAR(image,"image");
					HX_STACK_LINE(287)
					if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(289)
						::lime::Assets_obj::cache->image->set(id,image);
					}
					HX_STACK_LINE(293)
					return image;
				}
				else{
					HX_STACK_LINE(297)
					::haxe::Log_obj::trace(((HX_CSTRING("[Assets] Image asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),297,HX_CSTRING("lime.Assets"),HX_CSTRING("getImage")));
				}
			}
			else{
				HX_STACK_LINE(303)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no Image asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),303,HX_CSTRING("lime.Assets"),HX_CSTRING("getImage")));
			}
		}
		else{
			HX_STACK_LINE(309)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),309,HX_CSTRING("lime.Assets"),HX_CSTRING("getImage")));
		}
		HX_STACK_LINE(315)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","getLibrary",0x6641ef57,"lime.Assets.getLibrary","lime/Assets.hx",320,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(322)
	if (((bool((name == null())) || bool((name == HX_CSTRING("")))))){
		HX_STACK_LINE(324)
		name = HX_CSTRING("default");
	}
	HX_STACK_LINE(328)
	return ::lime::Assets_obj::libraries->get(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.Assets","getPath",0x35d78bc9,"lime.Assets.getPath","lime/Assets.hx",408,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(410)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(414)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(414)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(415)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(415)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(415)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(416)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(418)
	if (((library != null()))){
		HX_STACK_LINE(420)
		if ((library->exists(symbolName,null()))){
			HX_STACK_LINE(422)
			return library->getPath(symbolName);
		}
		else{
			HX_STACK_LINE(426)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),426,HX_CSTRING("lime.Assets"),HX_CSTRING("getPath")));
		}
	}
	else{
		HX_STACK_LINE(432)
		::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),432,HX_CSTRING("lime.Assets"),HX_CSTRING("getPath")));
	}
	HX_STACK_LINE(438)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("lime.Assets","getText",0x387f72d1,"lime.Assets.getText","lime/Assets.hx",449,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(451)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(455)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(455)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(456)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(456)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(456)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(457)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(459)
	if (((library != null()))){
		HX_STACK_LINE(461)
		if ((library->exists(symbolName,HX_CSTRING("TEXT")))){
			HX_STACK_LINE(463)
			if ((library->isLocal(symbolName,HX_CSTRING("TEXT")))){
				HX_STACK_LINE(465)
				return library->getText(symbolName);
			}
			else{
				HX_STACK_LINE(469)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] String asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),469,HX_CSTRING("lime.Assets"),HX_CSTRING("getText")));
			}
		}
		else{
			HX_STACK_LINE(475)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),475,HX_CSTRING("lime.Assets"),HX_CSTRING("getText")));
		}
	}
	else{
		HX_STACK_LINE(481)
		::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),481,HX_CSTRING("lime.Assets"),HX_CSTRING("getText")));
	}
	HX_STACK_LINE(487)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("lime.Assets","initialize",0xc42b73a2,"lime.Assets.initialize","lime/Assets.hx",494,0x48c77341)
		HX_STACK_LINE(494)
		if ((!(::lime::Assets_obj::initialized))){
			HX_STACK_LINE(498)
			::DefaultAssetLibrary _g = ::DefaultAssetLibrary_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(498)
			::lime::Assets_obj::registerLibrary(HX_CSTRING("default"),_g);
			HX_STACK_LINE(502)
			::lime::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","isLocal",0x2e79638f,"lime.Assets.isLocal","lime/Assets.hx",509,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(511)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(515)
		if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
			HX_STACK_LINE(517)
			if (((bool((type == HX_CSTRING("IMAGE"))) || bool((type == null()))))){
				HX_STACK_LINE(519)
				if ((::lime::Assets_obj::cache->image->exists(id))){
					HX_STACK_LINE(519)
					return true;
				}
			}
			HX_STACK_LINE(523)
			if (((bool((type == HX_CSTRING("FONT"))) || bool((type == null()))))){
				HX_STACK_LINE(525)
				if ((::lime::Assets_obj::cache->font->exists(id))){
					HX_STACK_LINE(525)
					return true;
				}
			}
			HX_STACK_LINE(529)
			if (((bool((bool((type == HX_CSTRING("SOUND"))) || bool((type == HX_CSTRING("MUSIC"))))) || bool((type == null()))))){
				HX_STACK_LINE(531)
				if ((::lime::Assets_obj::cache->audio->exists(id))){
					HX_STACK_LINE(531)
					return true;
				}
			}
		}
		HX_STACK_LINE(537)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(537)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(538)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(538)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(538)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(539)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(541)
		if (((library != null()))){
			HX_STACK_LINE(543)
			return library->isLocal(symbolName,type);
		}
		HX_STACK_LINE(549)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.Assets","isValidAudio",0x0da20596,"lime.Assets.isValidAudio","lime/Assets.hx",554,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(558)
	return (buffer != null());
	HX_STACK_LINE(563)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image buffer){
	HX_STACK_FRAME("lime.Assets","isValidImage",0xa38aac1b,"lime.Assets.isValidImage","lime/Assets.hx",568,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(573)
	return (buffer != null());
	HX_STACK_LINE(592)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("lime.Assets","list",0x60d5f530,"lime.Assets.list","lime/Assets.hx",597,0x48c77341)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(599)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(601)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(603)
	for(::cpp::FastIterator_obj< ::lime::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::lime::AssetLibrary >(::lime::Assets_obj::libraries->iterator());  __it->hasNext(); ){
		::lime::AssetLibrary library = __it->next();
		{
			HX_STACK_LINE(605)
			Array< ::String > libraryItems = library->list(type);		HX_STACK_VAR(libraryItems,"libraryItems");
			HX_STACK_LINE(607)
			if (((libraryItems != null()))){
				HX_STACK_LINE(609)
				Array< ::String > _g = items->concat(libraryItems);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(609)
				items = _g;
			}
		}
;
	}
	HX_STACK_LINE(615)
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

Void Assets_obj::loadAudioBuffer( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadAudioBuffer",0x6d20865e,"lime.Assets.loadAudioBuffer","lime/Assets.hx",620,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(620)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(620)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(622)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(626)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->audio->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(628)
			::lime::audio::AudioBuffer audio = ::lime::Assets_obj::cache->audio->get(id1->__get((int)0));		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(630)
			if ((::lime::Assets_obj::isValidAudio(audio))){
				HX_STACK_LINE(632)
				handler1->__GetItem((int)0)(audio).Cast< Void >();
				HX_STACK_LINE(633)
				return null();
			}
		}
		HX_STACK_LINE(639)
		int _g = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(639)
		::String libraryName = id1->__get((int)0).substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(640)
		int _g1 = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(640)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(640)
		::String symbolName = id1->__get((int)0).substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(641)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(643)
		if (((library != null()))){
			HX_STACK_LINE(645)
			if ((library->exists(symbolName,HX_CSTRING("SOUND")))){
				HX_STACK_LINE(647)
				if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(Dynamic audio){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",649,0x48c77341)
						HX_STACK_ARG(audio,"audio")
						{
							HX_STACK_LINE(651)
							{
								HX_STACK_LINE(651)
								::lime::audio::AudioBuffer value = audio;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(651)
								::lime::Assets_obj::cache->audio->set(id1->__get((int)0),value);
							}
							HX_STACK_LINE(652)
							handler1->__GetItem((int)0)(audio).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(649)
					library->loadAudioBuffer(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(658)
					library->loadAudioBuffer(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(662)
				return null();
			}
			else{
				HX_STACK_LINE(666)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no audio asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),666,HX_CSTRING("lime.Assets"),HX_CSTRING("loadAudioBuffer")));
			}
		}
		else{
			HX_STACK_LINE(672)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),672,HX_CSTRING("lime.Assets"),HX_CSTRING("loadAudioBuffer")));
		}
		HX_STACK_LINE(678)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadAudioBuffer,(void))

Void Assets_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadBytes",0x714f4253,"lime.Assets.loadBytes","lime/Assets.hx",683,0x48c77341)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(685)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(689)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(689)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(690)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(690)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(690)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(691)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(693)
		if (((library != null()))){
			HX_STACK_LINE(695)
			if ((library->exists(symbolName,HX_CSTRING("BINARY")))){
				HX_STACK_LINE(697)
				library->loadBytes(symbolName,handler);
				HX_STACK_LINE(698)
				return null();
			}
			else{
				HX_STACK_LINE(702)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),702,HX_CSTRING("lime.Assets"),HX_CSTRING("loadBytes")));
			}
		}
		else{
			HX_STACK_LINE(708)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),708,HX_CSTRING("lime.Assets"),HX_CSTRING("loadBytes")));
		}
		HX_STACK_LINE(714)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,(void))

Void Assets_obj::loadImage( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadImage",0x71205943,"lime.Assets.loadImage","lime/Assets.hx",719,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(719)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(719)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(721)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(725)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->image->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(727)
			::lime::graphics::Image image = ::lime::Assets_obj::cache->image->get(id1->__get((int)0));		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(729)
			if ((::lime::Assets_obj::isValidImage(image))){
				HX_STACK_LINE(731)
				handler1->__GetItem((int)0)(image).Cast< Void >();
				HX_STACK_LINE(732)
				return null();
			}
		}
		HX_STACK_LINE(738)
		int _g = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(738)
		::String libraryName = id1->__get((int)0).substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(739)
		int _g1 = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(739)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(739)
		::String symbolName = id1->__get((int)0).substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(740)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(742)
		if (((library != null()))){
			HX_STACK_LINE(744)
			if ((library->exists(symbolName,HX_CSTRING("IMAGE")))){
				HX_STACK_LINE(746)
				if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::lime::graphics::Image image){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",748,0x48c77341)
						HX_STACK_ARG(image,"image")
						{
							HX_STACK_LINE(750)
							::lime::Assets_obj::cache->image->set(id1->__get((int)0),image);
							HX_STACK_LINE(751)
							handler1->__GetItem((int)0)(image).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(748)
					library->loadImage(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(757)
					library->loadImage(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(761)
				return null();
			}
			else{
				HX_STACK_LINE(765)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no Image asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),765,HX_CSTRING("lime.Assets"),HX_CSTRING("loadImage")));
			}
		}
		else{
			HX_STACK_LINE(771)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),771,HX_CSTRING("lime.Assets"),HX_CSTRING("loadImage")));
		}
		HX_STACK_LINE(777)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadImage,(void))

Void Assets_obj::loadLibrary( ::String name,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadLibrary",0xbad7aae3,"lime.Assets.loadLibrary","lime/Assets.hx",782,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(784)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(788)
		::String data = ::lime::Assets_obj::getText(((HX_CSTRING("libraries/") + name) + HX_CSTRING(".json")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(790)
		if (((bool((data != null())) && bool((data != HX_CSTRING("")))))){
			HX_STACK_LINE(792)
			Dynamic info = ::haxe::format::JsonParser_obj::__new(data)->parseRec();		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(793)
			::Class _g = ::Type_obj::resolveClass(info->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(793)
			::lime::AssetLibrary library = ::Type_obj::createInstance(_g,info->__Field(HX_CSTRING("args"),true));		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(794)
			::lime::Assets_obj::libraries->set(name,library);
			HX_STACK_LINE(795)
			library->eventCallback = ::lime::Assets_obj::library_onEvent_dyn();
			HX_STACK_LINE(796)
			library->load(handler);
		}
		else{
			HX_STACK_LINE(800)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + name) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),800,HX_CSTRING("lime.Assets"),HX_CSTRING("loadLibrary")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,(void))

Void Assets_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadText",0x872e47c5,"lime.Assets.loadText","lime/Assets.hx",872,0x48c77341)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(874)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(878)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(878)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(879)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(879)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(879)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(880)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(882)
		if (((library != null()))){
			HX_STACK_LINE(884)
			if ((library->exists(symbolName,HX_CSTRING("TEXT")))){
				HX_STACK_LINE(886)
				library->loadText(symbolName,handler);
				HX_STACK_LINE(887)
				return null();
			}
			else{
				HX_STACK_LINE(891)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),891,HX_CSTRING("lime.Assets"),HX_CSTRING("loadText")));
			}
		}
		else{
			HX_STACK_LINE(897)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),897,HX_CSTRING("lime.Assets"),HX_CSTRING("loadText")));
		}
		HX_STACK_LINE(903)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,(void))

Void Assets_obj::registerLibrary( ::String name,::lime::AssetLibrary library){
{
		HX_STACK_FRAME("lime.Assets","registerLibrary",0x7c289f46,"lime.Assets.registerLibrary","lime/Assets.hx",908,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(910)
		if ((::lime::Assets_obj::libraries->exists(name))){
			HX_STACK_LINE(912)
			::lime::Assets_obj::unloadLibrary(name);
		}
		HX_STACK_LINE(916)
		if (((library != null()))){
			HX_STACK_LINE(918)
			library->eventCallback = ::lime::Assets_obj::library_onEvent_dyn();
		}
		HX_STACK_LINE(922)
		::lime::Assets_obj::libraries->set(name,library);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("lime.Assets","unloadLibrary",0x7620d8aa,"lime.Assets.unloadLibrary","lime/Assets.hx",927,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(929)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(933)
		::lime::AssetLibrary library = ::lime::Assets_obj::libraries->get(name);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(935)
		if (((library != null()))){
			HX_STACK_LINE(937)
			::lime::Assets_obj::cache->clear((name + HX_CSTRING(":")));
			HX_STACK_LINE(938)
			library->eventCallback = null();
		}
		HX_STACK_LINE(942)
		::lime::Assets_obj::libraries->remove(name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::library_onEvent( ::lime::AssetLibrary library,::String type){
{
		HX_STACK_FRAME("lime.Assets","library_onEvent",0xa716ee65,"lime.Assets.library_onEvent","lime/Assets.hx",958,0x48c77341)
		HX_STACK_ARG(library,"library")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(958)
		if (((type == HX_CSTRING("change")))){
			HX_STACK_LINE(960)
			::lime::Assets_obj::cache->clear(null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,library_onEvent,(void))


Assets_obj::Assets_obj()
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
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
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return libraries; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { return getLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { return loadLibrary_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { return isValidAudio_dyn(); }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { return isValidImage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { return unloadLibrary_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { return registerLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"library_onEvent") ) { return library_onEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::lime::AssetCache >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("libraries"),
	HX_CSTRING("initialized"),
	HX_CSTRING("exists"),
	HX_CSTRING("getAudioBuffer"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getImage"),
	HX_CSTRING("getLibrary"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getText"),
	HX_CSTRING("initialize"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("isValidAudio"),
	HX_CSTRING("isValidImage"),
	HX_CSTRING("list"),
	HX_CSTRING("loadAudioBuffer"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadImage"),
	HX_CSTRING("loadLibrary"),
	HX_CSTRING("loadText"),
	HX_CSTRING("registerLibrary"),
	HX_CSTRING("unloadLibrary"),
	HX_CSTRING("library_onEvent"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
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

void Assets_obj::__boot()
{
	cache= ::lime::AssetCache_obj::__new();
	libraries= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace lime
