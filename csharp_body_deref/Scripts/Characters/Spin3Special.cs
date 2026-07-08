using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004E7")]
internal class Spin3Special : BaseAttackSpecial
{
	[Token(Token = "0x4001717")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001718")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001719")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x400171A")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x400171B")]
	[FieldOffset(Offset = "0x58")]
	protected Vector3 _aimPoint;

	[Token(Token = "0x400171C")]
	[FieldOffset(Offset = "0x64")]
	protected bool _pulled;

	[Token(Token = "0x400171D")]
	[FieldOffset(Offset = "0x65")]
	protected bool _startSpin;

	[Token(Token = "0x400171E")]
	[FieldOffset(Offset = "0x68")]
	protected float PullForce;

	[Token(Token = "0x17000991")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60033FA")]
		[Address(RVA = "0x3EEBEE0", Offset = "0x3EEBEE0", VA = "0x3EEBEE0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60033FB")]
	[Address(RVA = "0x3ED7920", Offset = "0x3ED7920", VA = "0x3ED7920")]
	public Spin3Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60033FC")]
	[Address(RVA = "0x3EEBEF0", Offset = "0x3EEBEF0", VA = "0x3EEBEF0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60033FD")]
	[Address(RVA = "0x3EEBFF0", Offset = "0x3EEBFF0", VA = "0x3EEBFF0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60033FE")]
	[Address(RVA = "0x3EEC630", Offset = "0x3EEC630", VA = "0x3EEC630")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
