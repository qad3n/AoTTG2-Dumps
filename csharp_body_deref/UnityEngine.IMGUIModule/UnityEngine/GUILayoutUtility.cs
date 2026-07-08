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
			[Address(RVA = "0x4B2B2A0", Offset = "0x4B2B2A0", VA = "0x4B2B2A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x4B29A30", Offset = "0x4B29A30", VA = "0x4B29A30")]
		internal LayoutCache(int instanceID = -1)
		{
		}

		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4B2B2B0", Offset = "0x4B2B2B0", VA = "0x4B2B2B0")]
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
		[Address(RVA = "0x4B29970", Offset = "0x4B29970", VA = "0x4B29970")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x4B299E0", Offset = "0x4B299E0", VA = "0x4B299E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4B297D0", Offset = "0x4B297D0", VA = "0x4B297D0")]
	private static Rect Internal_GetWindowRect(int windowID)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4B298A0", Offset = "0x4B298A0", VA = "0x4B298A0")]
	private static void Internal_MoveWindow(int windowID, Rect r)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4B258B0", Offset = "0x4B258B0", VA = "0x4B258B0")]
	internal static LayoutCache SelectIDList(int instanceID, bool isWindow)
	{
		return null;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4B29B30", Offset = "0x4B29B30", VA = "0x4B29B30")]
	internal static void Begin(int instanceID)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4B29DC0", Offset = "0x4B29DC0", VA = "0x4B29DC0")]
	internal static void BeginContainer(LayoutCache cache)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4B25BA0", Offset = "0x4B25BA0", VA = "0x4B25BA0")]
	internal static void BeginWindow(int windowID, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4B25EF0", Offset = "0x4B25EF0", VA = "0x4B25EF0")]
	internal static void Layout()
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4B2A4E0", Offset = "0x4B2A4E0", VA = "0x4B2A4E0")]
	internal static void LayoutFromEditorWindow()
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4B2A730", Offset = "0x4B2A730", VA = "0x4B2A730")]
	internal static void LayoutFromContainer(float w, float h)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4B2A000", Offset = "0x4B2A000", VA = "0x4B2A000")]
	internal static void LayoutFreeGroup(GUILayoutGroup toplevel)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4B2A1E0", Offset = "0x4B2A1E0", VA = "0x4B2A1E0")]
	private static void LayoutSingleGroup(GUILayoutGroup i)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4B2A930", Offset = "0x4B2A930", VA = "0x4B2A930")]
	private static GUILayoutGroup CreateGUILayoutGroupInstanceOfType(Type LayoutType)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4B28130", Offset = "0x4B28130", VA = "0x4B28130")]
	internal static GUILayoutGroup BeginLayoutGroup(GUIStyle style, GUILayoutOption[] options, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4B28590", Offset = "0x4B28590", VA = "0x4B28590")]
	internal static void EndLayoutGroup()
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4B28B90", Offset = "0x4B28B90", VA = "0x4B28B90")]
	internal static GUILayoutGroup BeginLayoutArea(GUIStyle style, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4B29090", Offset = "0x4B29090", VA = "0x4B29090")]
	internal static void EndLayoutArea()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4B27470", Offset = "0x4B27470", VA = "0x4B27470")]
	public static Rect GetRect(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4B2AAF0", Offset = "0x4B2AAF0", VA = "0x4B2AAF0")]
	private static Rect DoGetRect(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4B29860", Offset = "0x4B29860", VA = "0x4B29860")]
	private static extern void Internal_GetWindowRect_Injected(int windowID, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4B29930", Offset = "0x4B29930", VA = "0x4B29930")]
	private static extern void Internal_MoveWindow_Injected(int windowID, [In] ref Rect r);
}
