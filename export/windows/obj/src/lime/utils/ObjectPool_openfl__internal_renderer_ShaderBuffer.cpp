// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl__internal_renderer_ShaderBuffer
#include <lime/utils/ObjectPool_openfl__internal_renderer_ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_ShaderBuffer
#include <openfl/_internal/renderer/ShaderBuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f229785e00e7b8f7_26_new,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","new",0x1e0c880f,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.new","lime/utils/ObjectPool.hx",26,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_51_add,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","add",0x1e02a9d0,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.add","lime/utils/ObjectPool.hx",51,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_62___default_clean,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","__default_clean",0xabde535a,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.__default_clean","lime/utils/ObjectPool.hx",62,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_69_clear,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","clear",0xcf74b2fc,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.clear","lime/utils/ObjectPool.hx",69,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_85___default_create,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","__default_create",0x2b121c0b,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.__default_create","lime/utils/ObjectPool.hx",85,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_90_get,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","get",0x1e073845,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.get","lime/utils/ObjectPool.hx",90,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_116_release,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","release",0xc9ed40f6,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.release","lime/utils/ObjectPool.hx",116,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_146___addInactive,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","__addInactive",0x6e7357fb,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.__addInactive","lime/utils/ObjectPool.hx",146,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_171___getInactive,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","__getInactive",0x630ae370,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.__getInactive","lime/utils/ObjectPool.hx",171,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_215___removeInactive,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","__removeInactive",0x1322c5e0,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.__removeInactive","lime/utils/ObjectPool.hx",215,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_264_get_size,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","get_size",0x3ad26a3b,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.get_size","lime/utils/ObjectPool.hx",264,0xc114d76b)
HX_LOCAL_STACK_FRAME(_hx_pos_f229785e00e7b8f7_269_set_size,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","set_size",0xe92fc3af,"lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer.set_size","lime/utils/ObjectPool.hx",269,0xc114d76b)
namespace lime{
namespace utils{

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__construct( ::Dynamic create, ::Dynamic clean, ::Dynamic size){
            	HX_GC_STACKFRAME(&_hx_pos_f229785e00e7b8f7_26_new)
HXLINE(  28)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  30)		this->activeObjects = (int)0;
HXLINE(  31)		this->inactiveObjects = (int)0;
HXLINE(  33)		this->_hx___inactiveObject0 = null();
HXLINE(  34)		this->_hx___inactiveObject1 = null();
HXLINE(  35)		this->_hx___inactiveObjectList =  ::List_obj::__alloc( HX_CTX );
HXLINE(  37)		if (hx::IsNotNull( create )) {
HXLINE(  38)			this->create = create;
            		}
HXLINE(  40)		if (hx::IsNotNull( clean )) {
HXLINE(  41)			this->clean = clean;
            		}
HXLINE(  43)		if (hx::IsNotNull( size )) {
HXLINE(  44)			this->set_size(size);
            		}
            	}

Dynamic ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__CreateEmpty() { return new ObjectPool_openfl__internal_renderer_ShaderBuffer_obj; }

void *ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::_hx_vtable = 0;

Dynamic ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectPool_openfl__internal_renderer_ShaderBuffer_obj > _hx_result = new ObjectPool_openfl__internal_renderer_ShaderBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x280ef037;
}

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::add( ::openfl::_internal::renderer::ShaderBuffer object){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_51_add)
HXDLIN(  51)		if (!(::haxe::IMap_obj::exists(this->_hx___pool,object))) {
HXLINE(  53)			::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE(  54)			this->clean(object);
HXLINE(  55)			{
HXLINE(  55)				if (hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE(  55)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE(  55)					if (hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE(  55)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE(  55)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN(  55)				this->inactiveObjects++;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,add,(void))

HX_BEGIN_DEFAULT_FUNC(__default_clean,ObjectPool_openfl__internal_renderer_ShaderBuffer_obj)
void _hx_run( ::openfl::_internal::renderer::ShaderBuffer object){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_62___default_clean)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_f229785e00e7b8f7_69_clear)
HXLINE(  71)		this->_hx___pool =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  73)		this->activeObjects = (int)0;
HXLINE(  74)		this->inactiveObjects = (int)0;
HXLINE(  76)		this->_hx___inactiveObject0 = null();
HXLINE(  77)		this->_hx___inactiveObject1 = null();
HXLINE(  78)		this->_hx___inactiveObjectList->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,clear,(void))

HX_BEGIN_DEFAULT_FUNC(__default_create,ObjectPool_openfl__internal_renderer_ShaderBuffer_obj)
 ::openfl::_internal::renderer::ShaderBuffer _hx_run(){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_85___default_create)
HXDLIN(  85)		return null();
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

 ::openfl::_internal::renderer::ShaderBuffer ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::get(){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_90_get)
HXLINE(  92)		 ::openfl::_internal::renderer::ShaderBuffer object = null();
HXLINE(  94)		if ((this->inactiveObjects > (int)0)) {
HXLINE(  96)			 ::openfl::_internal::renderer::ShaderBuffer object1 = null();
HXDLIN(  96)			if (hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE(  96)				object1 = this->_hx___inactiveObject0;
HXDLIN(  96)				this->_hx___inactiveObject0 = null();
            			}
            			else {
HXLINE(  96)				if (hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE(  96)					object1 = this->_hx___inactiveObject1;
HXDLIN(  96)					this->_hx___inactiveObject1 = null();
            				}
            				else {
HXLINE(  96)					object1 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::_internal::renderer::ShaderBuffer >();
HXDLIN(  96)					if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE(  96)						this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::_internal::renderer::ShaderBuffer >();
            					}
HXDLIN(  96)					if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE(  96)						this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::_internal::renderer::ShaderBuffer >();
            					}
            				}
            			}
