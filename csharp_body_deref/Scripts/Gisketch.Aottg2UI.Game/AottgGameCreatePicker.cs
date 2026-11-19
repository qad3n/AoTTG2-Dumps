// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePicker
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000231")]
internal static class AottgGameCreatePicker
{
	[Token(Token = "0x2000232")]
	internal static class AottgGameCreatePresetPicker
	{
		[Token(Token = "0x4000B9E")]
		private const string LoadDialogId = "game-create-preset-load";

		[Token(Token = "0x4000B9F")]
		private const string SaveDialogId = "game-create-preset-save";

		[Token(Token = "0x4000BA0")]
		private const string SaveNameInputId = "game-create-preset-save-name";

		[Token(Token = "0x4000BA1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static string _saveError;

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x5D9B6D0", Offset = "0x5D9A6D0", VA = "0x5D9B6D0")]
		public static void OpenLoad(GisketchActionContext context)
		{
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x5D9BAD0", Offset = "0x5D9AAD0", VA = "0x5D9BAD0")]
		public static void OpenSave(GisketchActionContext context)
		{
		}

		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x5D9B8C0", Offset = "0x5D9A8C0", VA = "0x5D9B8C0")]
		private static GisketchNodeDefinition[] BuildLoadNodes(GisketchUIRoot root)
		{
			return null;
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x5D9BCC0", Offset = "0x5D9ACC0", VA = "0x5D9BCC0")]
		private static void ConfirmDelete(GisketchUIRoot root, string name)
		{
		}

		[Token(Token = "0x6000D30")]
		[Address(RVA = "0x5D9BC30", Offset = "0x5D9AC30", VA = "0x5D9BC30")]
		private static void ShowSave(GisketchUIRoot root)
		{
		}

		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x5D9BF20", Offset = "0x5D9AF20", VA = "0x5D9BF20")]
		private static GisketchNodeDefinition[] BuildSaveNodes(GisketchUIRoot root)
		{
			return null;
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x5D9B840", Offset = "0x5D9A840", VA = "0x5D9B840")]
		private static GisketchUIRoot Root(GisketchActionContext context)
		{
			return null;
		}

		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x5D9C010", Offset = "0x5D9B010", VA = "0x5D9C010")]
		private static string InputText(GameObject source)
		{
			return null;
		}
	}

	[Token(Token = "0x2000244")]
	[CompilerGenerated]
	private sealed class _003CShowTitanSpawnNextFrame_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string refreshedAnchorId;

		[Token(Token = "0x4000C03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchUIRoot root;

		[Token(Token = "0x4000C04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public GameObject anchor;

		[Token(Token = "0x1700016B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D89")]
			[Address(RVA = "0x5778F50", Offset = "0x5777F50", VA = "0x5778F50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D8B")]
			[Address(RVA = "0x5778FA0", Offset = "0x5777FA0", VA = "0x5778FA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x5778DC0", Offset = "0x5777DC0", VA = "0x5778DC0")]
		[DebuggerHidden]
		public _003CShowTitanSpawnNextFrame_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x5778DE0", Offset = "0x5777DE0", VA = "0x5778DE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x5778DF0", Offset = "0x5777DF0", VA = "0x5778DF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x5778F60", Offset = "0x5777F60", VA = "0x5778F60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B91")]
	private const string MapPopoverId = "game-create-map-picker";

	[Token(Token = "0x4000B92")]
	private const string ModePopoverId = "game-create-mode-picker";

	[Token(Token = "0x4000B93")]
	private const string AddonPopoverId = "game-create-addon-picker";

	[Token(Token = "0x4000B94")]
	private const string TitanSpawnPopoverId = "game-create-titan-spawn-picker";

	[Token(Token = "0x4000B95")]
	private const float ListPickerItemWidth = 620f;

	[Token(Token = "0x4000B96")]
	private const float ListPickerHeight = 500f;

	[Token(Token = "0x4000B97")]
	private const float ListPopoverWidth = 670f;

	[Token(Token = "0x4000B98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static string _mapCategory;

	[Token(Token = "0x4000B99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string _modeCategory;

	[Token(Token = "0x4000B9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string _addonCategory;

	[Token(Token = "0x4000B9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static GameObject _pickerAnchor;

	[Token(Token = "0x4000B9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static GameObject _titanSpawnAnchor;

	[Token(Token = "0x4000B9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static bool _customContentDeleteMode;

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x5D98C50", Offset = "0x5D97C50", VA = "0x5D98C50")]
	public static void OpenMap(GisketchActionContext context, string[] maps, string currentMap, string currentCategory, bool showCategories, Action<string, string> selected)
	{
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x5D995A0", Offset = "0x5D985A0", VA = "0x5D995A0")]
	public static void OpenMode(GisketchActionContext context, string[] modes, Action<string> selected)
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x5D99BC0", Offset = "0x5D98BC0", VA = "0x5D99BC0")]
	public static void OpenAddons(GisketchActionContext context, string[] addons, Func<int, bool> isSelected, Action<int> toggled, Action completed)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x5D99950", Offset = "0x5D98950", VA = "0x5D99950")]
	private static GisketchNodeDefinition[] BuildModeNodes(GisketchUIRoot root, string[] modes, Action<string> selected)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x5D9A2C0", Offset = "0x5D992C0", VA = "0x5D9A2C0")]
	private static GisketchGridPicker BuildModePicker(GisketchUIRoot root, GisketchGridPickerItem[] items, string suffix, Action<string> selected)
	{
		return null;
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x5D99F90", Offset = "0x5D98F90", VA = "0x5D99F90")]
	private static GisketchNodeDefinition[] BuildAddonNodes(GisketchUIRoot root, string[] addons, HashSet<string> builtin, Func<int, bool> isSelected, Action<int> toggled, Action completed)
	{
		return null;
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x5D9A490", Offset = "0x5D99490", VA = "0x5D9A490")]
	private static GisketchGridPicker BuildListPicker(string id, GisketchGridPickerItem[] items, string searchPlaceholder, Action<GisketchActionContext, GisketchGridPickerItem> selected)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x5D9A540", Offset = "0x5D99540", VA = "0x5D9A540")]
	private static void BuildCategoryTabs(AottgUi ui, string id, string[] categories, string selected, Action<string> changed)
	{
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x5D9A1B0", Offset = "0x5D991B0", VA = "0x5D9A1B0")]
	private static string[] PickerCategories(bool hasBuiltin, bool hasCustom)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x5D9A7B0", Offset = "0x5D997B0", VA = "0x5D9A7B0")]
	private static void RefreshPicker(GisketchUIRoot root, string id, GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x5D9A8A0", Offset = "0x5D998A0", VA = "0x5D9A8A0")]
	private static void RefreshMapPicker(GisketchUIRoot root, GisketchNodeDefinition[] nodes)
	{
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x5D9A920", Offset = "0x5D99920", VA = "0x5D9A920")]
	public static void OpenTitanSpawn(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x5D9AB00", Offset = "0x5D99B00", VA = "0x5D9AB00")]
	public static void OpenTitanSpawnAfterDropdown(GisketchActionContext context, [Optional] string refreshedAnchorId)
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x5D9AC50", Offset = "0x5D99C50", VA = "0x5D9AC50")]
	[IteratorStateMachine(typeof(_003CShowTitanSpawnNextFrame_003Ed__26))]
	private static IEnumerator ShowTitanSpawnNextFrame(GisketchUIRoot root, GameObject anchor, string refreshedAnchorId)
	{
		return null;
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x5D9AA30", Offset = "0x5D99A30", VA = "0x5D9AA30")]
	private static void ShowTitanSpawn(GisketchUIRoot root, GameObject anchor)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x5D9ACF0", Offset = "0x5D99CF0", VA = "0x5D9ACF0")]
	private static GisketchNodeDefinition[] BuildTitanSpawnNodes(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x5D9B250", Offset = "0x5D9A250", VA = "0x5D9B250")]
	private static void RefreshTitanSpawn(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x5D99470", Offset = "0x5D98470", VA = "0x5D99470")]
	private static GisketchNodeDefinition[] BuildMapNodes(GisketchUIRoot root, HashSet<string> allowed, string[] categories, bool showCategories, Action<string, string> selected)
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x5D990E0", Offset = "0x5D980E0", VA = "0x5D990E0")]
	private static string[] MapCategories(HashSet<string> allowed)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x5D99200", Offset = "0x5D98200", VA = "0x5D99200")]
	private static string CategoryFor(string mapName, string preferredCategory, string[] categories)
	{
		return null;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x5D98340", Offset = "0x5D97340", VA = "0x5D98340")]
	internal static string PreviewSprite(string mapName)
	{
		return null;
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x5D99060", Offset = "0x5D98060", VA = "0x5D99060")]
	private static GisketchUIRoot Root(GisketchActionContext context)
	{
		return null;
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x5D9B370", Offset = "0x5D9A370", VA = "0x5D9B370")]
	public static void OpenCustomContentManager(GisketchActionContext context, string id, string title, string description, string[] names, Action import, Action<string> modify, Action<string> delete, Action openFolder)
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x5D9B500", Offset = "0x5D9A500", VA = "0x5D9B500")]
	private static void ShowCustomContentManager(GisketchUIRoot root, string id, string title, string description, string[] names, Action import, Action<string> modify, Action<string> delete, Action openFolder)
	{
	}
}
