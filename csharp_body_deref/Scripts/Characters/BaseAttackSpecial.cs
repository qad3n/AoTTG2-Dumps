// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000674")]
internal class BaseAttackSpecial : ExtendedUseable
{
	[Token(Token = "0x4001EA6")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x6003FF0")]
	[Address(RVA = "0x2166E60", Offset = "0x2165460", VA = "0x182166E60")]
	public BaseAttackSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003FF1")]
	[Address(RVA = "0x2166DD0", Offset = "0x21653D0", VA = "0x182166DD0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003FF2")]
	[Address(RVA = "0x2166E30", Offset = "0x2165430", VA = "0x182166E30")]
	protected bool InSpecial()
	{
		return default(bool);
	}

	[Token(Token = "0x6003FF3")]
	[Address(RVA = "0x2166E10", Offset = "0x2165410", VA = "0x182166E10", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003FF4")]
	[Address(RVA = "0x2166DA0", Offset = "0x21653A0", VA = "0x182166DA0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
