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

[Token(Token = "0x2000213")]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/PhotoCaptureFrame.h")]
[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
public sealed class PhotoCaptureFrame : IDisposable
{
	[Token(Token = "0x2000214")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60010F3")]
		[Address(RVA = "0x6932580", Offset = "0x6931580", VA = "0x6932580")]
		public static IntPtr ConvertToNative(PhotoCaptureFrame photoCaptureFrame)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000701")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_NativePtr;

	[Token(Token = "0x170002C9")]
	public int dataLength
	{
		[Token(Token = "0x60010EC")]
		[Address(RVA = "0x6932360", Offset = "0x6931360", VA = "0x6932360")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x6931CB0", Offset = "0x6930CB0", VA = "0x6931CB0")]
	internal PhotoCaptureFrame(IntPtr nativePtr)
	{
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x6932370", Offset = "0x6931370", VA = "0x6932370")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x6932410", Offset = "0x6931410", VA = "0x6932410")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	private void Dispose_Internal()
	{
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x6932490", Offset = "0x6931490", VA = "0x6932490", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x69324F0", Offset = "0x69314F0", VA = "0x69324F0", Slot = "1")]
	~PhotoCaptureFrame()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x6932460", Offset = "0x6931460", VA = "0x6932460")]
	private static extern void Dispose_Internal_Injected(IntPtr _unity_self);
}
