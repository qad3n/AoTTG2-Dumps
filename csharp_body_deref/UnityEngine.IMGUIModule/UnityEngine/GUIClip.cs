// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIClip
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E4E240", Offset = "0x4E4E240", VA = "0x4E4E240")]
		public ParentClipScope(Matrix4x4 objectTransform, Rect clipRect)
		{
		}

		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x4E4E300", Offset = "0x4E4E300", VA = "0x4E4E300", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x1700002E")]
	internal static Rect visibleRect
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x4E47D00", Offset = "0x4E47D00", VA = "0x4E47D00")]
		[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetVisibleRect")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4E4DEC0", Offset = "0x4E4DEC0", VA = "0x4E4DEC0")]
	internal static void Internal_Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4E49CA0", Offset = "0x4E49CA0", VA = "0x4E49CA0")]
	internal static extern void Internal_Pop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4E4DF60", Offset = "0x4E4DF60", VA = "0x4E4DF60")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetCount")]
	internal static extern int Internal_GetCount();

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4E4DF90", Offset = "0x4E4DF90", VA = "0x4E4DF90")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.UnclipToWindow")]
	private static Vector2 UnclipToWindow_Vector2(Vector2 pos)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4E424B0", Offset = "0x4E424B0", VA = "0x4E424B0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetUserMatrix")]
	internal static Matrix4x4 GetMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4E42590", Offset = "0x4E42590", VA = "0x4E42590")]
	internal static void SetMatrix(Matrix4x4 m)
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4E4E080", Offset = "0x4E4E080", VA = "0x4E4E080")]
	internal static void Internal_PushParentClip(Matrix4x4 objectTransform, Rect clipRect)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4E4E130", Offset = "0x4E4E130", VA = "0x4E4E130")]
	internal static void Internal_PushParentClip(Matrix4x4 renderTransform, Matrix4x4 inputTransform, Rect clipRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4E4E1C0", Offset = "0x4E4E1C0", VA = "0x4E4E1C0")]
	internal static extern void Internal_PopParentClip();

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4E49C20", Offset = "0x4E49C20", VA = "0x4E49C20")]
	internal static void Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4E4CC40", Offset = "0x4E4CC40", VA = "0x4E4CC40")]
	internal static void Pop()
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4E4E1F0", Offset = "0x4E4E1F0", VA = "0x4E4E1F0")]
	public static Vector2 UnclipToWindow(Vector2 pos)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4E4DE90", Offset = "0x4E4DE90", VA = "0x4E4DE90")]
	private static extern void get_visibleRect_Injected(out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4E4DF10", Offset = "0x4E4DF10", VA = "0x4E4DF10")]
	private static extern void Internal_Push_Injected([In] ref Rect screenRect, [In] ref Vector2 scrollOffset, [In] ref Vector2 renderOffset, bool resetOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4E4DFE0", Offset = "0x4E4DFE0", VA = "0x4E4DFE0")]
	private static extern void UnclipToWindow_Vector2_Injected([In] ref Vector2 pos, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4E4E020", Offset = "0x4E4E020", VA = "0x4E4E020")]
	private static extern void GetMatrix_Injected(out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4E4E050", Offset = "0x4E4E050", VA = "0x4E4E050")]
	private static extern void SetMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4E4E180", Offset = "0x4E4E180", VA = "0x4E4E180")]
	private static extern void Internal_PushParentClip_Injected([In] ref Matrix4x4 renderTransform, [In] ref Matrix4x4 inputTransform, [In] ref Rect clipRect);
}
