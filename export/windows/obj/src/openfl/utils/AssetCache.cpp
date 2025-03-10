// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetCache
#include <openfl/utils/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b51c86a24135fbd_15_new,"openfl.utils.AssetCache","new",0x1485f77f,"openfl.utils.AssetCache.new","openfl/utils/AssetCache.hx",15,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_47_clear,"openfl.utils.AssetCache","clear",0x6abcde6c,"openfl.utils.AssetCache.clear","openfl/utils/AssetCache.hx",47,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_98_getBitmapData,"openfl.utils.AssetCache","getBitmapData",0x142af5ce,"openfl.utils.AssetCache.getBitmapData","openfl/utils/AssetCache.hx",98,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_105_getFont,"openfl.utils.AssetCache","getFont",0xa580b024,"openfl.utils.AssetCache.getFont","openfl/utils/AssetCache.hx",105,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_112_getSound,"openfl.utils.AssetCache","getSound",0xa75444da,"openfl.utils.AssetCache.getSound","openfl/utils/AssetCache.hx",112,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_119_hasBitmapData,"openfl.utils.AssetCache","hasBitmapData",0xd20f5192,"openfl.utils.AssetCache.hasBitmapData","openfl/utils/AssetCache.hx",119,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_126_hasFont,"openfl.utils.AssetCache","hasFont",0xa24220e8,"openfl.utils.AssetCache.hasFont","openfl/utils/AssetCache.hx",126,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_133_hasSound,"openfl.utils.AssetCache","hasSound",0xd3d57f96,"openfl.utils.AssetCache.hasSound","openfl/utils/AssetCache.hx",133,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_138_removeBitmapData,"openfl.utils.AssetCache","removeBitmapData",0x9ca8649e,"openfl.utils.AssetCache.removeBitmapData","openfl/utils/AssetCache.hx",138,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_146_removeFont,"openfl.utils.AssetCache","removeFont",0x136c22f4,"openfl.utils.AssetCache.removeFont","openfl/utils/AssetCache.hx",146,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_154_removeSound,"openfl.utils.AssetCache","removeSound",0x676d480a,"openfl.utils.AssetCache.removeSound","openfl/utils/AssetCache.hx",154,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_164_setBitmapData,"openfl.utils.AssetCache","setBitmapData",0x5930d7da,"openfl.utils.AssetCache.setBitmapData","openfl/utils/AssetCache.hx",164,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_171_setFont,"openfl.utils.AssetCache","setFont",0x98824130,"openfl.utils.AssetCache.setFont","openfl/utils/AssetCache.hx",171,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_178_setSound,"openfl.utils.AssetCache","setSound",0x55b19e4e,"openfl.utils.AssetCache.setSound","openfl/utils/AssetCache.hx",178,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_192_get_enabled,"openfl.utils.AssetCache","get_enabled",0xec9842b7,"openfl.utils.AssetCache.get_enabled","openfl/utils/AssetCache.hx",192,0xffd5b4cf)
HX_LOCAL_STACK_FRAME(_hx_pos_3b51c86a24135fbd_199_set_enabled,"openfl.utils.AssetCache","set_enabled",0xf70549c3,"openfl.utils.AssetCache.set_enabled","openfl/utils/AssetCache.hx",199,0xffd5b4cf)
namespace openfl{
namespace utils{

void AssetCache_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3b51c86a24135fbd_15_new)
HXLINE(  24)		this->_hx___enabled = true;
HXLINE(  38)		this->bitmapData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  39)		this->font =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  40)		this->sound =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic AssetCache_obj::__CreateEmpty() { return new AssetCache_obj; }

void *AssetCache_obj::_hx_vtable = 0;

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetCache_obj > _hx_result = new AssetCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28413c73;
}

