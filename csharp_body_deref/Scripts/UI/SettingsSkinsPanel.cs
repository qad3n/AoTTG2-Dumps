using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006A6")]
internal class SettingsSkinsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x400203B")]
	[FieldOffset(Offset = "0x68")]
	protected Dictionary<string, ICustomSkinSettings> _settings;

	[Token(Token = "0x400203C")]
	[FieldOffset(Offset = "0x70")]
	private IntSetting _lastFilteredSetIndex;

	[Token(Token = "0x400203D")]
	[FieldOffset(Offset = "0x78")]
	private List<int> _lastFilteredOriginalIndices;

	[Token(Token = "0x17000D08")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600429D")]
		[Address(RVA = "0x4036690", Offset = "0x4036690", VA = "0x4036690", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D09")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600429E")]
		[Address(RVA = "0x40366A0", Offset = "0x40366A0", VA = "0x40366A0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600429F")]
	[Address(RVA = "0x4033990", Offset = "0x4033990", VA = "0x4033990")]
	public void CreateCommonSettings(Transform panelLeft, Transform panelRight)
	{
	}

	[Token(Token = "0x60042A0")]
	[Address(RVA = "0x4036B10", Offset = "0x4036B10", VA = "0x4036B10")]
	private void OnSkinsPanelButtonClick(string name)
	{
	}

	[Token(Token = "0x60042A1")]
	[Address(RVA = "0x40371C0", Offset = "0x40371C0", VA = "0x40371C0")]
	private void OnSkinsSetOperationFinish(string name)
	{
	}

	[Token(Token = "0x60042A2")]
	[Address(RVA = "0x4037E70", Offset = "0x4037E70", VA = "0x4037E70")]
	public void CreateSkinListStringSettings(ListSetting<StringSetting> list, Transform panel, string title)
	{
	}

	[Token(Token = "0x60042A3")]
	[Address(RVA = "0x4035370", Offset = "0x4035370", VA = "0x4035370")]
	public void CreateSkinStringSettings(Transform panelLeft, Transform panelRight, float titleWidth = 140f, float elementWidth = 260f, int leftCount = 0)
	{
	}

	[Token(Token = "0x60042A4")]
	[Address(RVA = "0x40366E0", Offset = "0x40366E0", VA = "0x40366E0")]
	public ICustomSkinSettings GetCurrentSettings()
	{
		return null;
	}

	[Token(Token = "0x60042A5")]
	[Address(RVA = "0x4036760", Offset = "0x4036760", VA = "0x4036760")]
	private void CreateCharacterSelectorDropdown(Transform panel, ElementStyle style, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x60042A6")]
	[Address(RVA = "0x40380C0", Offset = "0x40380C0", VA = "0x40380C0")]
	private void OnCharacterSelected(HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x60042A7")]
	[Address(RVA = "0x4038120", Offset = "0x4038120", VA = "0x4038120")]
	private void OnGlobalPresetSelected(int filteredIndex, List<int> originalIndices, ICustomSkinSettings settings, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x60042A8")]
	[Address(RVA = "0x4037BF0", Offset = "0x4037BF0", VA = "0x4037BF0")]
	private void SelectNewlyCreatedOrCopiedSetInDropdown(ICustomSkinSettings allSets, HumanCustomSkinSettings humanSettings)
	{
	}

	[Token(Token = "0x60042A9")]
	[Address(RVA = "0x4038270", Offset = "0x4038270", VA = "0x4038270", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60042AA")]
	[Address(RVA = "0x4038470", Offset = "0x4038470", VA = "0x4038470")]
	public SettingsSkinsPanel()
	{
	}
}
