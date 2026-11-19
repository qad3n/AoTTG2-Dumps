// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.WebCam.VideoCapture
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Windows.WebCam;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000215")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
[UnityEngine.Bindings.StaticAccessor("VideoCaptureBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/VideoCaptureBindings.h")]
public class VideoCapture : IDisposable
{
	[Token(Token = "0x2000216")]
	public enum CaptureResultType
	{
		[Token(Token = "0x4000706")]
		Success,
		[Token(Token = "0x4000707")]
		UnknownError
	}

	[Token(Token = "0x2000217")]
	public struct VideoCaptureResult
	{
		[Token(Token = "0x4000708")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CaptureResultType resultType;

		[Token(Token = "0x4000709")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long hResult;
	}

	[Token(Token = "0x2000218")]
	public delegate void OnVideoCaptureResourceCreatedCallback(VideoCapture captureObject);

	[Token(Token = "0x2000219")]
	public delegate void OnVideoModeStartedCallback(VideoCaptureResult result);

	[Token(Token = "0x200021A")]
	public delegate void OnVideoModeStoppedCallback(VideoCaptureResult result);

	[Token(Token = "0x200021B")]
	public delegate void OnStartedRecordingVideoCallback(VideoCaptureResult result);

	[Token(Token = "0x200021C")]
	public delegate void OnStoppedRecordingVideoCallback(VideoCaptureResult result);

	[Token(Token = "0x200021D")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600110B")]
		[Address(RVA = "0x6932ED0", Offset = "0x6931ED0", VA = "0x6932ED0")]
		public static IntPtr ConvertToNative(VideoCapture videoCapture)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000703")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_NativePtr;

	[Token(Token = "0x4000704")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly long HR_SUCCESS;

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x69325A0", Offset = "0x69315A0", VA = "0x69325A0")]
	private static VideoCaptureResult MakeCaptureResult(long hResult)
	{
		return default(VideoCaptureResult);
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x69325E0", Offset = "0x69315E0", VA = "0x69325E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCreatedVideoCaptureResourceDelegate(OnVideoCaptureResourceCreatedCallback callback, IntPtr nativePtr)
	{
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x6932670", Offset = "0x6931670", VA = "0x6932670")]
	private VideoCapture(IntPtr nativeCaptureObject)
	{
	}

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x6932690", Offset = "0x6931690", VA = "0x6932690")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnVideoModeStartedDelegate(OnVideoModeStartedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x6932700", Offset = "0x6931700", VA = "0x6932700")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnVideoModeStoppedDelegate(OnVideoModeStoppedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x6932770", Offset = "0x6931770", VA = "0x6932770")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnStartedRecordingVideoToDiskDelegate(OnStartedRecordingVideoCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x69327E0", Offset = "0x69317E0", VA = "0x69327E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnStoppedRecordingVideoToDiskDelegate(OnStoppedRecordingVideoCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x6932850", Offset = "0x6931850", VA = "0x6932850", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x69328E0", Offset = "0x69318E0", VA = "0x69328E0")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeMethod("VideoCaptureBindings::Dispose", HasExplicitThis = true)]
	private void Dispose_Internal()
	{
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x6932960", Offset = "0x6931960", VA = "0x6932960", Slot = "1")]
	~VideoCapture()
	{
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x6932A20", Offset = "0x6931A20", VA = "0x6932A20")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeMethod("VideoCaptureBindings::DisposeThreaded", HasExplicitThis = true)]
	private void DisposeThreaded_Internal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x6932930", Offset = "0x6931930", VA = "0x6932930")]
	private static extern void Dispose_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001100")]
	[Address(RVA = "0x6932A70", Offset = "0x6931A70", VA = "0x6932A70")]
	private static extern void DisposeThreaded_Internal_Injected(IntPtr _unity_self);
}
