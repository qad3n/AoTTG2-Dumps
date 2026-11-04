// ==================== AoTTG2 cross-reference ====================
// Type: Characters.StockSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/StockSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000687")]
internal class StockSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x600404B")]
	[Address(RVA = "0x2177570", Offset = "0x2175B70", VA = "0x182177570")]
	public StockSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x600404C")]
	[Address(RVA = "0x21774F0", Offset = "0x2175AF0", VA = "0x1821774F0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600404D")]
	[Address(RVA = "0x2177550", Offset = "0x2175B50", VA = "0x182177550")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x600404E")]
	[Address(RVA = "0x21773E0", Offset = "0x21759E0", VA = "0x1821773E0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600404F")]
	[Address(RVA = "0x2177460", Offset = "0x2175A60", VA = "0x182177460", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6004050")]
	[Address(RVA = "0x2177530", Offset = "0x2175B30", VA = "0x182177530", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
