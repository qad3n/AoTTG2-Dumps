using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E8")]
internal class StockSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x60033FF")]
	[Address(RVA = "0x3EEC6B0", Offset = "0x3EEC6B0", VA = "0x3EEC6B0")]
	public StockSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003400")]
	[Address(RVA = "0x3EEC6C0", Offset = "0x3EEC6C0", VA = "0x3EEC6C0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003401")]
	[Address(RVA = "0x3EEC700", Offset = "0x3EEC700", VA = "0x3EEC700")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x6003402")]
	[Address(RVA = "0x3EEC720", Offset = "0x3EEC720", VA = "0x3EEC720", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003403")]
	[Address(RVA = "0x3EEC790", Offset = "0x3EEC790", VA = "0x3EEC790", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6003404")]
	[Address(RVA = "0x3EEC810", Offset = "0x3EEC810", VA = "0x3EEC810", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
