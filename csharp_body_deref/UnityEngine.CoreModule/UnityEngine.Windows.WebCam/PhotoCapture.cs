using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Windows.WebCam;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20001C7")]
[UnityEngine.Bindings.StaticAccessor("PhotoCapture", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/PhotoCapture.h")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
public class PhotoCapture : IDisposable
{
	[Token(Token = "0x20001C8")]
	public enum CaptureResultType
	{
		[Token(Token = "0x4000661")]
		Success,
		[Token(Token = "0x4000662")]
		UnknownError
	}

	[Token(Token = "0x20001C9")]
	public struct PhotoCaptureResult
	{
		[Token(Token = "0x4000663")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CaptureResultType resultType;

		[Token(Token = "0x4000664")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public long hResult;
	}

	[Token(Token = "0x20001CA")]
	public delegate void OnCaptureResourceCreatedCallback(PhotoCapture captureObject);

	[Token(Token = "0x20001CB")]
	public delegate void OnPhotoModeStartedCallback(PhotoCaptureResult result);

	[Token(Token = "0x20001CC")]
	public delegate void OnPhotoModeStoppedCallback(PhotoCaptureResult result);

	[Token(Token = "0x20001CD")]
	public delegate void OnCapturedToDiskCallback(PhotoCaptureResult result);

	[Token(Token = "0x20001CE")]
	public delegate void OnCapturedToMemoryCallback(PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame);

	[Token(Token = "0x400065E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_NativePtr;

	[Token(Token = "0x400065F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly long HR_SUCCESS;

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x4AE8330", Offset = "0x4AE8330", VA = "0x4AE8330")]
	private static PhotoCaptureResult MakeCaptureResult(long hResult)
	{
		return default(PhotoCaptureResult);
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x4AE8370", Offset = "0x4AE8370", VA = "0x4AE8370")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCreatedResourceDelegate(OnCaptureResourceCreatedCallback callback, IntPtr nativePtr)
	{
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x4AE8400", Offset = "0x4AE8400", VA = "0x4AE8400")]
	private PhotoCapture(IntPtr nativeCaptureObject)
	{
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x4AE8420", Offset = "0x4AE8420", VA = "0x4AE8420")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStartedDelegate(OnPhotoModeStartedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x4AE8490", Offset = "0x4AE8490", VA = "0x4AE8490")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnPhotoModeStoppedDelegate(OnPhotoModeStoppedCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x4AE8500", Offset = "0x4AE8500", VA = "0x4AE8500")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToDiskDelegate(OnCapturedToDiskCallback callback, long hResult)
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x4AE8570", Offset = "0x4AE8570", VA = "0x4AE8570")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnCapturedPhotoToMemoryDelegate(OnCapturedToMemoryCallback callback, long hResult, IntPtr photoCaptureFramePtr)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x4AE8640", Offset = "0x4AE8640", VA = "0x4AE8640", Slot = "4")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4AE86D0", Offset = "0x4AE86D0", VA = "0x4AE86D0")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private extern void Dispose_Internal();

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x4AE8700", Offset = "0x4AE8700", VA = "0x4AE8700", Slot = "1")]
	~PhotoCapture()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4AE87B0", Offset = "0x4AE87B0", VA = "0x4AE87B0")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeName("DisposeThreaded")]
	[UnityEngine.ThreadAndSerializationSafe]
	private extern void DisposeThreaded_Internal();
}
