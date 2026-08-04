// ==================== AoTTG2 cross-reference ====================
// Type: Characters.StockSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/StockSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200052D")]
internal class StockSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x600360D")]
	[Address(RVA = "0x41F8F70", Offset = "0x41F8F70", VA = "0x41F8F70")]
	public StockSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600360E")]
	[Address(RVA = "0x41F8F80", Offset = "0x41F8F80", VA = "0x41F8F80", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600360F")]
	[Address(RVA = "0x41F8FC0", Offset = "0x41F8FC0", VA = "0x41F8FC0")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x6003610")]
	[Address(RVA = "0x41F8FE0", Offset = "0x41F8FE0", VA = "0x41F8FE0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003611")]
	[Address(RVA = "0x41F9050", Offset = "0x41F9050", VA = "0x41F9050", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6003612")]
	[Address(RVA = "0x41F90D0", Offset = "0x41F90D0", VA = "0x41F90D0", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
