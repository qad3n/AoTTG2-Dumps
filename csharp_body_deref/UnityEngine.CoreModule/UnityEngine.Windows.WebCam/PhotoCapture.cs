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
[Token(Token = "0x20001CA")]
[UnityEngine.Bindings.StaticAccessor("PhotoCapture", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/PhotoCapture.h")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
public class PhotoCapture : IDisposable
{
	[Token(Token = "0x20001CB")]
	public enum CaptureResultType
	{
		[Token(Token = "0x4000661")]
		Success,
		[Token(Token = "0x4000662")]
		UnknownError
	}

	[Token(Token = "0x20001CC")]
	public struct PhotoCaptureResult
	{
		[Token(Token = "0x4000663")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CaptureResultType resultType;

		[Token(Token = "0x4000664")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long hResult;
	}

	[Token(Token = "0x20001CD")]
	public delegate void OnCaptureResourceCreatedCallback(PhotoCapture captureObject);

	[Token(Token = "0x20001CE")]
	public delegate void OnPhotoModeStartedCallback(PhotoCaptureResult result);

	[Token(Token = "0x20001CF")]
	public delegate void OnPhotoModeStoppedCallback(PhotoCaptureResult result);

	[Token(Token = "0x20001D0")]
	public delegate void OnCapturedToDiskCallback(PhotoCaptureResult result);

	[Token(Token = "0x20001D1")]
	public delegate void OnCapturedToMemoryCallback(PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame);

	[Token(Token = "0x400065E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_NativePtr;

	[Token(Token = "0x400065F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly long HR_SUCCESS;

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x4E0FC60", Offset = "0x4E0FC60", VA = "0x4E0FC60")]
	private static PhotoCaptureResult MakeCaptureResult(long hResult)
	{
		return default(PhotoCaptureResult);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x4E0FCA0", Offset = "0x4E0FCA0", VA = "0x4E0FCA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCreatedResourceDelegate(OnCaptureResourceCreatedCallback callback, IntPtr nativePtr)
	{
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x4E0FD30", Offset = "0x4E0FD30", VA = "0x4E0FD30")]
	private PhotoCapture(IntPtr nativeCaptureObject)
	{
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x4E0FD50", Offset = "0x4E0FD50", VA = "0x4E0FD50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStartedDelegate(OnPhotoModeStartedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x4E0FDC0", Offset = "0x4E0FDC0", VA = "0x4E0FDC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStoppedDelegate(OnPhotoModeStoppedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x4E0FE30", Offset = "0x4E0FE30", VA = "0x4E0FE30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToDiskDelegate(OnCapturedToDiskCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4E0FEA0", Offset = "0x4E0FEA0", VA = "0x4E0FEA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToMemoryDelegate(OnCapturedToMemoryCallback callback, long hResult, IntPtr photoCaptureFramePtr)
	{
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x4E0FF70", Offset = "0x4E0FF70", VA = "0x4E0FF70", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4E10000", Offset = "0x4E10000", VA = "0x4E10000")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private extern void Dispose_Internal();

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x4E10030", Offset = "0x4E10030", VA = "0x4E10030", Slot = "1")]
	~PhotoCapture()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x4E100E0", Offset = "0x4E100E0", VA = "0x4E100E0")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeName("DisposeThreaded")]
	[UnityEngine.ThreadAndSerializationSafe]
	private extern void DisposeThreaded_Internal();
}