HXDLIN(  96)			this->inactiveObjects--;
HXDLIN(  96)			this->activeObjects++;
HXDLIN(  96)			object = object1;
            		}
            		else {
HXLINE(  98)			bool _hx_tmp;
HXDLIN(  98)			if (hx::IsNotNull( this->_hx___size )) {
HXLINE(  98)				_hx_tmp = hx::IsLess( this->activeObjects,this->_hx___size );
            			}
            			else {
HXLINE(  98)				_hx_tmp = true;
            			}
HXDLIN(  98)			if (_hx_tmp) {
HXLINE( 100)				object = ( ( ::openfl::_internal::renderer::ShaderBuffer)(this->create()) );
HXLINE( 102)				if (hx::IsNotNull( object )) {
HXLINE( 104)					::haxe::IMap_obj::set(this->_hx___pool,object,true);
HXLINE( 105)					this->activeObjects++;
            				}
            			}
            		}
HXLINE( 111)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,get,return )

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::release( ::openfl::_internal::renderer::ShaderBuffer object){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_116_release)
HXLINE( 130)		this->activeObjects--;
HXLINE( 132)		bool _hx_tmp;
HXDLIN( 132)		if (hx::IsNotNull( this->_hx___size )) {
HXLINE( 132)			_hx_tmp = hx::IsLess( (this->activeObjects + this->inactiveObjects),this->_hx___size );
            		}
            		else {
HXLINE( 132)			_hx_tmp = true;
            		}
HXDLIN( 132)		if (_hx_tmp) {
HXLINE( 134)			this->clean(object);
HXLINE( 135)			{
HXLINE( 135)				if (hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 135)					this->_hx___inactiveObject0 = object;
            				}
            				else {
HXLINE( 135)					if (hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 135)						this->_hx___inactiveObject1 = object;
            					}
            					else {
HXLINE( 135)						this->_hx___inactiveObjectList->add(object);
            					}
            				}
HXDLIN( 135)				this->inactiveObjects++;
            			}
            		}
            		else {
HXLINE( 139)			::haxe::IMap_obj::remove(this->_hx___pool,object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,release,(void))

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::_hx___addInactive( ::openfl::_internal::renderer::ShaderBuffer object){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_146___addInactive)
HXLINE( 152)		if (hx::IsNull( this->_hx___inactiveObject0 )) {
HXLINE( 154)			this->_hx___inactiveObject0 = object;
            		}
            		else {
HXLINE( 156)			if (hx::IsNull( this->_hx___inactiveObject1 )) {
HXLINE( 158)				this->_hx___inactiveObject1 = object;
            			}
            			else {
HXLINE( 162)				this->_hx___inactiveObjectList->add(object);
            			}
            		}
HXLINE( 166)		this->inactiveObjects++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___addInactive,(void))

 ::openfl::_internal::renderer::ShaderBuffer ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::_hx___getInactive(){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_171___getInactive)
