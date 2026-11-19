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
		[Address(RVA = "0x698AC30", Offset = "0x6989C30", VA = "0x698AC30")]
		public ParentClipScope(Matrix4x4 objectTransform, Rect clipRect)
		{
		}

		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x698ACD0", Offset = "0x6989CD0", VA = "0x698ACD0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x17000031")]
	internal static Rect visibleRect
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x69838A0", Offset = "0x69828A0", VA = "0x69838A0")]
		[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetVisibleRect")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x698A8D0", Offset = "0x69898D0", VA = "0x698A8D0")]
	internal static void Internal_Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x69862E0", Offset = "0x69852E0", VA = "0x69862E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern void Internal_Pop();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x698A970", Offset = "0x6989970", VA = "0x698A970")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetCount")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern int Internal_GetCount();

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x698A9A0", Offset = "0x69899A0", VA = "0x698A9A0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.UnclipToWindow")]
	private static Vector2 UnclipToWindow_Vector2(Vector2 pos)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x697CC50", Offset = "0x697BC50", VA = "0x697CC50")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().m_CanvasGUIState.m_GUIClipState.GetUserMatrix")]
	internal static Matrix4x4 GetMatrix()
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x697CD30", Offset = "0x697BD30", VA = "0x697CD30")]
	internal static void SetMatrix(Matrix4x4 m)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x698AA90", Offset = "0x6989A90", VA = "0x698AA90")]
	internal static void Internal_PushParentClip(Matrix4x4 objectTransform, Rect clipRect)
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x698AB20", Offset = "0x6989B20", VA = "0x698AB20")]
	internal static void Internal_PushParentClip(Matrix4x4 renderTransform, Matrix4x4 inputTransform, Rect clipRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x698ABB0", Offset = "0x6989BB0", VA = "0x698ABB0")]
	internal static extern void Internal_PopParentClip();

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x6986200", Offset = "0x6985200", VA = "0x6986200")]
	internal static void Push(Rect screenRect, Vector2 scrollOffset, Vector2 renderOffset, bool resetOffset)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x69894B0", Offset = "0x69884B0", VA = "0x69894B0")]
	internal static void Pop()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x698ABE0", Offset = "0x6989BE0", VA = "0x698ABE0")]
	public static Vector2 UnclipToWindow(Vector2 pos)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x698A8A0", Offset = "0x69898A0", VA = "0x698A8A0")]
	private static extern void get_visibleRect_Injected(out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x698A920", Offset = "0x6989920", VA = "0x698A920")]
	private static extern void Internal_Push_Injected([In] ref Rect screenRect, [In] ref Vector2 scrollOffset, [In] ref Vector2 renderOffset, bool resetOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x698A9F0", Offset = "0x69899F0", VA = "0x698A9F0")]
	private static extern void UnclipToWindow_Vector2_Injected([In] ref Vector2 pos, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x698AA30", Offset = "0x6989A30", VA = "0x698AA30")]
	private static extern void GetMatrix_Injected(out Matrix4x4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x698AA60", Offset = "0x6989A60", VA = "0x698AA60")]
	private static extern void SetMatrix_Injected([In] ref Matrix4x4 m);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x698AB70", Offset = "0x6989B70", VA = "0x698AB70")]
	private static extern void Internal_PushParentClip_Injected([In] ref Matrix4x4 renderTransform, [In] ref Matrix4x4 inputTransform, [In] ref Rect clipRect);
}
