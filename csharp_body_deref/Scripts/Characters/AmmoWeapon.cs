// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AmmoWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AmmoWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AmmoWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006EB")]
internal class AmmoWeapon : ExtendedUseable
{
	[Token(Token = "0x400207D")]
	[FieldOffset(Offset = "0x3C")]
	public int MaxAmmo;

	[Token(Token = "0x400207E")]
	[FieldOffset(Offset = "0x40")]
	public int AmmoLeft;

	[Token(Token = "0x400207F")]
	[FieldOffset(Offset = "0x44")]
	public int MaxRound;

	[Token(Token = "0x4002080")]
	[FieldOffset(Offset = "0x48")]
	public int RoundLeft;

	[Token(Token = "0x60042FD")]
	[Address(RVA = "0x5B0FF20", Offset = "0x5B0EF20", VA = "0x5B0FF20")]
	public AmmoWeapon(BaseCharacter owner, int ammo, int round, float cooldown)
	{
	}

	[Token(Token = "0x60042FE")]
	[Address(RVA = "0x5B12020", Offset = "0x5B11020", VA = "0x5B12020")]
	public bool NeedRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x60042FF")]
	[Address(RVA = "0x5B12040", Offset = "0x5B11040", VA = "0x5B12040", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x6004300")]
	[Address(RVA = "0x5B12070", Offset = "0x5B11070", VA = "0x5B12070", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6004301")]
	[Address(RVA = "0x5B12090", Offset = "0x5B11090", VA = "0x5B12090", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x6004302")]
	[Address(RVA = "0x5B120B0", Offset = "0x5B110B0", VA = "0x5B120B0", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x6004303")]
	[Address(RVA = "0x5B120E0", Offset = "0x5B110E0", VA = "0x5B120E0", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}
}