HXLINE( 173)		 ::openfl::_internal::renderer::ShaderBuffer object = null();
HXLINE( 175)		if (hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 177)			object = this->_hx___inactiveObject0;
HXLINE( 178)			this->_hx___inactiveObject0 = null();
            		}
            		else {
HXLINE( 180)			if (hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 182)				object = this->_hx___inactiveObject1;
HXLINE( 183)				this->_hx___inactiveObject1 = null();
            			}
            			else {
HXLINE( 187)				object = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::_internal::renderer::ShaderBuffer >();
HXLINE( 189)				if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE( 191)					this->_hx___inactiveObject0 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::_internal::renderer::ShaderBuffer >();
            				}
HXLINE( 195)				if ((this->_hx___inactiveObjectList->length > (int)0)) {
HXLINE( 197)					this->_hx___inactiveObject1 = this->_hx___inactiveObjectList->pop().StaticCast<  ::openfl::_internal::renderer::ShaderBuffer >();
            				}
            			}
            		}
HXLINE( 207)		this->inactiveObjects--;
HXLINE( 208)		this->activeObjects++;
HXLINE( 210)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___getInactive,return )

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::_hx___removeInactive(int count){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_215___removeInactive)
HXLINE( 217)		bool _hx_tmp;
HXDLIN( 217)		if ((count > (int)0)) {
HXLINE( 217)			_hx_tmp = (this->inactiveObjects == (int)0);
            		}
            		else {
HXLINE( 217)			_hx_tmp = true;
            		}
HXDLIN( 217)		if (_hx_tmp) {
HXLINE( 217)			return;
            		}
HXLINE( 219)		if (hx::IsNotNull( this->_hx___inactiveObject0 )) {
HXLINE( 221)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject0);
HXLINE( 222)			this->_hx___inactiveObject0 = null();
HXLINE( 223)			this->inactiveObjects--;
HXLINE( 224)			count = (count - (int)1);
            		}
HXLINE( 228)		bool _hx_tmp1;
HXDLIN( 228)		if ((count != (int)0)) {
HXLINE( 228)			_hx_tmp1 = (this->inactiveObjects == (int)0);
            		}
            		else {
HXLINE( 228)			_hx_tmp1 = true;
            		}
HXDLIN( 228)		if (_hx_tmp1) {
HXLINE( 228)			return;
            		}
HXLINE( 230)		if (hx::IsNotNull( this->_hx___inactiveObject1 )) {
HXLINE( 232)			::haxe::IMap_obj::remove(this->_hx___pool,this->_hx___inactiveObject1);
HXLINE( 233)			this->_hx___inactiveObject1 = null();
HXLINE( 234)			this->inactiveObjects--;
HXLINE( 235)			count = (count - (int)1);
            		}
HXLINE( 239)		bool _hx_tmp2;
HXDLIN( 239)		if ((count != (int)0)) {
HXLINE( 239)			_hx_tmp2 = (this->inactiveObjects == (int)0);
            		}
            		else {
HXLINE( 239)			_hx_tmp2 = true;
            		}
HXDLIN( 239)		if (_hx_tmp2) {
HXLINE( 239)			return;
            		}
HXLINE( 241)		{
HXLINE( 241)			 ::_List::ListNode _g_head = this->_hx___inactiveObjectList->h;
HXDLIN( 241)			while(hx::IsNotNull( _g_head )){
HXLINE( 241)				 ::openfl::_internal::renderer::ShaderBuffer val = ( ( ::openfl::_internal::renderer::ShaderBuffer)(_g_head->item) );
HXDLIN( 241)				_g_head = _g_head->next;
HXDLIN( 241)				 ::openfl::_internal::renderer::ShaderBuffer object = val;
HXLINE( 243)				::haxe::IMap_obj::remove(this->_hx___pool,object);
HXLINE( 244)				this->_hx___inactiveObjectList->remove(object);
HXLINE( 245)				this->inactiveObjects--;
HXLINE( 246)				count = (count - (int)1);
HXLINE( 248)				bool _hx_tmp3;
HXDLIN( 248)				if ((count != (int)0)) {
HXLINE( 248)					_hx_tmp3 = (this->inactiveObjects == (int)0);
            				}
            				else {
HXLINE( 248)					_hx_tmp3 = true;
            				}
HXDLIN( 248)				if (_hx_tmp3) {
HXLINE( 248)					return;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___removeInactive,(void))

 ::Dynamic ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_264_get_size)
HXDLIN( 264)		return this->_hx___size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,get_size,return )

 ::Dynamic ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::set_size( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f229785e00e7b8f7_269_set_size)
