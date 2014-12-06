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
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
#ifndef INCLUDED_lime_ui__Window_WindowEventInfo
#include <lime/ui/_Window/WindowEventInfo.h>
#endif
namespace lime{
namespace ui{

Void Window_obj::__construct(Dynamic config)
{
HX_STACK_FRAME("lime.ui.Window","new",0xbff4f5c3,"lime.ui.Window.new","lime/ui/Window.hx",60,0x6ac7286d)
HX_STACK_THIS(this)
HX_STACK_ARG(config,"config")
{
	HX_STACK_LINE(62)
	this->config = config;
	HX_STACK_LINE(64)
	if ((!(::lime::ui::Window_obj::registered))){
		HX_STACK_LINE(66)
		::lime::ui::Window_obj::registered = true;
		HX_STACK_LINE(69)
		::lime::ui::Window_obj::lime_window_event_manager_register(this->dispatch_dyn(),::lime::ui::Window_obj::eventInfo);
	}
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic config)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(config);
	return result;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Window_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime.ui.Window","create",0x2d638179,"lime.ui.Window.create","lime/ui/Window.hx",77,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(79)
		this->setWidth = this->width;
		HX_STACK_LINE(80)
		this->setHeight = this->height;
		HX_STACK_LINE(179)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(181)
		if (((this->config->__Field(HX_CSTRING("antialiasing"),true) >= (int)4))){
			HX_STACK_LINE(183)
			hx::OrEq(flags,(int)96);
		}
		else{
			HX_STACK_LINE(185)
			if (((this->config->__Field(HX_CSTRING("antialiasing"),true) >= (int)2))){
				HX_STACK_LINE(187)
				hx::OrEq(flags,(int)32);
			}
		}
		HX_STACK_LINE(191)
		if ((this->config->__Field(HX_CSTRING("borderless"),true))){
			HX_STACK_LINE(191)
			hx::OrEq(flags,(int)2);
		}
		HX_STACK_LINE(192)
		if ((this->config->__Field(HX_CSTRING("depthBuffer"),true))){
			HX_STACK_LINE(192)
			hx::OrEq(flags,(int)512);
		}
		HX_STACK_LINE(193)
		if ((this->config->__Field(HX_CSTRING("fullscreen"),true))){
			HX_STACK_LINE(193)
			hx::OrEq(flags,(int)1);
		}
		HX_STACK_LINE(194)
		if ((this->config->__Field(HX_CSTRING("resizable"),true))){
			HX_STACK_LINE(194)
			hx::OrEq(flags,(int)4);
		}
		HX_STACK_LINE(195)
		if ((this->config->__Field(HX_CSTRING("stencilBuffer"),true))){
			HX_STACK_LINE(195)
			hx::OrEq(flags,(int)1024);
		}
		HX_STACK_LINE(196)
		if ((this->config->__Field(HX_CSTRING("vsync"),true))){
			HX_STACK_LINE(196)
			hx::OrEq(flags,(int)16);
		}
		HX_STACK_LINE(198)
		Dynamic _g = ::lime::ui::Window_obj::lime_window_create(application->__handle,this->width,this->height,flags,this->config->__Field(HX_CSTRING("title"),true));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		this->handle = _g;
		HX_STACK_LINE(202)
		::lime::ui::MouseEventManager_obj::registerWindow(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(203)
		::lime::ui::TouchEventManager_obj::registerWindow(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(218)
		if (((this->currentRenderer != null()))){
			HX_STACK_LINE(220)
			this->currentRenderer->create();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,create,(void))

Void Window_obj::dispatch( ){
{
		HX_STACK_FRAME("lime.ui.Window","dispatch",0xe0d14277,"lime.ui.Window.dispatch","lime/ui/Window.hx",229,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		int _g = ::lime::ui::Window_obj::eventInfo->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::Window_obj::onWindowActivate->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::Window_obj::onWindowActivate->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)().Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::Window_obj::onWindowActivate->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::Window_obj::onWindowClose->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::Window_obj::onWindowClose->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)().Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::Window_obj::onWindowClose->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::Window_obj::onWindowDeactivate->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::Window_obj::onWindowDeactivate->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)().Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::Window_obj::onWindowDeactivate->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::Window_obj::onWindowFocusIn->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::Window_obj::onWindowFocusIn->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)().Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::Window_obj::onWindowFocusIn->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(52)
				Dynamic listeners = ::lime::ui::Window_obj::onWindowFocusOut->listeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(53)
				Array< bool > repeat = ::lime::ui::Window_obj::onWindowFocusOut->repeat;		HX_STACK_VAR(repeat,"repeat");
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
					listeners->__GetItem(i)().Cast< Void >();
					HX_STACK_LINE(61)
					if ((!(repeat->__get(i)))){
						HX_STACK_LINE(63)
						::lime::ui::Window_obj::onWindowFocusOut->remove(listeners->__GetItem(i));
						HX_STACK_LINE(64)
						(length)--;
					}
					else{
						HX_STACK_LINE(68)
						(i)++;
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(253)
				this->x = ::lime::ui::Window_obj::eventInfo->x;
				HX_STACK_LINE(254)
				this->y = ::lime::ui::Window_obj::eventInfo->y;
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(52)
					Dynamic listeners = ::lime::ui::Window_obj::onWindowMove->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = ::lime::ui::Window_obj::onWindowMove->repeat;		HX_STACK_VAR(repeat,"repeat");
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
						listeners->__GetItem(i)(::lime::ui::Window_obj::eventInfo->x,::lime::ui::Window_obj::eventInfo->y).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							::lime::ui::Window_obj::onWindowMove->remove(listeners->__GetItem(i));
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
			;break;
			case (int)6: {
				HX_STACK_LINE(260)
				this->width = ::lime::ui::Window_obj::eventInfo->width;
				HX_STACK_LINE(261)
				this->height = ::lime::ui::Window_obj::eventInfo->height;
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(52)
					Dynamic listeners = ::lime::ui::Window_obj::onWindowResize->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = ::lime::ui::Window_obj::onWindowResize->repeat;		HX_STACK_VAR(repeat,"repeat");
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
						listeners->__GetItem(i)(::lime::ui::Window_obj::eventInfo->width,::lime::ui::Window_obj::eventInfo->height).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							::lime::ui::Window_obj::onWindowResize->remove(listeners->__GetItem(i));
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
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,dispatch,(void))

Void Window_obj::move( int x,int y){
{
		HX_STACK_FRAME("lime.ui.Window","move",0x35c0744e,"lime.ui.Window.move","lime/ui/Window.hx",413,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(413)
		::lime::ui::Window_obj::lime_window_move(this->handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,move,(void))

Void Window_obj::resize( int width,int height){
{
		HX_STACK_FRAME("lime.ui.Window","resize",0xb9cf7471,"lime.ui.Window.resize","lime/ui/Window.hx",419,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(421)
		this->setWidth = width;
		HX_STACK_LINE(422)
		this->setHeight = height;
		HX_STACK_LINE(425)
		::lime::ui::Window_obj::lime_window_resize(this->handle,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

::lime::app::Event Window_obj::onWindowActivate;

::lime::app::Event Window_obj::onWindowClose;

::lime::app::Event Window_obj::onWindowDeactivate;

::lime::app::Event Window_obj::onWindowFocusIn;

::lime::app::Event Window_obj::onWindowFocusOut;

::lime::app::Event Window_obj::onWindowMove;

::lime::app::Event Window_obj::onWindowResize;

::lime::ui::_Window::WindowEventInfo Window_obj::eventInfo;

bool Window_obj::registered;

Dynamic Window_obj::lime_window_create;

Dynamic Window_obj::lime_window_event_manager_register;

Dynamic Window_obj::lime_window_move;

Dynamic Window_obj::lime_window_resize;


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(fullscreen,"fullscreen");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(setHeight,"setHeight");
	HX_MARK_MEMBER_NAME(setWidth,"setWidth");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(fullscreen,"fullscreen");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(setHeight,"setHeight");
	HX_VISIT_MEMBER_NAME(setWidth,"setWidth");
}

Dynamic Window_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventInfo") ) { return eventInfo; }
		if (HX_FIELD_EQ(inName,"setHeight") ) { return setHeight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"registered") ) { return registered; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return fullscreen; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn; }
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { return currentRenderer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut; }
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { return lime_window_move; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate; }
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { return lime_window_create; }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { return lime_window_resize; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { return lime_window_event_manager_register; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setWidth") ) { setWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventInfo") ) { eventInfo=inValue.Cast< ::lime::ui::_Window::WindowEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setHeight") ) { setHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"registered") ) { registered=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { onWindowMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { onWindowClose=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { onWindowResize=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { onWindowFocusIn=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { currentRenderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { onWindowActivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { onWindowFocusOut=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { lime_window_move=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { onWindowDeactivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { lime_window_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { lime_window_resize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { lime_window_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentRenderer"));
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("fullscreen"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("setHeight"));
	outFields->push(HX_CSTRING("setWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("onWindowActivate"),
	HX_CSTRING("onWindowClose"),
	HX_CSTRING("onWindowDeactivate"),
	HX_CSTRING("onWindowFocusIn"),
	HX_CSTRING("onWindowFocusOut"),
	HX_CSTRING("onWindowMove"),
	HX_CSTRING("onWindowResize"),
	HX_CSTRING("eventInfo"),
	HX_CSTRING("registered"),
	HX_CSTRING("lime_window_create"),
	HX_CSTRING("lime_window_event_manager_register"),
	HX_CSTRING("lime_window_move"),
	HX_CSTRING("lime_window_resize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Window_obj,currentRenderer),HX_CSTRING("currentRenderer")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,config),HX_CSTRING("config")},
	{hx::fsBool,(int)offsetof(Window_obj,fullscreen),HX_CSTRING("fullscreen")},
	{hx::fsInt,(int)offsetof(Window_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(Window_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Window_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(Window_obj,y),HX_CSTRING("y")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,handle),HX_CSTRING("handle")},
	{hx::fsInt,(int)offsetof(Window_obj,setHeight),HX_CSTRING("setHeight")},
	{hx::fsInt,(int)offsetof(Window_obj,setWidth),HX_CSTRING("setWidth")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("currentRenderer"),
	HX_CSTRING("config"),
	HX_CSTRING("fullscreen"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("handle"),
	HX_CSTRING("setHeight"),
	HX_CSTRING("setWidth"),
	HX_CSTRING("create"),
	HX_CSTRING("dispatch"),
	HX_CSTRING("move"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::onWindowActivate,"onWindowActivate");
	HX_MARK_MEMBER_NAME(Window_obj::onWindowClose,"onWindowClose");
	HX_MARK_MEMBER_NAME(Window_obj::onWindowDeactivate,"onWindowDeactivate");
	HX_MARK_MEMBER_NAME(Window_obj::onWindowFocusIn,"onWindowFocusIn");
	HX_MARK_MEMBER_NAME(Window_obj::onWindowFocusOut,"onWindowFocusOut");
	HX_MARK_MEMBER_NAME(Window_obj::onWindowMove,"onWindowMove");
	HX_MARK_MEMBER_NAME(Window_obj::onWindowResize,"onWindowResize");
	HX_MARK_MEMBER_NAME(Window_obj::eventInfo,"eventInfo");
	HX_MARK_MEMBER_NAME(Window_obj::registered,"registered");
	HX_MARK_MEMBER_NAME(Window_obj::lime_window_create,"lime_window_create");
	HX_MARK_MEMBER_NAME(Window_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
	HX_MARK_MEMBER_NAME(Window_obj::lime_window_move,"lime_window_move");
	HX_MARK_MEMBER_NAME(Window_obj::lime_window_resize,"lime_window_resize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::onWindowActivate,"onWindowActivate");
	HX_VISIT_MEMBER_NAME(Window_obj::onWindowClose,"onWindowClose");
	HX_VISIT_MEMBER_NAME(Window_obj::onWindowDeactivate,"onWindowDeactivate");
	HX_VISIT_MEMBER_NAME(Window_obj::onWindowFocusIn,"onWindowFocusIn");
	HX_VISIT_MEMBER_NAME(Window_obj::onWindowFocusOut,"onWindowFocusOut");
	HX_VISIT_MEMBER_NAME(Window_obj::onWindowMove,"onWindowMove");
	HX_VISIT_MEMBER_NAME(Window_obj::onWindowResize,"onWindowResize");
	HX_VISIT_MEMBER_NAME(Window_obj::eventInfo,"eventInfo");
	HX_VISIT_MEMBER_NAME(Window_obj::registered,"registered");
	HX_VISIT_MEMBER_NAME(Window_obj::lime_window_create,"lime_window_create");
	HX_VISIT_MEMBER_NAME(Window_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
	HX_VISIT_MEMBER_NAME(Window_obj::lime_window_move,"lime_window_move");
	HX_VISIT_MEMBER_NAME(Window_obj::lime_window_resize,"lime_window_resize");
};

#endif

Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.Window"), hx::TCanCast< Window_obj> ,sStaticFields,sMemberFields,
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

void Window_obj::__boot()
{
	onWindowActivate= ::lime::app::Event_obj::__new();
	onWindowClose= ::lime::app::Event_obj::__new();
	onWindowDeactivate= ::lime::app::Event_obj::__new();
	onWindowFocusIn= ::lime::app::Event_obj::__new();
	onWindowFocusOut= ::lime::app::Event_obj::__new();
	onWindowMove= ::lime::app::Event_obj::__new();
	onWindowResize= ::lime::app::Event_obj::__new();
	eventInfo= ::lime::ui::_Window::WindowEventInfo_obj::__new(null(),null(),null(),null(),null());
	lime_window_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_create"),(int)5,null());
	lime_window_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_event_manager_register"),(int)2,null());
	lime_window_move= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_move"),(int)3,null());
	lime_window_resize= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_resize"),(int)3,null());
}

} // end namespace lime
} // end namespace ui
