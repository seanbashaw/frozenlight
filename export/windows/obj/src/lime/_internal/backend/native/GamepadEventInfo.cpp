// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_GamepadEventInfo
#include <lime/_internal/backend/native/GamepadEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d0c0bd38b1c3a1bc_823_new,"lime._internal.backend.native.GamepadEventInfo","new",0x77bbf84b,"lime._internal.backend.native.GamepadEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",823,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_d0c0bd38b1c3a1bc_836_clone,"lime._internal.backend.native.GamepadEventInfo","clone",0x88154c08,"lime._internal.backend.native.GamepadEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",836,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void GamepadEventInfo_obj::__construct( ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value){
int id = __o_id.Default(0);
int button = __o_button.Default(0);
int axis = __o_axis.Default(0);
Float value = __o_value.Default(0);
            	HX_STACKFRAME(&_hx_pos_d0c0bd38b1c3a1bc_823_new)
HXLINE( 825)		this->type = type;
HXLINE( 826)		this->id = id;
HXLINE( 827)		this->button = button;
HXLINE( 828)		this->axis = axis;
HXLINE( 829)		this->axisValue = value;
            	}

Dynamic GamepadEventInfo_obj::__CreateEmpty() { return new GamepadEventInfo_obj; }

void *GamepadEventInfo_obj::_hx_vtable = 0;

Dynamic GamepadEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GamepadEventInfo_obj > _hx_result = new GamepadEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool GamepadEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x779d48ef;
}

 ::lime::_internal::backend::native::GamepadEventInfo GamepadEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d0c0bd38b1c3a1bc_836_clone)
HXDLIN( 836)		return  ::lime::_internal::backend::native::GamepadEventInfo_obj::__alloc( HX_CTX ,this->type,this->id,this->button,this->axis,this->axisValue);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GamepadEventInfo_obj,clone,return )


GamepadEventInfo_obj::GamepadEventInfo_obj()
{
}

hx::Val GamepadEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return hx::Val( axis ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return hx::Val( button ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"axisValue") ) { return hx::Val( axisValue ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GamepadEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"axisValue") ) { axisValue=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("axisValue","\x10","\x6b","\x5c","\x8b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GamepadEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(GamepadEventInfo_obj,axisValue),HX_HCSTRING("axisValue","\x10","\x6b","\x5c","\x8b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GamepadEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String GamepadEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("axisValue","\x10","\x6b","\x5c","\x8b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void GamepadEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GamepadEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class GamepadEventInfo_obj::__mClass;

void GamepadEventInfo_obj::__register()
{
	hx::Object *dummy = new GamepadEventInfo_obj;
	GamepadEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.backend.native.GamepadEventInfo","\xd9","\x76","\x19","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GamepadEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GamepadEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GamepadEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GamepadEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GamepadEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GamepadEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
