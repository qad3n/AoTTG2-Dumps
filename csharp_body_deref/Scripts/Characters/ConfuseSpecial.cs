using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004DB")]
internal class ConfuseSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001703")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000983")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033C3")]
		[Address(RVA = "0x3EE7D20", Offset = "0x3EE7D20", VA = "0x3EE7D20", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000984")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60033C4")]
		[Address(RVA = "0x3EE7D30", Offset = "0x3EE7D30", VA = "0x3EE7D30", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033C5")]
	[Address(RVA = "0x3ED7AB0", Offset = "0x3ED7AB0", VA = "0x3ED7AB0")]
	public ConfuseSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033C6")]
	[Address(RVA = "0x3EE7D40", Offset = "0x3EE7D40", VA = "0x3EE7D40", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033C7")]
	[Address(RVA = "0x3EE8120", Offset = "0x3EE8120", VA = "0x3EE8120", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
