using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004D7")]
internal class BaseHoldAttackSpecial : HoldUseable
{
	[Token(Token = "0x40016FA")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x40016FB")]
	[FieldOffset(Offset = "0x48")]
	protected bool _keyIsReset;

	[Token(Token = "0x1700097C")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033AD")]
		[Address(RVA = "0x3EE6350", Offset = "0x3EE6350", VA = "0x3EE6350", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033AE")]
	[Address(RVA = "0x3EE6360", Offset = "0x3EE6360", VA = "0x3EE6360")]
	public BaseHoldAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033AF")]
	[Address(RVA = "0x3EE6410", Offset = "0x3EE6410", VA = "0x3EE6410", Slot = "12")]
	public override void SetInput(bool key)
	{
	}

	[Token(Token = "0x60033B0")]
	[Address(RVA = "0x3EE64C0", Offset = "0x3EE64C0", VA = "0x3EE64C0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60033B1")]
	[Address(RVA = "0x3EE64D0", Offset = "0x3EE64D0", VA = "0x3EE64D0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
