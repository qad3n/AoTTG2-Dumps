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

[Token(Token = "0x2000714")]
internal class CharacterEditorHumanMenu : CharacterEditorMenu
{
	[Token(Token = "0x400236E")]
	[FieldOffset(Offset = "0xA0")]
	public CharacterEditorCostumePanel _costumePanel;

	[Token(Token = "0x400236F")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorStatsPanel _statsPanel;

	[Token(Token = "0x4002370")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorSkinsPanel _skinsPanel;

	[Token(Token = "0x4002371")]
	[FieldOffset(Offset = "0xB8")]
	private CharacterEditorHumanCategoryPanel _categoryPanel;

	[Token(Token = "0x4002372")]
	[FieldOffset(Offset = "0xC0")]
	public CharacterEditorEditStatsPopup _editStatsPopup;

	[Token(Token = "0x4002373")]
	[FieldOffset(Offset = "0xC8")]
	public CharacterEditorEditPerksPopup _editPerksPopup;

	[Token(Token = "0x4002374")]
	[FieldOffset(Offset = "0xD0")]
	public PresetSkinEditPopup _editPresetSkinPopup;

	[Token(Token = "0x4002375")]
	[FieldOffset(Offset = "0xD8")]
	public GlobalSkinEditPopup _editGlobalSkinPopup;

	[Token(Token = "0x4002376")]
	[FieldOffset(Offset = "0xE0")]
	public IntSetting Weapon;

	[Token(Token = "0x6004580")]
	[Address(RVA = "0x21DA5D0", Offset = "0x21D8BD0", VA = "0x1821DA5D0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004581")]
	[Address(RVA = "0x21DA4B0", Offset = "0x21D8AB0", VA = "0x1821DA4B0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004582")]
	[Address(RVA = "0x21D9C60", Offset = "0x21D8260", VA = "0x1821D9C60", Slot = "7")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004583")]
	[Address(RVA = "0x21D9CF0", Offset = "0x21D82F0", VA = "0x1821D9CF0", Slot = "8")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6004584")]
	[Address(RVA = "0x21DA330", Offset = "0x21D8930", VA = "0x1821DA330", Slot = "9")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6004585")]
	[Address(RVA = "0x21DA1B0", Offset = "0x21D87B0", VA = "0x1821DA1B0")]
	public void ResetCharacterWithSkins(bool fullReset)
	{
	}

	[Token(Token = "0x6004586")]
	[Address(RVA = "0x21D9C30", Offset = "0x21D8230", VA = "0x1821D9C30", Slot = "10")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004587")]
	[Address(RVA = "0x21D9BD0", Offset = "0x21D81D0", VA = "0x1821D9BD0", Slot = "11")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004588")]
	[Address(RVA = "0x21DA5E0", Offset = "0x21D8BE0", VA = "0x1821DA5E0")]
	public CharacterEditorHumanMenu()
	{
	}
}
