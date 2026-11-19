// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D3")]
internal class BaseAttackSpecial : ExtendedUseable
{
	[Token(Token = "0x4002054")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x6004288")]
	[Address(RVA = "0x5B08C40", Offset = "0x5B07C40", VA = "0x5B08C40")]
	public BaseAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004289")]
	[Address(RVA = "0x5B08CF0", Offset = "0x5B07CF0", VA = "0x5B08CF0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600428A")]
	[Address(RVA = "0x5B08D20", Offset = "0x5B07D20", VA = "0x5B08D20")]
	protected bool InSpecial()
	{
		return default(bool);
	}

	[Token(Token = "0x600428B")]
	[Address(RVA = "0x5B08D40", Offset = "0x5B07D40", VA = "0x5B08D40", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x600428C")]
	[Address(RVA = "0x5B08D60", Offset = "0x5B07D60", VA = "0x5B08D60", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
