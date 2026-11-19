// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AmmoWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AmmoWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AmmoWeapon.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Characters/AmmoWeapon.c (Characters.AmmoWeapon$$.ctor): clean
		int iVar1;

		iVar1 = 0;
		base(owner);
		this.MaxAmmo = ammo;
		this.RoundLeft = round;
		this.MaxRound = round;
		this.Cooldown = cooldown;
		if (round == -1) {
			this.RoundLeft = ammo;
		}
		else {
			iVar1 = ammo - round;
		}
		this.AmmoLeft = iVar1;
		return;
	}

	[Token(Token = "0x60042FE")]
	[Address(RVA = "0x5B12020", Offset = "0x5B11020", VA = "0x5B12020")]
	public bool NeedRefill()
	{
		// Lifted from source/cpp/Characters/AmmoWeapon.c (Characters.AmmoWeapon$$NeedRefill): clean
		int iVar1;
		int iVar2;

		iVar1 = this.MaxRound;
		iVar2 = this.RoundLeft;
		if (iVar1 != -1) {
			if (iVar2 < iVar1) {
				return true;
			}
			iVar2 = iVar2 + this.AmmoLeft;
		}
		return iVar2 < this.MaxAmmo;
	}

	[Token(Token = "0x60042FF")]
	[Address(RVA = "0x5B12040", Offset = "0x5B11040", VA = "0x5B12040", Slot = "4")]
	public override void Reload()
	{
		// Lifted from source/cpp/Characters/AmmoWeapon.c (Characters.AmmoWeapon$$Reload): clean
		int iVar1;
		int iVar2;
		int iVar3;
		int iVar4;

		iVar3 = this.MaxRound;
		if (iVar3 != -1) {
			iVar1 = this.AmmoLeft;
			iVar2 = this.RoundLeft;
			iVar3 = iVar3 - iVar2;
			if (iVar1 <= iVar3) {
				iVar3 = iVar1;
			}
			iVar4 = 0;
			if (0 < iVar3) {
				iVar4 = iVar3;
			}
			this.AmmoLeft = iVar1 - iVar4;
			this.RoundLeft = iVar4 + iVar2;
		}
		return;
	}

	[Token(Token = "0x6004300")]
	[Address(RVA = "0x5B12070", Offset = "0x5B11070", VA = "0x5B12070", Slot = "5")]
	public override void Reset()
	{
		// Lifted from source/cpp/Characters/AmmoWeapon.c (Characters.AmmoWeapon$$Reset): clean
		int iVar1;
		int iVar2;
		int iVar3;
		int iVar4;

		iVar1 = this.MaxAmmo;
		iVar2 = this.MaxRound;
		iVar3 = iVar2;
		if (iVar2 == -1) {
			iVar3 = iVar1;
		}
		iVar4 = 0;
		if (iVar2 != -1) {
			iVar4 = iVar1 - iVar2;
		}
		this.RoundLeft = iVar3;
		this.AmmoLeft = iVar4;
		return;
	}

	[Token(Token = "0x6004301")]
	[Address(RVA = "0x5B12090", Offset = "0x5B11090", VA = "0x5B12090", Slot = "8")]
	protected override void OnUse()
	{
		// Lifted from source/cpp/Characters/AmmoWeapon.c (Characters.AmmoWeapon$$OnUse): clean
		int iVar1;

		this.OnUse();
		iVar1 = this.RoundLeft;
		if (-1 < iVar1) {
			this.RoundLeft = iVar1 + -1;
		}
		return;
	}

	[Token(Token = "0x6004302")]
	[Address(RVA = "0x5B120B0", Offset = "0x5B110B0", VA = "0x5B120B0", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/AmmoWeapon.c (Characters.AmmoWeapon$$CanUse): clean
		int iVar1;
		bool bVar2;
		bool bVar3;

		bVar2 = this.CanUse();
		if (bVar2) {
			iVar1 = this.RoundLeft;
			bVar3 = iVar1 == -1 || 0 < iVar1;
		}
		return bVar3;
	}

	[Token(Token = "0x6004303")]
	[Address(RVA = "0x5B120E0", Offset = "0x5B110E0", VA = "0x5B120E0", Slot = "7")]
	public override bool HasDurability()
	{
		// Lifted from source/cpp/Characters/AmmoWeapon.c (Characters.AmmoWeapon$$HasDurability): clean
		int iVar1;

		iVar1 = this.RoundLeft;
		return iVar1 == -1 || 0 < iVar1;
	}
}
