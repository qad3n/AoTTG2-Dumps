using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200049C")]
internal abstract class RechargeableUseable : ExtendedUseable
{
	[Token(Token = "0x40014A0")]
	[FieldOffset(Offset = "0x3C")]
	public float ReduceCooldownAmount;

	[Token(Token = "0x60031AA")]
	[Address(RVA = "0x3E9C980", Offset = "0x3E9C980", VA = "0x3E9C980")]
	public RechargeableUseable(BaseCharacter owner, float reduceCooldownAmount = 0f)
	{
	}

	[Token(Token = "0x60031AB")]
	[Address(RVA = "0x3E9C9E0", Offset = "0x3E9C9E0", VA = "0x3E9C9E0")]
	public void ReduceCooldown()
	{
	}
}
