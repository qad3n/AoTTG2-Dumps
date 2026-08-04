// ==================== AoTTG2 cross-reference ====================
// Type: Characters.RechargeableUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/RechargeableUseable.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004E1")]
internal abstract class RechargeableUseable : ExtendedUseable
{
	[Token(Token = "0x40015B1")]
	[FieldOffset(Offset = "0x3C")]
	public float ReduceCooldownAmount;

	[Token(Token = "0x60033B8")]
	[Address(RVA = "0x41A9220", Offset = "0x41A9220", VA = "0x41A9220")]
	public RechargeableUseable(BaseCharacter owner, float reduceCooldownAmount = 0f)
	{
	}

	[Token(Token = "0x60033B9")]
	[Address(RVA = "0x41A9280", Offset = "0x41A9280", VA = "0x41A9280")]
	public void ReduceCooldown()
	{
	}
}
