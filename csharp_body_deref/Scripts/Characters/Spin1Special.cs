// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin1Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin1Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin1Special.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200052A")]
internal class Spin1Special : BaseAttackSpecial
{
	[Token(Token = "0x4001820")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4001821")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4001822")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4001823")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x170009F9")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60035FE")]
		[Address(RVA = "0x41F8060", Offset = "0x41F8060", VA = "0x41F8060", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60035FF")]
	[Address(RVA = "0x41E4180", Offset = "0x41E4180", VA = "0x41E4180")]
	public Spin1Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003600")]
	[Address(RVA = "0x41F8070", Offset = "0x41F8070", VA = "0x41F8070", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003601")]
	[Address(RVA = "0x41F80F0", Offset = "0x41F80F0", VA = "0x41F80F0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6003602")]
	[Address(RVA = "0x41F8320", Offset = "0x41F8320", VA = "0x41F8320")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
