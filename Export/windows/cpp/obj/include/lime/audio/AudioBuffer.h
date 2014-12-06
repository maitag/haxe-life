#ifndef INCLUDED_lime_audio_AudioBuffer
#define INCLUDED_lime_audio_AudioBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioBuffer_obj OBJ_;
		AudioBuffer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioBuffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioBuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AudioBuffer"); }

		int bitsPerSample;
		int channels;
		::lime::utils::ByteArray data;
		int id;
		int sampleRate;
		Dynamic src;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		static ::lime::audio::AudioBuffer fromBytes( ::lime::utils::ByteArray bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::audio::AudioBuffer fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static Void fromURL( ::String url,Dynamic handler);
		static Dynamic fromURL_dyn();

		static Dynamic lime_audio_load;
};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_AudioBuffer */ 
