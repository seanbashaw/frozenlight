// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_Frame
#include <openfl/_internal/timeline/Frame.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_93fa5daca022a01e_23_new,"openfl._internal.symbols.SpriteSymbol","new",0x907606b2,"openfl._internal.symbols.SpriteSymbol.new","openfl/_internal/symbols/SpriteSymbol.hx",23,0x4ab9bb1b)
HX_LOCAL_STACK_FRAME(_hx_pos_93fa5daca022a01e_32___createObject,"openfl._internal.symbols.SpriteSymbol","__createObject",0xc7e3e8e9,"openfl._internal.symbols.SpriteSymbol.__createObject","openfl/_internal/symbols/SpriteSymbol.hx",32,0x4ab9bb1b)
namespace openfl{
namespace _internal{
namespace symbols{

void SpriteSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_93fa5daca022a01e_23_new)
HXLINE(  25)		super::__construct();
HXLINE(  27)		this->frames = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic SpriteSymbol_obj::__CreateEmpty() { return new SpriteSymbol_obj; }

void *SpriteSymbol_obj::_hx_vtable = 0;

Dynamic SpriteSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SpriteSymbol_obj > _hx_result = new SpriteSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SpriteSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b954050) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b954050;
	} else {
		return inClassId==(int)0x5bdcc22b;
	}
}

 ::openfl::display::DisplayObject SpriteSymbol_obj::_hx___createObject( ::openfl::_internal::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_93fa5daca022a01e_32___createObject)
HXLINE(  35)		::openfl::display::MovieClip_obj::_hx___initSWF = swf;
HXLINE(  36)		::openfl::display::MovieClip_obj::_hx___initSymbol = hx::ObjectPtr<OBJ_>(this);
HXLINE(  39)		hx::Class symbolType = null();
HXLINE(  41)		if (hx::IsNotNull( this->className )) {
HXLINE(  43)			symbolType = ::Type_obj::resolveClass(this->className);
HXLINE(  45)			bool _hx_tmp = hx::IsNull( symbolType );
            		}
HXLINE(  52)		bool _hx_tmp1;
HXDLIN(  52)		if (hx::IsNull( symbolType )) {
HXLINE(  52)			_hx_tmp1 = hx::IsNotNull( this->baseClassName );
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = false;
            		}
HXDLIN(  52)		if (_hx_tmp1) {
HXLINE(  54)			symbolType = ::Type_obj::resolveClass(this->baseClassName);
HXLINE(  56)			bool _hx_tmp2 = hx::IsNull( symbolType );
            		}
HXLINE(  64)		 ::openfl::display::MovieClip movieClip = null();
HXLINE(  66)		if (hx::IsNotNull( symbolType )) {
HXLINE(  68)			movieClip = ( ( ::openfl::display::MovieClip)(::Type_obj::createInstance(symbolType,::cpp::VirtualArray_obj::__new(0))) );
            		}
            		else {
HXLINE(  72)			movieClip =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE(  76)		return movieClip;
            	}



hx::ObjectPtr< SpriteSymbol_obj > SpriteSymbol_obj::__new() {
	hx::ObjectPtr< SpriteSymbol_obj > __this = new SpriteSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SpriteSymbol_obj > SpriteSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	SpriteSymbol_obj *__this = (SpriteSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SpriteSymbol_obj), true, "openfl._internal.symbols.SpriteSymbol"));
	*(void **)__this = SpriteSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SpriteSymbol_obj::SpriteSymbol_obj()
{
}

void SpriteSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteSymbol);
	HX_MARK_MEMBER_NAME(baseClassName,"baseClassName");
	HX_MARK_MEMBER_NAME(frames,"frames");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(baseClassName,"baseClassName");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val SpriteSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"baseClassName") ) { return hx::Val( baseClassName ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SpriteSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"baseClassName") ) { baseClassName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("baseClassName","\x52","\x80","\x94","\xdc"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SpriteSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SpriteSymbol_obj,baseClassName),HX_HCSTRING("baseClassName","\x52","\x80","\x94","\xdc")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteSymbol_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SpriteSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String SpriteSymbol_obj_sMemberFields[] = {
	HX_HCSTRING("baseClassName","\x52","\x80","\x94","\xdc"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void SpriteSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpriteSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class SpriteSymbol_obj::__mClass;

void SpriteSymbol_obj::__register()
{
	hx::Object *dummy = new SpriteSymbol_obj;
	SpriteSymbol_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.SpriteSymbol","\xc0","\x85","\xa4","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SpriteSymbol_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SpriteSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpriteSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpriteSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpriteSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
