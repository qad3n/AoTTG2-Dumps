using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E2")]
internal class ShifterTransformSpecial : RechargeableUseable
{
	[Token(Token = "0x4001709")]
	[FieldOffset(Offset = "0x40")]
	public float LiveTime;

	[Token(Token = "0x400170A")]
	[FieldOffset(Offset = "0x48")]
	protected string _shifter;

	[Token(Token = "0x1700098C")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033E5")]
		[Address(RVA = "0x3EEADC0", Offset = "0x3EEADC0", VA = "0x3EEADC0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033E6")]
	[Address(RVA = "0x3ED7A50", Offset = "0x3ED7A50", VA = "0x3ED7A50")]
	public ShifterTransformSpecial(BaseCharacter owner, string shifter)
	{
	}

	[Token(Token = "0x60033E7")]
	[Address(RVA = "0x3EEADD0", Offset = "0x3EEADD0", VA = "0x3EEADD0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033E8")]
	[Address(RVA = "0x3EEAE80", Offset = "0x3EEAE80", VA = "0x3EEAE80", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
