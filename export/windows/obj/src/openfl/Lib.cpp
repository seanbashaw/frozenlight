// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_63_as,"openfl.Lib","as",0x3965ffb9,"openfl.Lib.as","openfl/Lib.hx",63,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_74_attach,"openfl.Lib","attach",0xe350160c,"openfl.Lib.attach","openfl/Lib.hx",74,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_82_clearInterval,"openfl.Lib","clearInterval",0x3d2e488b,"openfl.Lib.clearInterval","openfl/Lib.hx",82,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_95_clearTimeout,"openfl.Lib","clearTimeout",0x5e39561b,"openfl.Lib.clearTimeout","openfl/Lib.hx",95,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_126_getDefinitionByName,"openfl.Lib","getDefinitionByName",0xbac193c4,"openfl.Lib.getDefinitionByName","openfl/Lib.hx",126,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_133_getQualifiedClassName,"openfl.Lib","getQualifiedClassName",0x7f8a34b6,"openfl.Lib.getQualifiedClassName","openfl/Lib.hx",133,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_138_getQualifiedSuperclassName,"openfl.Lib","getQualifiedSuperclassName",0xc02d02d5,"openfl.Lib.getQualifiedSuperclassName","openfl/Lib.hx",138,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_151_getTimer,"openfl.Lib","getTimer",0xd73d4956,"openfl.Lib.getTimer","openfl/Lib.hx",151,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_159_getURL,"openfl.Lib","getURL",0xa66862c0,"openfl.Lib.getURL","openfl/Lib.hx",159,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_164_navigateToURL,"openfl.Lib","navigateToURL",0x74efcc5c,"openfl.Lib.navigateToURL","openfl/Lib.hx",164,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_207_notImplemented,"openfl.Lib","notImplemented",0x6ff873b6,"openfl.Lib.notImplemented","openfl/Lib.hx",207,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_222_preventDefaultTouchMove,"openfl.Lib","preventDefaultTouchMove",0x0727aa40,"openfl.Lib.preventDefaultTouchMove","openfl/Lib.hx",222,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_244_sendToURL,"openfl.Lib","sendToURL",0xb7c4ca65,"openfl.Lib.sendToURL","openfl/Lib.hx",244,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_259_setInterval,"openfl.Lib","setInterval",0x38558760,"openfl.Lib.setInterval","openfl/Lib.hx",259,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_252_setInterval,"openfl.Lib","setInterval",0x38558760,"openfl.Lib.setInterval","openfl/Lib.hx",252,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_267_setTimeout,"openfl.Lib","setTimeout",0x1b9e88e6,"openfl.Lib.setTimeout","openfl/Lib.hx",267,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_272_setTimeout,"openfl.Lib","setTimeout",0x1b9e88e6,"openfl.Lib.setTimeout","openfl/Lib.hx",272,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_282_trace,"openfl.Lib","trace",0xeba99a1e,"openfl.Lib.trace","openfl/Lib.hx",282,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_296_get_application,"openfl.Lib","get_application",0x64b447c0,"openfl.Lib.get_application","openfl/Lib.hx",296,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_301_get_current,"openfl.Lib","get_current",0x315640a9,"openfl.Lib.get_current","openfl/Lib.hx",301,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_41_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",41,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_42_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",42,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_43_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",43,0x62fb7c98)
namespace openfl{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

void *Lib_obj::_hx_vtable = 0;

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19d6bed5;
}

int Lib_obj::_hx___lastTimerID;

 ::haxe::ds::StringMap Lib_obj::_hx___sentWarnings;

 ::haxe::ds::IntMap Lib_obj::_hx___timers;

 ::Dynamic Lib_obj::as( ::Dynamic v,hx::Class c){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_63_as)
HXDLIN(  63)		if (::Std_obj::is(v,c)) {
HXDLIN(  63)			return v;
            		}
            		else {
HXDLIN(  63)			return null();
            		}
HXDLIN(  63)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

 ::openfl::display::MovieClip Lib_obj::attach(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_74_attach)
HXDLIN(  74)		return  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

