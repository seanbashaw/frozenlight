// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLStage3D
#define INCLUDED_openfl__internal_stage3D_opengl_GLStage3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,opengl,GLStage3D)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLStage3D_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLStage3D_obj OBJ_;
		GLStage3D_obj();

	public:
		enum { _hx_ClassId = 0x69241f38 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.opengl.GLStage3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.stage3D.opengl.GLStage3D"); }

		hx::ObjectPtr< GLStage3D_obj > __new() {
			hx::ObjectPtr< GLStage3D_obj > __this = new GLStage3D_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLStage3D_obj > __alloc(hx::Ctx *_hx_ctx) {
			GLStage3D_obj *__this = (GLStage3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLStage3D_obj), false, "openfl._internal.stage3D.opengl.GLStage3D"));
			*(void **)__this = GLStage3D_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLStage3D_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLStage3D","\x4a","\x6b","\x09","\x77"); }

		static void render( ::openfl::display::Stage3D stage3D, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_stage3D_opengl_GLStage3D */ 
