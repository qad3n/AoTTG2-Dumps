// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin2Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin2Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200052B")]
internal class Spin2Special : BaseAttackSpecial
{
	[Token(Token = "0x4001824")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001825")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001826")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4001827")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x170009FA")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6003603")]
		[Address(RVA = "0x41F83A0", Offset = "0x41F83A0", VA = "0x41F83A0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003604")]
	[Address(RVA = "0x41E41B0", Offset = "0x41E41B0", VA = "0x41E41B0")]
	public Spin2Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003605")]
	[Address(RVA = "0x41F83B0", Offset = "0x41F83B0", VA = "0x41F83B0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003606")]
	[Address(RVA = "0x41F8430", Offset = "0x41F8430", VA = "0x41F8430", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6003607")]
	[Address(RVA = "0x41F8720", Offset = "0x41F8720", VA = "0x41F8720")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
