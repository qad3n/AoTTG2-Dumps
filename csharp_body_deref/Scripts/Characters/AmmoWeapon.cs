// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AmmoWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AmmoWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AmmoWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200068C")]
internal class AmmoWeapon : ExtendedUseable
{
	[Token(Token = "0x4001ECF")]
	[FieldOffset(Offset = "0x40")]
	public int MaxAmmo;

	[Token(Token = "0x4001ED0")]
	[FieldOffset(Offset = "0x44")]
	public int AmmoLeft;

	[Token(Token = "0x4001ED1")]
	[FieldOffset(Offset = "0x48")]
	public int MaxRound;

	[Token(Token = "0x4001ED2")]
	[FieldOffset(Offset = "0x4C")]
	public int RoundLeft;

	[Token(Token = "0x6004065")]
	[Address(RVA = "0x21633E0", Offset = "0x21619E0", VA = "0x1821633E0")]
	public AmmoWeapon(BaseCharacter owner, int ammo, int round, float cooldown)
	{
	}

	[Token(Token = "0x6004066")]
	[Address(RVA = "0x2164680", Offset = "0x2162C80", VA = "0x182164680")]
	public bool NeedRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x6004067")]
	[Address(RVA = "0x21646C0", Offset = "0x2162CC0", VA = "0x1821646C0", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x6004068")]
	[Address(RVA = "0x21646F0", Offset = "0x2162CF0", VA = "0x1821646F0", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6004069")]
	[Address(RVA = "0x21646A0", Offset = "0x2162CA0", VA = "0x1821646A0", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x600406A")]
	[Address(RVA = "0x2164620", Offset = "0x2162C20", VA = "0x182164620", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600406B")]
	[Address(RVA = "0x2164660", Offset = "0x2162C60", VA = "0x182164660", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}
}
