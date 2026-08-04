// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin3Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin3Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin3Special.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200052C")]
internal class Spin3Special : BaseAttackSpecial
{
	[Token(Token = "0x4001828")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001829")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x400182A")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x400182B")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x400182C")]
	[FieldOffset(Offset = "0x58")]
	protected Vector3 _aimPoint;

	[Token(Token = "0x400182D")]
	[FieldOffset(Offset = "0x64")]
	protected bool _pulled;

	[Token(Token = "0x400182E")]
	[FieldOffset(Offset = "0x65")]
	protected bool _startSpin;

	[Token(Token = "0x400182F")]
	[FieldOffset(Offset = "0x68")]
	protected float PullForce;

	[Token(Token = "0x170009FB")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6003608")]
		[Address(RVA = "0x41F87A0", Offset = "0x41F87A0", VA = "0x41F87A0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003609")]
	[Address(RVA = "0x41E41E0", Offset = "0x41E41E0", VA = "0x41E41E0")]
	public Spin3Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600360A")]
	[Address(RVA = "0x41F87B0", Offset = "0x41F87B0", VA = "0x41F87B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600360B")]
	[Address(RVA = "0x41F88B0", Offset = "0x41F88B0", VA = "0x41F88B0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x600360C")]
	[Address(RVA = "0x41F8EF0", Offset = "0x41F8EF0", VA = "0x41F8EF0")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
