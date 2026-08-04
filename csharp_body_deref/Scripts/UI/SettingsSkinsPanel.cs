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

[Token(Token = "0x20006F4")]
internal class SettingsSkinsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002198")]
	[FieldOffset(Offset = "0x68")]
	protected Dictionary<string, ICustomSkinSettings> _settings;

	[Token(Token = "0x4002199")]
	[FieldOffset(Offset = "0x70")]
	private IntSetting _lastFilteredSetIndex;

	[Token(Token = "0x400219A")]
	[FieldOffset(Offset = "0x78")]
	private List<int> _lastFilteredOriginalIndices;

	[Token(Token = "0x17000D82")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004504")]
		[Address(RVA = "0x434BA60", Offset = "0x434BA60", VA = "0x434BA60", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D83")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004505")]
		[Address(RVA = "0x434BA70", Offset = "0x434BA70", VA = "0x434BA70", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004506")]
	[Address(RVA = "0x4348D60", Offset = "0x4348D60", VA = "0x4348D60")]
	public void CreateCommonSettings(Transform panelLeft, Transform panelRight)
	{
	}

	[Token(Token = "0x6004507")]
	[Address(RVA = "0x434BEE0", Offset = "0x434BEE0", VA = "0x434BEE0")]
	private void OnSkinsPanelButtonClick(string name)
	{
	}

	[Token(Token = "0x6004508")]
	[Address(RVA = "0x434C590", Offset = "0x434C590", VA = "0x434C590")]
	private void OnSkinsSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x6004509")]
	[Address(RVA = "0x434D240", Offset = "0x434D240", VA = "0x434D240")]
	public void CreateSkinListStringSettings(ListSetting<StringSetting> list, Transform panel, string title)
	{
	}

	[Token(Token = "0x600450A")]
	[Address(RVA = "0x434A740", Offset = "0x434A740", VA = "0x434A740")]
	public void CreateSkinStringSettings(Transform panelLeft, Transform panelRight, float titleWidth = 140f, float elementWidth = 260f, int leftCount = 0)
	{
	}

	[Token(Token = "0x600450B")]
	[Address(RVA = "0x434BAB0", Offset = "0x434BAB0", VA = "0x434BAB0")]
	public ICustomSkinSettings GetCurrentSettings()
	{
		return null;
	}

	[Token(Token = "0x600450C")]
	[Address(RVA = "0x434BB30", Offset = "0x434BB30", VA = "0x434BB30")]
	private void CreateCharacterSelectorDropdown(Transform panel, ElementStyle style, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x600450D")]
	[Address(RVA = "0x434D490", Offset = "0x434D490", VA = "0x434D490")]
	private void OnCharacterSelected(HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x600450E")]
	[Address(RVA = "0x434D4F0", Offset = "0x434D4F0", VA = "0x434D4F0")]
	private void OnGlobalPresetSelected(int filteredIndex, List<int> originalIndices, ICustomSkinSettings settings, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x600450F")]
	[Address(RVA = "0x434CFC0", Offset = "0x434CFC0", VA = "0x434CFC0")]
	private void SelectNewlyCreatedOrCopiedSetInDropdown(ICustomSkinSettings allSets, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x6004510")]
	[Address(RVA = "0x434D640", Offset = "0x434D640", VA = "0x434D640", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004511")]
	[Address(RVA = "0x434D840", Offset = "0x434D840", VA = "0x434D840")]
	public SettingsSkinsPanel()
	{
	}
}
