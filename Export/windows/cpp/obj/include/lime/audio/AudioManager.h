#ifndef INCLUDED_lime_audio_AudioManager
#define INCLUDED_lime_audio_AudioManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,AudioContext)
HX_DECLARE_CLASS2(lime,audio,AudioManager)
namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioManager_obj OBJ_;
		AudioManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AudioManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AudioManager"); }

		static ::lime::audio::AudioContext context;
		static Void init( ::lime::audio::AudioContext context);
		static Dynamic init_dyn();

		static Void resume( );
		static Dynamic resume_dyn();

		static Void shutdown( );
		static Dynamic shutdown_dyn();

		static Void suspend( );
		static Dynamic suspend_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_AudioManager */ 
