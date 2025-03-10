// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_dom_DOMBitmap
#include <openfl/_internal/renderer/dom/DOMBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f172e181152f6262_26_clear,"openfl._internal.renderer.dom.DOMBitmap","clear",0xb4c222e9,"openfl._internal.renderer.dom.DOMBitmap.clear","openfl/_internal/renderer/dom/DOMBitmap.hx",26,0x32124034)
HX_LOCAL_STACK_FRAME(_hx_pos_f172e181152f6262_49_render,"openfl._internal.renderer.dom.DOMBitmap","render",0x729dea7a,"openfl._internal.renderer.dom.DOMBitmap.render","openfl/_internal/renderer/dom/DOMBitmap.hx",49,0x32124034)
HX_LOCAL_STACK_FRAME(_hx_pos_f172e181152f6262_78_renderCanvas,"openfl._internal.renderer.dom.DOMBitmap","renderCanvas",0x22facaf2,"openfl._internal.renderer.dom.DOMBitmap.renderCanvas","openfl/_internal/renderer/dom/DOMBitmap.hx",78,0x32124034)
HX_LOCAL_STACK_FRAME(_hx_pos_f172e181152f6262_129_renderImage,"openfl._internal.renderer.dom.DOMBitmap","renderImage",0x8ed26a81,"openfl._internal.renderer.dom.DOMBitmap.renderImage","openfl/_internal/renderer/dom/DOMBitmap.hx",129,0x32124034)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

void DOMBitmap_obj::__construct() { }

Dynamic DOMBitmap_obj::__CreateEmpty() { return new DOMBitmap_obj; }

void *DOMBitmap_obj::_hx_vtable = 0;

Dynamic DOMBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMBitmap_obj > _hx_result = new DOMBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a80cffe;
}

void DOMBitmap_obj::clear( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f172e181152f6262_26_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,clear,(void))

void DOMBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f172e181152f6262_49_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,render,(void))

void DOMBitmap_obj::renderCanvas( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f172e181152f6262_78_renderCanvas)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderCanvas,(void))

void DOMBitmap_obj::renderImage( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_f172e181152f6262_129_renderImage)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderImage,(void))


DOMBitmap_obj::DOMBitmap_obj()
{
}

bool DOMBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderImage") ) { outValue = renderImage_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderCanvas") ) { outValue = renderCanvas_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DOMBitmap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DOMBitmap_obj_sStaticStorageInfo = 0;
#endif

static void DOMBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMBitmap_obj::__mClass;

static ::String DOMBitmap_obj_sStaticFields[] = {
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderCanvas","\xce","\x58","\x98","\x27"),
	HX_HCSTRING("renderImage","\x25","\x4c","\x1a","\x89"),
	::String(null())
};

void DOMBitmap_obj::__register()
{
	hx::Object *dummy = new DOMBitmap_obj;
	DOMBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMBitmap","\xca","\x64","\xe9","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DOMBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DOMBitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
