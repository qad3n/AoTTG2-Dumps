// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Game;
using Gisketch.Aottg2UI.Virtualization;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200018E")]
internal static class AottgSettingsKeybindsCategory
{
	[Token(Token = "0x40008C9")]
	internal const string CategoryId = "keybinds";

	[Token(Token = "0x40008CA")]
	internal const string DefaultTabId = "general";

	[Token(Token = "0x40008CB")]
	internal const string SelectedTabStateKey = "settings.keybinds.selectedTab";

	[Token(Token = "0x40008CC")]
	private const string ActiveContentId = "settings-keybinds-active-content";

	[Token(Token = "0x40008CD")]
	private const string TabStripId = "settings-keybinds-tabs";

	[Token(Token = "0x40008CE")]
	private const string CategoryTitleId = "settings-keybinds-title";

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TabIds;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[][] HumanSpecialItems;

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x5D428F0", Offset = "0x5D418F0", VA = "0x5D428F0")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x5D42950", Offset = "0x5D41950", VA = "0x5D42950")]
	internal static void Build(AottgUi content, AottgScreenSectionContext context, string selectedTabId, float scrollOffset = 0f)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x5D42E40", Offset = "0x5D41E40", VA = "0x5D42E40")]
	public static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x5D42E90", Offset = "0x5D41E90", VA = "0x5D42E90")]
	private static AottgSettingsGroup[] Groups()
	{
		return null;
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x5D43D60", Offset = "0x5D42D60", VA = "0x5D43D60")]
	internal static string SelectedTab(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x5D43E50", Offset = "0x5D42E50", VA = "0x5D43E50")]
	internal static string ScrollStateKey(string tabId)
	{
		return null;
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x5D43EC0", Offset = "0x5D42EC0", VA = "0x5D43EC0")]
	internal static float SavedScroll(GisketchUIRoot root, string tabId)
	{
		return default(float);
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x5D44060", Offset = "0x5D43060", VA = "0x5D44060")]
	private static void SelectTab(GameObject source, string tabId)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x5D44200", Offset = "0x5D43200", VA = "0x5D44200")]
	private static void SaveCurrentScroll(GisketchUIRoot root, string tabId)
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x5D44400", Offset = "0x5D43400", VA = "0x5D44400")]
	internal static GisketchVirtualScrollRuntime FindActiveScroll(Transform root)
	{
		return null;
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x5D444C0", Offset = "0x5D434C0", VA = "0x5D444C0")]
	private static Transform Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x5D42D10", Offset = "0x5D41D10", VA = "0x5D42D10")]
	private static AottgSettingsGroup GroupFor(string tabId)
	{
		return null;
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x5D44600", Offset = "0x5D43600", VA = "0x5D44600")]
	private static AottgSubtab[] Tabs()
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x5D42C10", Offset = "0x5D41C10", VA = "0x5D42C10")]
	private static string NormalizeTabId(string tabId)
	{
		return null;
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x5D44930", Offset = "0x5D43930", VA = "0x5D44930")]
	private static void AddSearchBridge(AottgUi page)
	{
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x5D44B00", Offset = "0x5D43B00", VA = "0x5D44B00")]
	private static GisketchNodeDefinition[] SearchMetadata()
	{
		return null;
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x5D44F60", Offset = "0x5D43F60", VA = "0x5D44F60")]
	private static void AddContainerMetadata(List<GisketchNodeDefinition> nodes, string tabId, BaseSettingsContainer container, bool titanLabels)
	{
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x5D454B0", Offset = "0x5D444B0", VA = "0x5D454B0")]
	private static GisketchNodeDefinition SearchNode(string id, string label, string tabId)
	{
		return null;
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x5D43620", Offset = "0x5D42620", VA = "0x5D43620")]
	private static AottgSettingsGroup Group(string tabId, BaseSettingsContainer container, bool titanLabels, params AottgComponent[] extraRows)
	{
		return null;
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x5D45A20", Offset = "0x5D44A20", VA = "0x5D45A20")]
	private static void AddKeybindRows(List<AottgComponent> rows, string tabId, BaseSettingsContainer container, bool titanLabels)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x5D45830", Offset = "0x5D44830", VA = "0x5D45830")]
	private static string RowId(string tabId, string name)
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x5D458A0", Offset = "0x5D448A0", VA = "0x5D458A0")]
	private static string Sub(string tabId)
	{
		return null;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x5D44850", Offset = "0x5D43850", VA = "0x5D44850")]
	private static string GroupTitle(string tabId)
	{
		return null;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x5D45920", Offset = "0x5D44920", VA = "0x5D45920")]
	private static string KeybindLabel(string sub, string labelName, bool titanLabels)
	{
		return null;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x5D458B0", Offset = "0x5D448B0", VA = "0x5D458B0")]
	private static string KeybindLabelName(string name, bool titanLabels)
	{
		return null;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x5D46370", Offset = "0x5D45370", VA = "0x5D46370")]
	private static bool IsRawAttackLabel(string labelName, bool titanLabels)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x5D46290", Offset = "0x5D45290", VA = "0x5D46290")]
	private static string KeybindLabelFallback(string labelName, bool titanLabels)
	{
		return null;
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x5D46140", Offset = "0x5D45140", VA = "0x5D46140")]
	private static string TooltipKeyIfPresent(string labelKey)
	{
		return null;
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x5D45FE0", Offset = "0x5D44FE0", VA = "0x5D45FE0")]
	private static string KeybindLabelKey(string sub, string labelName, bool titanLabels)
	{
		return null;
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x5D43440", Offset = "0x5D42440", VA = "0x5D43440")]
	private static AottgComponent[] GeneralSpecialRows(InputSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x5D437F0", Offset = "0x5D427F0", VA = "0x5D437F0")]
	private static AottgComponent[] HumanSpecialRows(InputSettings settings)
	{
		return null;
	}
}
