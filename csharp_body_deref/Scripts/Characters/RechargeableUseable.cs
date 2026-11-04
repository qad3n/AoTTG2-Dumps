// ==================== AoTTG2 cross-reference ====================
// Type: Characters.RechargeableUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/RechargeableUseable.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200063A")]
internal abstract class RechargeableUseable : ExtendedUseable
{
	[Token(Token = "0x4001C23")]
	[FieldOffset(Offset = "0x40")]
	public float ReduceCooldownAmount;

	[Token(Token = "0x6003D9A")]
	[Address(RVA = "0x211CF80", Offset = "0x211B580", VA = "0x18211CF80")]
	public RechargeableUseable(BaseCharacter owner, float reduceCooldownAmount = 0f)
	{
	}

	[Token(Token = "0x6003D9B")]
	[Address(RVA = "0x211CF70", Offset = "0x211B570", VA = "0x18211CF70")]
	public void ReduceCooldown()
	{
	}
}
