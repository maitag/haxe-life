#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Application_UpdateEventInfo
#include <lime/app/_Application/UpdateEventInfo.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_KeyEventManager
#include <lime/ui/KeyEventManager.h>
#endif
#ifndef INCLUDED_lime_ui_MouseEventManager
#include <lime/ui/MouseEventManager.h>
#endif
#ifndef INCLUDED_lime_ui_TouchEventManager
#include <lime/ui/TouchEventManager.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",42,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(46)
	::lime::app::Application_obj::__instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(48)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	this->windows = _g;
	HX_STACK_LINE(50)
	if ((!(::lime::app::Application_obj::__registered))){
		HX_STACK_LINE(52)
		::lime::app::Application_obj::__registered = true;
		HX_STACK_LINE(54)
		::lime::audio::AudioManager_obj::init(null());
		HX_STACK_LINE(57)
		::lime::app::Application_obj::lime_update_event_manager_register(::lime::app::Application_obj::__dispatch_dyn(),::lime::app::Application_obj::__eventInfo);
	}
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Void Application_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","addWindow",0xf8ebb80d,"lime.app.Application.addWindow","lime/app/Application.hx",70,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(72)
		this->windows->push(window);
		HX_STACK_LINE(73)
		window->create(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addWindow,(void))

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",84,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(86)
		this->config = config;
		HX_STACK_LINE(89)
		Dynamic _g = ::lime::app::Application_obj::lime_application_create(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		this->__handle = _g;
		HX_STACK_LINE(92)
		::lime::ui::KeyEventManager_obj::create();
		HX_STACK_LINE(93)
		::lime::ui::MouseEventManager_obj::create();
		HX_STACK_LINE(94)
		::lime::ui::TouchEventManager_obj::create();
		HX_STACK_LINE(96)
		::lime::ui::KeyEventManager_obj::onKeyDown->add(this->onKeyDown_dyn(),null(),null());
		HX_STACK_LINE(97)
		::lime::ui::KeyEventManager_obj::onKeyUp->add(this->onKeyUp_dyn(),null(),null());
		HX_STACK_LINE(99)
		::lime::ui::MouseEventManager_obj::onMouseDown->add(this->onMouseDown_dyn(),null(),null());
		HX_STACK_LINE(100)
		::lime::ui::MouseEventManager_obj::onMouseMove->add(this->onMouseMove_dyn(),null(),null());
		HX_STACK_LINE(101)
		::lime::ui::MouseEventManager_obj::onMouseUp->add(this->onMouseUp_dyn(),null(),null());
		HX_STACK_LINE(102)
		::lime::ui::MouseEventManager_obj::onMouseWheel->add(this->onMouseWheel_dyn(),null(),null());
		HX_STACK_LINE(104)
		::lime::ui::TouchEventManager_obj::onTouchStart->add(this->onTouchStart_dyn(),null(),null());
		HX_STACK_LINE(105)
		::lime::ui::TouchEventManager_obj::onTouchMove->add(this->onTouchMove_dyn(),null(),null());
		HX_STACK_LINE(106)
		::lime::ui::TouchEventManager_obj::onTouchEnd->add(this->onTouchEnd_dyn(),null(),null());
		HX_STACK_LINE(108)
		::lime::graphics::Renderer_obj::onRenderContextLost->add(this->onRenderContextLost_dyn(),null(),null());
		HX_STACK_LINE(109)
		::lime::graphics::Renderer_obj::onRenderContextRestored->add(this->onRenderContextRestored_dyn(),null(),null());
		HX_STACK_LINE(111)
		::lime::ui::Window_obj::onWindowActivate->add(this->onWindowActivate_dyn(),null(),null());
		HX_STACK_LINE(112)
		::lime::ui::Window_obj::onWindowClose->add(this->onWindowClose_dyn(),null(),null());
		HX_STACK_LINE(113)
		::lime::ui::Window_obj::onWindowDeactivate->add(this->onWindowDeactivate_dyn(),null(),null());
		HX_STACK_LINE(114)
		::lime::ui::Window_obj::onWindowFocusIn->add(this->onWindowFocusIn_dyn(),null(),null());
		HX_STACK_LINE(115)
		::lime::ui::Window_obj::onWindowFocusOut->add(this->onWindowFocusOut_dyn(),null(),null());
		HX_STACK_LINE(116)
		::lime::ui::Window_obj::onWindowMove->add(this->onWindowMove_dyn(),null(),null());
		HX_STACK_LINE(117)
		::lime::ui::Window_obj::onWindowResize->add(this->onWindowResize_dyn(),null(),null());
		HX_STACK_LINE(119)
		::lime::ui::Window window = ::lime::ui::Window_obj::__new(config);		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(120)
		::lime::graphics::Renderer renderer = ::lime::graphics::Renderer_obj::__new(window);		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(122)
		window->width = config->__Field(HX_CSTRING("width"),true);
		HX_STACK_LINE(123)
		window->height = config->__Field(HX_CSTRING("height"),true);
		HX_STACK_LINE(129)
		this->addWindow(window);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",140,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	::lime::app::Application_obj::lime_application_init(this->__handle);
	HX_STACK_LINE(181)
	while((true)){
		HX_STACK_LINE(181)
		if ((!(::lime::app::Application_obj::lime_application_update(this->__handle)))){
			HX_STACK_LINE(181)
			break;
		}
		HX_STACK_LINE(181)
		{
		}
	}
	HX_STACK_LINE(183)
	int result = ::lime::app::Application_obj::lime_application_quit(this->__handle);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(184)
	this->__cleanup();
	HX_STACK_LINE(186)
	return result;
	HX_STACK_LINE(225)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::__cleanup( ){
{
		HX_STACK_FRAME("lime.app.Application","__cleanup",0x1acb4c20,"lime.app.Application.__cleanup","lime/app/Application.hx",232,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		::lime::audio::AudioManager_obj::shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,__cleanup,(void))

Void Application_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","init",0x531ea174,"lime.app.Application.init","lime/app/Application.hx",243,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,init,(void))

Void Application_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",255,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onKeyDown,(void))

Void Application_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",263,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onKeyUp,(void))

Void Application_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",272,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onMouseDown,(void))

Void Application_obj::onMouseMove( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",281,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onMouseMove,(void))

Void Application_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",290,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onMouseUp,(void))

Void Application_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",298,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onMouseWheel,(void))

Void Application_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",304,0x8bc55476)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onRenderContextLost,(void))

Void Application_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",311,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,onRenderContextRestored,(void))

Void Application_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",320,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onTouchEnd,(void))

Void Application_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",329,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onTouchMove,(void))

Void Application_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",338,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Application_obj,onTouchStart,(void))

Void Application_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",344,0x8bc55476)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowActivate,(void))

Void Application_obj::onWindowClose( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",350,0x8bc55476)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowClose,(void))

Void Application_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",356,0x8bc55476)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowDeactivate,(void))

Void Application_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",362,0x8bc55476)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowFocusIn,(void))

Void Application_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",368,0x8bc55476)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,onWindowFocusOut,(void))

Void Application_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",376,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onWindowMove,(void))

Void Application_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",384,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Application_obj,onWindowResize,(void))

Void Application_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",391,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,render,(void))

Void Application_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",402,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,update,(void))

Void Application_obj::__triggerFrame( Dynamic _){
{
		HX_STACK_FRAME("lime.app.Application","__triggerFrame",0x629af659,"lime.app.Application.__triggerFrame","lime/app/Application.hx",421,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(423)
		::lime::app::Application_obj::__eventInfo->deltaTime = (int)16;
		HX_STACK_LINE(424)
		::lime::app::Application_obj::__dispatch();
		HX_STACK_LINE(426)
		::lime::graphics::Renderer_obj::render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,__triggerFrame,(void))

::lime::ui::Window Application_obj::get_window( ){
	HX_STACK_FRAME("lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",437,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(437)
	return this->windows->__get((int)0).StaticCast< ::lime::ui::Window >();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

::lime::app::Event Application_obj::onUpdate;

::lime::app::_Application::UpdateEventInfo Application_obj::__eventInfo;

bool Application_obj::__initialized;

::lime::app::Application Application_obj::__instance;

bool Application_obj::__registered;

Void Application_obj::__dispatch( ){
{
		HX_STACK_FRAME("lime.app.Application","__dispatch",0x46f28b3e,"lime.app.Application.__dispatch","lime/app/Application.hx",409,0x8bc55476)
		HX_STACK_LINE(415)
		::lime::app::Application_obj::__instance->update(::lime::app::Application_obj::__eventInfo->deltaTime);
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(52)
			Dynamic listeners = ::lime::app::Application_obj::onUpdate->listeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(53)
			Array< bool > repeat = ::lime::app::Application_obj::onUpdate->repeat;		HX_STACK_VAR(repeat,"repeat");
			HX_STACK_LINE(54)
			int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(55)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((i < length))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(59)
				listeners->__GetItem(i)(::lime::app::Application_obj::__eventInfo->deltaTime).Cast< Void >();
				HX_STACK_LINE(61)
				if ((!(repeat->__get(i)))){
					HX_STACK_LINE(63)
					::lime::app::Application_obj::onUpdate->remove(listeners->__GetItem(i));
					HX_STACK_LINE(64)
					(length)--;
				}
				else{
					HX_STACK_LINE(68)
					(i)++;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,__dispatch,(void))

Dynamic Application_obj::lime_application_create;

Dynamic Application_obj::lime_application_init;

Dynamic Application_obj::lime_application_update;

Dynamic Application_obj::lime_application_quit;

Dynamic Application_obj::lime_application_get_ticks;

Dynamic Application_obj::lime_update_event_manager_register;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
}

Dynamic Application_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"windows") ) { return windows; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return __cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__instance") ) { return __instance; }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return __dispatch_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__eventInfo") ) { return __eventInfo; }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__registered") ) { return __registered; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { return __initialized; }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__triggerFrame") ) { return __triggerFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { return lime_application_init; }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { return lime_application_quit; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { return lime_application_create; }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { return lime_application_update; }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_application_get_ticks") ) { return lime_application_get_ticks; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_update_event_manager_register") ) { return lime_update_event_manager_register; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__instance") ) { __instance=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__eventInfo") ) { __eventInfo=inValue.Cast< ::lime::app::_Application::UpdateEventInfo >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__registered") ) { __registered=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { __initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { lime_application_init=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { lime_application_quit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { lime_application_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { lime_application_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_application_get_ticks") ) { lime_application_get_ticks=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_update_event_manager_register") ) { lime_update_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("window"));
	outFields->push(HX_CSTRING("windows"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("onUpdate"),
	HX_CSTRING("__eventInfo"),
	HX_CSTRING("__initialized"),
	HX_CSTRING("__instance"),
	HX_CSTRING("__registered"),
	HX_CSTRING("__dispatch"),
	HX_CSTRING("lime_application_create"),
	HX_CSTRING("lime_application_init"),
	HX_CSTRING("lime_application_update"),
	HX_CSTRING("lime_application_quit"),
	HX_CSTRING("lime_application_get_ticks"),
	HX_CSTRING("lime_update_event_manager_register"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_CSTRING("window")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_CSTRING("windows")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,__handle),HX_CSTRING("__handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("window"),
	HX_CSTRING("windows"),
	HX_CSTRING("__handle"),
	HX_CSTRING("addWindow"),
	HX_CSTRING("create"),
	HX_CSTRING("exec"),
	HX_CSTRING("__cleanup"),
	HX_CSTRING("init"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onRenderContextLost"),
	HX_CSTRING("onRenderContextRestored"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchStart"),
	HX_CSTRING("onWindowActivate"),
	HX_CSTRING("onWindowClose"),
	HX_CSTRING("onWindowDeactivate"),
	HX_CSTRING("onWindowFocusIn"),
	HX_CSTRING("onWindowFocusOut"),
	HX_CSTRING("onWindowMove"),
	HX_CSTRING("onWindowResize"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("__triggerFrame"),
	HX_CSTRING("get_window"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(Application_obj::__eventInfo,"__eventInfo");
	HX_MARK_MEMBER_NAME(Application_obj::__initialized,"__initialized");
	HX_MARK_MEMBER_NAME(Application_obj::__instance,"__instance");
	HX_MARK_MEMBER_NAME(Application_obj::__registered,"__registered");
	HX_MARK_MEMBER_NAME(Application_obj::lime_application_create,"lime_application_create");
	HX_MARK_MEMBER_NAME(Application_obj::lime_application_init,"lime_application_init");
	HX_MARK_MEMBER_NAME(Application_obj::lime_application_update,"lime_application_update");
	HX_MARK_MEMBER_NAME(Application_obj::lime_application_quit,"lime_application_quit");
	HX_MARK_MEMBER_NAME(Application_obj::lime_application_get_ticks,"lime_application_get_ticks");
	HX_MARK_MEMBER_NAME(Application_obj::lime_update_event_manager_register,"lime_update_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(Application_obj::__eventInfo,"__eventInfo");
	HX_VISIT_MEMBER_NAME(Application_obj::__initialized,"__initialized");
	HX_VISIT_MEMBER_NAME(Application_obj::__instance,"__instance");
	HX_VISIT_MEMBER_NAME(Application_obj::__registered,"__registered");
	HX_VISIT_MEMBER_NAME(Application_obj::lime_application_create,"lime_application_create");
	HX_VISIT_MEMBER_NAME(Application_obj::lime_application_init,"lime_application_init");
	HX_VISIT_MEMBER_NAME(Application_obj::lime_application_update,"lime_application_update");
	HX_VISIT_MEMBER_NAME(Application_obj::lime_application_quit,"lime_application_quit");
	HX_VISIT_MEMBER_NAME(Application_obj::lime_application_get_ticks,"lime_application_get_ticks");
	HX_VISIT_MEMBER_NAME(Application_obj::lime_update_event_manager_register,"lime_update_event_manager_register");
};

#endif

Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.Application"), hx::TCanCast< Application_obj> ,sStaticFields,sMemberFields,
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

void Application_obj::__boot()
{
	onUpdate= ::lime::app::Event_obj::__new();
	__eventInfo= ::lime::app::_Application::UpdateEventInfo_obj::__new(null(),null());
	lime_application_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_create"),(int)1,null());
	lime_application_init= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_init"),(int)1,null());
	lime_application_update= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_update"),(int)1,null());
	lime_application_quit= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_quit"),(int)1,null());
	lime_application_get_ticks= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_get_ticks"),(int)0,null());
	lime_update_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_update_event_manager_register"),(int)2,null());
}

} // end namespace lime
} // end namespace app
