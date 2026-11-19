// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin1Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin1Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E3")]
internal class Spin1Special : BaseAttackSpecial
{
	[Token(Token = "0x400206B")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x400206C")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x400206D")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x400206E")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x17000B77")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042D4")]
		[Address(RVA = "0x5B0E530", Offset = "0x5B0D530", VA = "0x5B0E530", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60042D5")]
	[Address(RVA = "0x5B0E540", Offset = "0x5B0D540", VA = "0x5B0E540")]
	public Spin1Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042D6")]
	[Address(RVA = "0x5B0E570", Offset = "0x5B0D570", VA = "0x5B0E570", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042D7")]
	[Address(RVA = "0x5B0E5F0", Offset = "0x5B0D5F0", VA = "0x5B0E5F0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60042D8")]
	[Address(RVA = "0x5B0E820", Offset = "0x5B0D820", VA = "0x5B0E820")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
