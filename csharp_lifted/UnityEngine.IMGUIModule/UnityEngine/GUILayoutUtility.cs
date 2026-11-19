// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayoutUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x2000013")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUILayoutUtility.bindings.h")]
public class GUILayoutUtility
{
	[Token(Token = "0x2000014")]
	[DebuggerDisplay("id={id}, groups={layoutGroups.Count}")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal sealed class LayoutCache
	{
		[Token(Token = "0x400007A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public GUILayoutGroup topLevel;

		[Token(Token = "0x400007B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal GenericStack layoutGroups;

		[Token(Token = "0x400007C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal GUILayoutGroup windows;

		[Token(Token = "0x17000037")]
		private int id
		{
			[Token(Token = "0x6000117")]
			[Address(RVA = "0x6990100", Offset = "0x698F100", VA = "0x6990100")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000118")]
		[Address(RVA = "0x698E570", Offset = "0x698D570", VA = "0x698E570")]
		public LayoutCache(int instanceID = -1)
		{
		}

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x6990110", Offset = "0x698F110", VA = "0x6990110")]
		public void ResetCursor()
		{
		}
	}

	[Token(Token = "0x4000074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<int, LayoutCache> s_StoredLayouts;

	[Token(Token = "0x4000075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, LayoutCache> s_StoredWindows;

	[Token(Token = "0x4000076")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static LayoutCache current;

	[Token(Token = "0x4000077")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly Rect kDummyRect;

	[Token(Token = "0x17000036")]
	internal static int unbalancedgroupscount
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x698E3F0", Offset = "0x698D3F0", VA = "0x698E3F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x698E460", Offset = "0x698D460", VA = "0x698E460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x698E250", Offset = "0x698D250", VA = "0x698E250")]
	private static Rect Internal_GetWindowRect(int windowID)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x698E320", Offset = "0x698D320", VA = "0x698E320")]
	private static void Internal_MoveWindow(int windowID, Rect r)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x698E4B0", Offset = "0x698D4B0", VA = "0x698E4B0")]
	internal static LayoutCache GetLayoutCache(int instanceID, bool isWindow)
	{
		return null;
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x6989E00", Offset = "0x6988E00", VA = "0x6989E00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static LayoutCache SelectIDList(int instanceID, bool isWindow)
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x698E670", Offset = "0x698D670", VA = "0x698E670")]
	internal static void RemoveSelectedIdList(int instanceID, bool isWindow)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x698E740", Offset = "0x698D740", VA = "0x698E740")]
	internal static void Begin(int instanceID)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x698EA00", Offset = "0x698DA00", VA = "0x698EA00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void BeginContainer(LayoutCache cache)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x698A0C0", Offset = "0x69890C0", VA = "0x698A0C0")]
	internal static void BeginWindow(int windowID, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x698A460", Offset = "0x6989460", VA = "0x698A460")]
	internal static void Layout()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x698F140", Offset = "0x698E140", VA = "0x698F140")]
	internal static void LayoutFromEditorWindow()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x698F3C0", Offset = "0x698E3C0", VA = "0x698F3C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void LayoutFromContainer(float w, float h)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x698EC40", Offset = "0x698DC40", VA = "0x698EC40")]
	internal static void LayoutFreeGroup(GUILayoutGroup toplevel)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x698EE00", Offset = "0x698DE00", VA = "0x698EE00")]
	private static void LayoutSingleGroup(GUILayoutGroup i)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x698F5B0", Offset = "0x698E5B0", VA = "0x698F5B0")]
	private static GUILayoutGroup CreateGUILayoutGroupInstanceOfType(Type LayoutType)
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x698C930", Offset = "0x698B930", VA = "0x698C930")]
	internal static GUILayoutGroup BeginLayoutGroup(GUIStyle style, GUILayoutOption[] options, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x698CDD0", Offset = "0x698BDD0", VA = "0x698CDD0")]
	internal static void EndLayoutGroup()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x698D470", Offset = "0x698C470", VA = "0x698D470")]
	internal static GUILayoutGroup BeginLayoutArea(GUIStyle style, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x698DA40", Offset = "0x698CA40", VA = "0x698DA40")]
	internal static void EndLayoutArea()
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x698BB40", Offset = "0x698AB40", VA = "0x698BB40")]
	public static Rect GetRect(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x698F7B0", Offset = "0x698E7B0", VA = "0x698F7B0")]
	private static Rect DoGetRect(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x698E2E0", Offset = "0x698D2E0", VA = "0x698E2E0")]
	private static extern void Internal_GetWindowRect_Injected(int windowID, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x698E3B0", Offset = "0x698D3B0", VA = "0x698E3B0")]
	private static extern void Internal_MoveWindow_Injected(int windowID, [In] ref Rect r);
}
