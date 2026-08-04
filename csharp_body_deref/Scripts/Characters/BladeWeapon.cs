// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BladeWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BladeWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/BladeWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000533")]
internal class BladeWeapon : HoldUseable
{
	[Token(Token = "0x4001836")]
	[FieldOffset(Offset = "0x3C")]
	public float MaxDurability;

	[Token(Token = "0x4001837")]
	[FieldOffset(Offset = "0x40")]
	public float CurrentDurability;

	[Token(Token = "0x4001838")]
	[FieldOffset(Offset = "0x44")]
	public int MaxBlades;

	[Token(Token = "0x4001839")]
	[FieldOffset(Offset = "0x48")]
	public int BladesLeft;

	[Token(Token = "0x600362E")]
	[Address(RVA = "0x41FB7E0", Offset = "0x41FB7E0", VA = "0x41FB7E0")]
	public BladeWeapon(BaseCharacter owner, float durability, int blades)
	{
	}

	[Token(Token = "0x600362F")]
	[Address(RVA = "0x41FB820", Offset = "0x41FB820", VA = "0x41FB820")]
	public void UseDurability(float amount)
	{
	}

	[Token(Token = "0x6003630")]
	[Address(RVA = "0x41FB840", Offset = "0x41FB840", VA = "0x41FB840", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x6003631")]
	[Address(RVA = "0x41FB860", Offset = "0x41FB860", VA = "0x41FB860", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6003632")]
	[Address(RVA = "0x41FB870", Offset = "0x41FB870", VA = "0x41FB870", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003633")]
	[Address(RVA = "0x41FB910", Offset = "0x41FB910", VA = "0x41FB910", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x6003634")]
	[Address(RVA = "0x41FB920", Offset = "0x41FB920", VA = "0x41FB920", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003635")]
	[Address(RVA = "0x41FB990", Offset = "0x41FB990", VA = "0x41FB990", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003636")]
	[Address(RVA = "0x41FB9A0", Offset = "0x41FB9A0", VA = "0x41FB9A0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
