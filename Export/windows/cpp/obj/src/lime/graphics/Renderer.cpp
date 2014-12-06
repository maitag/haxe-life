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
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics__Renderer_RenderEventInfo
#include <lime/graphics/_Renderer/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace graphics{

Void Renderer_obj::__construct(::lime::ui::Window window)
{
HX_STACK_FRAME("lime.graphics.Renderer","new",0x7185ed3f,"lime.graphics.Renderer.new","lime/graphics/Renderer.hx",39,0x16f09331)
HX_STACK_THIS(this)
HX_STACK_ARG(window,"window")
{
	HX_STACK_LINE(41)
	this->window = window;
	HX_STACK_LINE(42)
	this->window->currentRenderer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::lime::ui::Window window)
{  hx::ObjectPtr< Renderer_obj > result = new Renderer_obj();
	result->__construct(window);
	return result;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > result = new Renderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Renderer_obj::create( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","create",0x6b7d5f7d,"lime.graphics.Renderer.create","lime/graphics/Renderer.hx",47,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		Dynamic _g = ::lime::graphics::Renderer_obj::lime_renderer_create(this->window->handle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		this->handle = _g;
		HX_STACK_LINE(55)
		this->createContext();
		HX_STACK_LINE(72)
		if ((!(::lime::graphics::Renderer_obj::registered))){
			HX_STACK_LINE(74)
			::lime::graphics::Renderer_obj::registered = true;
			HX_STACK_LINE(77)
			::lime::graphics::Renderer_obj::lime_render_event_manager_register(this->dispatch_dyn(),::lime::graphics::Renderer_obj::eventInfo);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create,(void))

Void Renderer_obj::createContext( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","createContext",0x3ae6f7f2,"lime.graphics.Renderer.createContext","lime/graphics/Renderer.hx",85,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		::lime::graphics::GLRenderContext _g = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		::lime::graphics::RenderContext _g1 = ::lime::graphics::RenderContext_obj::OPENGL(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		this->context = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,createContext,(void))

Void Renderer_obj::dispatch( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","dispatch",0x3fa1a97b,"lime.graphics.Renderer.dispatch","lime/graphics/Renderer.hx",150,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		int _g = ::lime::graphics::Renderer_obj::eventInfo->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(154)
				if ((!(::lime::app::Application_obj::__initialized))){
					HX_STACK_LINE(156)
					::lime::app::Application_obj::__initialized = true;
					HX_STACK_LINE(157)
					::lime::app::Application_obj::__instance->init(this->context);
				}
				HX_STACK_LINE(161)
				::lime::app::Application_obj::__instance->render(this->context);
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(52)
					Dynamic listeners = ::lime::graphics::Renderer_obj::onRender->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = ::lime::graphics::Renderer_obj::onRender->repeat;		HX_STACK_VAR(repeat,"repeat");
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
						listeners->__GetItem(i)(this->context).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							::lime::graphics::Renderer_obj::onRender->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				HX_STACK_LINE(164)
				this->flip();
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(168)
				this->context = null();
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(52)
					Dynamic listeners = ::lime::graphics::Renderer_obj::onRenderContextLost->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = ::lime::graphics::Renderer_obj::onRenderContextLost->repeat;		HX_STACK_VAR(repeat,"repeat");
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
							::lime::graphics::Renderer_obj::onRenderContextLost->remove(listeners->__GetItem(i));
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
			case (int)2: {
				HX_STACK_LINE(174)
				this->createContext();
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(52)
					Dynamic listeners = ::lime::graphics::Renderer_obj::onRenderContextRestored->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = ::lime::graphics::Renderer_obj::onRenderContextRestored->repeat;		HX_STACK_VAR(repeat,"repeat");
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
						listeners->__GetItem(i)(this->context).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							::lime::graphics::Renderer_obj::onRenderContextRestored->remove(listeners->__GetItem(i));
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


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,dispatch,(void))

Void Renderer_obj::flip( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","flip",0xde6538ee,"lime.graphics.Renderer.flip","lime/graphics/Renderer.hx",186,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::lime::graphics::Renderer_obj::lime_renderer_flip(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,flip,(void))

::lime::app::Event Renderer_obj::onRenderContextLost;

::lime::app::Event Renderer_obj::onRenderContextRestored;

::lime::app::Event Renderer_obj::onRender;

::lime::graphics::_Renderer::RenderEventInfo Renderer_obj::eventInfo;

bool Renderer_obj::registered;

Void Renderer_obj::render( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","render",0xf49763d7,"lime.graphics.Renderer.render","lime/graphics/Renderer.hx",218,0x16f09331)
		HX_STACK_LINE(220)
		::lime::graphics::Renderer_obj::eventInfo->type = (int)0;
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			Array< ::Dynamic > _g1 = ::lime::app::Application_obj::__instance->windows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			while((true)){
				HX_STACK_LINE(222)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(222)
					break;
				}
				HX_STACK_LINE(222)
				::lime::ui::Window window = _g1->__get(_g).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(222)
				++(_g);
				HX_STACK_LINE(224)
				if (((window->currentRenderer != null()))){
					HX_STACK_LINE(226)
					window->currentRenderer->dispatch();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,render,(void))

Dynamic Renderer_obj::lime_render_event_manager_register;

Dynamic Renderer_obj::lime_renderer_create;

Dynamic Renderer_obj::lime_renderer_flip;


Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(window,"window");
}

Dynamic Renderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { return onRender; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventInfo") ) { return eventInfo; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"registered") ) { return registered; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createContext") ) { return createContext_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { return lime_renderer_flip; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { return lime_renderer_create; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { return lime_render_event_manager_register; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { onRender=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventInfo") ) { eventInfo=inValue.Cast< ::lime::graphics::_Renderer::RenderEventInfo >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"registered") ) { registered=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { lime_renderer_flip=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { onRenderContextLost=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { lime_renderer_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { onRenderContextRestored=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { lime_render_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context"));
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("window"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("onRenderContextLost"),
	HX_CSTRING("onRenderContextRestored"),
	HX_CSTRING("onRender"),
	HX_CSTRING("eventInfo"),
	HX_CSTRING("registered"),
	HX_CSTRING("render"),
	HX_CSTRING("lime_render_event_manager_register"),
	HX_CSTRING("lime_renderer_create"),
	HX_CSTRING("lime_renderer_flip"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(Renderer_obj,context),HX_CSTRING("context")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Renderer_obj,handle),HX_CSTRING("handle")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Renderer_obj,window),HX_CSTRING("window")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("context"),
	HX_CSTRING("handle"),
	HX_CSTRING("window"),
	HX_CSTRING("create"),
	HX_CSTRING("createContext"),
	HX_CSTRING("dispatch"),
	HX_CSTRING("flip"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Renderer_obj::onRenderContextLost,"onRenderContextLost");
	HX_MARK_MEMBER_NAME(Renderer_obj::onRenderContextRestored,"onRenderContextRestored");
	HX_MARK_MEMBER_NAME(Renderer_obj::onRender,"onRender");
	HX_MARK_MEMBER_NAME(Renderer_obj::eventInfo,"eventInfo");
	HX_MARK_MEMBER_NAME(Renderer_obj::registered,"registered");
	HX_MARK_MEMBER_NAME(Renderer_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_MARK_MEMBER_NAME(Renderer_obj::lime_renderer_create,"lime_renderer_create");
	HX_MARK_MEMBER_NAME(Renderer_obj::lime_renderer_flip,"lime_renderer_flip");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Renderer_obj::onRenderContextLost,"onRenderContextLost");
	HX_VISIT_MEMBER_NAME(Renderer_obj::onRenderContextRestored,"onRenderContextRestored");
	HX_VISIT_MEMBER_NAME(Renderer_obj::onRender,"onRender");
	HX_VISIT_MEMBER_NAME(Renderer_obj::eventInfo,"eventInfo");
	HX_VISIT_MEMBER_NAME(Renderer_obj::registered,"registered");
	HX_VISIT_MEMBER_NAME(Renderer_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_VISIT_MEMBER_NAME(Renderer_obj::lime_renderer_create,"lime_renderer_create");
	HX_VISIT_MEMBER_NAME(Renderer_obj::lime_renderer_flip,"lime_renderer_flip");
};

#endif

Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.Renderer"), hx::TCanCast< Renderer_obj> ,sStaticFields,sMemberFields,
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

void Renderer_obj::__boot()
{
	onRenderContextLost= ::lime::app::Event_obj::__new();
	onRenderContextRestored= ::lime::app::Event_obj::__new();
	onRender= ::lime::app::Event_obj::__new();
	eventInfo= ::lime::graphics::_Renderer::RenderEventInfo_obj::__new((int)0,null());
	lime_render_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_render_event_manager_register"),(int)2,null());
	lime_renderer_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_renderer_create"),(int)1,null());
	lime_renderer_flip= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_renderer_flip"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
