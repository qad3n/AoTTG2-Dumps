using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004D9")]
internal class CarrySpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x40016FF")]
	public const float DefaultCarryDistance = 25f;

	[Token(Token = "0x4001700")]
	public const float DefaultGroundedCarryDistance = 10f;

	[Token(Token = "0x4001701")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x1700097E")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033B7")]
		[Address(RVA = "0x3EE6E70", Offset = "0x3EE6E70", VA = "0x3EE6E70", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700097F")]
	protected float CarryDistance
	{
		[Token(Token = "0x60033B8")]
		[Address(RVA = "0x3EE6E80", Offset = "0x3EE6E80", VA = "0x3EE6E80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000980")]
	protected float GroundedCarryDistance
	{
		[Token(Token = "0x60033B9")]
		[Address(RVA = "0x3EE6E90", Offset = "0x3EE6E90", VA = "0x3EE6E90")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033BA")]
	[Address(RVA = "0x3ED7A10", Offset = "0x3ED7A10", VA = "0x3ED7A10")]
	public CarrySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033BB")]
	[Address(RVA = "0x3EE6EA0", Offset = "0x3EE6EA0", VA = "0x3EE6EA0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033BC")]
	[Address(RVA = "0x3EE6F70", Offset = "0x3EE6F70", VA = "0x3EE6F70", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60033BD")]
	[Address(RVA = "0x3EE77E0", Offset = "0x3EE77E0", VA = "0x3EE77E0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
