// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin2Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin2Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000685")]
internal class Spin2Special : BaseAttackSpecial
{
	[Token(Token = "0x4001EC1")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001EC2")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001EC3")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4001EC4")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x17000B2E")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004041")]
		[Address(RVA = "0x2176BA0", Offset = "0x21751A0", VA = "0x182176BA0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004042")]
	[Address(RVA = "0x2176B60", Offset = "0x2175160", VA = "0x182176B60")]
	public Spin2Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004043")]
	[Address(RVA = "0x2176710", Offset = "0x2174D10", VA = "0x182176710", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004044")]
	[Address(RVA = "0x2176790", Offset = "0x2174D90", VA = "0x182176790", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6004045")]
	[Address(RVA = "0x2176AE0", Offset = "0x21750E0", VA = "0x182176AE0")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