static ::openfl::utils::IAssetCache_obj _hx_openfl_utils_AssetCache__hx_openfl_utils_IAssetCache= {
	( bool (hx::Object::*)(bool))&::openfl::utils::AssetCache_obj::set_enabled,
	( bool (hx::Object::*)())&::openfl::utils::AssetCache_obj::get_enabled,
	( void (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::clear,
	(  ::openfl::display::BitmapData (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::getBitmapData,
	(  ::openfl::text::Font (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::getFont,
	(  ::openfl::media::Sound (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::getSound,
	( bool (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::hasBitmapData,
	( bool (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::hasFont,
	( bool (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::hasSound,
	( bool (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::removeBitmapData,
	( bool (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::removeFont,
	( bool (hx::Object::*)(::String))&::openfl::utils::AssetCache_obj::removeSound,
	( void (hx::Object::*)(::String, ::openfl::display::BitmapData))&::openfl::utils::AssetCache_obj::setBitmapData,
	( void (hx::Object::*)(::String, ::openfl::text::Font))&::openfl::utils::AssetCache_obj::setFont,
	( void (hx::Object::*)(::String, ::openfl::media::Sound))&::openfl::utils::AssetCache_obj::setSound,
};

void *AssetCache_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x8a5cf29a: return &_hx_openfl_utils_AssetCache__hx_openfl_utils_IAssetCache;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void AssetCache_obj::clear(::String prefix){
            	HX_GC_STACKFRAME(&_hx_pos_3b51c86a24135fbd_47_clear)
HXDLIN(  47)		if (hx::IsNull( prefix )) {
HXLINE(  49)			this->bitmapData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  50)			this->font =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  51)			this->sound =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE(  55)			 ::Dynamic keys = this->bitmapData->keys();
HXLINE(  57)			{
HXLINE(  57)				 ::Dynamic key = keys;
HXDLIN(  57)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  57)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  59)					if (::StringTools_obj::startsWith(key1,prefix)) {
HXLINE(  61)						this->removeBitmapData(key1);
            					}
            				}
            			}
HXLINE(  67)			 ::Dynamic keys1 = this->font->keys();
HXLINE(  69)			{
HXLINE(  69)				 ::Dynamic key2 = keys1;
HXDLIN(  69)				while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  69)					::String key3 = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  71)					if (::StringTools_obj::startsWith(key3,prefix)) {
HXLINE(  73)						this->removeFont(key3);
            					}
            				}
            			}
HXLINE(  79)			 ::Dynamic keys2 = this->sound->keys();
HXLINE(  81)			{
HXLINE(  81)				 ::Dynamic key4 = keys2;
HXDLIN(  81)				while(( (bool)(key4->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  81)					::String key5 = ( (::String)(key4->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  83)					if (::StringTools_obj::startsWith(key5,prefix)) {
HXLINE(  85)						this->removeSound(key5);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))

 ::openfl::display::BitmapData AssetCache_obj::getBitmapData(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_98_getBitmapData)
HXDLIN(  98)		return this->bitmapData->get(id).StaticCast<  ::openfl::display::BitmapData >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

 ::openfl::text::Font AssetCache_obj::getFont(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_105_getFont)
HXDLIN( 105)		return this->font->get(id).StaticCast<  ::openfl::text::Font >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

 ::openfl::media::Sound AssetCache_obj::getSound(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_112_getSound)
HXDLIN( 112)		return this->sound->get(id).StaticCast<  ::openfl::media::Sound >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

bool AssetCache_obj::hasBitmapData(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_119_hasBitmapData)
HXDLIN( 119)		return this->bitmapData->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

bool AssetCache_obj::hasFont(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_126_hasFont)
HXDLIN( 126)		return this->font->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

bool AssetCache_obj::hasSound(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_133_hasSound)
HXDLIN( 133)		return this->sound->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

bool AssetCache_obj::removeBitmapData(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_138_removeBitmapData)
HXLINE( 140)		::lime::utils::Assets_obj::cache->image->remove(id);
HXLINE( 141)		return this->bitmapData->remove(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

bool AssetCache_obj::removeFont(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_146_removeFont)
HXLINE( 148)		::lime::utils::Assets_obj::cache->font->remove(id);
HXLINE( 149)		return this->font->remove(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

bool AssetCache_obj::removeSound(::String id){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_154_removeSound)
HXLINE( 156)		::lime::utils::Assets_obj::cache->audio->remove(id);
HXLINE( 157)		return this->sound->remove(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

void AssetCache_obj::setBitmapData(::String id, ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_164_setBitmapData)
HXDLIN( 164)		this->bitmapData->set(id,bitmapData);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

void AssetCache_obj::setFont(::String id, ::openfl::text::Font font){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_171_setFont)
HXDLIN( 171)		this->font->set(id,font);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

void AssetCache_obj::setSound(::String id, ::openfl::media::Sound sound){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_178_setSound)
HXDLIN( 178)		this->sound->set(id,sound);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

bool AssetCache_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_192_get_enabled)
HXDLIN( 192)		return this->_hx___enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

bool AssetCache_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_3b51c86a24135fbd_199_set_enabled)
HXDLIN( 199)		return (this->_hx___enabled = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new() {
	hx::ObjectPtr< AssetCache_obj > __this = new AssetCache_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__alloc(hx::Ctx *_hx_ctx) {
	AssetCache_obj *__this = (AssetCache_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetCache_obj), true, "openfl.utils.AssetCache"));
	*(void **)__this = AssetCache_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(_hx___enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(_hx___enabled,"__enabled");
}

hx::Val AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return hx::Val( font ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return hx::Val( sound ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_enabled() ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hx::Val( hasFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return hx::Val( setFont_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return hx::Val( getSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hx::Val( hasSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return hx::Val( setSound_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return hx::Val( _hx___enabled ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData ); }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return hx::Val( removeFont_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return hx::Val( removeSound_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return hx::Val( get_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return hx::Val( set_enabled_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return hx::Val( getBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hx::Val( hasBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return hx::Val( setBitmapData_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return hx::Val( removeBitmapData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AssetCache_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { _hx___enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	outFields->push(HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AssetCache_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,_hx___enabled),HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AssetCache_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetCache_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("hasBitmapData","\xb3","\x6d","\x17","\x4e"),
	HX_HCSTRING("hasFont","\x49","\x7e","\x04","\x13"),
	HX_HCSTRING("hasSound","\x15","\xd7","\x24","\x0d"),
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	HX_HCSTRING("removeFont","\x33","\x98","\xdf","\xc0"),
	HX_HCSTRING("removeSound","\xeb","\x69","\x00","\x7f"),
	HX_HCSTRING("setBitmapData","\xfb","\xf3","\x38","\xd5"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("setSound","\xcd","\xf5","\x00","\x8f"),
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	::String(null()) };

static void AssetCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Object *dummy = new AssetCache_obj;
	AssetCache_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.AssetCache","\x0d","\xcc","\x3e","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetCache_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetCache_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetCache_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
