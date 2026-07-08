using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000A5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/DisplayManager.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class Display
{
	[Token(Token = "0x20000A6")]
	public delegate void DisplaysUpdatedDelegate();

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr nativeDisplay;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x0")]
	public static Display[] displays;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x8")]
	private static Display _mainDisplay;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x10")]
	private static int m_ActiveEditorGameViewTarget;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static DisplaysUpdatedDelegate onDisplaysUpdated;

	[Token(Token = "0x17000094")]
	public int renderingWidth
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x4A984E0", Offset = "0x4A984E0", VA = "0x4A984E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000095")]
	public int renderingHeight
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x4A985C0", Offset = "0x4A985C0", VA = "0x4A985C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000096")]
	public int systemWidth
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x4A98660", Offset = "0x4A98660", VA = "0x4A98660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000097")]
	public int systemHeight
	{
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x4A98740", Offset = "0x4A98740", VA = "0x4A98740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000098")]
	public RenderBuffer colorBuffer
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x4A987E0", Offset = "0x4A987E0", VA = "0x4A987E0")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x17000099")]
	public static Display main
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x4A989E0", Offset = "0x4A989E0", VA = "0x4A989E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4A98480", Offset = "0x4A98480", VA = "0x4A98480")]
	internal Display()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4A984C0", Offset = "0x4A984C0", VA = "0x4A984C0")]
	internal Display(IntPtr nativeDisplay)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4A988C0", Offset = "0x4A988C0", VA = "0x4A988C0")]
	public static Vector3 RelativeMouseAt(Vector3 inputMouseCoordinates)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4A98A50", Offset = "0x4A98A50", VA = "0x4A98A50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RecreateDisplayList(IntPtr[] nativeDisplay)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4A98C20", Offset = "0x4A98C20", VA = "0x4A98C20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FireDisplaysUpdated()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4A98700", Offset = "0x4A98700", VA = "0x4A98700")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplaySystemResolution")]
	private static extern void GetSystemExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4A98580", Offset = "0x4A98580", VA = "0x4A98580")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplayRenderingResolution")]
	private static extern void GetRenderingExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4A98880", Offset = "0x4A98880", VA = "0x4A98880")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_GetRenderingBuffersWrapper")]
	private static extern void GetRenderingBuffersImpl(IntPtr nativeDisplay, out RenderBuffer color, out RenderBuffer depth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4A98990", Offset = "0x4A98990", VA = "0x4A98990")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_RelativeMouseAt")]
	private static extern int RelativeMouseAtImpl(int x, int y, out int rx, out int ry);
}
