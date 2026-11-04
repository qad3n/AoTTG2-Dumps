// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayoutUtility
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000118")]
		[Address(RVA = "0x2FA6250", Offset = "0x2FA4850", VA = "0x182FA6250")]
		public LayoutCache(int instanceID = -1)
		{
		}

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x2FA5FF0", Offset = "0x2FA45F0", VA = "0x182FA5FF0")]
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
		[Address(RVA = "0x2F8B3E0", Offset = "0x2F899E0", VA = "0x182F8B3E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x2F8B430", Offset = "0x2F89A30", VA = "0x182F8B430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2F8A2C0", Offset = "0x2F888C0", VA = "0x182F8A2C0")]
	private static Rect Internal_GetWindowRect(int windowID)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x2F8A380", Offset = "0x2F88980", VA = "0x182F8A380")]
	private static void Internal_MoveWindow(int windowID, Rect r)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x2F8A140", Offset = "0x2F88740", VA = "0x182F8A140")]
	internal static LayoutCache GetLayoutCache(int instanceID, bool isWindow)
	{
		return null;
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x2F8B040", Offset = "0x2F89640", VA = "0x182F8B040")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static LayoutCache SelectIDList(int instanceID, bool isWindow)
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x2F8AF60", Offset = "0x2F89560", VA = "0x182F8AF60")]
	internal static void RemoveSelectedIdList(int instanceID, bool isWindow)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2F891C0", Offset = "0x2F877C0", VA = "0x182F891C0")]
	internal static void Begin(int instanceID)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2F88490", Offset = "0x2F86A90", VA = "0x182F88490")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void BeginContainer(LayoutCache cache)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2F88E00", Offset = "0x2F87400", VA = "0x182F88E00")]
	internal static void BeginWindow(int windowID, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x2F8ACB0", Offset = "0x2F892B0", VA = "0x182F8ACB0")]
	internal static void Layout()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2F8A790", Offset = "0x2F88D90", VA = "0x182F8A790")]
	internal static void LayoutFromEditorWindow()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2F8A5B0", Offset = "0x2F88BB0", VA = "0x182F8A5B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void LayoutFromContainer(float w, float h)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2F8A400", Offset = "0x2F88A00", VA = "0x182F8A400")]
	internal static void LayoutFreeGroup(GUILayoutGroup toplevel)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x2F8AA00", Offset = "0x2F89000", VA = "0x182F8AA00")]
	private static void LayoutSingleGroup(GUILayoutGroup i)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2F89480", Offset = "0x2F87A80", VA = "0x182F89480")]
	private static GUILayoutGroup CreateGUILayoutGroupInstanceOfType(Type LayoutType)
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2F88A30", Offset = "0x2F87030", VA = "0x182F88A30")]
	internal static GUILayoutGroup BeginLayoutGroup(GUIStyle style, GUILayoutOption[] options, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x2F89DF0", Offset = "0x2F883F0", VA = "0x182F89DF0")]
	internal static void EndLayoutGroup()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x2F88680", Offset = "0x2F86C80", VA = "0x182F88680")]
	internal static GUILayoutGroup BeginLayoutArea(GUIStyle style, Type layoutType)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x2F89C10", Offset = "0x2F88210", VA = "0x182F89C10")]
	internal static void EndLayoutArea()
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x2F8A200", Offset = "0x2F88800", VA = "0x182F8A200")]
	public static Rect GetRect(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x2F895B0", Offset = "0x2F87BB0", VA = "0x182F895B0")]
	private static Rect DoGetRect(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000115")]
	[Address(RVA = "0x2F8A280", Offset = "0x2F88880", VA = "0x182F8A280")]
	private static extern void Internal_GetWindowRect_Injected(int windowID, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x2F8A340", Offset = "0x2F88940", VA = "0x182F8A340")]
	private static extern void Internal_MoveWindow_Injected(int windowID, [In] ref Rect r);
}
