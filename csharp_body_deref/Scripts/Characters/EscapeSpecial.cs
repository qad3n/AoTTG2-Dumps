using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004DF")]
internal class EscapeSpecial : RechargeableUseable
{
	[Token(Token = "0x17000989")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033D6")]
		[Address(RVA = "0x3EE8DC0", Offset = "0x3EE8DC0", VA = "0x3EE8DC0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033D7")]
	[Address(RVA = "0x3ED7800", Offset = "0x3ED7800", VA = "0x3ED7800")]
	public EscapeSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033D8")]
	[Address(RVA = "0x3EE8DD0", Offset = "0x3EE8DD0", VA = "0x3EE8DD0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60033D9")]
	[Address(RVA = "0x3EE8E80", Offset = "0x3EE8E80", VA = "0x3EE8E80", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033DA")]
	[Address(RVA = "0x3EE9120", Offset = "0x3EE9120", VA = "0x3EE9120", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
