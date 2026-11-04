// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsSkinsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsSkinsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSkinsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000873")]
internal class SettingsSkinsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002A30")]
	[FieldOffset(Offset = "0x68")]
	protected Dictionary<string, ICustomSkinSettings> _settings;

	[Token(Token = "0x4002A31")]
	[FieldOffset(Offset = "0x70")]
	private IntSetting _lastFilteredSetIndex;

	[Token(Token = "0x4002A32")]
	[FieldOffset(Offset = "0x78")]
	private List<int> _lastFilteredOriginalIndices;

	[Token(Token = "0x17000EE2")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600513D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EE3")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600513E")]
		[Address(RVA = "0x22EA1A0", Offset = "0x22E87A0", VA = "0x1822EA1A0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600513F")]
	[Address(RVA = "0x22E7060", Offset = "0x22E5660", VA = "0x1822E7060")]
	public void CreateCommonSettings(Transform panelLeft, Transform panelRight)
	{
	}

	[Token(Token = "0x6005140")]
	[Address(RVA = "0x22E93D0", Offset = "0x22E79D0", VA = "0x1822E93D0")]
	private void OnSkinsPanelButtonClick(string name)
	{
	}

	[Token(Token = "0x6005141")]
	[Address(RVA = "0x22E9810", Offset = "0x22E7E10", VA = "0x1822E9810")]
	private void OnSkinsSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x6005142")]
	[Address(RVA = "0x22E8480", Offset = "0x22E6A80", VA = "0x1822E8480")]
	public void CreateSkinListStringSettings(ListSetting<StringSetting> list, Transform panel, string title)
	{
	}

	[Token(Token = "0x6005143")]
	[Address(RVA = "0x22E86D0", Offset = "0x22E6CD0", VA = "0x1822E86D0")]
	public void CreateSkinStringSettings(Transform panelLeft, Transform panelRight, float titleWidth = 140f, float elementWidth = 260f, int leftCount = 0)
	{
	}

	[Token(Token = "0x6005144")]
	[Address(RVA = "0x22E9210", Offset = "0x22E7810", VA = "0x1822E9210")]
	public ICustomSkinSettings GetCurrentSettings()
	{
		return null;
	}

	[Token(Token = "0x6005145")]
	[Address(RVA = "0x22E6D50", Offset = "0x22E5350", VA = "0x1822E6D50")]
	private void CreateCharacterSelectorDropdown(Transform panel, ElementStyle style, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x6005146")]
	[Address(RVA = "0x22E9270", Offset = "0x22E7870", VA = "0x1822E9270")]
	private void OnCharacterSelected(HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x6005147")]
	[Address(RVA = "0x22E92E0", Offset = "0x22E78E0", VA = "0x1822E92E0")]
	private void OnGlobalPresetSelected(int filteredIndex, List<int> originalIndices, ICustomSkinSettings settings, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x6005148")]
	[Address(RVA = "0x22E9FA0", Offset = "0x22E85A0", VA = "0x1822E9FA0")]
	private void SelectNewlyCreatedOrCopiedSetInDropdown(ICustomSkinSettings allSets, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x6005149")]
	[Address(RVA = "0x22E9DA0", Offset = "0x22E83A0", VA = "0x1822E9DA0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x600514A")]
	[Address(RVA = "0x22EA120", Offset = "0x22E8720", VA = "0x1822EA120")]
	public SettingsSkinsPanel()
	{
	}
}
