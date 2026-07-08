using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004DA")]
internal class CombatDashSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001702")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000981")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033BE")]
		[Address(RVA = "0x3EE7AB0", Offset = "0x3EE7AB0", VA = "0x3EE7AB0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000982")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60033BF")]
		[Address(RVA = "0x3EE7AC0", Offset = "0x3EE7AC0", VA = "0x3EE7AC0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033C0")]
	[Address(RVA = "0x3EE7AD0", Offset = "0x3EE7AD0", VA = "0x3EE7AD0")]
	public CombatDashSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033C1")]
	[Address(RVA = "0x3EE7AF0", Offset = "0x3EE7AF0", VA = "0x3EE7AF0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033C2")]
	[Address(RVA = "0x3EE7D10", Offset = "0x3EE7D10", VA = "0x3EE7D10", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
