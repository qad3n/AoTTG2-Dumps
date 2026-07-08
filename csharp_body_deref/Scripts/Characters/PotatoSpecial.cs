using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E1")]
internal class PotatoSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001707")]
	[FieldOffset(Offset = "0x48")]
	private float _oldSpeed;

	[Token(Token = "0x4001708")]
	[FieldOffset(Offset = "0x4C")]
	private float _currentSpeed;

	[Token(Token = "0x1700098A")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033DF")]
		[Address(RVA = "0x3EEAB50", Offset = "0x3EEAB50", VA = "0x3EEAB50", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700098B")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60033E0")]
		[Address(RVA = "0x3EEAB60", Offset = "0x3EEAB60", VA = "0x3EEAB60", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033E1")]
	[Address(RVA = "0x3ED7880", Offset = "0x3ED7880", VA = "0x3ED7880")]
	public PotatoSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033E2")]
	[Address(RVA = "0x3EEAB70", Offset = "0x3EEAB70", VA = "0x3EEAB70", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033E3")]
	[Address(RVA = "0x3EEAC30", Offset = "0x3EEAC30", VA = "0x3EEAC30", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60033E4")]
	[Address(RVA = "0x3EEAC60", Offset = "0x3EEAC60", VA = "0x3EEAC60", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
