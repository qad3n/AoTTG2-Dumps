using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E0")]
internal class NoneSpecial : SimpleUseable
{
	[Token(Token = "0x60033DB")]
	[Address(RVA = "0x3ED7970", Offset = "0x3ED7970", VA = "0x3ED7970")]
	public NoneSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033DC")]
	[Address(RVA = "0x3EEAB20", Offset = "0x3EEAB20", VA = "0x3EEAB20", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60033DD")]
	[Address(RVA = "0x3EEAB30", Offset = "0x3EEAB30", VA = "0x3EEAB30", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033DE")]
	[Address(RVA = "0x3EEAB40", Offset = "0x3EEAB40", VA = "0x3EEAB40", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
