// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseHoldAttackSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseHoldAttackSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseHoldAttackSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D5")]
internal class BaseHoldAttackSpecial : HoldUseable
{
	[Token(Token = "0x4002056")]
	[FieldOffset(Offset = "0x40")]
	protected Human _human;

	[Token(Token = "0x4002057")]
	[FieldOffset(Offset = "0x48")]
	protected bool _keyIsReset;

	[Token(Token = "0x17000B64")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004291")]
		[Address(RVA = "0x5B08EB0", Offset = "0x5B07EB0", VA = "0x5B08EB0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/BaseHoldAttackSpecial.c (Characters.BaseHoldAttackSpecial$$get_ActiveTime): clean
			return INFINITY;
		}
	}

	[Token(Token = "0x6004292")]
	[Address(RVA = "0x5B08EC0", Offset = "0x5B07EC0", VA = "0x5B08EC0")]
	public BaseHoldAttackSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/BaseHoldAttackSpecial.c (Characters.BaseHoldAttackSpecial$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;

		this._keyIsReset = true;
		base(owner);
		pCVar2 = typeof(Human);
		if (owner == null) {
			this._human = null;
	label_05c08f53: ;
			return;
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if ((bVar1 <= (owner.klass._2).typeHierarchyDepth) &&((owner.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
			this._human = (Human)owner;
			if ((bVar1 <= (owner.klass._2).typeHierarchyDepth) &&((owner.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pCVar2)) goto label_05c08f53;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004293")]
	[Address(RVA = "0x5B08F70", Offset = "0x5B07F70", VA = "0x5B08F70", Slot = "12")]
	public override void SetInput(bool key)
	{
		// Lifted from source/cpp/Characters/BaseHoldAttackSpecial.c (Characters.BaseHoldAttackSpecial$$SetInput): 7 lines keep C-only constructs
		VirtualInvokeData_6411beea80bb pVVar1;
		bool bVar2;
		VirtualInvokeData_6411beea80bb pVVar3;
		undefined7 in_register_00000031;
		float fVar4;

		bVar2 = this.IsActive;
		if ((int)CONCAT71(in_register_00000031, key) == 0) {
			if (bVar2 == false) goto label_05c0900d;
			this.IsActive = false;
			pVVar3 = &(this.klass.vtable)._10_Deactivate;
			pVVar1 = &(this.klass.vtable)._10_Deactivate;
		}
		else {
			if (bVar2 != false) goto label_05c0900d;
			bVar2 = this.CanUse();
			if ((!bVar2) || (this._keyIsReset == false)) goto label_05c0900d;
			this.IsActive = true;
			fVar4 = this.get_ActiveTime();
			this._activeTimeLeft = fVar4;
			this.Activate();
			pVVar3 = &(this.klass.vtable)._8_OnUse;
			pVVar1 = &(this.klass.vtable)._8_OnUse;
		}
		(*pVVar3.methodPtr)(this,pVVar1.method);
	label_05c0900d: ;
		this._keyIsReset = !key;
		return;
	}

	[Token(Token = "0x6004294")]
	[Address(RVA = "0x5B09020", Offset = "0x5B08020", VA = "0x5B09020", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/BaseHoldAttackSpecial.c (Characters.BaseHoldAttackSpecial$$CanUse): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x6004295")]
	[Address(RVA = "0x5B09030", Offset = "0x5B08030", VA = "0x5B09030", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/BaseHoldAttackSpecial.c (Characters.BaseHoldAttackSpecial$$Deactivate): clean
		Human __this_00;

		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Idle();
		return;
	}
}
