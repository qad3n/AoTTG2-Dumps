using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E9")]
internal class SupplySpecial : BaseEmoteSpecial
{
	[Token(Token = "0x17000992")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6003405")]
		[Address(RVA = "0x3EEC830", Offset = "0x3EEC830", VA = "0x3EEC830", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000993")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x6003406")]
		[Address(RVA = "0x3EEC840", Offset = "0x3EEC840", VA = "0x3EEC840", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003407")]
	[Address(RVA = "0x3EEC850", Offset = "0x3EEC850", VA = "0x3EEC850")]
	public SupplySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003408")]
	[Address(RVA = "0x3EEC890", Offset = "0x3EEC890", VA = "0x3EEC890", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003409")]
	[Address(RVA = "0x3EEC900", Offset = "0x3EEC900", VA = "0x3EEC900", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600340A")]
	[Address(RVA = "0x3EEC950", Offset = "0x3EEC950", VA = "0x3EEC950", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x600340B")]
	[Address(RVA = "0x3EECB60", Offset = "0x3EECB60", VA = "0x3EECB60", Slot = "5")]
	public override void Reset()
	{
	}
}
