// ==================== AoTTG2 cross-reference ====================
// Type: Characters.SupplySpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/SupplySpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/SupplySpecial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006E7")]
internal class SupplySpecial : BaseEmoteSpecial
{
	[Token(Token = "0x17000B7A")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042E9")]
		[Address(RVA = "0x5B0F6A0", Offset = "0x5B0E6A0", VA = "0x5B0F6A0", Slot = "14")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7B")]
	protected override bool GroundedOnly
	{
		[Token(Token = "0x60042EA")]
		[Address(RVA = "0x5B0F6B0", Offset = "0x5B0E6B0", VA = "0x5B0F6B0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60042EB")]
	[Address(RVA = "0x5B0F6C0", Offset = "0x5B0E6C0", VA = "0x5B0F6C0")]
	public SupplySpecial(BaseCharacter owner)
	{
	}

	[Token(Token = "0x60042EC")]
	[Address(RVA = "0x5B0F700", Offset = "0x5B0E700", VA = "0x5B0F700", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60042ED")]
	[Address(RVA = "0x5B0F770", Offset = "0x5B0E770", VA = "0x5B0F770", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x60042EE")]
	[Address(RVA = "0x5B0F800", Offset = "0x5B0E800", VA = "0x5B0F800", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x60042EF")]
	[Address(RVA = "0x5B0FA30", Offset = "0x5B0EA30", VA = "0x5B0FA30", Slot = "5")]
	public override void Reset()
	{
	}
}
