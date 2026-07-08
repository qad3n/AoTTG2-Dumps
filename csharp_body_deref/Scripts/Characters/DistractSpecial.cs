using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004DD")]
internal class DistractSpecial : BaseEmoteSpecial
{
	[Token(Token = "0x4001705")]
	[FieldOffset(Offset = "0x48")]
	protected float Range;

	[Token(Token = "0x17000987")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033CD")]
		[Address(RVA = "0x3EE8570", Offset = "0x3EE8570", VA = "0x3EE8570", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000988")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60033CE")]
		[Address(RVA = "0x3EE8580", Offset = "0x3EE8580", VA = "0x3EE8580", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033CF")]
	[Address(RVA = "0x3ED77E0", Offset = "0x3ED77E0", VA = "0x3ED77E0")]
	public DistractSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033D0")]
	[Address(RVA = "0x3EE8590", Offset = "0x3EE8590", VA = "0x3EE8590", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033D1")]
	[Address(RVA = "0x3EE8600", Offset = "0x3EE8600", VA = "0x3EE8600", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
