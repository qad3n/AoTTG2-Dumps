// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007CC")]
internal class CharacterEditorTitanMenu : CharacterEditorMenu
{
	[Token(Token = "0x4002725")]
	[FieldOffset(Offset = "0xA0")]
	private CharacterEditorTitanCostumePanel _costumePanel;

	[Token(Token = "0x4002726")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorTitanCategoryPanel _categoryPanel;

	[Token(Token = "0x4002727")]
	[FieldOffset(Offset = "0xB0")]
	private CharacterEditorTitanSkinsPanel _skinsPanel;

	[Token(Token = "0x4002728")]
	[FieldOffset(Offset = "0xB8")]
	private int _currentBodyType;

	[Token(Token = "0x6004B32")]
	[Address(RVA = "0x5BDE1A0", Offset = "0x5BDD1A0", VA = "0x5BDE1A0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004B33")]
	[Address(RVA = "0x5BDE260", Offset = "0x5BDD260", VA = "0x5BDE260", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004B34")]
	[Address(RVA = "0x5BDE270", Offset = "0x5BDD270", VA = "0x5BDE270", Slot = "8")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004B35")]
	[Address(RVA = "0x5BDE2B0", Offset = "0x5BDD2B0", VA = "0x5BDE2B0", Slot = "9")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6004B36")]
	[Address(RVA = "0x5BDE550", Offset = "0x5BDD550", VA = "0x5BDE550", Slot = "10")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6004B37")]
	[Address(RVA = "0x5BDE6F0", Offset = "0x5BDD6F0", VA = "0x5BDE6F0", Slot = "11")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004B38")]
	[Address(RVA = "0x5BDE720", Offset = "0x5BDD720", VA = "0x5BDE720", Slot = "12")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004B39")]
	[Address(RVA = "0x5BDE770", Offset = "0x5BDD770", VA = "0x5BDE770")]
	public CharacterEditorTitanMenu()
	{
	}
}
