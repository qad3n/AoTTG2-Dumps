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
[Token(Token = "0x20001D3")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
[UnityEngine.Bindings.StaticAccessor("VideoCaptureBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/VideoCaptureBindings.h")]
public class VideoCapture : IDisposable
{
	[Token(Token = "0x20001D4")]
	public enum CaptureResultType
	{
		[Token(Token = "0x400066C")]
		Success,
		[Token(Token = "0x400066D")]
		UnknownError
	}

	[Token(Token = "0x20001D5")]
	public struct VideoCaptureResult
	{
		[Token(Token = "0x400066E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CaptureResultType resultType;

		[Token(Token = "0x400066F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long hResult;
	}

	[Token(Token = "0x20001D6")]
	public delegate void OnVideoCaptureResourceCreatedCallback(VideoCapture captureObject);

	[Token(Token = "0x20001D7")]
	public delegate void OnVideoModeStartedCallback(VideoCaptureResult result);

	[Token(Token = "0x20001D8")]
	public delegate void OnVideoModeStoppedCallback(VideoCaptureResult result);

	[Token(Token = "0x20001D9")]
	public delegate void OnStartedRecordingVideoCallback(VideoCaptureResult result);

	[Token(Token = "0x20001DA")]
	public delegate void OnStoppedRecordingVideoCallback(VideoCaptureResult result);

	[Token(Token = "0x4000669")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_NativePtr;

	[Token(Token = "0x400066A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly long HR_SUCCESS;

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x4E10800", Offset = "0x4E10800", VA = "0x4E10800")]
	private static VideoCaptureResult MakeCaptureResult(long hResult)
	{
		return default(VideoCaptureResult);
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x4E10840", Offset = "0x4E10840", VA = "0x4E10840")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCreatedVideoCaptureResourceDelegate(OnVideoCaptureResourceCreatedCallback callback, IntPtr nativePtr)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4E108D0", Offset = "0x4E108D0", VA = "0x4E108D0")]
	private VideoCapture(IntPtr nativeCaptureObject)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x4E108F0", Offset = "0x4E108F0", VA = "0x4E108F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnVideoModeStartedDelegate(OnVideoModeStartedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x4E10960", Offset = "0x4E10960", VA = "0x4E10960")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnVideoModeStoppedDelegate(OnVideoModeStoppedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x4E109D0", Offset = "0x4E109D0", VA = "0x4E109D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnStartedRecordingVideoToDiskDelegate(OnStartedRecordingVideoCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x4E10A40", Offset = "0x4E10A40", VA = "0x4E10A40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnStoppedRecordingVideoToDiskDelegate(OnStoppedRecordingVideoCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x4E10AB0", Offset = "0x4E10AB0", VA = "0x4E10AB0", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x4E10B40", Offset = "0x4E10B40", VA = "0x4E10B40")]
	[UnityEngine.Bindings.NativeMethod("VideoCaptureBindings::Dispose", HasExplicitThis = true)]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private extern void Dispose_Internal();

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x4E10B70", Offset = "0x4E10B70", VA = "0x4E10B70", Slot = "1")]
	~VideoCapture()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x4E10C20", Offset = "0x4E10C20", VA = "0x4E10C20")]
	[UnityEngine.Bindings.NativeMethod("VideoCaptureBindings::DisposeThreaded", HasExplicitThis = true)]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.ThreadAndSerializationSafe]
	private extern void DisposeThreaded_Internal();
}
