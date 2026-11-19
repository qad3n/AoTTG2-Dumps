// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.WebCam.PhotoCapture
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
[Token(Token = "0x200020A")]
[UnityEngine.Bindings.StaticAccessor("PhotoCapture", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/PhotoCapture.h")]
public class PhotoCapture : IDisposable
{
	[Token(Token = "0x200020B")]
	public enum CaptureResultType
	{
		[Token(Token = "0x40006FD")]
		Success,
		[Token(Token = "0x40006FE")]
		UnknownError
	}

	[Token(Token = "0x200020C")]
	public struct PhotoCaptureResult
	{
		[Token(Token = "0x40006FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CaptureResultType resultType;

		[Token(Token = "0x4000700")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long hResult;
	}

	[Token(Token = "0x200020D")]
	public delegate void OnCaptureResourceCreatedCallback(PhotoCapture captureObject);

	[Token(Token = "0x200020E")]
	public delegate void OnPhotoModeStartedCallback(PhotoCaptureResult result);

	[Token(Token = "0x200020F")]
	public delegate void OnPhotoModeStoppedCallback(PhotoCaptureResult result);

	[Token(Token = "0x2000210")]
	public delegate void OnCapturedToDiskCallback(PhotoCaptureResult result);

	[Token(Token = "0x2000211")]
	public delegate void OnCapturedToMemoryCallback(PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame);

	[Token(Token = "0x2000212")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60010EB")]
		[Address(RVA = "0x6932340", Offset = "0x6931340", VA = "0x6932340")]
		public static IntPtr ConvertToNative(PhotoCapture photoCapture)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40006FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_NativePtr;

	[Token(Token = "0x40006FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly long HR_SUCCESS;

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x69319B0", Offset = "0x69309B0", VA = "0x69319B0")]
	private static PhotoCaptureResult MakeCaptureResult(long hResult)
	{
		return default(PhotoCaptureResult);
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x69319F0", Offset = "0x69309F0", VA = "0x69319F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCreatedResourceDelegate(OnCaptureResourceCreatedCallback callback, IntPtr nativePtr)
	{
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x6931A80", Offset = "0x6930A80", VA = "0x6931A80")]
	private PhotoCapture(IntPtr nativeCaptureObject)
	{
	}

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x6931AA0", Offset = "0x6930AA0", VA = "0x6931AA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStartedDelegate(OnPhotoModeStartedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x6931B10", Offset = "0x6930B10", VA = "0x6931B10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStoppedDelegate(OnPhotoModeStoppedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x6931B80", Offset = "0x6930B80", VA = "0x6931B80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToDiskDelegate(OnCapturedToDiskCallback callback, long hResult)
	{
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x6931BF0", Offset = "0x6930BF0", VA = "0x6931BF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToMemoryDelegate(OnCapturedToMemoryCallback callback, long hResult, IntPtr photoCaptureFramePtr)
	{
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x6931CC0", Offset = "0x6930CC0", VA = "0x6931CC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x6931D50", Offset = "0x6930D50", VA = "0x6931D50")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private void Dispose_Internal()
	{
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x6931DD0", Offset = "0x6930DD0", VA = "0x6931DD0", Slot = "1")]
	~PhotoCapture()
	{
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x6931E90", Offset = "0x6930E90", VA = "0x6931E90")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.NativeName("DisposeThreaded")]
	private void DisposeThreaded_Internal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x6931DA0", Offset = "0x6930DA0", VA = "0x6931DA0")]
	private static extern void Dispose_Internal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x6931EE0", Offset = "0x6930EE0", VA = "0x6931EE0")]
	private static extern void DisposeThreaded_Internal_Injected(IntPtr _unity_self);
}
