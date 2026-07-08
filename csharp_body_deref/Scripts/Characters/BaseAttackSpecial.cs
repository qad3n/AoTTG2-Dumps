using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004D5")]
internal class BaseAttackSpecial : ExtendedUseable
{
	[Token(Token = "0x40016F8")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x60033A4")]
	[Address(RVA = "0x3EE60E0", Offset = "0x3EE60E0", VA = "0x3EE60E0")]
	public BaseAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033A5")]
	[Address(RVA = "0x3EE6190", Offset = "0x3EE6190", VA = "0x3EE6190", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60033A6")]
	[Address(RVA = "0x3EE61C0", Offset = "0x3EE61C0", VA = "0x3EE61C0")]
	protected bool InSpecial()
	{
		return default(bool);
	}

	[Token(Token = "0x60033A7")]
	[Address(RVA = "0x3EE61E0", Offset = "0x3EE61E0", VA = "0x3EE61E0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x60033A8")]
	[Address(RVA = "0x3EE6200", Offset = "0x3EE6200", VA = "0x3EE6200", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