HXLINE( 271)		if (hx::IsNull( value )) {
HXLINE( 273)			this->_hx___size = null();
            		}
            		else {
HXLINE( 277)			int current = (this->inactiveObjects + this->activeObjects);
HXLINE( 278)			this->_hx___size = value;
HXLINE( 280)			if (hx::IsGreater( current,value )) {
HXLINE( 282)				this->_hx___removeInactive((current - value));
            			}
            			else {
HXLINE( 284)				if (hx::IsGreater( value,current )) {
HXLINE( 286)					 ::openfl::_internal::renderer::ShaderBuffer object;
HXLINE( 288)					{
HXLINE( 288)						int _g1 = (int)0;
HXDLIN( 288)						int _g = (value - current);
HXDLIN( 288)						while((_g1 < _g)){
HXLINE( 288)							_g1 = (_g1 + (int)1);
HXDLIN( 288)							int i = (_g1 - (int)1);
HXLINE( 290)							object = ( ( ::openfl::_internal::renderer::ShaderBuffer)(this->create()) );
HXLINE( 292)							if (hx::IsNotNull( object )) {
HXLINE( 294)								::haxe::IMap_obj::set(this->_hx___pool,object,false);
HXLINE( 295)								this->_hx___inactiveObjectList->add(object);
HXLINE( 296)								this->inactiveObjects++;
            							}
            							else {
HXLINE( 300)								goto _hx_goto_12;
            							}
            						}
            						_hx_goto_12:;
            					}
            				}
            			}
            		}
HXLINE( 310)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,set_size,return )


void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__alloc_dynamic_functions(hx::Ctx *_hx_ctx,ObjectPool_openfl__internal_renderer_ShaderBuffer_obj *_hx_obj) {
	if (!_hx_obj->create.mPtr) _hx_obj->create = new __default_create(_hx_obj);
	if (!_hx_obj->clean.mPtr) _hx_obj->clean = new __default_clean(_hx_obj);
}
hx::ObjectPtr< ObjectPool_openfl__internal_renderer_ShaderBuffer_obj > ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__new( ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	hx::ObjectPtr< ObjectPool_openfl__internal_renderer_ShaderBuffer_obj > __this = new ObjectPool_openfl__internal_renderer_ShaderBuffer_obj();
	__this->__construct(create,clean,size);
	return __this;
}

hx::ObjectPtr< ObjectPool_openfl__internal_renderer_ShaderBuffer_obj > ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic create, ::Dynamic clean, ::Dynamic size) {
	ObjectPool_openfl__internal_renderer_ShaderBuffer_obj *__this = (ObjectPool_openfl__internal_renderer_ShaderBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj), true, "lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer"));
	*(void **)__this = ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::_hx_vtable;
	lime::utils::ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(create,clean,size);
	return __this;
}

ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::ObjectPool_openfl__internal_renderer_ShaderBuffer_obj()
{
	create = new __default_create(this);
	clean = new __default_clean(this);
}

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool_openfl__internal_renderer_ShaderBuffer);
	HX_MARK_MEMBER_NAME(activeObjects,"activeObjects");
	HX_MARK_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_MARK_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_MARK_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_MARK_MEMBER_NAME(_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(_hx___size,"__size");
	HX_MARK_MEMBER_NAME(clean,"clean");
	HX_MARK_MEMBER_NAME(create,"create");
	HX_MARK_END_CLASS();
}

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeObjects,"activeObjects");
	HX_VISIT_MEMBER_NAME(inactiveObjects,"inactiveObjects");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject0,"__inactiveObject0");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObject1,"__inactiveObject1");
	HX_VISIT_MEMBER_NAME(_hx___inactiveObjectList,"__inactiveObjectList");
	HX_VISIT_MEMBER_NAME(_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(_hx___size,"__size");
	HX_VISIT_MEMBER_NAME(clean,"clean");
	HX_VISIT_MEMBER_NAME(create,"create");
}

