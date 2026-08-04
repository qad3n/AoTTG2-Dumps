// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005B1")]
internal class CharacterEditorTitanMenu : CharacterEditorMenu
{
	[Token(Token = "0x4001BEC")]
	[FieldOffset(Offset = "0xA0")]
	private CharacterEditorTitanCostumePanel _costumePanel;

	[Token(Token = "0x4001BED")]
	[FieldOffset(Offset = "0xA8")]
	private CharacterEditorTitanCategoryPanel _categoryPanel;

	[Token(Token = "0x4001BEE")]
	[FieldOffset(Offset = "0xB0")]
	private int _currentBodyType;

	[Token(Token = "0x6003AD7")]
	[Address(RVA = "0x4269B70", Offset = "0x4269B70", VA = "0x4269B70", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003AD8")]
	[Address(RVA = "0x4269C40", Offset = "0x4269C40", VA = "0x4269C40", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003AD9")]
	[Address(RVA = "0x4269C50", Offset = "0x4269C50", VA = "0x4269C50", Slot = "7")]
	public override bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003ADA")]
	[Address(RVA = "0x4269C90", Offset = "0x4269C90", VA = "0x4269C90", Slot = "8")]
	public override void RebuildPanels(bool costumePopup)
	{
	}

	[Token(Token = "0x6003ADB")]
	[Address(RVA = "0x4269E80", Offset = "0x4269E80", VA = "0x4269E80", Slot = "9")]
	public override void ResetCharacter(bool fullReset = false)
	{
	}

	[Token(Token = "0x6003ADC")]
	[Address(RVA = "0x426A040", Offset = "0x426A040", VA = "0x426A040", Slot = "10")]
	public override float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003ADD")]
	[Address(RVA = "0x426A070", Offset = "0x426A070", VA = "0x426A070", Slot = "11")]
	public override float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6003ADE")]
	[Address(RVA = "0x426A0C0", Offset = "0x426A0C0", VA = "0x426A0C0")]
	public CharacterEditorTitanMenu()
	{
	}
}
