using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004ED")]
internal class AmmoWeapon : ExtendedUseable
{
	[Token(Token = "0x4001721")]
	[FieldOffset(Offset = "0x3C")]
	public int MaxAmmo;

	[Token(Token = "0x4001722")]
	[FieldOffset(Offset = "0x40")]
	public int AmmoLeft;

	[Token(Token = "0x4001723")]
	[FieldOffset(Offset = "0x44")]
	public int MaxRound;

	[Token(Token = "0x4001724")]
	[FieldOffset(Offset = "0x48")]
	public int RoundLeft;

	[Token(Token = "0x6003419")]
	[Address(RVA = "0x3EED040", Offset = "0x3EED040", VA = "0x3EED040")]
	public AmmoWeapon(BaseCharacter owner, int ammo, int round, float cooldown)
	{
	}

	[Token(Token = "0x600341A")]
	[Address(RVA = "0x3EEEE40", Offset = "0x3EEEE40", VA = "0x3EEEE40")]
	public bool NeedRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x600341B")]
	[Address(RVA = "0x3EEEE60", Offset = "0x3EEEE60", VA = "0x3EEEE60", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x600341C")]
	[Address(RVA = "0x3EEEE90", Offset = "0x3EEEE90", VA = "0x3EEEE90", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600341D")]
	[Address(RVA = "0x3EEEEB0", Offset = "0x3EEEEB0", VA = "0x3EEEEB0", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x600341E")]
	[Address(RVA = "0x3EEEED0", Offset = "0x3EEEED0", VA = "0x3EEEED0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600341F")]
	[Address(RVA = "0x3EEEF00", Offset = "0x3EEEF00", VA = "0x3EEEF00", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}
}
