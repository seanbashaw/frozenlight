// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display_MovieClip
#define INCLUDED_openfl_display_MovieClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLite)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SWFSymbol)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SpriteSymbol)
HX_DECLARE_CLASS3(openfl,_internal,timeline,FrameObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,FrameLabel)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS3(openfl,display,_MovieClip,FrameSymbolInstance)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES MovieClip_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef MovieClip_obj OBJ_;
		MovieClip_obj();

	public:
		enum { _hx_ClassId = 0x21e31f0e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.MovieClip")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.MovieClip"); }
		static hx::ObjectPtr< MovieClip_obj > __new();
		static hx::ObjectPtr< MovieClip_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MovieClip_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MovieClip","\x80","\xe2","\xed","\xb9"); }

		static void __boot();
		static  ::openfl::_internal::swf::SWFLite _hx___initSWF;
		static  ::openfl::_internal::symbols::SpriteSymbol _hx___initSymbol;
		static bool _hx___useParentFPS;
		bool enabled;
		::Array< ::Dynamic> _hx___activeInstances;
		 ::haxe::ds::IntMap _hx___activeInstancesByFrameObjectID;
		int _hx___currentFrame;
		::String _hx___currentFrameLabel;
		::String _hx___currentLabel;
		::Array< ::Dynamic> _hx___currentLabels;
		 ::haxe::ds::IntMap _hx___frameScripts;
		int _hx___frameTime;
		bool _hx___hasDown;
		bool _hx___hasOver;
		bool _hx___hasUp;
		int _hx___lastFrameScriptEval;
		int _hx___lastFrameUpdate;
		bool _hx___mouseIsDown;
		bool _hx___playing;
		 ::openfl::_internal::swf::SWFLite _hx___swf;
		 ::openfl::_internal::symbols::SpriteSymbol _hx___symbol;
		int _hx___timeElapsed;
		int _hx___totalFrames;
		void addFrameScript(int index, ::Dynamic method);
		::Dynamic addFrameScript_dyn();

		void gotoAndPlay( ::Dynamic frame,::String scene);
		::Dynamic gotoAndPlay_dyn();

		void gotoAndStop( ::Dynamic frame,::String scene);
		::Dynamic gotoAndStop_dyn();

		void nextFrame();
		::Dynamic nextFrame_dyn();

		void play();
		::Dynamic play_dyn();

		void prevFrame();
		::Dynamic prevFrame_dyn();

		void stop();
		::Dynamic stop_dyn();

		void _hx___enterFrame(int deltaTime);

		bool _hx___evaluateFrameScripts(int advanceToFrame);
		::Dynamic _hx___evaluateFrameScripts_dyn();

		void _hx___fromSymbol( ::openfl::_internal::swf::SWFLite swf, ::openfl::_internal::symbols::SpriteSymbol symbol);
		::Dynamic _hx___fromSymbol_dyn();

		int _hx___getNextFrame(int deltaTime);
		::Dynamic _hx___getNextFrame_dyn();

		void _hx___goto(int frame);
		::Dynamic _hx___goto_dyn();

		int _hx___resolveFrameReference( ::Dynamic frame);
		::Dynamic _hx___resolveFrameReference_dyn();

		int _hx___sortDepths( ::openfl::display::_MovieClip::FrameSymbolInstance a, ::openfl::display::_MovieClip::FrameSymbolInstance b);
		::Dynamic _hx___sortDepths_dyn();

		void _hx___stopAllMovieClips();

		void _hx___updateDisplayObject( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::timeline::FrameObject frameObject,hx::Null< bool >  reset);
		::Dynamic _hx___updateDisplayObject_dyn();

		void _hx___updateFrameLabel();
		::Dynamic _hx___updateFrameLabel_dyn();

		void _hx___onMouseDown( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onMouseDown_dyn();

		void _hx___onMouseUp( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onMouseUp_dyn();

		void _hx___onRollOut( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onRollOut_dyn();

		void _hx___onRollOver( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onRollOver_dyn();

		bool set_buttonMode(bool value);

		int get_currentFrame();
		::Dynamic get_currentFrame_dyn();

		::String get_currentFrameLabel();
		::Dynamic get_currentFrameLabel_dyn();

		::String get_currentLabel();
		::Dynamic get_currentLabel_dyn();

		::Array< ::Dynamic> get_currentLabels();
		::Dynamic get_currentLabels_dyn();

		int get_framesLoaded();
		::Dynamic get_framesLoaded_dyn();

		bool get_isPlaying();
		::Dynamic get_isPlaying_dyn();

		int get_totalFrames();
		::Dynamic get_totalFrames_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_MovieClip */ 
