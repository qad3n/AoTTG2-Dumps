// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory
// Update status: NEW in this game update
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

[Token(Token = "0x2000185")]
internal static class AottgSettingsKeybindsCategory
{
	[Token(Token = "0x400087E")]
	internal const string CategoryId = "keybinds";

	[Token(Token = "0x400087F")]
	internal const string DefaultTabId = "general";

	[Token(Token = "0x4000880")]
	internal const string SelectedTabStateKey = "settings.keybinds.selectedTab";

	[Token(Token = "0x4000881")]
	private const string ActiveContentId = "settings-keybinds-active-content";

	[Token(Token = "0x4000882")]
	private const string TabStripId = "settings-keybinds-tabs";

	[Token(Token = "0x4000883")]
	private const string CategoryTitleId = "settings-keybinds-title";

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x231CD20", Offset = "0x231B320", VA = "0x18231CD20")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x231C980", Offset = "0x231AF80", VA = "0x18231C980")]
	internal static void Build(AottgUi content, AottgScreenSectionContext context, string selectedTabId, float scrollOffset = 0f)
	{
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x231F0F0", Offset = "0x231D6F0", VA = "0x18231F0F0")]
	public static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x231D450", Offset = "0x231BA50", VA = "0x18231D450")]
	private static AottgSettingsGroup[] Groups()
	{
		return null;
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x231F030", Offset = "0x231D630", VA = "0x18231F030")]
	internal static string SelectedTab(GisketchUIRoot root)
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x231E7A0", Offset = "0x231CDA0", VA = "0x18231E7A0")]
	internal static string ScrollStateKey(string tabId)
	{
		return null;
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x231E650", Offset = "0x231CC50", VA = "0x18231E650")]
	internal static float SavedScroll(GisketchUIRoot root, string tabId)
	{
		return default(float);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x231ECF0", Offset = "0x231D2F0", VA = "0x18231ECF0")]
	private static void SelectTab(GameObject source, string tabId)
	{
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x231E4D0", Offset = "0x231CAD0", VA = "0x18231E4D0")]
	private static void SaveCurrentScroll(GisketchUIRoot root, string tabId)
	{
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x231CD90", Offset = "0x231B390", VA = "0x18231CD90")]
	internal static GisketchVirtualScrollRuntime FindActiveScroll(Transform root)
	{
		return null;
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x231CE30", Offset = "0x231B430", VA = "0x18231CE30")]
	private static Transform Find(Transform root, string id)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x231D170", Offset = "0x231B770", VA = "0x18231D170")]
	private static AottgSettingsGroup GroupFor(string tabId)
	{
		return null;
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x231F120", Offset = "0x231D720", VA = "0x18231F120")]
	private static AottgSubtab[] Tabs()
	{
		return null;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x231E410", Offset = "0x231CA10", VA = "0x18231E410")]
	private static string NormalizeTabId(string tabId)
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x231C5F0", Offset = "0x231ABF0", VA = "0x18231C5F0")]
	private static void AddSearchBridge(AottgUi page)
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x231E7F0", Offset = "0x231CDF0", VA = "0x18231E7F0")]
	private static GisketchNodeDefinition[] SearchMetadata()
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x231BC00", Offset = "0x231A200", VA = "0x18231BC00")]
	private static void AddContainerMetadata(List<GisketchNodeDefinition> nodes, string id, string title, BaseSettingsContainer container, bool titanLabels)
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x231C460", Offset = "0x231AA60", VA = "0x18231C460")]
	private static void AddMetadata(List<GisketchNodeDefinition> nodes, string id, string title, string[][] metadata)
	{
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x231EB80", Offset = "0x231D180", VA = "0x18231EB80")]
	private static GisketchNodeDefinition SearchNode(string id, string label, string group)
	{
		return null;
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x231D7A0", Offset = "0x231BDA0", VA = "0x18231D7A0")]
	private static string[][] HumanSpecialMetadata()
	{
		return null;
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x231D260", Offset = "0x231B860", VA = "0x18231D260")]
	private static AottgSettingsGroup Group(string id, string title, BaseSettingsContainer container, bool titanLabels, params AottgComponent[] extraRows)
	{
		return null;
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x231BFC0", Offset = "0x231A5C0", VA = "0x18231BFC0")]
	private static void AddKeybindRows(List<AottgComponent> rows, string id, string sub, BaseSettingsContainer container, bool titanLabels)
	{
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x231CF40", Offset = "0x231B540", VA = "0x18231CF40")]
	private static AottgComponent[] GeneralSpecialRows(InputSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x231DC60", Offset = "0x231C260", VA = "0x18231DC60")]
	private static AottgComponent[] HumanSpecialRows(InputSettings settings)
	{
		return null;
	}
}