void Lib_obj::clearInterval(int id){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_82_clearInterval)
HXDLIN(  82)		if (::openfl::Lib_obj::_hx___timers->exists(id)) {
HXLINE(  84)			 ::haxe::Timer timer = ::openfl::Lib_obj::_hx___timers->get(id).StaticCast<  ::haxe::Timer >();
HXLINE(  85)			timer->stop();
HXLINE(  86)			::openfl::Lib_obj::_hx___timers->remove(id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,clearInterval,(void))

void Lib_obj::clearTimeout(int id){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_95_clearTimeout)
HXDLIN(  95)		if (::openfl::Lib_obj::_hx___timers->exists(id)) {
HXLINE(  97)			 ::haxe::Timer timer = ::openfl::Lib_obj::_hx___timers->get(id).StaticCast<  ::haxe::Timer >();
HXLINE(  98)			timer->stop();
HXLINE(  99)			::openfl::Lib_obj::_hx___timers->remove(id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,clearTimeout,(void))

hx::Class Lib_obj::getDefinitionByName(::String name){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_126_getDefinitionByName)
HXDLIN( 126)		return ::Type_obj::resolveClass(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getDefinitionByName,return )

::String Lib_obj::getQualifiedClassName( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_133_getQualifiedClassName)
HXDLIN( 133)		return ::Type_obj::getClassName(::Type_obj::getClass(value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getQualifiedClassName,return )

::String Lib_obj::getQualifiedSuperclassName( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_138_getQualifiedSuperclassName)
HXLINE( 140)		hx::Class ref = ::Type_obj::getSuperClass(::Type_obj::getClass(value));
HXLINE( 141)		if (hx::IsNotNull( ref )) {
HXLINE( 141)			return ::Type_obj::getClassName(ref);
            		}
            		else {
HXLINE( 141)			return null();
            		}
HXDLIN( 141)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getQualifiedSuperclassName,return )

int Lib_obj::getTimer(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_151_getTimer)
HXDLIN( 151)		return ::lime::_hx_system::System_obj::getTimer();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

void Lib_obj::getURL( ::openfl::net::URLRequest request,::String target){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_159_getURL)
HXDLIN( 159)		::openfl::Lib_obj::navigateToURL(request,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

void Lib_obj::navigateToURL( ::openfl::net::URLRequest request,::String window){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_164_navigateToURL)
HXLINE( 166)		if (hx::IsNull( window )) {
HXLINE( 168)			window = HX_("_blank",95,26,d9,b0);
            		}
HXLINE( 175)		::String uri = request->url;
HXLINE( 177)		if (hx::IsEq( ::Type_obj::_hx_typeof(request->data),::ValueType_obj::TObject_dyn() )) {
HXLINE( 179)			::String query = HX_("",00,00,00,00);
HXLINE( 180)			::Array< ::String > fields = ::Reflect_obj::fields(request->data);
HXLINE( 182)			{
HXLINE( 182)				int _g = (int)0;
HXDLIN( 182)				while((_g < fields->length)){
HXLINE( 182)					::String field = fields->__get(_g);
HXDLIN( 182)					_g = (_g + (int)1);
HXLINE( 184)					if ((query.length > (int)0)) {
HXLINE( 184)						query = (query + HX_("&",26,00,00,00));
            					}
HXLINE( 185)					::String query1 = (::StringTools_obj::urlEncode(field) + HX_("=",3d,00,00,00));
HXDLIN( 185)					query = (query + (query1 + ::StringTools_obj::urlEncode(::Std_obj::string(::Reflect_obj::field(request->data,field)))));
            				}
            			}
HXLINE( 189)			if ((uri.indexOf(HX_("?",3f,00,00,00),null()) > (int)-1)) {
HXLINE( 191)				uri = (uri + (HX_("&",26,00,00,00) + query));
            			}
            			else {
HXLINE( 195)				uri = (uri + (HX_("?",3f,00,00,00) + query));
            			}
            		}
HXLINE( 201)		::lime::_hx_system::System_obj::openURL(uri,window);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,navigateToURL,(void))

void Lib_obj::notImplemented( ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_207_notImplemented)
HXLINE( 209)		::String api = ((( (::String)(posInfo->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) ) + HX_(".",2e,00,00,00)) + ( (::String)(posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic)) ));
HXLINE( 211)		if (!(::openfl::Lib_obj::_hx___sentWarnings->exists(api))) {
HXLINE( 213)			::openfl::Lib_obj::_hx___sentWarnings->set(api,true);
HXLINE( 215)			::lime::utils::Log_obj::warn((( (::String)(posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic)) ) + HX_(" is not implemented",1f,12,d2,b9)),posInfo);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

void Lib_obj::preventDefaultTouchMove(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_222_preventDefaultTouchMove)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,preventDefaultTouchMove,(void))

void Lib_obj::sendToURL( ::openfl::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_244_sendToURL)
HXLINE( 246)		 ::openfl::net::URLLoader urlLoader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 247)		urlLoader->load(request);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,sendToURL,(void))

int Lib_obj::setInterval( ::Dynamic closure,int delay,::cpp::VirtualArray args){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,closure,::cpp::VirtualArray,args) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_259_setInterval)
HXLINE( 259)			::cpp::VirtualArray _hx_tmp;
HXDLIN( 259)			if (hx::IsNull( args )) {
HXLINE( 259)				_hx_tmp = ::cpp::VirtualArray_obj::__new(0);
            			}
            			else {
HXLINE( 259)				_hx_tmp = args;
            			}
HXDLIN( 259)			::Reflect_obj::callMethod(closure,closure,_hx_tmp);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_252_setInterval)
HXLINE( 254)		int id = ++::openfl::Lib_obj::_hx___lastTimerID;
HXLINE( 255)		 ::haxe::Timer timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,delay);
HXLINE( 256)		::openfl::Lib_obj::_hx___timers->set(id,timer);
HXLINE( 257)		timer->run =  ::Dynamic(new _hx_Closure_0(closure,args));
HXLINE( 262)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,setInterval,return )

