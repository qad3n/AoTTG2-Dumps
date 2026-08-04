// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SupplySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SupplySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200052E")]
internal class SupplySpecial : BaseEmoteSpecial
{
	[Token(Token = "0x170009FC")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6003613")]
		[Address(RVA = "0x41F90F0", Offset = "0x41F90F0", VA = "0x41F90F0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009FD")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x6003614")]
		[Address(RVA = "0x41F9100", Offset = "0x41F9100", VA = "0x41F9100", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003615")]
	[Address(RVA = "0x41F9110", Offset = "0x41F9110", VA = "0x41F9110")]
	public SupplySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x6003616")]
	[Address(RVA = "0x41F9150", Offset = "0x41F9150", VA = "0x41F9150", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003617")]
	[Address(RVA = "0x41F91C0", Offset = "0x41F91C0", VA = "0x41F91C0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003618")]
	[Address(RVA = "0x41F9210", Offset = "0x41F9210", VA = "0x41F9210", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003619")]
	[Address(RVA = "0x41F9420", Offset = "0x41F9420", VA = "0x41F9420", Slot = "5")]
	public override void Reset()
	{
	}
}
