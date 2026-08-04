// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AmmoWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AmmoWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AmmoWeapon.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000531")]
internal class AmmoWeapon : ExtendedUseable
{
	[Token(Token = "0x4001832")]
	[FieldOffset(Offset = "0x3C")]
	public int MaxAmmo;

	[Token(Token = "0x4001833")]
	[FieldOffset(Offset = "0x40")]
	public int AmmoLeft;

	[Token(Token = "0x4001834")]
	[FieldOffset(Offset = "0x44")]
	public int MaxRound;

	[Token(Token = "0x4001835")]
	[FieldOffset(Offset = "0x48")]
	public int RoundLeft;

	[Token(Token = "0x6003625")]
	[Address(RVA = "0x41F9900", Offset = "0x41F9900", VA = "0x41F9900")]
	public AmmoWeapon(BaseCharacter owner, int ammo, int round, float cooldown)
	{
	}

	[Token(Token = "0x6003626")]
	[Address(RVA = "0x41FA690", Offset = "0x41FA690", VA = "0x41FA690")]
	public bool NeedRefill()
	{
		return default(bool);
	}

	[Token(Token = "0x6003627")]
	[Address(RVA = "0x41FA6B0", Offset = "0x41FA6B0", VA = "0x41FA6B0", Slot = "4")]
	public override void Reload()
	{
	}

	[Token(Token = "0x6003628")]
	[Address(RVA = "0x41FA6E0", Offset = "0x41FA6E0", VA = "0x41FA6E0", Slot = "5")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6003629")]
	[Address(RVA = "0x41FA700", Offset = "0x41FA700", VA = "0x41FA700", Slot = "8")]
	protected override void OnUse()
	{
	}

	[Token(Token = "0x600362A")]
	[Address(RVA = "0x41FA720", Offset = "0x41FA720", VA = "0x41FA720", Slot = "6")]
	public override bool CanUse()
	{
		return default(bool);
	}

	[Token(Token = "0x600362B")]
	[Address(RVA = "0x41FA750", Offset = "0x41FA750", VA = "0x41FA750", Slot = "7")]
	public override bool HasDurability()
	{
		return default(bool);
	}
}
