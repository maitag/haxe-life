#ifndef INCLUDED_lime_Assets
#define INCLUDED_lime_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(lime,AssetCache)
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS1(lime,Assets)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Assets"); }

		static ::lime::AssetCache cache;
		static ::haxe::ds::StringMap libraries;
		static bool initialized;
		static bool exists( ::String id,::String type);
		static Dynamic exists_dyn();

		static ::lime::audio::AudioBuffer getAudioBuffer( ::String id,hx::Null< bool >  useCache);
		static Dynamic getAudioBuffer_dyn();

		static ::lime::utils::ByteArray getBytes( ::String id);
		static Dynamic getBytes_dyn();

		static Dynamic getFont( ::String id,hx::Null< bool >  useCache);
		static Dynamic getFont_dyn();

		static ::lime::graphics::Image getImage( ::String id,hx::Null< bool >  useCache);
		static Dynamic getImage_dyn();

		static ::lime::AssetLibrary getLibrary( ::String name);
		static Dynamic getLibrary_dyn();

		static ::String getPath( ::String id);
		static Dynamic getPath_dyn();

		static ::String getText( ::String id);
		static Dynamic getText_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static bool isLocal( ::String id,::String type,hx::Null< bool >  useCache);
		static Dynamic isLocal_dyn();

		static bool isValidAudio( ::lime::audio::AudioBuffer buffer);
		static Dynamic isValidAudio_dyn();

		static bool isValidImage( ::lime::graphics::Image buffer);
		static Dynamic isValidImage_dyn();

		static Array< ::String > list( ::String type);
		static Dynamic list_dyn();

		static Void loadAudioBuffer( ::String id,Dynamic handler,hx::Null< bool >  useCache);
		static Dynamic loadAudioBuffer_dyn();

		static Void loadBytes( ::String id,Dynamic handler);
		static Dynamic loadBytes_dyn();

		static Void loadImage( ::String id,Dynamic handler,hx::Null< bool >  useCache);
		static Dynamic loadImage_dyn();

		static Void loadLibrary( ::String name,Dynamic handler);
		static Dynamic loadLibrary_dyn();

		static Void loadText( ::String id,Dynamic handler);
		static Dynamic loadText_dyn();

		static Void registerLibrary( ::String name,::lime::AssetLibrary library);
		static Dynamic registerLibrary_dyn();

		static Void unloadLibrary( ::String name);
		static Dynamic unloadLibrary_dyn();

		static Void library_onEvent( ::lime::AssetLibrary library,::String type);
		static Dynamic library_onEvent_dyn();

};

} // end namespace lime

#endif /* INCLUDED_lime_Assets */ 
