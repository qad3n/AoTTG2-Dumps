// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000194")]
internal static class AottgSettingsSkinsCategory
{
	[Token(Token = "0x40008B4")]
	private const string CategoryId = "skins";

	[Token(Token = "0x40008B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static float _pendingScrollOffset;

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x2394CF0", Offset = "0x23932F0", VA = "0x182394CF0")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x2398040", Offset = "0x2396640", VA = "0x182398040")]
	public static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x2395580", Offset = "0x2393B80", VA = "0x182395580")]
	private static AottgSettingsGroup[] Groups()
	{
		return null;
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x2395C30", Offset = "0x2394230", VA = "0x182395C30")]
	private static AottgSettingsGroup HumanGroup(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x2398070", Offset = "0x2396670", VA = "0x182398070")]
	private static AottgSettingsGroup TitanGroup(BaseCustomSkinSettings<TitanCustomSkinSet> settings)
	{
		return null;
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x2393D40", Offset = "0x2392340", VA = "0x182393D40")]
	private static void AddTitanSlotBlocks(List<AottgSettingsRowBlock> blocks, TitanCustomSkinSet set, int index)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x2397C60", Offset = "0x2396260", VA = "0x182397C60")]
	private static string SlotCountLabel(TitanCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x2395100", Offset = "0x2393700", VA = "0x182395100")]
	private static string CommonLocale(string item)
	{
		return null;
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x2398C60", Offset = "0x2397260", VA = "0x182398C60")]
	private static string TitanLocale(string item, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x2398A70", Offset = "0x2397070", VA = "0x182398A70")]
	private static string[] TitanIndexOptions(string prefix, int count)
	{
		return null;
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x23988D0", Offset = "0x2396ED0", VA = "0x1823988D0")]
	private static string[] TitanHairOptions()
	{
		return null;
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x2394B50", Offset = "0x2393150", VA = "0x182394B50")]
	private static void AddTitanSlot(GisketchActionContext context, TitanCustomSkinSet set)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x2396840", Offset = "0x2394E40", VA = "0x182396840")]
	private static void RemoveTitanSlot(GisketchActionContext context, TitanCustomSkinSet set, TitanCustomSkinSlot slot)
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x23973A0", Offset = "0x23959A0", VA = "0x1823973A0")]
	private static AottgSettingsGroup SkinGroup(string id, string title, ICustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x2395870", Offset = "0x2393E70", VA = "0x182395870")]
	private static AottgComponent HumanGlobalSetDropdown(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x2394DA0", Offset = "0x23933A0", VA = "0x182394DA0")]
	private static AottgComponent CharacterDropdown(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x23963F0", Offset = "0x23949F0", VA = "0x1823963F0")]
	private static BaseSettingsContainer HumanSkinContainer(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x2395700", Offset = "0x2393D00", VA = "0x182395700")]
	private static BaseSettingsContainer HumanCharacterSkinContainer(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x2396D50", Offset = "0x2395350", VA = "0x182396D50")]
	private static AottgComponent SetDropdown(string id, string sub, IntSetting setting, string[] names, Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x2395150", Offset = "0x2393750", VA = "0x182395150")]
	private static AottgComponent CommonSkinSwitch(string id, string prefix, string item, BoolSetting setting, [Optional] string tooltipItem)
	{
		return null;
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x2396F30", Offset = "0x2395530", VA = "0x182396F30")]
	private static string SkinCommonFallback(string item)
	{
		return null;
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x2396900", Offset = "0x2394F00", VA = "0x182396900")]
	private static AottgComponent SetActions(string id, ISetSettingsContainer settings, Action afterChange)
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x23935F0", Offset = "0x2391BF0", VA = "0x1823935F0")]
	private static void AddSkinInputRows(List<AottgComponent> rows, List<AottgComponent> skinRows, string idPrefix, string sub, BaseSettingsContainer container, bool characterMode)
	{
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x2396E60", Offset = "0x2395460", VA = "0x182396E60")]
	private static string SetScopeId(BaseSettingsContainer container)
	{
		return null;
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x2396FD0", Offset = "0x23955D0", VA = "0x182396FD0")]
	private static string SkinDisplayLabel(string name)
	{
		return null;
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x2397890", Offset = "0x2395E90", VA = "0x182397890")]
	private static string SkinLocaleItem(string name)
	{
		return null;
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x2398D00", Offset = "0x2397300", VA = "0x182398D00")]
	private static bool UsesExactSkinLabel(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x2397D60", Offset = "0x2396360", VA = "0x182397D60")]
	private static string SplitSkinName(string name)
	{
		return null;
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x2397FB0", Offset = "0x23965B0", VA = "0x182397FB0")]
	private static void SyncHumanGlobalSelection(HumanCustomSkinSettings settings)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x2394C20", Offset = "0x2393220", VA = "0x182394C20")]
	private static Action AfterSkinSetChange(GisketchActionContext context, Action beforeRefresh)
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x2396620", Offset = "0x2394C20", VA = "0x182396620")]
	private static void RefreshSkins(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x2395340", Offset = "0x2393940", VA = "0x182395340")]
	private static float CurrentScrollOffset(GisketchUIRoot root)
	{
		return default(float);
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x2395470", Offset = "0x2393A70", VA = "0x182395470")]
	private static Transform FindById(Transform root, string id)
	{
		return null;
	}
}
