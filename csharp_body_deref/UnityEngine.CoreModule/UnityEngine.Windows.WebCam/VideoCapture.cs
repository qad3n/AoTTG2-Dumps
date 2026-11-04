// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.WebCam.VideoCapture
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000214")]
[UnityEngine.Bindings.StaticAccessor("VideoCaptureBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/VideoCaptureBindings.h")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
public class VideoCapture : IDisposable
{
	[Token(Token = "0x2000215")]
	public enum CaptureResultType
	{
		[Token(Token = "0x4000703")]
		Success,
		[Token(Token = "0x4000704")]
		UnknownError
	}

	[Token(Token = "0x2000216")]
	public struct VideoCaptureResult
	{
		[Token(Token = "0x4000705")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CaptureResultType resultType;

		[Token(Token = "0x4000706")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long hResult;
	}

	[Token(Token = "0x2000217")]
	public delegate void OnVideoCaptureResourceCreatedCallback(VideoCapture captureObject);

	[Token(Token = "0x2000218")]
	public delegate void OnVideoModeStartedCallback(VideoCaptureResult result);

	[Token(Token = "0x2000219")]
	public delegate void OnVideoModeStoppedCallback(VideoCaptureResult result);

	[Token(Token = "0x200021A")]
	public delegate void OnStartedRecordingVideoCallback(VideoCaptureResult result);

	[Token(Token = "0x200021B")]
	public delegate void OnStoppedRecordingVideoCallback(VideoCaptureResult result);

	[Token(Token = "0x200021C")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(VideoCapture videoCapture)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000700")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_NativePtr;

	[Token(Token = "0x4000701")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly long HR_SUCCESS;

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x2F5F330", Offset = "0x2F5D930", VA = "0x182F5F330")]
	private static VideoCaptureResult MakeCaptureResult(long hResult)
	{
		return default(VideoCaptureResult);
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x2F5F210", Offset = "0x2F5D810", VA = "0x182F5F210")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCreatedVideoCaptureResourceDelegate(OnVideoCaptureResourceCreatedCallback callback, IntPtr nativePtr)
	{
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x2EC4A00", Offset = "0x2EC3000", VA = "0x182EC4A00")]
	private VideoCapture(IntPtr nativeCaptureObject)
	{
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x2F5F2A0", Offset = "0x2F5D8A0", VA = "0x182F5F2A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnVideoModeStartedDelegate(OnVideoModeStartedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x2F5F2A0", Offset = "0x2F5D8A0", VA = "0x182F5F2A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnVideoModeStoppedDelegate(OnVideoModeStoppedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x2F5F2A0", Offset = "0x2F5D8A0", VA = "0x182F5F2A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnStartedRecordingVideoToDiskDelegate(OnStartedRecordingVideoCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x2F5F2A0", Offset = "0x2F5D8A0", VA = "0x182F5F2A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnStoppedRecordingVideoToDiskDelegate(OnStoppedRecordingVideoCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010E7")]
	[Address(RVA = "0x2F5F0D0", Offset = "0x2F5D6D0", VA = "0x182F5F0D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x2F5F070", Offset = "0x2F5D670", VA = "0x182F5F070")]
	[UnityEngine.Bindings.NativeMethod("VideoCaptureBindings::Dispose", HasExplicitThis = true)]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private void Dispose_Internal()
	{
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x2F5F160", Offset = "0x2F5D760", VA = "0x182F5F160", Slot = "1")]
	~VideoCapture()
	{
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x2F5EFD0", Offset = "0x2F5D5D0", VA = "0x182F5EFD0")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeMethod("VideoCaptureBindings::DisposeThreaded", HasExplicitThis = true)]
	[UnityEngine.ThreadAndSerializationSafe]
	private void DisposeThreaded_Internal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x2F5F030", Offset = "0x2F5D630", VA = "0x182F5F030")]
	private static extern void Dispose_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x2F5EF90", Offset = "0x2F5D590", VA = "0x182F5EF90")]
	private static extern void DisposeThreaded_Internal_Injected(IntPtr _unity_self);
}