hx::Val ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_size() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { return hx::Val( clean ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { return hx::Val( _hx___pool ); }
		if (HX_FIELD_EQ(inName,"__size") ) { return hx::Val( _hx___size ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_size") ) { return hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return hx::Val( set_size_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return hx::Val( activeObjects ); }
		if (HX_FIELD_EQ(inName,"__addInactive") ) { return hx::Val( _hx___addInactive_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getInactive") ) { return hx::Val( _hx___getInactive_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { return hx::Val( inactiveObjects ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__removeInactive") ) { return hx::Val( _hx___removeInactive_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { return hx::Val( _hx___inactiveObject0 ); }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { return hx::Val( _hx___inactiveObject1 ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { return hx::Val( _hx___inactiveObjectList ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_size(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clean") ) { clean=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"create") ) { create=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { activeObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveObjects") ) { inactiveObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inactiveObject0") ) { _hx___inactiveObject0=inValue.Cast<  ::openfl::_internal::renderer::ShaderBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inactiveObject1") ) { _hx___inactiveObject1=inValue.Cast<  ::openfl::_internal::renderer::ShaderBuffer >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__inactiveObjectList") ) { _hx___inactiveObjectList=inValue.Cast<  ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"));
	outFields->push(HX_HCSTRING("inactiveObjects","\xa9","\x0c","\xc7","\xfb"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("__inactiveObject0","\x46","\x3d","\x21","\x7f"));
	outFields->push(HX_HCSTRING("__inactiveObject1","\x47","\x3d","\x21","\x7f"));
	outFields->push(HX_HCSTRING("__inactiveObjectList","\x28","\xdd","\x99","\x7e"));
	outFields->push(HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"));
	outFields->push(HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,activeObjects),HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a")},
	{hx::fsInt,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,inactiveObjects),HX_HCSTRING("inactiveObjects","\xa9","\x0c","\xc7","\xfb")},
	{hx::fsObject /*::openfl::_internal::renderer::ShaderBuffer*/ ,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___inactiveObject0),HX_HCSTRING("__inactiveObject0","\x46","\x3d","\x21","\x7f")},
	{hx::fsObject /*::openfl::_internal::renderer::ShaderBuffer*/ ,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___inactiveObject1),HX_HCSTRING("__inactiveObject1","\x47","\x3d","\x21","\x7f")},
	{hx::fsObject /*::List*/ ,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___inactiveObjectList),HX_HCSTRING("__inactiveObjectList","\x28","\xdd","\x99","\x7e")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___pool),HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,_hx___size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,clean),HX_HCSTRING("clean","\x89","\x71","\x5b","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj,create),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"),
	HX_HCSTRING("inactiveObjects","\xa9","\x0c","\xc7","\xfb"),
	HX_HCSTRING("__inactiveObject0","\x46","\x3d","\x21","\x7f"),
	HX_HCSTRING("__inactiveObject1","\x47","\x3d","\x21","\x7f"),
	HX_HCSTRING("__inactiveObjectList","\x28","\xdd","\x99","\x7e"),
	HX_HCSTRING("__pool","\xfc","\xe3","\x54","\xf9"),
	HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clean","\x89","\x71","\x5b","\x48"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("__addInactive","\x8c","\x8f","\x04","\xe4"),
	HX_HCSTRING("__getInactive","\x01","\x1b","\x9c","\xd8"),
	HX_HCSTRING("__removeInactive","\xef","\xde","\xc5","\x68"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	::String(null()) };

static void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__mClass;

void ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::__register()
{
	hx::Object *dummy = new ObjectPool_openfl__internal_renderer_ShaderBuffer_obj;
	ObjectPool_openfl__internal_renderer_ShaderBuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ObjectPool_openfl__internal_renderer_ShaderBuffer","\x9d","\xd4","\xed","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectPool_openfl__internal_renderer_ShaderBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectPool_openfl__internal_renderer_ShaderBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
