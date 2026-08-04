// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Windows.WebCam.PhotoCaptureFrame
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Windows.WebCam;

[Token(Token = "0x20001D2")]
[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
[MovedFrom("UnityEngine.XR.WSA.WebCam")]
[UnityEngine.Bindings.NativeHeader("PlatformDependent/Win/Webcam/PhotoCaptureFrame.h")]
public sealed class PhotoCaptureFrame : IDisposable
{
	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_NativePtr;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0x1C")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003ChasLocationData_003Ek__BackingField;

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private CapturePixelFormat _003CpixelFormat_003Ek__BackingField;

	[Token(Token = "0x17000243")]
	public int dataLength
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x4E10540", Offset = "0x4E10540", VA = "0x4E10540")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x4E0FF60", Offset = "0x4E0FF60", VA = "0x4E0FF60")]
	internal PhotoCaptureFrame(IntPtr nativePtr)
	{
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4E10550", Offset = "0x4E10550", VA = "0x4E10550")]
	private void Cleanup()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x4E105E0", Offset = "0x4E105E0", VA = "0x4E105E0")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private extern void Dispose_Internal();

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x4E10610", Offset = "0x4E10610", VA = "0x4E10610", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x4E10710", Offset = "0x4E10710", VA = "0x4E10710", Slot = "1")]
	~PhotoCaptureFrame()
	{
	}
}
