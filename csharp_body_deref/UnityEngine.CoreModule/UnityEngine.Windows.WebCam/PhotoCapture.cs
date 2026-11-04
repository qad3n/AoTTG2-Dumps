// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.WebCam.PhotoCapture
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
[Token(Token = "0x2000209")]
[UnityEngine.Bindings.StaticAccessor("PhotoCapture", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/PhotoCapture.h")]
public class PhotoCapture : IDisposable
{
	[Token(Token = "0x200020A")]
	public enum CaptureResultType
	{
		[Token(Token = "0x40006F8")]
		Success,
		[Token(Token = "0x40006F9")]
		UnknownError
	}

	[Token(Token = "0x200020B")]
	public struct PhotoCaptureResult
	{
		[Token(Token = "0x40006FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CaptureResultType resultType;

		[Token(Token = "0x40006FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long hResult;
	}

	[Token(Token = "0x200020C")]
	public delegate void OnCaptureResourceCreatedCallback(PhotoCapture captureObject);

	[Token(Token = "0x200020D")]
	public delegate void OnPhotoModeStartedCallback(PhotoCaptureResult result);

	[Token(Token = "0x200020E")]
	public delegate void OnPhotoModeStoppedCallback(PhotoCaptureResult result);

	[Token(Token = "0x200020F")]
	public delegate void OnCapturedToDiskCallback(PhotoCaptureResult result);

	[Token(Token = "0x2000210")]
	public delegate void OnCapturedToMemoryCallback(PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame);

	[Token(Token = "0x2000211")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(PhotoCapture photoCapture)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40006F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_NativePtr;

	[Token(Token = "0x40006F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly long HR_SUCCESS;

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x2F4D1A0", Offset = "0x2F4B7A0", VA = "0x182F4D1A0")]
	private static PhotoCaptureResult MakeCaptureResult(long hResult)
	{
		return default(PhotoCaptureResult);
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x2F4D110", Offset = "0x2F4B710", VA = "0x182F4D110")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCreatedResourceDelegate(OnCaptureResourceCreatedCallback callback, IntPtr nativePtr)
	{
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x2EC4A00", Offset = "0x2EC3000", VA = "0x182EC4A00")]
	private PhotoCapture(IntPtr nativeCaptureObject)
	{
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x2F4CED0", Offset = "0x2F4B4D0", VA = "0x182F4CED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStartedDelegate(OnPhotoModeStartedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x2F4CED0", Offset = "0x2F4B4D0", VA = "0x182F4CED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStoppedDelegate(OnPhotoModeStoppedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x2F4CED0", Offset = "0x2F4B4D0", VA = "0x182F4CED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToDiskDelegate(OnCapturedToDiskCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x2F4CF60", Offset = "0x2F4B560", VA = "0x182F4CF60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToMemoryDelegate(OnCapturedToMemoryCallback callback, long hResult, IntPtr photoCaptureFramePtr)
	{
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x2F4CD90", Offset = "0x2F4B390", VA = "0x182F4CD90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x2F4CD30", Offset = "0x2F4B330", VA = "0x182F4CD30")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private void Dispose_Internal()
	{
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x2F4CE20", Offset = "0x2F4B420", VA = "0x182F4CE20", Slot = "1")]
	~PhotoCapture()
	{
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x2F4CC90", Offset = "0x2F4B290", VA = "0x182F4CC90")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeName("DisposeThreaded")]
	private void DisposeThreaded_Internal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x2F4CCF0", Offset = "0x2F4B2F0", VA = "0x182F4CCF0")]
	private static extern void Dispose_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x2F4CC50", Offset = "0x2F4B250", VA = "0x182F4CC50")]
	private static extern void DisposeThreaded_Internal_Injected(IntPtr _unity_self);
}
