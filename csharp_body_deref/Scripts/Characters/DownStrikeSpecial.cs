using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004DE")]
internal class DownStrikeSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x4001706")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x60033D2")]
	[Address(RVA = "0x3ED78A0", Offset = "0x3ED78A0", VA = "0x3ED78A0")]
	public DownStrikeSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033D3")]
	[Address(RVA = "0x3EE89B0", Offset = "0x3EE89B0", VA = "0x3EE89B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033D4")]
	[Address(RVA = "0x3EE8AA0", Offset = "0x3EE8AA0", VA = "0x3EE8AA0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60033D5")]
	[Address(RVA = "0x3EE8D90", Offset = "0x3EE8D90", VA = "0x3EE8D90", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}
}
