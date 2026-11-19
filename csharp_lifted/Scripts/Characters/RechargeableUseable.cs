// ==================== AoTTG2 cross-reference ====================
// Type: Characters.RechargeableUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/RechargeableUseable.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000699")]
internal abstract class RechargeableUseable : ExtendedUseable
{
	[Token(Token = "0x4001DCA")]
	[FieldOffset(Offset = "0x3C")]
	public float ReduceCooldownAmount;

	[Token(Token = "0x600402C")]
	[Address(RVA = "0x5AE1980", Offset = "0x5AE0980", VA = "0x5AE1980")]
	public RechargeableUseable(BaseCharacter owner, float reduceCooldownAmount = 0f)
	{
		// Lifted from source/cpp/Characters/RechargeableUseable.c (Characters.RechargeableUseable$$.ctor): clean
		base(owner);
		this.ReduceCooldownAmount = reduceCooldownAmount;
		return;
	}

	[Token(Token = "0x600402D")]
	[Address(RVA = "0x5AE19B0", Offset = "0x5AE09B0", VA = "0x5AE19B0")]
	public void ReduceCooldown()
	{
		// Lifted from source/cpp/Characters/RechargeableUseable.c (Characters.RechargeableUseable$$ReduceCooldown): clean
		this._lastUseTime = this._lastUseTime - this.ReduceCooldownAmount;
		return;
	}
}
