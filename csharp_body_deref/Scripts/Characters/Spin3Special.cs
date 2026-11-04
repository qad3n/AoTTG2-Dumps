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

[Token(Token = "0x2000686")]
internal class Spin3Special : BaseAttackSpecial
{
	[Token(Token = "0x4001EC5")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001EC6")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001EC7")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4001EC8")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x4001EC9")]
	[FieldOffset(Offset = "0x58")]
	protected Vector3 _aimPoint;

	[Token(Token = "0x4001ECA")]
	[FieldOffset(Offset = "0x64")]
	protected bool _pulled;

	[Token(Token = "0x4001ECB")]
	[FieldOffset(Offset = "0x65")]
	protected bool _startSpin;

	[Token(Token = "0x4001ECC")]
	[FieldOffset(Offset = "0x68")]
	protected float PullForce;

	[Token(Token = "0x17000B2F")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004046")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004047")]
	[Address(RVA = "0x21773A0", Offset = "0x21759A0", VA = "0x1821773A0")]
	public Spin3Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004048")]
	[Address(RVA = "0x2176BB0", Offset = "0x21751B0", VA = "0x182176BB0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004049")]
	[Address(RVA = "0x2176CB0", Offset = "0x21752B0", VA = "0x182176CB0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x600404A")]
	[Address(RVA = "0x2177320", Offset = "0x2175920", VA = "0x182177320")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
