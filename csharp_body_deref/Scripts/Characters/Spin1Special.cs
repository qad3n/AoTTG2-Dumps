using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E5")]
internal class Spin1Special : BaseAttackSpecial
{
	[Token(Token = "0x400170F")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001710")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001711")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4001712")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x1700098F")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033F0")]
		[Address(RVA = "0x3EEB7A0", Offset = "0x3EEB7A0", VA = "0x3EEB7A0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033F1")]
	[Address(RVA = "0x3ED78C0", Offset = "0x3ED78C0", VA = "0x3ED78C0")]
	public Spin1Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033F2")]
	[Address(RVA = "0x3EEB7B0", Offset = "0x3EEB7B0", VA = "0x3EEB7B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033F3")]
	[Address(RVA = "0x3EEB830", Offset = "0x3EEB830", VA = "0x3EEB830", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60033F4")]
	[Address(RVA = "0x3EEBA60", Offset = "0x3EEBA60", VA = "0x3EEBA60")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
