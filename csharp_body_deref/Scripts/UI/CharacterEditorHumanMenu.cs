// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorHumanMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorHumanMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20005A1")]
internal class CharacterEditorHumanMenu : CharacterEditorMenu
{
	[Token(Token = "0x4001BB1")]
	[FieldOffset(Offset = "0xA0")]
	public CharacterEditorCostumePanel _costumePanel;

	[Token(Token = "0x4001BB2")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorStatsPanel _statsPanel;

	[Token(Token = "0x4001BB3")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorSkinsPanel _skinsPanel;

	[Token(Token = "0x4001BB4")]
	[FieldOffset(Offset = "0xB8")]
	private CharacterEditorHumanCategoryPanel _categoryPanel;

	[Token(Token = "0x4001BB5")]
	[FieldOffset(Offset = "0xC0")]
	public CharacterEditorEditStatsPopup _editStatsPopup;

	[Token(Token = "0x4001BB6")]
	[FieldOffset(Offset = "0xC8")]
	public CharacterEditorEditPerksPopup _editPerksPopup;

	[Token(Token = "0x4001BB7")]
	[FieldOffset(Offset = "0xD0")]
	public PresetSkinEditPopup _editPresetSkinPopup;

	[Token(Token = "0x4001BB8")]
	[FieldOffset(Offset = "0xD8")]
	public GlobalSkinEditPopup _editGlobalSkinPopup;

	[Token(Token = "0x4001BB9")]
	[FieldOffset(Offset = "0xE0")]
	public IntSetting Weapon;

	[Token(Token = "0x6003A4F")]
	[Address(RVA = "0x4261530", Offset = "0x4261530", VA = "0x4261530", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003A50")]
	[Address(RVA = "0x4261640", Offset = "0x4261640", VA = "0x4261640", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003A51")]
	[Address(RVA = "0x4261770", Offset = "0x4261770", VA = "0x4261770", Slot = "7")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003A52")]
	[Address(RVA = "0x4261840", Offset = "0x4261840", VA = "0x4261840", Slot = "8")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6003A53")]
	[Address(RVA = "0x4261CE0", Offset = "0x4261CE0", VA = "0x4261CE0", Slot = "9")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6003A54")]
	[Address(RVA = "0x4261E40", Offset = "0x4261E40", VA = "0x4261E40")]
	public void ResetCharacterWithSkins(bool fullReset)
	{
	}

	[Token(Token = "0x6003A55")]
	[Address(RVA = "0x4261F60", Offset = "0x4261F60", VA = "0x4261F60", Slot = "10")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003A56")]
	[Address(RVA = "0x4261F90", Offset = "0x4261F90", VA = "0x4261F90", Slot = "11")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003A57")]
	[Address(RVA = "0x4261FE0", Offset = "0x4261FE0", VA = "0x4261FE0")]
	public CharacterEditorHumanMenu()
	{
	}
}
