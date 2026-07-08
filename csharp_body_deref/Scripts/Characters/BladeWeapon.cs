using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004EE")]
internal class BladeWeapon : HoldUseable
{
	[Token(Token = "0x4001725")]
	[FieldOffset(Offset = "0x3C")]
	public float MaxDurability;

	[Token(Token = "0x4001726")]
	[FieldOffset(Offset = "0x40")]
	public float CurrentDurability;

	[Token(Token = "0x4001727")]
	[FieldOffset(Offset = "0x44")]
	public int MaxBlades;

	[Token(Token = "0x4001728")]
	[FieldOffset(Offset = "0x48")]
	public int BladesLeft;

	[Token(Token = "0x6003420")]
	[Address(RVA = "0x3EEEF20", Offset = "0x3EEEF20", VA = "0x3EEEF20")]
	public BladeWeapon(BaseCharacter owner, float durability, int blades)
	{
	}

	[Token(Token = "0x6003421")]
	[Address(RVA = "0x3EEEF60", Offset = "0x3EEEF60", VA = "0x3EEEF60")]
	public void UseDurability(float amount)
	{
	}

	[Token(Token = "0x6003422")]
	[Address(RVA = "0x3EEEF80", Offset = "0x3EEEF80", VA = "0x3EEEF80", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x6003423")]
	[Address(RVA = "0x3EEEFA0", Offset = "0x3EEEFA0", VA = "0x3EEEFA0", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6003424")]
	[Address(RVA = "0x3EEEFB0", Offset = "0x3EEEFB0", VA = "0x3EEEFB0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6003425")]
	[Address(RVA = "0x3EEF050", Offset = "0x3EEF050", VA = "0x3EEF050", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}

	[Token(Token = "0x6003426")]
	[Address(RVA = "0x3EEF060", Offset = "0x3EEF060", VA = "0x3EEF060", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003427")]
	[Address(RVA = "0x3EEF0D0", Offset = "0x3EEF0D0", VA = "0x3EEF0D0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003428")]
	[Address(RVA = "0x3EEF0E0", Offset = "0x3EEF0E0", VA = "0x3EEF0E0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}
}
