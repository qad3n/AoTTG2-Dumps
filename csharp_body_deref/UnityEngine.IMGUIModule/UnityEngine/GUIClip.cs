using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIClip.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIState.h")]
internal sealed class GUIClip
{
	[Token(Token = "0x200000A")]
	internal struct ParentClipScope : IDisposable
	{
		[Token(Token = "0x400004A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool m_Disposed;

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x4B26680", Offset = "0x4B26680", VA = "0x4B26680")]
		public ParentClipScope(Matrix4x4 objectTransform, Rect clipRect)
		{
		}

		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x4B26740", Offset = "0x4B26740", VA = "0x4B26740", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x1700002E")]
	internal static Rect visibleRect
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x4B20140", Offset = "0x4B20140", VA = "0x4B20140")]
		[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetVisibleRect")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4B26300", Offset = "0x4B26300", VA = "0x4B26300")]
	internal static void Internal_Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4B220E0", Offset = "0x4B220E0", VA = "0x4B220E0")]
	internal static extern void Internal_Pop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4B263A0", Offset = "0x4B263A0", VA = "0x4B263A0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetCount")]
	internal static extern int Internal_GetCount();

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4B263D0", Offset = "0x4B263D0", VA = "0x4B263D0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.UnclipToWindow")]
	private static Vector2 UnclipToWindow_Vector2(Vector2 pos)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4B1A8F0", Offset = "0x4B1A8F0", VA = "0x4B1A8F0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetUserMatrix")]
	internal static Matrix4x4 GetMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4B1A9D0", Offset = "0x4B1A9D0", VA = "0x4B1A9D0")]
	internal static void SetMatrix(Matrix4x4 m)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4B264C0", Offset = "0x4B264C0", VA = "0x4B264C0")]
	internal static void Internal_PushParentClip(Matrix4x4 objectTransform, Rect clipRect)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4B26570", Offset = "0x4B26570", VA = "0x4B26570")]
	internal static void Internal_PushParentClip(Matrix4x4 renderTransform, Matrix4x4 inputTransform, Rect clipRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4B26600", Offset = "0x4B26600", VA = "0x4B26600")]
	internal static extern void Internal_PopParentClip();

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4B22060", Offset = "0x4B22060", VA = "0x4B22060")]
	internal static void Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4B25080", Offset = "0x4B25080", VA = "0x4B25080")]
	internal static void Pop()
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4B26630", Offset = "0x4B26630", VA = "0x4B26630")]
	public static Vector2 UnclipToWindow(Vector2 pos)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4B262D0", Offset = "0x4B262D0", VA = "0x4B262D0")]
	private static extern void get_visibleRect_Injected(out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4B26350", Offset = "0x4B26350", VA = "0x4B26350")]
	private static extern void Internal_Push_Injected([In] ref Rect screenRect, [In] ref Vector2 scrollOffset, [In] ref Vector2 renderOffset, bool resetOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4B26420", Offset = "0x4B26420", VA = "0x4B26420")]
	private static extern void UnclipToWindow_Vector2_Injected([In] ref Vector2 pos, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4B26460", Offset = "0x4B26460", VA = "0x4B26460")]
	private static extern void GetMatrix_Injected(out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4B26490", Offset = "0x4B26490", VA = "0x4B26490")]
	private static extern void SetMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4B265C0", Offset = "0x4B265C0", VA = "0x4B265C0")]
	private static extern void Internal_PushParentClip_Injected([In] ref Matrix4x4 renderTransform, [In] ref Matrix4x4 inputTransform, [In] ref Rect clipRect);
}
