// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_
#include <openfl/geom/_Orientation3D/Orientation3D_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_dbfa7e5fc0c22ef6_12_fromString,"openfl.geom._Orientation3D.Orientation3D_Impl_","fromString",0xa47116a0,"openfl.geom._Orientation3D.Orientation3D_Impl_.fromString","openfl/geom/Orientation3D.hx",12,0xf4ac08f1)
HX_LOCAL_STACK_FRAME(_hx_pos_dbfa7e5fc0c22ef6_25_toString,"openfl.geom._Orientation3D.Orientation3D_Impl_","toString",0xf11d8e31,"openfl.geom._Orientation3D.Orientation3D_Impl_.toString","openfl/geom/Orientation3D.hx",25,0xf4ac08f1)
HX_LOCAL_STACK_FRAME(_hx_pos_dbfa7e5fc0c22ef6_6_boot,"openfl.geom._Orientation3D.Orientation3D_Impl_","boot",0xe951db37,"openfl.geom._Orientation3D.Orientation3D_Impl_.boot","openfl/geom/Orientation3D.hx",6,0xf4ac08f1)
HX_LOCAL_STACK_FRAME(_hx_pos_dbfa7e5fc0c22ef6_7_boot,"openfl.geom._Orientation3D.Orientation3D_Impl_","boot",0xe951db37,"openfl.geom._Orientation3D.Orientation3D_Impl_.boot","openfl/geom/Orientation3D.hx",7,0xf4ac08f1)
HX_LOCAL_STACK_FRAME(_hx_pos_dbfa7e5fc0c22ef6_8_boot,"openfl.geom._Orientation3D.Orientation3D_Impl_","boot",0xe951db37,"openfl.geom._Orientation3D.Orientation3D_Impl_.boot","openfl/geom/Orientation3D.hx",8,0xf4ac08f1)
namespace openfl{
namespace geom{
namespace _Orientation3D{

void Orientation3D_Impl__obj::__construct() { }

Dynamic Orientation3D_Impl__obj::__CreateEmpty() { return new Orientation3D_Impl__obj; }

void *Orientation3D_Impl__obj::_hx_vtable = 0;

Dynamic Orientation3D_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Orientation3D_Impl__obj > _hx_result = new Orientation3D_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Orientation3D_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ad9c9d3;
}

 ::Dynamic Orientation3D_Impl__obj::AXIS_ANGLE;

 ::Dynamic Orientation3D_Impl__obj::EULER_ANGLES;

 ::Dynamic Orientation3D_Impl__obj::QUATERNION;

 ::Dynamic Orientation3D_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_dbfa7e5fc0c22ef6_12_fromString)
HXDLIN(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("axisAngle",72,2f,86,7c)) ){
HXLINE(  14)			return (int)0;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("eulerAngles",89,d7,c4,64)) ){
HXLINE(  15)			return (int)1;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("quaternion",1e,0d,ca,1b)) ){
HXLINE(  16)			return (int)2;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  17)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Orientation3D_Impl__obj,fromString,return )

::String Orientation3D_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_dbfa7e5fc0c22ef6_25_toString)
HXDLIN(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  27)				return HX_("axisAngle",72,2f,86,7c);
            			}
            			break;
            			case (int)1: {
HXLINE(  28)				return HX_("eulerAngles",89,d7,c4,64);
            			}
            			break;
            			case (int)2: {
HXLINE(  29)				return HX_("quaternion",1e,0d,ca,1b);
            			}
            			break;
            			default:{
HXLINE(  30)				return null();
            			}
            		}
HXLINE(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Orientation3D_Impl__obj,toString,return )


Orientation3D_Impl__obj::Orientation3D_Impl__obj()
{
}

bool Orientation3D_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Orientation3D_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Orientation3D_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Orientation3D_Impl__obj::AXIS_ANGLE,HX_HCSTRING("AXIS_ANGLE","\x55","\x56","\x74","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Orientation3D_Impl__obj::EULER_ANGLES,HX_HCSTRING("EULER_ANGLES","\xb6","\x6c","\xda","\x49")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Orientation3D_Impl__obj::QUATERNION,HX_HCSTRING("QUATERNION","\x1e","\x81","\xd3","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Orientation3D_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::AXIS_ANGLE,"AXIS_ANGLE");
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::EULER_ANGLES,"EULER_ANGLES");
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::QUATERNION,"QUATERNION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Orientation3D_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::AXIS_ANGLE,"AXIS_ANGLE");
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::EULER_ANGLES,"EULER_ANGLES");
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::QUATERNION,"QUATERNION");
};

#endif

hx::Class Orientation3D_Impl__obj::__mClass;

static ::String Orientation3D_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("AXIS_ANGLE","\x55","\x56","\x74","\xbd"),
	HX_HCSTRING("EULER_ANGLES","\xb6","\x6c","\xda","\x49"),
	HX_HCSTRING("QUATERNION","\x1e","\x81","\xd3","\x0d"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Orientation3D_Impl__obj::__register()
{
	hx::Object *dummy = new Orientation3D_Impl__obj;
	Orientation3D_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom._Orientation3D.Orientation3D_Impl_","\x89","\x67","\xe7","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Orientation3D_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Orientation3D_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Orientation3D_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Orientation3D_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Orientation3D_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Orientation3D_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Orientation3D_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Orientation3D_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dbfa7e5fc0c22ef6_6_boot)
HXDLIN(   6)		AXIS_ANGLE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dbfa7e5fc0c22ef6_7_boot)
HXDLIN(   7)		EULER_ANGLES = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dbfa7e5fc0c22ef6_8_boot)
HXDLIN(   8)		QUATERNION = (int)2;
            	}
}

} // end namespace openfl
} // end namespace geom
} // end namespace _Orientation3D
