// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001A1")]
internal static class AottgSettingsSkinsCategory
{
	[Token(Token = "0x400090A")]
	private const string CategoryId = "skins";

	[Token(Token = "0x400090B")]
	private const string SetsChangedId = "settings-skins-sets-changed";

	[Token(Token = "0x400090C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static float _pendingScrollOffset;

	[Token(Token = "0x400090D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int _setsRevision;

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x5D4BA00", Offset = "0x5D4AA00", VA = "0x5D4BA00")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x5D4BC70", Offset = "0x5D4AC70", VA = "0x5D4BC70")]
	public static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x5D4BB00", Offset = "0x5D4AB00", VA = "0x5D4BB00")]
	private static AottgSettingsGroup[] Groups()
	{
		return null;
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x5D4BC90", Offset = "0x5D4AC90", VA = "0x5D4BC90")]
	private static AottgSettingsGroup HumanGroup(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x5D4C670", Offset = "0x5D4B670", VA = "0x5D4C670")]
	private static AottgSettingsGroup TitanGroup(BaseCustomSkinSettings<TitanCustomSkinSet> settings)
	{
		return null;
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x5D4F3C0", Offset = "0x5D4E3C0", VA = "0x5D4F3C0")]
	private static void AddTitanSlotBlocks(List<AottgSettingsRowBlock> blocks, TitanCustomSkinSet set, int index)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x5D4F2D0", Offset = "0x5D4E2D0", VA = "0x5D4F2D0")]
	private static string SlotCountLabel(TitanCustomSkinSet set)
	{
		return null;
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x5D504B0", Offset = "0x5D4F4B0", VA = "0x5D504B0")]
	private static string CommonLocale(string item)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x5D4FFE0", Offset = "0x5D4EFE0", VA = "0x5D4FFE0")]
	private static string TitanLocale(string item)
	{
		return null;
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x5D50090", Offset = "0x5D4F090", VA = "0x5D50090")]
	private static string[] TitanIndexOptions(string prefix, int count)
	{
		return null;
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x5D502D0", Offset = "0x5D4F2D0", VA = "0x5D502D0")]
	private static string[] TitanHairOptions()
	{
		return null;
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x5D50540", Offset = "0x5D4F540", VA = "0x5D50540")]
	private static void AddTitanSlot(GisketchActionContext context, TitanCustomSkinSet set)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x5D50920", Offset = "0x5D4F920", VA = "0x5D50920")]
	private static void RemoveTitanSlot(GisketchActionContext context, TitanCustomSkinSet set, TitanCustomSkinSlot slot)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x5D4CF90", Offset = "0x5D4BF90", VA = "0x5D4CF90")]
	private static AottgSettingsGroup SkinGroup(string id, ICustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x5D4DB20", Offset = "0x5D4CB20", VA = "0x5D4DB20")]
	private static AottgComponent HumanGlobalSetDropdown(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x5D4D6E0", Offset = "0x5D4C6E0", VA = "0x5D4D6E0")]
	private static AottgComponent CharacterDropdown(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x5D4E7A0", Offset = "0x5D4D7A0", VA = "0x5D4E7A0")]
	private static BaseSettingsContainer HumanSkinContainer(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x5D509E0", Offset = "0x5D4F9E0", VA = "0x5D509E0")]
	private static BaseSettingsContainer HumanCharacterSkinContainer(HumanCustomSkinSettings settings)
	{
		return null;
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x5D4F160", Offset = "0x5D4E160", VA = "0x5D4F160")]
	private static AottgComponent SetDropdown(string id, string sub, IntSetting setting, string[] names, Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x5D4E5B0", Offset = "0x5D4D5B0", VA = "0x5D4E5B0")]
	private static AottgComponent CommonSkinSwitch(string id, string prefix, string item, BoolSetting setting, [Optional] string tooltipItem)
	{
		return null;
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x5D4E070", Offset = "0x5D4D070", VA = "0x5D4E070")]
	private static AottgComponent SetActions(string id, ISetSettingsContainer settings, Action afterChange)
	{
		return null;
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x5D4E810", Offset = "0x5D4D810", VA = "0x5D4E810")]
	private static void AddSkinInputRows(List<AottgComponent> rows, List<AottgComponent> skinRows, string idPrefix, string sub, BaseSettingsContainer container, bool characterMode)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x5D4FF10", Offset = "0x5D4EF10", VA = "0x5D4FF10")]
	private static string SetScopeId(BaseSettingsContainer container)
	{
		return null;
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x5D50CB0", Offset = "0x5D4FCB0", VA = "0x5D50CB0")]
	private static string SplitSkinName(string name)
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x5D50F70", Offset = "0x5D4FF70", VA = "0x5D50F70")]
	private static void SyncHumanGlobalSelection(HumanCustomSkinSettings settings)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x5D50FF0", Offset = "0x5D4FFF0", VA = "0x5D50FF0")]
	private static Action AfterSkinSetChange(GisketchActionContext context, Action beforeRefresh)
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x5D50600", Offset = "0x5D4F600", VA = "0x5D50600")]
	private static void MarkSetsChanged()
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x5D50810", Offset = "0x5D4F810", VA = "0x5D50810")]
	private static void RefreshSkins(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x5D510D0", Offset = "0x5D500D0", VA = "0x5D510D0")]
	private static float CurrentScrollOffset(GisketchUIRoot root)
	{
		return default(float);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x5D51230", Offset = "0x5D50230", VA = "0x5D51230")]
	private static Transform FindById(Transform root, string id)
	{
		return null;
	}
}
