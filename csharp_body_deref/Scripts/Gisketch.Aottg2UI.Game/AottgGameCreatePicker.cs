// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePicker
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePicker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000216")]
internal static class AottgGameCreatePicker
{
	[Token(Token = "0x2000217")]
	internal static class AottgGameCreatePresetPicker
	{
		[Token(Token = "0x4000B1A")]
		private const string LoadDialogId = "game-create-preset-load";

		[Token(Token = "0x4000B1B")]
		private const string SaveDialogId = "game-create-preset-save";

		[Token(Token = "0x4000B1C")]
		private const string SaveNameInputId = "game-create-preset-save-name";

		[Token(Token = "0x4000B1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static string _saveError;

		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x23CCD20", Offset = "0x23CB320", VA = "0x1823CCD20")]
		public static void OpenLoad(GisketchActionContext context)
		{
		}

		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x23CCF60", Offset = "0x23CB560", VA = "0x1823CCF60")]
		public static void OpenSave(GisketchActionContext context)
		{
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x23CC8E0", Offset = "0x23CAEE0", VA = "0x1823CC8E0")]
		private static GisketchNodeDefinition[] BuildLoadNodes(GisketchUIRoot root)
		{
			return null;
		}

		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x23CD120", Offset = "0x23CB720", VA = "0x1823CD120")]
		private static void ShowSave(GisketchUIRoot root)
		{
		}

		[Token(Token = "0x6000C62")]
		[Address(RVA = "0x23CCA00", Offset = "0x23CB000", VA = "0x1823CCA00")]
		private static GisketchNodeDefinition[] BuildSaveNodes(GisketchUIRoot root)
		{
			return null;
		}

		[Token(Token = "0x6000C63")]
		[Address(RVA = "0x23CD0A0", Offset = "0x23CB6A0", VA = "0x1823CD0A0")]
		private static GisketchUIRoot Root(GisketchActionContext context)
		{
			return null;
		}

		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x23CCAF0", Offset = "0x23CB0F0", VA = "0x1823CCAF0")]
		private static string InputText(GameObject source)
		{
			return null;
		}
	}

	[Token(Token = "0x200021B")]
	internal static class AottgGameCreateText
	{
		[Token(Token = "0x6000C74")]
		[Address(RVA = "0x23CD7F0", Offset = "0x23CBDF0", VA = "0x1823CD7F0")]
		public static string Text(string key, string fallback)
		{
			return null;
		}
	}

	[Token(Token = "0x2000227")]
	[CompilerGenerated]
	private sealed class _003CShowTitanSpawnNextFrame_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string refreshedAnchorId;

		[Token(Token = "0x4000B76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchUIRoot root;

		[Token(Token = "0x4000B77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public GameObject anchor;

		[Token(Token = "0x17000160")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000CB3")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000161")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CB5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CShowTitanSpawnNextFrame_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x23F4840", Offset = "0x23F2E40", VA = "0x1823F4840", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x23F49A0", Offset = "0x23F2FA0", VA = "0x1823F49A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B0D")]
	private const string MapPopoverId = "game-create-map-picker";

	[Token(Token = "0x4000B0E")]
	private const string ModePopoverId = "game-create-mode-picker";

	[Token(Token = "0x4000B0F")]
	private const string AddonPopoverId = "game-create-addon-picker";

	[Token(Token = "0x4000B10")]
	private const string TitanSpawnPopoverId = "game-create-titan-spawn-picker";

	[Token(Token = "0x4000B11")]
	private const float ListPickerItemWidth = 620f;

	[Token(Token = "0x4000B12")]
	private const float ListPickerHeight = 500f;

	[Token(Token = "0x4000B13")]
	private const float ListPopoverWidth = 670f;

	[Token(Token = "0x4000B14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string _mapCategory;

	[Token(Token = "0x4000B15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string _modeCategory;

	[Token(Token = "0x4000B16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string _addonCategory;

	[Token(Token = "0x4000B17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static GameObject _pickerAnchor;

	[Token(Token = "0x4000B18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static GameObject _titanSpawnAnchor;

	[Token(Token = "0x4000B19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static bool _customContentDeleteMode;

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x23CB2B0", Offset = "0x23C98B0", VA = "0x1823CB2B0")]
	public static void OpenMap(GisketchActionContext context, string[] maps, string currentMap, bool showCategories, Action<string> selected)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x23CB850", Offset = "0x23C9E50", VA = "0x1823CB850")]
	public static void OpenMode(GisketchActionContext context, string[] modes, Action<string> selected)
	{
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x23CADE0", Offset = "0x23C93E0", VA = "0x1823CADE0")]
	public static void OpenAddons(GisketchActionContext context, string[] addons, Func<int, bool> isSelected, Action<int> toggled, Action completed)
	{
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x23CA3A0", Offset = "0x23C89A0", VA = "0x1823CA3A0")]
	private static GisketchNodeDefinition[] BuildModeNodes(GisketchUIRoot root, string[] modes, Action<string> selected)
	{
		return null;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x23CA600", Offset = "0x23C8C00", VA = "0x1823CA600")]
	private static GisketchGridPicker BuildModePicker(GisketchUIRoot root, GisketchGridPickerItem[] items, string suffix, Action<string> selected)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x23C9D40", Offset = "0x23C8340", VA = "0x1823C9D40")]
	private static GisketchNodeDefinition[] BuildAddonNodes(GisketchUIRoot root, string[] addons, HashSet<string> builtin, Func<int, bool> isSelected, Action<int> toggled, Action completed)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x23CA1B0", Offset = "0x23C87B0", VA = "0x1823CA1B0")]
	private static GisketchGridPicker BuildListPicker(string id, GisketchGridPickerItem[] items, string searchPlaceholder, Action<GisketchActionContext, GisketchGridPickerItem> selected)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x23C9F50", Offset = "0x23C8550", VA = "0x1823C9F50")]
	private static void BuildCategoryTabs(AottgUi ui, string id, string[] categories, string selected, Action<string> changed)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x23CBF00", Offset = "0x23CA500", VA = "0x1823CBF00")]
	private static string[] PickerCategories(bool hasBuiltin, bool hasCustom)
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x23CC2E0", Offset = "0x23CA8E0", VA = "0x1823CC2E0")]
	private static void RefreshPicker(GisketchUIRoot root, string id, GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x23CC260", Offset = "0x23CA860", VA = "0x1823CC260")]
	private static void RefreshMapPicker(GisketchUIRoot root, GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x23CBD50", Offset = "0x23CA350", VA = "0x1823CBD50")]
	public static void OpenTitanSpawn(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x23CBBD0", Offset = "0x23CA1D0", VA = "0x1823CBBD0")]
	public static void OpenTitanSpawnAfterDropdown(GisketchActionContext context, [Optional] string refreshedAnchorId)
	{
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x23CC750", Offset = "0x23CAD50", VA = "0x1823CC750")]
	[IteratorStateMachine(typeof(_003CShowTitanSpawnNextFrame_003Ed__26))]
	private static IEnumerator ShowTitanSpawnNextFrame(GisketchUIRoot root, GameObject anchor, string refreshedAnchorId)
	{
		return null;
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x23CC7F0", Offset = "0x23CADF0", VA = "0x1823CC7F0")]
	private static void ShowTitanSpawn(GisketchUIRoot root, GameObject anchor)
	{
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x23CA780", Offset = "0x23C8D80", VA = "0x1823CA780")]
	private static GisketchNodeDefinition[] BuildTitanSpawnNodes(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x23CC3F0", Offset = "0x23CA9F0", VA = "0x1823CC3F0")]
	private static void RefreshTitanSpawn(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x23CA270", Offset = "0x23C8870", VA = "0x1823CA270")]
	private static GisketchNodeDefinition[] BuildMapNodes(GisketchUIRoot root, HashSet<string> allowed, string[] categories, bool showCategories, Action<string> selected)
	{
		return null;
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x23CACC0", Offset = "0x23C92C0", VA = "0x1823CACC0")]
	private static string[] MapCategories(HashSet<string> allowed)
	{
		return null;
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x23CAB50", Offset = "0x23C9150", VA = "0x1823CAB50")]
	private static string CategoryFor(string mapName, string[] categories)
	{
		return null;
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x23CC010", Offset = "0x23CA610", VA = "0x1823CC010")]
	internal static string PreviewSprite(string mapName)
	{
		return null;
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x23CC510", Offset = "0x23CAB10", VA = "0x1823CC510")]
	private static GisketchUIRoot Root(GisketchActionContext context)
	{
		return null;
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x23CB160", Offset = "0x23C9760", VA = "0x1823CB160")]
	public static void OpenCustomContentManager(GisketchActionContext context, string id, string title, string description, string[] names, Action import, Action<string> modify, Action<string> delete, Action openFolder)
	{
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x23CC590", Offset = "0x23CAB90", VA = "0x1823CC590")]
	private static void ShowCustomContentManager(GisketchUIRoot root, string id, string title, string description, string[] names, Action import, Action<string> modify, Action<string> delete, Action openFolder)
	{
	}
}
