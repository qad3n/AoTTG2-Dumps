using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Windows.WebCam;

[Token(Token = "0x20001CF")]
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

	[Token(Token = "0x17000242")]
	public int dataLength
	{
		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x4AE8C10", Offset = "0x4AE8C10", VA = "0x4AE8C10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x4AE8630", Offset = "0x4AE8630", VA = "0x4AE8630")]
	internal PhotoCaptureFrame(IntPtr nativePtr)
	{
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x4AE8C20", Offset = "0x4AE8C20", VA = "0x4AE8C20")]
	private void Cleanup()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x4AE8CB0", Offset = "0x4AE8CB0", VA = "0x4AE8CB0")]
	[UnityEngine.Bindings.NativeName("Dispose")]
	[UnityEngine.ThreadAndSerializationSafe]
	[UnityEngine.Bindings.NativeConditional("(PLATFORM_WIN || PLATFORM_WINRT) && !PLATFORM_XBOXONE")]
	private extern void Dispose_Internal();

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4AE8CE0", Offset = "0x4AE8CE0", VA = "0x4AE8CE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x4AE8DE0", Offset = "0x4AE8DE0", VA = "0x4AE8DE0", Slot = "1")]
	~PhotoCaptureFrame()
	{
	}
}
