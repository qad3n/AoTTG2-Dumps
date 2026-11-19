// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Display
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
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000C6")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/DisplayManager.h")]
public class Display
{
	[Token(Token = "0x20000C7")]
	public delegate void DisplaysUpdatedDelegate();

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr nativeDisplay;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x0")]
	public static Display[] displays;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x8")]
	private static Display _mainDisplay;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x10")]
	private static int m_ActiveEditorGameViewTarget;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static DisplaysUpdatedDelegate onDisplaysUpdated;

	[Token(Token = "0x170000B1")]
	public int renderingWidth
	{
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x68CE2B0", Offset = "0x68CD2B0", VA = "0x68CE2B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int renderingHeight
	{
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x68CE390", Offset = "0x68CD390", VA = "0x68CE390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int systemWidth
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x68CE430", Offset = "0x68CD430", VA = "0x68CE430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public int systemHeight
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x68CE510", Offset = "0x68CD510", VA = "0x68CE510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B5")]
	public bool requiresSrgbBlitToBackbuffer
	{
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x68CE5B0", Offset = "0x68CD5B0", VA = "0x68CE5B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B6")]
	public static Display main
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x68CE770", Offset = "0x68CD770", VA = "0x68CE770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x68CE250", Offset = "0x68CD250", VA = "0x68CE250")]
	internal Display()
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x68CE290", Offset = "0x68CD290", VA = "0x68CE290")]
	internal Display(IntPtr nativeDisplay)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x68CE660", Offset = "0x68CD660", VA = "0x68CE660")]
	public static Vector3 RelativeMouseAt(Vector3 inputMouseCoordinates)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x68CE7E0", Offset = "0x68CD7E0", VA = "0x68CE7E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RecreateDisplayList(IntPtr[] nativeDisplay)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x68CE9B0", Offset = "0x68CD9B0", VA = "0x68CE9B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FireDisplaysUpdated()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600043B")]
	[Address(RVA = "0x68CE4D0", Offset = "0x68CD4D0", VA = "0x68CE4D0")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplaySystemResolution")]
	private static extern void GetSystemExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600043C")]
	[Address(RVA = "0x68CE350", Offset = "0x68CD350", VA = "0x68CE350")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplayRenderingResolution")]
	private static extern void GetRenderingExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600043D")]
	[Address(RVA = "0x68CE720", Offset = "0x68CD720", VA = "0x68CE720")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_RelativeMouseAt")]
	private static extern int RelativeMouseAtImpl(int x, int y, out int rx, out int ry);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600043E")]
	[Address(RVA = "0x68CE630", Offset = "0x68CD630", VA = "0x68CE630")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_RequiresSRGBBlitToBackbuffer")]
	private static extern bool RequiresSrgbBlitToBackbufferImpl(IntPtr nativeDisplay);
}
