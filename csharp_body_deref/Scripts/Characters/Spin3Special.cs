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

[Token(Token = "0x20006E5")]
internal class Spin3Special : BaseAttackSpecial
{
	[Token(Token = "0x4002073")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4002074")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4002075")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4002076")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x4002077")]
	[FieldOffset(Offset = "0x58")]
	protected Vector3 _aimPoint;

	[Token(Token = "0x4002078")]
	[FieldOffset(Offset = "0x64")]
	protected bool _pulled;

	[Token(Token = "0x4002079")]
	[FieldOffset(Offset = "0x65")]
	protected bool _startSpin;

	[Token(Token = "0x400207A")]
	[FieldOffset(Offset = "0x68")]
	protected float PullForce;

	[Token(Token = "0x17000B79")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042DE")]
		[Address(RVA = "0x5B0ECD0", Offset = "0x5B0DCD0", VA = "0x5B0ECD0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60042DF")]
	[Address(RVA = "0x5B0ECE0", Offset = "0x5B0DCE0", VA = "0x5B0ECE0")]
	public Spin3Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042E0")]
	[Address(RVA = "0x5B0ED10", Offset = "0x5B0DD10", VA = "0x5B0ED10", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042E1")]
	[Address(RVA = "0x5B0EE10", Offset = "0x5B0DE10", VA = "0x5B0EE10", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60042E2")]
	[Address(RVA = "0x5B0F4A0", Offset = "0x5B0E4A0", VA = "0x5B0F4A0")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
