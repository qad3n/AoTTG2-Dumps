// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200051A")]
internal class BaseAttackSpecial : ExtendedUseable
{
	[Token(Token = "0x4001809")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x60035B2")]
	[Address(RVA = "0x41F29A0", Offset = "0x41F29A0", VA = "0x41F29A0")]
	public BaseAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60035B3")]
	[Address(RVA = "0x41F2A50", Offset = "0x41F2A50", VA = "0x41F2A50", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60035B4")]
	[Address(RVA = "0x41F2A80", Offset = "0x41F2A80", VA = "0x41F2A80")]
	protected bool InSpecial()
	{
		return default(bool);
	}

	[Token(Token = "0x60035B5")]
	[Address(RVA = "0x41F2AA0", Offset = "0x41F2AA0", VA = "0x41F2AA0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x60035B6")]
	[Address(RVA = "0x41F2AC0", Offset = "0x41F2AC0", VA = "0x41F2AC0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
