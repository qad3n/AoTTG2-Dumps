using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005EF")]
internal class InGameBackgroundMenu : BaseMenu
{
	[Token(Token = "0x4001CFE")]
	[FieldOffset(Offset = "0x98")]
	private BloodBackgroundPanel _bloodBackgroundPanel;

	[Token(Token = "0x6003C51")]
	[Address(RVA = "0x3FB3C30", Offset = "0x3FB3C30", VA = "0x3FB3C30", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003C52")]
	[Address(RVA = "0x3FB3C90", Offset = "0x3FB3C90", VA = "0x3FB3C90")]
	public void ShowBlood()
	{
	}

	[Token(Token = "0x6003C53")]
	[Address(RVA = "0x3FB3CC0", Offset = "0x3FB3CC0", VA = "0x3FB3CC0")]
	public void HideBlood()
	{
	}

	[Token(Token = "0x6003C54")]
	[Address(RVA = "0x3FB3CF0", Offset = "0x3FB3CF0", VA = "0x3FB3CF0")]
	public InGameBackgroundMenu()
	{
	}
}
