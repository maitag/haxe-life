#ifndef INCLUDED_lime_app__Application_UpdateEventInfo
#define INCLUDED_lime_app__Application_UpdateEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,app,_Application,UpdateEventInfo)
namespace lime{
namespace app{
namespace _Application{


class HXCPP_CLASS_ATTRIBUTES  UpdateEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UpdateEventInfo_obj OBJ_;
		UpdateEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_deltaTime);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UpdateEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_deltaTime);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpdateEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UpdateEventInfo"); }

		int deltaTime;
		int type;
		virtual ::lime::app::_Application::UpdateEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace app
} // end namespace _Application

#endif /* INCLUDED_lime_app__Application_UpdateEventInfo */ 
