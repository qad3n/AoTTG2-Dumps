using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E6")]
internal class Spin2Special : BaseAttackSpecial
{
	[Token(Token = "0x4001713")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001714")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001715")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4001716")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x17000990")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033F5")]
		[Address(RVA = "0x3EEBAE0", Offset = "0x3EEBAE0", VA = "0x3EEBAE0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033F6")]
	[Address(RVA = "0x3ED78F0", Offset = "0x3ED78F0", VA = "0x3ED78F0")]
	public Spin2Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033F7")]
	[Address(RVA = "0x3EEBAF0", Offset = "0x3EEBAF0", VA = "0x3EEBAF0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033F8")]
	[Address(RVA = "0x3EEBB70", Offset = "0x3EEBB70", VA = "0x3EEBB70", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60033F9")]
	[Address(RVA = "0x3EEBE60", Offset = "0x3EEBE60", VA = "0x3EEBE60")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
