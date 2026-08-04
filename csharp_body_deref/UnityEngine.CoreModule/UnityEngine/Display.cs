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
		[Address(RVA = "0x4DBFD00", Offset = "0x4DBFD00", VA = "0x4DBFD00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000095")]
	public int renderingHeight
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x4DBFDE0", Offset = "0x4DBFDE0", VA = "0x4DBFDE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000096")]
	public int systemWidth
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x4DBFE80", Offset = "0x4DBFE80", VA = "0x4DBFE80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000097")]
	public int systemHeight
	{
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x4DBFF60", Offset = "0x4DBFF60", VA = "0x4DBFF60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000098")]
	public RenderBuffer colorBuffer
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x4DC0000", Offset = "0x4DC0000", VA = "0x4DC0000")]
		get
		{
			return default(RenderBuffer);
		}
	}

	[Token(Token = "0x17000099")]
	public static Display main
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x4DC0200", Offset = "0x4DC0200", VA = "0x4DC0200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4DBFCA0", Offset = "0x4DBFCA0", VA = "0x4DBFCA0")]
	internal Display()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4DBFCE0", Offset = "0x4DBFCE0", VA = "0x4DBFCE0")]
	internal Display(IntPtr nativeDisplay)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4DC00E0", Offset = "0x4DC00E0", VA = "0x4DC00E0")]
	public static Vector3 RelativeMouseAt(Vector3 inputMouseCoordinates)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4DC0270", Offset = "0x4DC0270", VA = "0x4DC0270")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RecreateDisplayList(IntPtr[] nativeDisplay)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4DC0440", Offset = "0x4DC0440", VA = "0x4DC0440")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FireDisplaysUpdated()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4DBFF20", Offset = "0x4DBFF20", VA = "0x4DBFF20")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplaySystemResolution")]
	private static extern void GetSystemExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4DBFDA0", Offset = "0x4DBFDA0", VA = "0x4DBFDA0")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplayRenderingResolution")]
	private static extern void GetRenderingExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4DC00A0", Offset = "0x4DC00A0", VA = "0x4DC00A0")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_GetRenderingBuffersWrapper")]
	private static extern void GetRenderingBuffersImpl(IntPtr nativeDisplay, out RenderBuffer color, out RenderBuffer depth);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4DC01B0", Offset = "0x4DC01B0", VA = "0x4DC01B0")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_RelativeMouseAt")]
	private static extern int RelativeMouseAtImpl(int x, int y, out int rx, out int ry);
}
