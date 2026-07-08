using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200055C")]
internal class CharacterEditorHumanMenu : CharacterEditorMenu
{
	[Token(Token = "0x4001A9E")]
	[FieldOffset(Offset = "0xA0")]
	public CharacterEditorCostumePanel _costumePanel;

	[Token(Token = "0x4001A9F")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorStatsPanel _statsPanel;

	[Token(Token = "0x4001AA0")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorSkinsPanel _skinsPanel;

	[Token(Token = "0x4001AA1")]
	[FieldOffset(Offset = "0xB8")]
	private CharacterEditorHumanCategoryPanel _categoryPanel;

	[Token(Token = "0x4001AA2")]
	[FieldOffset(Offset = "0xC0")]
	public CharacterEditorEditStatsPopup _editStatsPopup;

	[Token(Token = "0x4001AA3")]
	[FieldOffset(Offset = "0xC8")]
	public CharacterEditorEditPerksPopup _editPerksPopup;

	[Token(Token = "0x4001AA4")]
	[FieldOffset(Offset = "0xD0")]
	public PresetSkinEditPopup _editPresetSkinPopup;

	[Token(Token = "0x4001AA5")]
	[FieldOffset(Offset = "0xD8")]
	public GlobalSkinEditPopup _editGlobalSkinPopup;

	[Token(Token = "0x4001AA6")]
	[FieldOffset(Offset = "0xE0")]
	public IntSetting Weapon;

	[Token(Token = "0x6003840")]
	[Address(RVA = "0x3F536B0", Offset = "0x3F536B0", VA = "0x3F536B0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003841")]
	[Address(RVA = "0x3F537C0", Offset = "0x3F537C0", VA = "0x3F537C0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003842")]
	[Address(RVA = "0x3F538F0", Offset = "0x3F538F0", VA = "0x3F538F0", Slot = "7")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003843")]
	[Address(RVA = "0x3F539C0", Offset = "0x3F539C0", VA = "0x3F539C0", Slot = "8")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6003844")]
	[Address(RVA = "0x3F53E60", Offset = "0x3F53E60", VA = "0x3F53E60", Slot = "9")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6003845")]
	[Address(RVA = "0x3F53FC0", Offset = "0x3F53FC0", VA = "0x3F53FC0")]
	public void ResetCharacterWithSkins(bool fullReset)
	{
	}

	[Token(Token = "0x6003846")]
	[Address(RVA = "0x3F540E0", Offset = "0x3F540E0", VA = "0x3F540E0", Slot = "10")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003847")]
	[Address(RVA = "0x3F54110", Offset = "0x3F54110", VA = "0x3F54110", Slot = "11")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003848")]
	[Address(RVA = "0x3F54160", Offset = "0x3F54160", VA = "0x3F54160")]
	public CharacterEditorHumanMenu()
	{
	}
}
