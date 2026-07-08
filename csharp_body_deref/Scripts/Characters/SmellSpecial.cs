using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E3")]
internal class SmellSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x400170B")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x400170C")]
	[FieldOffset(Offset = "0x4C")]
	protected float Delay;

	[Token(Token = "0x1700098D")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033E9")]
		[Address(RVA = "0x3EEAF00", Offset = "0x3EEAF00", VA = "0x3EEAF00", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700098E")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60033EA")]
		[Address(RVA = "0x3EEAF10", Offset = "0x3EEAF10", VA = "0x3EEAF10", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033EB")]
	[Address(RVA = "0x3ED7860", Offset = "0x3ED7860", VA = "0x3ED7860")]
	public SmellSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033EC")]
	[Address(RVA = "0x3EEAF20", Offset = "0x3EEAF20", VA = "0x3EEAF20", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033ED")]
	[Address(RVA = "0x3EEB3A0", Offset = "0x3EEB3A0", VA = "0x3EEB3A0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
