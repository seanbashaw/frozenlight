// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__JointStyle_JointStyle_Impl_
#include <openfl/display/_JointStyle/JointStyle_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_36_fromString,"openfl.display._JointStyle.JointStyle_Impl_","fromString",0x7f19acb0,"openfl.display._JointStyle.JointStyle_Impl_.fromString","openfl/display/JointStyle.hx",36,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_50_toString,"openfl.display._JointStyle.JointStyle_Impl_","toString",0xcf598041,"openfl.display._JointStyle.JointStyle_Impl_.toString","openfl/display/JointStyle.hx",50,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_19_boot,"openfl.display._JointStyle.JointStyle_Impl_","boot",0x74078547,"openfl.display._JointStyle.JointStyle_Impl_.boot","openfl/display/JointStyle.hx",19,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_25_boot,"openfl.display._JointStyle.JointStyle_Impl_","boot",0x74078547,"openfl.display._JointStyle.JointStyle_Impl_.boot","openfl/display/JointStyle.hx",25,0xc58a30ab)
HX_LOCAL_STACK_FRAME(_hx_pos_e69e97fcd930b6f5_31_boot,"openfl.display._JointStyle.JointStyle_Impl_","boot",0x74078547,"openfl.display._JointStyle.JointStyle_Impl_.boot","openfl/display/JointStyle.hx",31,0xc58a30ab)
namespace openfl{
namespace display{
namespace _JointStyle{

void JointStyle_Impl__obj::__construct() { }

Dynamic JointStyle_Impl__obj::__CreateEmpty() { return new JointStyle_Impl__obj; }

void *JointStyle_Impl__obj::_hx_vtable = 0;

Dynamic JointStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JointStyle_Impl__obj > _hx_result = new JointStyle_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JointStyle_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f13e873;
}

 ::Dynamic JointStyle_Impl__obj::BEVEL;

 ::Dynamic JointStyle_Impl__obj::MITER;

 ::Dynamic JointStyle_Impl__obj::ROUND;

 ::Dynamic JointStyle_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_36_fromString)
HXDLIN(  36)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bevel",7a,48,61,b0)) ){
HXLINE(  38)			return (int)0;
HXDLIN(  38)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("miter",05,00,6d,08)) ){
HXLINE(  39)			return (int)1;
HXDLIN(  39)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("round",4e,f8,65,ed)) ){
HXLINE(  40)			return (int)2;
HXDLIN(  40)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  41)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,fromString,return )

::String JointStyle_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_50_toString)
HXDLIN(  50)		switch((int)(value)){
            			case (int)0: {
HXLINE(  52)				return HX_("bevel",7a,48,61,b0);
            			}
            			break;
            			case (int)1: {
HXLINE(  53)				return HX_("miter",05,00,6d,08);
            			}
            			break;
            			case (int)2: {
HXLINE(  54)				return HX_("round",4e,f8,65,ed);
            			}
            			break;
            			default:{
HXLINE(  55)				return null();
            			}
            		}
HXLINE(  50)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JointStyle_Impl__obj,toString,return )


JointStyle_Impl__obj::JointStyle_Impl__obj()
{
}

bool JointStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *JointStyle_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo JointStyle_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &JointStyle_Impl__obj::BEVEL,HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JointStyle_Impl__obj::MITER,HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JointStyle_Impl__obj::ROUND,HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void JointStyle_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::BEVEL,"BEVEL");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::MITER,"MITER");
	HX_MARK_MEMBER_NAME(JointStyle_Impl__obj::ROUND,"ROUND");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JointStyle_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::BEVEL,"BEVEL");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::MITER,"MITER");
	HX_VISIT_MEMBER_NAME(JointStyle_Impl__obj::ROUND,"ROUND");
};

#endif

hx::Class JointStyle_Impl__obj::__mClass;

static ::String JointStyle_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e"),
	HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86"),
	HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void JointStyle_Impl__obj::__register()
{
	hx::Object *dummy = new JointStyle_Impl__obj;
	JointStyle_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._JointStyle.JointStyle_Impl_","\x79","\xf7","\x31","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JointStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JointStyle_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JointStyle_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JointStyle_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JointStyle_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JointStyle_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JointStyle_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JointStyle_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_19_boot)
HXDLIN(  19)		BEVEL = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_25_boot)
HXDLIN(  25)		MITER = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e69e97fcd930b6f5_31_boot)
HXDLIN(  31)		ROUND = (int)2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _JointStyle
