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

[Token(Token = "0x2000012")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUILayoutUtility.bindings.h")]
public class GUILayoutUtility
{
	[Token(Token = "0x2000013")]
	[DebuggerDisplay("id={id}, groups={layoutGroups.Count}")]
	internal sealed class LayoutCache
	{
		[Token(Token = "0x4000078")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal GUILayoutGroup topLevel;

		[Token(Token = "0x4000079")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal GenericStack layoutGroups;

		[Token(Token = "0x400007A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal GUILayoutGroup windows;

		[Token(Token = "0x17000034")]
		private int id
		{
			[Token(Token = "0x60000F7")]
			[Address(RVA = "0x4E52E60", Offset = "0x4E52E60", VA = "0x4E52E60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x4E515F0", Offset = "0x4E515F0", VA = "0x4E515F0")]
		internal LayoutCache(int instanceID = -1)
		{
		}

		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4E52E70", Offset = "0x4E52E70", VA = "0x4E52E70")]
		public void ResetCursor()
		{
		}
	}

	[Token(Token = "0x4000072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<int, LayoutCache> s_StoredLayouts;

	[Token(Token = "0x4000073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, LayoutCache> s_StoredWindows;

	[Token(Token = "0x4000074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static LayoutCache current;

	[Token(Token = "0x4000075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly Rect kDummyRect;

	[Token(Token = "0x17000033")]
	internal static int unbalancedgroupscount
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x4E51530", Offset = "0x4E51530", VA = "0x4E51530")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x4E515A0", Offset = "0x4E515A0", VA = "0x4E515A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4E51390", Offset = "0x4E51390", VA = "0x4E51390")]
	private static Rect Internal_GetWindowRect(int windowID)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4E51460", Offset = "0x4E51460", VA = "0x4E51460")]
	private static void Internal_MoveWindow(int windowID, Rect r)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4E4D470", Offset = "0x4E4D470", VA = "0x4E4D470")]
	internal static LayoutCache SelectIDList(int instanceID, bool isWindow)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4E516F0", Offset = "0x4E516F0", VA = "0x4E516F0")]
	internal static void Begin(int instanceID)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4E51980", Offset = "0x4E51980", VA = "0x4E51980")]
	internal static void BeginContainer(LayoutCache cache)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4E4D760", Offset = "0x4E4D760", VA = "0x4E4D760")]
	internal static void BeginWindow(int windowID, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4E4DAB0", Offset = "0x4E4DAB0", VA = "0x4E4DAB0")]
	internal static void Layout()
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4E520A0", Offset = "0x4E520A0", VA = "0x4E520A0")]
	internal static void LayoutFromEditorWindow()
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4E522F0", Offset = "0x4E522F0", VA = "0x4E522F0")]
	internal static void LayoutFromContainer(float w, float h)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4E51BC0", Offset = "0x4E51BC0", VA = "0x4E51BC0")]
	internal static void LayoutFreeGroup(GUILayoutGroup toplevel)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4E51DA0", Offset = "0x4E51DA0", VA = "0x4E51DA0")]
	private static void LayoutSingleGroup(GUILayoutGroup i)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4E524F0", Offset = "0x4E524F0", VA = "0x4E524F0")]
	private static GUILayoutGroup CreateGUILayoutGroupInstanceOfType(Type LayoutType)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4E4FCF0", Offset = "0x4E4FCF0", VA = "0x4E4FCF0")]
	internal static GUILayoutGroup BeginLayoutGroup(GUIStyle style, GUILayoutOption[] options, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4E50150", Offset = "0x4E50150", VA = "0x4E50150")]
	internal static void EndLayoutGroup()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4E50750", Offset = "0x4E50750", VA = "0x4E50750")]
	internal static GUILayoutGroup BeginLayoutArea(GUIStyle style, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4E50C50", Offset = "0x4E50C50", VA = "0x4E50C50")]
	internal static void EndLayoutArea()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4E4F030", Offset = "0x4E4F030", VA = "0x4E4F030")]
	public static Rect GetRect(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4E526B0", Offset = "0x4E526B0", VA = "0x4E526B0")]
	private static Rect DoGetRect(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4E51420", Offset = "0x4E51420", VA = "0x4E51420")]
	private static extern void Internal_GetWindowRect_Injected(int windowID, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4E514F0", Offset = "0x4E514F0", VA = "0x4E514F0")]
	private static extern void Internal_MoveWindow_Injected(int windowID, [In] ref Rect r);
}
