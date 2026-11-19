// ==================== AoTTG2 cross-reference ====================
// Type: Characters.StockSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/StockSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/StockSpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E6")]
internal class StockSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x60042E3")]
	[Address(RVA = "0x5B0F520", Offset = "0x5B0E520", VA = "0x5B0F520")]
	public StockSpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042E4")]
	[Address(RVA = "0x5B0F530", Offset = "0x5B0E530", VA = "0x5B0F530", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60042E5")]
	[Address(RVA = "0x5B0F570", Offset = "0x5B0E570", VA = "0x5B0F570")]
	public void FalseAttack()
	{
	}

	[Token(Token = "0x60042E6")]
	[Address(RVA = "0x5B0F590", Offset = "0x5B0E590", VA = "0x5B0F590", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042E7")]
	[Address(RVA = "0x5B0F600", Offset = "0x5B0E600", VA = "0x5B0F600", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60042E8")]
	[Address(RVA = "0x5B0F680", Offset = "0x5B0E680", VA = "0x5B0F680", Slot = "10")]
	protected override void Deactivate()
	{
	}
}
