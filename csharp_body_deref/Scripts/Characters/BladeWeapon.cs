// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BladeWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BladeWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/BladeWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006EC")]
internal class BladeWeapon : HoldUseable
{
	[Token(Token = "0x4002081")]
	[FieldOffset(Offset = "0x3C")]
	public float MaxDurability;

	[Token(Token = "0x4002082")]
	[FieldOffset(Offset = "0x40")]
	public float CurrentDurability;

	[Token(Token = "0x4002083")]
	[FieldOffset(Offset = "0x44")]
	public int MaxBlades;

	[Token(Token = "0x4002084")]
	[FieldOffset(Offset = "0x48")]
	public int BladesLeft;

	[Token(Token = "0x6004304")]
	[Address(RVA = "0x5B12100", Offset = "0x5B11100", VA = "0x5B12100")]
	public BladeWeapon(BaseCharacter owner, float durability, int blades)
	{
	}

	[Token(Token = "0x6004305")]
	[Address(RVA = "0x5B12140", Offset = "0x5B11140", VA = "0x5B12140")]
	public void UseDurability(float amount)
	{
	}

	[Token(Token = "0x6004306")]
	[Address(RVA = "0x5B12160", Offset = "0x5B11160", VA = "0x5B12160", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x6004307")]
	[Address(RVA = "0x5B12180", Offset = "0x5B11180", VA = "0x5B12180", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6004308")]
	[Address(RVA = "0x5B121A0", Offset = "0x5B111A0", VA = "0x5B121A0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004309")]
	[Address(RVA = "0x5B12240", Offset = "0x5B11240", VA = "0x5B12240", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x600430A")]
	[Address(RVA = "0x5B12250", Offset = "0x5B11250", VA = "0x5B12250", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600430B")]
	[Address(RVA = "0x5B122C0", Offset = "0x5B112C0", VA = "0x5B122C0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x600430C")]
	[Address(RVA = "0x5B122D0", Offset = "0x5B112D0", VA = "0x5B122D0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
