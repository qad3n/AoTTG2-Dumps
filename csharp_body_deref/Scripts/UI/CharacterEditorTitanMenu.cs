// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000724")]
internal class CharacterEditorTitanMenu : CharacterEditorMenu
{
	[Token(Token = "0x40023A9")]
	[FieldOffset(Offset = "0xA0")]
	private CharacterEditorTitanCostumePanel _costumePanel;

	[Token(Token = "0x40023AA")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorTitanCategoryPanel _categoryPanel;

	[Token(Token = "0x40023AB")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorTitanSkinsPanel _skinsPanel;

	[Token(Token = "0x40023AC")]
	[FieldOffset(Offset = "0xB8")]
	private int _currentBodyType;

	[Token(Token = "0x6004609")]
	[Address(RVA = "0x21E0E70", Offset = "0x21DF470", VA = "0x1821E0E70", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x600460A")]
	[Address(RVA = "0x21E0E60", Offset = "0x21DF460", VA = "0x1821E0E60", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x600460B")]
	[Address(RVA = "0x21DA690", Offset = "0x21D8C90", VA = "0x1821DA690", Slot = "7")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600460C")]
	[Address(RVA = "0x21E09F0", Offset = "0x21DEFF0", VA = "0x1821E09F0", Slot = "8")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x600460D")]
	[Address(RVA = "0x21E0CC0", Offset = "0x21DF2C0", VA = "0x1821E0CC0", Slot = "9")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x600460E")]
	[Address(RVA = "0x21D9C30", Offset = "0x21D8230", VA = "0x1821D9C30", Slot = "10")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x600460F")]
	[Address(RVA = "0x21E0990", Offset = "0x21DEF90", VA = "0x1821E0990", Slot = "11")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004610")]
	[Address(RVA = "0x21E0F40", Offset = "0x21DF540", VA = "0x1821E0F40")]
	public CharacterEditorTitanMenu()
	{
	}
}
