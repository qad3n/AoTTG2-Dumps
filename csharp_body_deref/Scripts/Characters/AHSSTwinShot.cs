using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004D4")]
internal class AHSSTwinShot : ExtendedUseable
{
	[Token(Token = "0x600339F")]
	[Address(RVA = "0x3ED7A30", Offset = "0x3ED7A30", VA = "0x3ED7A30")]
	public AHSSTwinShot(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033A0")]
	[Address(RVA = "0x3EE5590", Offset = "0x3EE5590", VA = "0x3EE5590", Slot = "15")]
	protected override float GetActiveTime()
	{
		return default(float);
	}

	[Token(Token = "0x60033A1")]
	[Address(RVA = "0x3EE5680", Offset = "0x3EE5680", VA = "0x3EE5680", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60033A2")]
	[Address(RVA = "0x3EE5760", Offset = "0x3EE5760", VA = "0x3EE5760", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x60033A3")]
	[Address(RVA = "0x3EE5830", Offset = "0x3EE5830", VA = "0x3EE5830", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
