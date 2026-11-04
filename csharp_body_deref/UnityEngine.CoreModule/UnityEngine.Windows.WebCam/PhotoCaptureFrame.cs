// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.WebCam.PhotoCaptureFrame
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Windows.WebCam;

[Token(Token = "0x2000212")]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/PhotoCaptureFrame.h")]
[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
public sealed class PhotoCaptureFrame : IDisposable
{
	[Token(Token = "0x2000213")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(PhotoCaptureFrame photoCaptureFrame)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40006FC")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_NativePtr;

	[Token(Token = "0x170002C2")]
	public int dataLength
	{
		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002C3")]
	private bool hasLocationData
	{
		[Token(Token = "0x60010D1")]
		[Address(RVA = "0x12B3EA0", Offset = "0x12B24A0", VA = "0x1812B3EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C4")]
	private CapturePixelFormat pixelFormat
	{
		[Token(Token = "0x60010D2")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x2F4CA40", Offset = "0x2F4B040", VA = "0x182F4CA40")]
	[UnityEngine.ThreadAndSerializationSafe]
	private int GetDataLength()
	{
		return default(int);
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x2F4CAE0", Offset = "0x2F4B0E0", VA = "0x182F4CAE0")]
	[UnityEngine.ThreadAndSerializationSafe]
	private bool GetHasLocationData()
	{
		return default(bool);
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x2F4C9A0", Offset = "0x2F4AFA0", VA = "0x182F4C9A0")]
	[UnityEngine.ThreadAndSerializationSafe]
	private CapturePixelFormat GetCapturePixelFormat()
	{
		return default(CapturePixelFormat);
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x2F4CB40", Offset = "0x2F4B140", VA = "0x182F4CB40")]
	internal PhotoCaptureFrame(IntPtr nativePtr)
	{
	}

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x2F4C760", Offset = "0x2F4AD60", VA = "0x182F4C760")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x2F4C840", Offset = "0x2F4AE40", VA = "0x182F4C840")]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	[UnityEngine.ThreadAndSerializationSafe]
	private void Dispose_Internal()
	{
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x2F4C8A0", Offset = "0x2F4AEA0", VA = "0x182F4C8A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x2F4C900", Offset = "0x2F4AF00", VA = "0x182F4C900", Slot = "1")]
	~PhotoCaptureFrame()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x2F4CA00", Offset = "0x2F4B000", VA = "0x182F4CA00")]
	private static extern int GetDataLength_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x2F4CAA0", Offset = "0x2F4B0A0", VA = "0x182F4CAA0")]
	private static extern bool GetHasLocationData_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x2F4C960", Offset = "0x2F4AF60", VA = "0x182F4C960")]
	private static extern CapturePixelFormat GetCapturePixelFormat_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x2F4C800", Offset = "0x2F4AE00", VA = "0x182F4C800")]
	private static extern void Dispose_Internal_Injected(IntPtr _unity_self);
}
