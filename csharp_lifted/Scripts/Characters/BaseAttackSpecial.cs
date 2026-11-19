// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseAttackSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D3")]
internal class BaseAttackSpecial : ExtendedUseable
{
	[Token(Token = "0x4002054")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x6004288")]
	[Address(RVA = "0x5B08C40", Offset = "0x5B07C40", VA = "0x5B08C40")]
	public BaseAttackSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/BaseAttackSpecial.c (Characters.BaseAttackSpecial$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;

		base(owner);
		pCVar2 = typeof(Human);
		if (owner == null) {
			this._human = null;
	label_05c08ccf: ;
			return;
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if ((bVar1 <= (owner.klass._2).typeHierarchyDepth) &&((owner.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
			this._human = (Human)owner;
			if ((bVar1 <= (owner.klass._2).typeHierarchyDepth) &&((owner.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pCVar2)) goto label_05c08ccf;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004289")]
	[Address(RVA = "0x5B08CF0", Offset = "0x5B07CF0", VA = "0x5B08CF0", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/BaseAttackSpecial.c (Characters.BaseAttackSpecial$$CanUse): clean
		Human __this_00;
		bool bVar1;

		bVar1 = this.CanUse();
		if (!bVar1) {
			return false;
		}
		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.CanBladeAttack();
		return bVar1;
	}

	[Token(Token = "0x600428A")]
	[Address(RVA = "0x5B08D20", Offset = "0x5B07D20", VA = "0x5B08D20")]
	protected bool InSpecial()
	{
		// Lifted from source/cpp/Characters/BaseAttackSpecial.c (Characters.BaseAttackSpecial$$InSpecial): clean
		Human pCVar1;

		pCVar1 = this._human;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1._state == 9;
	}

	[Token(Token = "0x600428B")]
	[Address(RVA = "0x5B08D40", Offset = "0x5B07D40", VA = "0x5B08D40", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/BaseAttackSpecial.c (Characters.BaseAttackSpecial$$Deactivate): clean
		Human __this_00;

		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Idle();
		return;
	}

	[Token(Token = "0x600428C")]
	[Address(RVA = "0x5B08D60", Offset = "0x5B07D60", VA = "0x5B08D60", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/BaseAttackSpecial.c (Characters.BaseAttackSpecial$$ActiveFixedUpdate): clean
		Human pCVar1;

		pCVar1 = this._human;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		if (pCVar1._state != 9) {
			this.IsActive = false;
		}
		return;
	}
}
