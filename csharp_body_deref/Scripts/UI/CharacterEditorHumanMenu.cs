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

[Token(Token = "0x20007BE")]
internal class CharacterEditorHumanMenu : CharacterEditorMenu
{
	[Token(Token = "0x40026EE")]
	[FieldOffset(Offset = "0xA0")]
	public CharacterEditorCostumePanel _costumePanel;

	[Token(Token = "0x40026EF")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorStatsPanel _statsPanel;

	[Token(Token = "0x40026F0")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorSkinsPanel _skinsPanel;

	[Token(Token = "0x40026F1")]
	[FieldOffset(Offset = "0xB8")]
	private CharacterEditorHumanCategoryPanel _categoryPanel;

	[Token(Token = "0x40026F2")]
	[FieldOffset(Offset = "0xC0")]
	public CharacterEditorEditStatsPopup _editStatsPopup;

	[Token(Token = "0x40026F3")]
	[FieldOffset(Offset = "0xC8")]
	public CharacterEditorEditPerksPopup _editPerksPopup;

	[Token(Token = "0x40026F4")]
	[FieldOffset(Offset = "0xD0")]
	public PresetSkinEditPopup _editPresetSkinPopup;

	[Token(Token = "0x40026F5")]
	[FieldOffset(Offset = "0xD8")]
	public GlobalSkinEditPopup _editGlobalSkinPopup;

	[Token(Token = "0x40026F6")]
	[FieldOffset(Offset = "0xE0")]
	public IntSetting Weapon;

	[Token(Token = "0x6004AAC")]
	[Address(RVA = "0x5BD4F20", Offset = "0x5BD3F20", VA = "0x5BD4F20", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004AAD")]
	[Address(RVA = "0x5BD5030", Offset = "0x5BD4030", VA = "0x5BD5030", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004AAE")]
	[Address(RVA = "0x5BD5160", Offset = "0x5BD4160", VA = "0x5BD5160", Slot = "8")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004AAF")]
	[Address(RVA = "0x5BD5230", Offset = "0x5BD4230", VA = "0x5BD5230", Slot = "9")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6004AB0")]
	[Address(RVA = "0x5BD5820", Offset = "0x5BD4820", VA = "0x5BD5820", Slot = "10")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6004AB1")]
	[Address(RVA = "0x5BD5980", Offset = "0x5BD4980", VA = "0x5BD5980")]
	public void ResetCharacterWithSkins(bool fullReset)
	{
	}

	[Token(Token = "0x6004AB2")]
	[Address(RVA = "0x5BD5AD0", Offset = "0x5BD4AD0", VA = "0x5BD5AD0", Slot = "11")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004AB3")]
	[Address(RVA = "0x5BD5B00", Offset = "0x5BD4B00", VA = "0x5BD5B00", Slot = "12")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004AB4")]
	[Address(RVA = "0x5BD5B50", Offset = "0x5BD4B50", VA = "0x5BD5B50")]
	public CharacterEditorHumanMenu()
	{
	}
}
