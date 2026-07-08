using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200056C")]
internal class CharacterEditorTitanMenu : CharacterEditorMenu
{
	[Token(Token = "0x4001AD9")]
	[FieldOffset(Offset = "0xA0")]
	private CharacterEditorTitanCostumePanel _costumePanel;

	[Token(Token = "0x4001ADA")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorTitanCategoryPanel _categoryPanel;

	[Token(Token = "0x4001ADB")]
	[FieldOffset(Offset = "0xB0")]
	private int _currentBodyType;

	[Token(Token = "0x60038C8")]
	[Address(RVA = "0x3F5BCF0", Offset = "0x3F5BCF0", VA = "0x3F5BCF0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60038C9")]
	[Address(RVA = "0x3F5BDC0", Offset = "0x3F5BDC0", VA = "0x3F5BDC0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x60038CA")]
	[Address(RVA = "0x3F5BDD0", Offset = "0x3F5BDD0", VA = "0x3F5BDD0", Slot = "7")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60038CB")]
	[Address(RVA = "0x3F5BE10", Offset = "0x3F5BE10", VA = "0x3F5BE10", Slot = "8")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x60038CC")]
	[Address(RVA = "0x3F5C000", Offset = "0x3F5C000", VA = "0x3F5C000", Slot = "9")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x60038CD")]
	[Address(RVA = "0x3F5C1C0", Offset = "0x3F5C1C0", VA = "0x3F5C1C0", Slot = "10")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x60038CE")]
	[Address(RVA = "0x3F5C1F0", Offset = "0x3F5C1F0", VA = "0x3F5C1F0", Slot = "11")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x60038CF")]
	[Address(RVA = "0x3F5C240", Offset = "0x3F5C240", VA = "0x3F5C240")]
	public CharacterEditorTitanMenu()
	{
	}
}