int Lib_obj::setTimeout( ::Dynamic closure,int delay,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_267_setTimeout)
HXLINE( 269)		int id = ++::openfl::Lib_obj::_hx___lastTimerID;
HXLINE( 270)		{
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,closure,::cpp::VirtualArray,args) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_272_setTimeout)
HXLINE( 272)				::cpp::VirtualArray v1;
HXDLIN( 272)				if (hx::IsNull( args )) {
HXLINE( 272)					v1 = ::cpp::VirtualArray_obj::__new(0);
            				}
            				else {
HXLINE( 272)					v1 = args;
            				}
HXDLIN( 272)				::Reflect_obj::callMethod(closure,closure,v1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 270)			::Dynamic this1 = ::openfl::Lib_obj::_hx___timers;
HXDLIN( 270)			 ::haxe::Timer v = ::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(closure,args)),delay);
HXDLIN( 270)			( ( ::haxe::ds::IntMap)(this1) )->set(id,v);
            		}
HXLINE( 275)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,setTimeout,return )

void Lib_obj::trace( ::Dynamic arg){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_282_trace)
HXDLIN( 282)		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_("Lib.hx",b9,80,1c,19),282,HX_("openfl.Lib",47,43,57,2f),HX_("trace",85,8e,1f,16)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

 ::openfl::display::Application Lib_obj::get_application(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_296_get_application)
HXDLIN( 296)		return ::openfl::_internal::Lib_obj::application;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_application,return )

 ::openfl::display::MovieClip Lib_obj::get_current(){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_301_get_current)
HXLINE( 306)		if (hx::IsNull( ::openfl::_internal::Lib_obj::current )) {
HXLINE( 306)			::openfl::_internal::Lib_obj::current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE( 307)		return ::openfl::_internal::Lib_obj::current;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { outValue = as_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { outValue = attach_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_current() ); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { outValue = ( _hx___timers ); return true; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendToURL") ) { outValue = sendToURL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setTimeout") ) { outValue = setTimeout_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_application() ); return true; } }
		if (HX_FIELD_EQ(inName,"setInterval") ) { outValue = setInterval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_current") ) { outValue = get_current_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearTimeout") ) { outValue = clearTimeout_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastTimerID") ) { outValue = ( _hx___lastTimerID ); return true; }
		if (HX_FIELD_EQ(inName,"clearInterval") ) { outValue = clearInterval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"navigateToURL") ) { outValue = navigateToURL_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = ( _hx___sentWarnings ); return true; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_application") ) { outValue = get_application_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDefinitionByName") ) { outValue = getDefinitionByName_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getQualifiedClassName") ) { outValue = getQualifiedClassName_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"preventDefaultTouchMove") ) { outValue = preventDefaultTouchMove_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getQualifiedSuperclassName") ) { outValue = getQualifiedSuperclassName_dyn(); return true; }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { _hx___timers=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastTimerID") ) { _hx___lastTimerID=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { _hx___sentWarnings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Lib_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Lib_obj::_hx___lastTimerID,HX_HCSTRING("__lastTimerID","\x0a","\x30","\x1d","\xd6")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Lib_obj::_hx___sentWarnings,HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Lib_obj::_hx___timers,HX_HCSTRING("__timers","\x2e","\x78","\x01","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Lib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___lastTimerID,"__lastTimerID");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___timers,"__timers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___lastTimerID,"__lastTimerID");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___timers,"__timers");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_HCSTRING("__lastTimerID","\x0a","\x30","\x1d","\xd6"),
	HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19"),
	HX_HCSTRING("__timers","\x2e","\x78","\x01","\xc7"),
	HX_HCSTRING("as","\xf2","\x54","\x00","\x00"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("clearInterval","\xf2","\x7b","\xd9","\x5b"),
	HX_HCSTRING("clearTimeout","\x94","\xcc","\x75","\xb4"),
	HX_HCSTRING("getDefinitionByName","\x6b","\xce","\x77","\x2d"),
	HX_HCSTRING("getQualifiedClassName","\x1d","\xa7","\x41","\xb8"),
	HX_HCSTRING("getQualifiedSuperclassName","\x0e","\x7b","\xfa","\x6d"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("navigateToURL","\xc3","\xff","\x9a","\x93"),
	HX_HCSTRING("notImplemented","\x6f","\x3a","\x1a","\x27"),
	HX_HCSTRING("preventDefaultTouchMove","\x67","\xc4","\x6d","\x72"),
	HX_HCSTRING("sendToURL","\x4c","\x7e","\x8a","\xd4"),
	HX_HCSTRING("setInterval","\x07","\x43","\xdd","\x58"),
	HX_HCSTRING("setTimeout","\x1f","\x3f","\xd6","\x2b"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	HX_HCSTRING("get_application","\xe7","\x62","\x20","\xeb"),
	HX_HCSTRING("get_current","\x50","\xfc","\xdd","\x51"),
	::String(null())
};

void Lib_obj::__register()
{
	hx::Object *dummy = new Lib_obj;
	Lib_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Lib","\x47","\x43","\x57","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = Lib_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lib_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_41_boot)
HXDLIN(  41)		_hx___lastTimerID = (int)0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_42_boot)
HXDLIN(  42)		_hx___sentWarnings =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_43_boot)
HXDLIN(  43)		_hx___timers =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
