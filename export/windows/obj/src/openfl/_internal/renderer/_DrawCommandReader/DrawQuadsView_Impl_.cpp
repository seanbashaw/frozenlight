// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawQuadsView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawQuadsView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a2c08b33e10d146f_336__new,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_","_new",0x1358bdea,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",336,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a2c08b33e10d146f_337_get_rects,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_","get_rects",0x230f55fd,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_.get_rects","openfl/_internal/renderer/DrawCommandReader.hx",337,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a2c08b33e10d146f_338_get_indices,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_","get_indices",0x351911d5,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_.get_indices","openfl/_internal/renderer/DrawCommandReader.hx",338,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_a2c08b33e10d146f_339_get_transforms,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_","get_transforms",0xb40d2799,"openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_.get_transforms","openfl/_internal/renderer/DrawCommandReader.hx",339,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void DrawQuadsView_Impl__obj::__construct() { }

Dynamic DrawQuadsView_Impl__obj::__CreateEmpty() { return new DrawQuadsView_Impl__obj; }

void *DrawQuadsView_Impl__obj::_hx_vtable = 0;

Dynamic DrawQuadsView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawQuadsView_Impl__obj > _hx_result = new DrawQuadsView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawQuadsView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a66f073;
}

 ::openfl::_internal::renderer::DrawCommandReader DrawQuadsView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_a2c08b33e10d146f_336__new)
HXDLIN( 336)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 336)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,_new,return )

 ::openfl::_Vector::FloatVector DrawQuadsView_Impl__obj::get_rects( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_a2c08b33e10d146f_337_get_rects)
HXDLIN( 337)		return ( ( ::openfl::_Vector::FloatVector)(this1->buffer->o->__get(this1->oPos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,get_rects,return )

 ::openfl::_Vector::IntVector DrawQuadsView_Impl__obj::get_indices( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_a2c08b33e10d146f_338_get_indices)
HXDLIN( 338)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 338)		return ( ( ::openfl::_Vector::IntVector)(this2->__get((this1->oPos + (int)1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,get_indices,return )

 ::openfl::_Vector::FloatVector DrawQuadsView_Impl__obj::get_transforms( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_a2c08b33e10d146f_339_get_transforms)
HXDLIN( 339)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 339)		return ( ( ::openfl::_Vector::FloatVector)(this2->__get((this1->oPos + (int)2))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,get_transforms,return )


DrawQuadsView_Impl__obj::DrawQuadsView_Impl__obj()
{
}

bool DrawQuadsView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_rects") ) { outValue = get_rects_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_indices") ) { outValue = get_indices_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_transforms") ) { outValue = get_transforms_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DrawQuadsView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DrawQuadsView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void DrawQuadsView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawQuadsView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawQuadsView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawQuadsView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawQuadsView_Impl__obj::__mClass;

static ::String DrawQuadsView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_rects","\x26","\x8f","\x65","\x2a"),
	HX_HCSTRING("get_indices","\x3e","\xa7","\x4e","\x69"),
	HX_HCSTRING("get_transforms","\xd0","\x19","\x2a","\x11"),
	::String(null())
};

void DrawQuadsView_Impl__obj::__register()
{
	hx::Object *dummy = new DrawQuadsView_Impl__obj;
	DrawQuadsView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawQuadsView_Impl_","\x85","\x84","\x2d","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawQuadsView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DrawQuadsView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DrawQuadsView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawQuadsView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawQuadsView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawQuadsView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawQuadsView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
