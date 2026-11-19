// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin2Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin2Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin2Special.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E4")]
internal class Spin2Special : BaseAttackSpecial
{
	[Token(Token = "0x400206F")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4002070")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4002071")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4002072")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x17000B78")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042D9")]
		[Address(RVA = "0x5B0E8A0", Offset = "0x5B0D8A0", VA = "0x5B0E8A0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60042DA")]
	[Address(RVA = "0x5B0E8B0", Offset = "0x5B0D8B0", VA = "0x5B0E8B0")]
	public Spin2Special(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042DB")]
	[Address(RVA = "0x5B0E8E0", Offset = "0x5B0D8E0", VA = "0x5B0E8E0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042DC")]
	[Address(RVA = "0x5B0E960", Offset = "0x5B0D960", VA = "0x5B0E960", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60042DD")]
	[Address(RVA = "0x5B0EC50", Offset = "0x5B0DC50", VA = "0x5B0EC50")]
	protected float GetAnimationTime()
	{
		return default(float);
	}
}
