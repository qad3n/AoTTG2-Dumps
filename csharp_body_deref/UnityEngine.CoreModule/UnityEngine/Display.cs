// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Display
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/DisplayManager.h")]
[UnityEngine.Scripting.UsedByNativeCode]
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

	[Token(Token = "0x170000B0")]
	public int renderingWidth
	{
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x2EC4B40", Offset = "0x2EC3140", VA = "0x182EC4B40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B1")]
	public int renderingHeight
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x2EC4AC0", Offset = "0x2EC30C0", VA = "0x182EC4AC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int systemWidth
	{
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x2EC4CB0", Offset = "0x2EC32B0", VA = "0x182EC4CB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int systemHeight
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x2EC4C30", Offset = "0x2EC3230", VA = "0x182EC4C30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public bool requiresSrgbBlitToBackbuffer
	{
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x2EC4BC0", Offset = "0x2EC31C0", VA = "0x182EC4BC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B5")]
	public static Display main
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x2EC4A70", Offset = "0x2EC3070", VA = "0x182EC4A70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x2EC4A30", Offset = "0x2EC3030", VA = "0x182EC4A30")]
	internal Display()
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x2EC4A00", Offset = "0x2EC3000", VA = "0x182EC4A00")]
	internal Display(IntPtr nativeDisplay)
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x2EC4760", Offset = "0x2EC2D60", VA = "0x182EC4760")]
	public static Vector3 RelativeMouseAt(Vector3 inputMouseCoordinates)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x2EC4530", Offset = "0x2EC2B30", VA = "0x182EC4530")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RecreateDisplayList(IntPtr[] nativeDisplay)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x2EC43E0", Offset = "0x2EC29E0", VA = "0x182EC43E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void FireDisplaysUpdated()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000437")]
	[Address(RVA = "0x2EC44D0", Offset = "0x2EC2AD0", VA = "0x182EC44D0")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplaySystemResolution")]
	private static extern void GetSystemExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000438")]
	[Address(RVA = "0x2EC4470", Offset = "0x2EC2A70", VA = "0x182EC4470")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_DisplayRenderingResolution")]
	private static extern void GetRenderingExtImpl(IntPtr nativeDisplay, out int w, out int h);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000439")]
	[Address(RVA = "0x2EC4710", Offset = "0x2EC2D10", VA = "0x182EC4710")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_RelativeMouseAt")]
	private static extern int RelativeMouseAtImpl(int x, int y, out int rx, out int ry);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600043A")]
	[Address(RVA = "0x2EC4830", Offset = "0x2EC2E30", VA = "0x182EC4830")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_RequiresSRGBBlitToBackbuffer")]
	private static extern bool RequiresSrgbBlitToBackbufferImpl(IntPtr nativeDisplay);
}
