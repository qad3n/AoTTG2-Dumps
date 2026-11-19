// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BladeWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BladeWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/BladeWeapon.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$.ctor): clean
		base(owner);
		this.MaxBlades = blades;
		this.BladesLeft = blades;
		this.MaxDurability = durability;
		this.CurrentDurability = durability;
		return;
	}

	[Token(Token = "0x6004305")]
	[Address(RVA = "0x5B12140", Offset = "0x5B11140", VA = "0x5B12140")]
	public void UseDurability(float amount)
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$UseDurability): clean
		float fVar1;

		fVar1 = this.CurrentDurability - amount;
		if (fVar1 <= 0.0) {
			fVar1 = 0.0;
		}
		this.CurrentDurability = fVar1;
		return;
	}

	[Token(Token = "0x6004306")]
	[Address(RVA = "0x5B12160", Offset = "0x5B11160", VA = "0x5B12160", Slot = "4")]
	public override void Reload()
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$Reload): clean
		int iVar1;

		iVar1 = this.BladesLeft;
		if (iVar1 < 1) {
			this.CurrentDurability = 0.0;
			return;
		}
		this.BladesLeft = iVar1 + -1;
		this.CurrentDurability = this.MaxDurability;
		return;
	}

	[Token(Token = "0x6004307")]
	[Address(RVA = "0x5B12180", Offset = "0x5B11180", VA = "0x5B12180", Slot = "5")]
	public override void Reset()
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$Reset): clean
		this.BladesLeft = this.MaxBlades;
		this.CurrentDurability = this.MaxDurability;
		return;
	}

	[Token(Token = "0x6004308")]
	[Address(RVA = "0x5B121A0", Offset = "0x5B111A0", VA = "0x5B121A0", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$CanUse): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseCharacter pCVar3;
		bool bVar4;
		bool bVar5;

		bVar4 = this.CanUse();
		if (bVar4) {
			if ((0.0 < this.CurrentDurability) || (this.BladesLeft == 0)) {
				pCVar3 = this._owner;
				if (pCVar3 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if (((pCVar3.klass._2).typeHierarchyDepth < bVar1) ||((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
					throw new InvalidCastException();
				}
				iVar2._0_1_ = (*(byte)((sbyte)pCVar3 + 0x178));
				iVar2._1_1_ = (*(byte)((sbyte)pCVar3 + 0x179));
				iVar2._2_2_ = *(ushort)&pCVar3[1].field_0x6a;
				bVar5 = iVar2 == 0;
			}
			else {
			}
		}
		return bVar5;
	}

	[Token(Token = "0x6004309")]
	[Address(RVA = "0x5B12240", Offset = "0x5B11240", VA = "0x5B12240", Slot = "7")]
	public override bool HasDurability()
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$HasDurability): clean
		return 0.0 < this.CurrentDurability;
	}

	[Token(Token = "0x600430A")]
	[Address(RVA = "0x5B12250", Offset = "0x5B11250", VA = "0x5B12250", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$Activate): 1 lines keep C-only constructs
		byte bVar1;
		Human __this_00;

		__this_00 = (Human)this._owner;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		__this_00.StartBladeSwing();
		return;
	}

	[Token(Token = "0x600430B")]
	[Address(RVA = "0x5B122C0", Offset = "0x5B112C0", VA = "0x5B122C0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$Deactivate): clean
		return;
	}

	[Token(Token = "0x600430C")]
	[Address(RVA = "0x5B122D0", Offset = "0x5B112D0", VA = "0x5B122D0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/BladeWeapon.c (Characters.BladeWeapon$$ActiveFixedUpdate): clean
		return;
	}
}
