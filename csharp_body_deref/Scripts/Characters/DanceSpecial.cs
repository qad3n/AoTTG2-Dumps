using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004DC")]
internal class DanceSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001704")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000985")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033C8")]
		[Address(RVA = "0x3EE8130", Offset = "0x3EE8130", VA = "0x3EE8130", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000986")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60033C9")]
		[Address(RVA = "0x3EE8140", Offset = "0x3EE8140", VA = "0x3EE8140", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033CA")]
	[Address(RVA = "0x3ED7840", Offset = "0x3ED7840", VA = "0x3ED7840")]
	public DanceSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033CB")]
	[Address(RVA = "0x3EE8150", Offset = "0x3EE8150", VA = "0x3EE8150", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033CC")]
	[Address(RVA = "0x3EE81C0", Offset = "0x3EE81C0", VA = "0x3EE81C0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
