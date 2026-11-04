// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin1Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin1Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000684")]
internal class Spin1Special : BaseAttackSpecial
{
	[Token(Token = "0x4001EBD")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001EBE")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001EBF")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4001EC0")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x17000B2D")]
	protected override float ActiveTime
	{
		[Token(Token = "0x600403C")]
		[Address(RVA = "0x21698F0", Offset = "0x2167EF0", VA = "0x1821698F0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600403D")]
	[Address(RVA = "0x21766D0", Offset = "0x2174CD0", VA = "0x1821766D0")]
	public Spin1Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600403E")]
	[Address(RVA = "0x2176370", Offset = "0x2174970", VA = "0x182176370", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600403F")]
	[Address(RVA = "0x21763F0", Offset = "0x21749F0", VA = "0x1821763F0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6004040")]
	[Address(RVA = "0x2176650", Offset = "0x2174C50", VA = "0x182176650")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
