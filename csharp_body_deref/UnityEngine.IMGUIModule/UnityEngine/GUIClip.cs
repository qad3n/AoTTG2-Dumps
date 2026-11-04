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

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIState.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIClip.h")]
internal sealed class GUIClip
{
	[Token(Token = "0x200000B")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
	internal struct ParentClipScope : IDisposable
	{
		[Token(Token = "0x400004C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool m_Disposed;

		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x2FA6580", Offset = "0x2FA4B80", VA = "0x182FA6580")]
		public ParentClipScope(Matrix4x4 objectTransform, Rect clipRect)
		{
		}

		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x2FA6540", Offset = "0x2FA4B40", VA = "0x182FA6540", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x17000031")]
	internal static Rect visibleRect
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x2F86930", Offset = "0x2F84F30", VA = "0x182F86930")]
		[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetVisibleRect")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x2F866C0", Offset = "0x2F84CC0", VA = "0x182F866C0")]
	internal static void Internal_Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x2F864F0", Offset = "0x2F84AF0", VA = "0x182F864F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern void Internal_Pop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x2F86490", Offset = "0x2F84A90", VA = "0x182F86490")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetCount")]
	internal static extern int Internal_GetCount();

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2F86850", Offset = "0x2F84E50", VA = "0x182F86850")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.UnclipToWindow")]
	private static Vector2 UnclipToWindow_Vector2(Vector2 pos)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2F86440", Offset = "0x2F84A40", VA = "0x182F86440")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetUserMatrix")]
	internal static Matrix4x4 GetMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2F867C0", Offset = "0x2F84DC0", VA = "0x182F867C0")]
	internal static void SetMatrix(Matrix4x4 m)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2F86580", Offset = "0x2F84B80", VA = "0x182F86580")]
	internal static void Internal_PushParentClip(Matrix4x4 objectTransform, Rect clipRect)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2F86610", Offset = "0x2F84C10", VA = "0x182F86610")]
	internal static void Internal_PushParentClip(Matrix4x4 renderTransform, Matrix4x4 inputTransform, Rect clipRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2F864C0", Offset = "0x2F84AC0", VA = "0x182F864C0")]
	internal static extern void Internal_PopParentClip();

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x2F86720", Offset = "0x2F84D20", VA = "0x182F86720")]
	internal static void Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x2F864F0", Offset = "0x2F84AF0", VA = "0x182F864F0")]
	internal static void Pop()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x2F868A0", Offset = "0x2F84EA0", VA = "0x182F868A0")]
	public static Vector2 UnclipToWindow(Vector2 pos)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2F868F0", Offset = "0x2F84EF0", VA = "0x182F868F0")]
	private static extern void get_visibleRect_Injected(out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2F86670", Offset = "0x2F84C70", VA = "0x182F86670")]
	private static extern void Internal_Push_Injected([In] ref Rect screenRect, [In] ref Vector2 scrollOffset, [In] ref Vector2 renderOffset, bool resetOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x2F86800", Offset = "0x2F84E00", VA = "0x182F86800")]
	private static extern void UnclipToWindow_Vector2_Injected([In] ref Vector2 pos, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x2F86400", Offset = "0x2F84A00", VA = "0x182F86400")]
	private static extern void GetMatrix_Injected(out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2F86780", Offset = "0x2F84D80", VA = "0x182F86780")]
	private static extern void SetMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x2F86520", Offset = "0x2F84B20", VA = "0x182F86520")]
	private static extern void Internal_PushParentClip_Injected([In] ref Matrix4x4 renderTransform, [In] ref Matrix4x4 inputTransform, [In] ref Rect clipRect);
}
