// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SupplySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SupplySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000688")]
internal class SupplySpecial : BaseEmoteSpecial
{
	[Token(Token = "0x17000B30")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004051")]
		[Address(RVA = "0x21779B0", Offset = "0x2175FB0", VA = "0x1821779B0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B31")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x6004052")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004053")]
	[Address(RVA = "0x2177970", Offset = "0x2175F70", VA = "0x182177970")]
	public SupplySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6004054")]
	[Address(RVA = "0x2177580", Offset = "0x2175B80", VA = "0x182177580", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004055")]
	[Address(RVA = "0x2177600", Offset = "0x2175C00", VA = "0x182177600", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004056")]
	[Address(RVA = "0x2177690", Offset = "0x2175C90", VA = "0x182177690", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6004057")]
	[Address(RVA = "0x2177940", Offset = "0x2175F40", VA = "0x182177940", Slot = "5")]
	public override void Reset()
	{
	}
}
