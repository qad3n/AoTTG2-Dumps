// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BladeWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BladeWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/BladeWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200068D")]
internal class BladeWeapon : HoldUseable
{
	[Token(Token = "0x4001ED3")]
	[FieldOffset(Offset = "0x40")]
	public float MaxDurability;

	[Token(Token = "0x4001ED4")]
	[FieldOffset(Offset = "0x44")]
	public float CurrentDurability;

	[Token(Token = "0x4001ED5")]
	[FieldOffset(Offset = "0x48")]
	public int MaxBlades;

	[Token(Token = "0x4001ED6")]
	[FieldOffset(Offset = "0x4C")]
	public int BladesLeft;

	[Token(Token = "0x600406C")]
	[Address(RVA = "0x2169A90", Offset = "0x2168090", VA = "0x182169A90")]
	public BladeWeapon(BaseCharacter owner, float durability, int blades)
	{
	}

	[Token(Token = "0x600406D")]
	[Address(RVA = "0x2169A70", Offset = "0x2168070", VA = "0x182169A70")]
	public void UseDurability(float amount)
	{
	}

	[Token(Token = "0x600406E")]
	[Address(RVA = "0x2169A40", Offset = "0x2168040", VA = "0x182169A40", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x600406F")]
	[Address(RVA = "0x2169A60", Offset = "0x2168060", VA = "0x182169A60", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6004070")]
	[Address(RVA = "0x2169980", Offset = "0x2167F80", VA = "0x182169980", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004071")]
	[Address(RVA = "0x2169A30", Offset = "0x2168030", VA = "0x182169A30", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x6004072")]
	[Address(RVA = "0x2169900", Offset = "0x2167F00", VA = "0x182169900", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6004073")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6004074")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
