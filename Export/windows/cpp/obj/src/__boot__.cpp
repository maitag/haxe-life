#include <hxcpp.h>

#include <sys/FileSystem.h>
#include <lime/utils/UInt8Array.h>
#include <lime/utils/Int32Array.h>
#include <lime/utils/GLUtils.h>
#include <lime/utils/Float32Array.h>
#include <lime/utils/CompressionAlgorithm.h>
#include <lime/utils/ByteArray.h>
#include <lime/utils/IDataInput.h>
#include <lime/utils/ArrayBufferView.h>
#include <lime/utils/IMemoryRange.h>
#include <lime/ui/_Window/WindowEventType_Impl_.h>
#include <lime/ui/_Window/WindowFlags_Impl_.h>
#include <lime/ui/Window.h>
#include <lime/ui/_Window/WindowEventInfo.h>
#include <lime/ui/_TouchEventManager/TouchEventType_Impl_.h>
#include <lime/ui/_TouchEventManager/TouchEventInfo.h>
#include <lime/ui/TouchEventManager.h>
#include <lime/ui/_MouseEventManager/MouseEventType_Impl_.h>
#include <lime/ui/_MouseEventManager/MouseEventInfo.h>
#include <lime/ui/MouseEventManager.h>
#include <lime/ui/_KeyEventManager/KeyEventType_Impl_.h>
#include <lime/ui/_KeyEventManager/KeyEventInfo.h>
#include <lime/ui/KeyEventManager.h>
#include <lime/ui/_KeyCode/KeyCode_Impl_.h>
#include <lime/math/Vector4.h>
#include <lime/math/Vector2.h>
#include <lime/math/Rectangle.h>
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#include <lime/math/Matrix3.h>
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#include <lime/graphics/utils/ImageDataUtil.h>
#include <lime/graphics/utils/ImageCanvasUtil.h>
#include <lime/graphics/opengl/GLTexture.h>
#include <lime/graphics/opengl/GLShader.h>
#include <lime/graphics/opengl/GLRenderbuffer.h>
#include <lime/graphics/opengl/GLProgram.h>
#include <lime/graphics/opengl/GLFramebuffer.h>
#include <lime/graphics/opengl/GLBuffer.h>
#include <lime/graphics/opengl/GLObject.h>
#include <lime/graphics/opengl/GL.h>
#include <lime/graphics/_Renderer/RenderEventType_Impl_.h>
#include <lime/graphics/Renderer.h>
#include <lime/graphics/_Renderer/RenderEventInfo.h>
#include <lime/graphics/RenderContext.h>
#include <lime/graphics/ImageType.h>
#include <lime/graphics/ImageBuffer.h>
#include <lime/graphics/ImageChannel.h>
#include <lime/graphics/Image.h>
#include <lime/graphics/GLRenderContext.h>
#include <lime/graphics/GlyphRect.h>
#include <lime/graphics/Font.h>
#include <lime/graphics/FlashRenderContext.h>
#include <lime/graphics/DOMRenderContext.h>
#include <lime/graphics/CanvasRenderContext.h>
#include <lime/audio/openal/_ALDevice/ALDevice_Impl_.h>
#include <lime/audio/openal/_ALContext/ALContext_Impl_.h>
#include <lime/audio/openal/ALC.h>
#include <lime/audio/openal/AL.h>
#include <lime/audio/WebAudioContext.h>
#include <lime/audio/HTML5AudioContext.h>
#include <lime/audio/FlashAudioContext.h>
#include <lime/audio/AudioManager.h>
#include <lime/audio/AudioContext.h>
#include <lime/audio/AudioBuffer.h>
#include <lime/audio/ALCAudioContext.h>
#include <lime/audio/ALAudioContext.h>
#include <lime/app/Preloader.h>
#include <lime/app/_Application/UpdateEventType_Impl_.h>
#include <lime/_Assets/AssetType_Impl_.h>
#include <lime/Assets.h>
#include <lime/AssetCache.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/crypto/BaseCode.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Log.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <OpenglRender.h>
#include <IMap.h>
#include <Main.h>
#include <lime/app/Application.h>
#include <lime/app/Event.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <Reflect.h>
#include <lime/system/System.h>
#include <lime/app/_Application/UpdateEventInfo.h>
#include <lime/app/Module.h>
#include <List.h>
#include <cpp/Lib.h>
#include <DefaultAssetLibrary.h>
#include <lime/AssetLibrary.h>
#include <Date.h>
#include <CellAutomata.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::FileSystem_obj::__register();
::lime::utils::UInt8Array_obj::__register();
::lime::utils::Int32Array_obj::__register();
::lime::utils::GLUtils_obj::__register();
::lime::utils::Float32Array_obj::__register();
::lime::utils::CompressionAlgorithm_obj::__register();
::lime::utils::ByteArray_obj::__register();
::lime::utils::IDataInput_obj::__register();
::lime::utils::ArrayBufferView_obj::__register();
::lime::utils::IMemoryRange_obj::__register();
::lime::ui::_Window::WindowEventType_Impl__obj::__register();
::lime::ui::_Window::WindowFlags_Impl__obj::__register();
::lime::ui::Window_obj::__register();
::lime::ui::_Window::WindowEventInfo_obj::__register();
::lime::ui::_TouchEventManager::TouchEventType_Impl__obj::__register();
::lime::ui::_TouchEventManager::TouchEventInfo_obj::__register();
::lime::ui::TouchEventManager_obj::__register();
::lime::ui::_MouseEventManager::MouseEventType_Impl__obj::__register();
::lime::ui::_MouseEventManager::MouseEventInfo_obj::__register();
::lime::ui::MouseEventManager_obj::__register();
::lime::ui::_KeyEventManager::KeyEventType_Impl__obj::__register();
::lime::ui::_KeyEventManager::KeyEventInfo_obj::__register();
::lime::ui::KeyEventManager_obj::__register();
::lime::ui::_KeyCode::KeyCode_Impl__obj::__register();
::lime::math::Vector4_obj::__register();
::lime::math::Vector2_obj::__register();
::lime::math::Rectangle_obj::__register();
::lime::math::_Matrix4::Matrix4_Impl__obj::__register();
::lime::math::Matrix3_obj::__register();
::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__register();
::lime::graphics::utils::ImageDataUtil_obj::__register();
::lime::graphics::utils::ImageCanvasUtil_obj::__register();
::lime::graphics::opengl::GLTexture_obj::__register();
::lime::graphics::opengl::GLShader_obj::__register();
::lime::graphics::opengl::GLRenderbuffer_obj::__register();
::lime::graphics::opengl::GLProgram_obj::__register();
::lime::graphics::opengl::GLFramebuffer_obj::__register();
::lime::graphics::opengl::GLBuffer_obj::__register();
::lime::graphics::opengl::GLObject_obj::__register();
::lime::graphics::opengl::GL_obj::__register();
::lime::graphics::_Renderer::RenderEventType_Impl__obj::__register();
::lime::graphics::Renderer_obj::__register();
::lime::graphics::_Renderer::RenderEventInfo_obj::__register();
::lime::graphics::RenderContext_obj::__register();
::lime::graphics::ImageType_obj::__register();
::lime::graphics::ImageBuffer_obj::__register();
::lime::graphics::ImageChannel_obj::__register();
::lime::graphics::Image_obj::__register();
::lime::graphics::GLRenderContext_obj::__register();
::lime::graphics::GlyphRect_obj::__register();
::lime::graphics::Font_obj::__register();
::lime::graphics::FlashRenderContext_obj::__register();
::lime::graphics::DOMRenderContext_obj::__register();
::lime::graphics::CanvasRenderContext_obj::__register();
::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::__register();
::lime::audio::openal::_ALContext::ALContext_Impl__obj::__register();
::lime::audio::openal::ALC_obj::__register();
::lime::audio::openal::AL_obj::__register();
::lime::audio::WebAudioContext_obj::__register();
::lime::audio::HTML5AudioContext_obj::__register();
::lime::audio::FlashAudioContext_obj::__register();
::lime::audio::AudioManager_obj::__register();
::lime::audio::AudioContext_obj::__register();
::lime::audio::AudioBuffer_obj::__register();
::lime::audio::ALCAudioContext_obj::__register();
::lime::audio::ALAudioContext_obj::__register();
::lime::app::Preloader_obj::__register();
::lime::app::_Application::UpdateEventType_Impl__obj::__register();
::lime::_Assets::AssetType_Impl__obj::__register();
::lime::Assets_obj::__register();
::lime::AssetCache_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::crypto::BaseCode_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Log_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::OpenglRender_obj::__register();
::IMap_obj::__register();
::Main_obj::__register();
::lime::app::Application_obj::__register();
::lime::app::Event_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::Reflect_obj::__register();
::lime::system::System_obj::__register();
::lime::app::_Application::UpdateEventInfo_obj::__register();
::lime::app::Module_obj::__register();
::List_obj::__register();
::cpp::Lib_obj::__register();
::DefaultAssetLibrary_obj::__register();
::lime::AssetLibrary_obj::__register();
::Date_obj::__register();
::CellAutomata_obj::__register();
::ApplicationMain_obj::__register();
::lime::graphics::utils::ImageDataUtil_obj::__init__();
::lime::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::CellAutomata_obj::__boot();
::Date_obj::__boot();
::lime::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::List_obj::__boot();
::lime::app::Module_obj::__boot();
::lime::app::_Application::UpdateEventInfo_obj::__boot();
::lime::system::System_obj::__boot();
::Reflect_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::lime::app::Event_obj::__boot();
::lime::app::Application_obj::__boot();
::Main_obj::__boot();
::IMap_obj::__boot();
::OpenglRender_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::crypto::BaseCode_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::lime::AssetCache_obj::__boot();
::lime::Assets_obj::__boot();
::lime::_Assets::AssetType_Impl__obj::__boot();
::lime::app::_Application::UpdateEventType_Impl__obj::__boot();
::lime::app::Preloader_obj::__boot();
::lime::audio::ALAudioContext_obj::__boot();
::lime::audio::ALCAudioContext_obj::__boot();
::lime::audio::AudioBuffer_obj::__boot();
::lime::audio::AudioContext_obj::__boot();
::lime::audio::AudioManager_obj::__boot();
::lime::audio::FlashAudioContext_obj::__boot();
::lime::audio::HTML5AudioContext_obj::__boot();
::lime::audio::WebAudioContext_obj::__boot();
::lime::audio::openal::AL_obj::__boot();
::lime::audio::openal::ALC_obj::__boot();
::lime::audio::openal::_ALContext::ALContext_Impl__obj::__boot();
::lime::audio::openal::_ALDevice::ALDevice_Impl__obj::__boot();
::lime::graphics::CanvasRenderContext_obj::__boot();
::lime::graphics::DOMRenderContext_obj::__boot();
::lime::graphics::FlashRenderContext_obj::__boot();
::lime::graphics::Font_obj::__boot();
::lime::graphics::GlyphRect_obj::__boot();
::lime::graphics::GLRenderContext_obj::__boot();
::lime::graphics::Image_obj::__boot();
::lime::graphics::ImageChannel_obj::__boot();
::lime::graphics::ImageBuffer_obj::__boot();
::lime::graphics::ImageType_obj::__boot();
::lime::graphics::RenderContext_obj::__boot();
::lime::graphics::_Renderer::RenderEventInfo_obj::__boot();
::lime::graphics::Renderer_obj::__boot();
::lime::graphics::_Renderer::RenderEventType_Impl__obj::__boot();
::lime::graphics::opengl::GL_obj::__boot();
::lime::graphics::opengl::GLObject_obj::__boot();
::lime::graphics::opengl::GLBuffer_obj::__boot();
::lime::graphics::opengl::GLFramebuffer_obj::__boot();
::lime::graphics::opengl::GLProgram_obj::__boot();
::lime::graphics::opengl::GLRenderbuffer_obj::__boot();
::lime::graphics::opengl::GLShader_obj::__boot();
::lime::graphics::opengl::GLTexture_obj::__boot();
::lime::graphics::utils::ImageCanvasUtil_obj::__boot();
::lime::graphics::utils::ImageDataUtil_obj::__boot();
::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__boot();
::lime::math::Matrix3_obj::__boot();
::lime::math::_Matrix4::Matrix4_Impl__obj::__boot();
::lime::math::Rectangle_obj::__boot();
::lime::math::Vector2_obj::__boot();
::lime::math::Vector4_obj::__boot();
::lime::ui::_KeyCode::KeyCode_Impl__obj::__boot();
::lime::ui::KeyEventManager_obj::__boot();
::lime::ui::_KeyEventManager::KeyEventInfo_obj::__boot();
::lime::ui::_KeyEventManager::KeyEventType_Impl__obj::__boot();
::lime::ui::MouseEventManager_obj::__boot();
::lime::ui::_MouseEventManager::MouseEventInfo_obj::__boot();
::lime::ui::_MouseEventManager::MouseEventType_Impl__obj::__boot();
::lime::ui::TouchEventManager_obj::__boot();
::lime::ui::_TouchEventManager::TouchEventInfo_obj::__boot();
::lime::ui::_TouchEventManager::TouchEventType_Impl__obj::__boot();
::lime::ui::_Window::WindowEventInfo_obj::__boot();
::lime::ui::Window_obj::__boot();
::lime::ui::_Window::WindowFlags_Impl__obj::__boot();
::lime::ui::_Window::WindowEventType_Impl__obj::__boot();
::lime::utils::IMemoryRange_obj::__boot();
::lime::utils::ArrayBufferView_obj::__boot();
::lime::utils::IDataInput_obj::__boot();
::lime::utils::ByteArray_obj::__boot();
::lime::utils::CompressionAlgorithm_obj::__boot();
::lime::utils::Float32Array_obj::__boot();
::lime::utils::GLUtils_obj::__boot();
::lime::utils::Int32Array_obj::__boot();
::lime::utils::UInt8Array_obj::__boot();
::sys::FileSystem_obj::__boot();
}

