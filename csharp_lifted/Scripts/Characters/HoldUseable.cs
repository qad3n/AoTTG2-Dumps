// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HoldUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HoldUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/HoldUseable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x2000698")]
internal class HoldUseable : ExtendedUseable
{
	[Token(Token = "0x6004028")]
	[Address(RVA = "0x5ABCDE0", Offset = "0x5ABBDE0", VA = "0x5ABCDE0")]
	public HoldUseable(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/HoldUseable.c (Characters.HoldUseable$$.ctor): clean
		this._lastUseTime = -1000.0;
		base();
		this._owner = owner;
		this.Cooldown = 0.0;
		this.UsesLeft = -1;
		this.MaxUses = -1;
		return;
	}

	[Token(Token = "0x6004029")]
	[Address(RVA = "0x5ABCE20", Offset = "0x5ABBE20", VA = "0x5ABCE20", Slot = "13")]
	public override void OnFixedUpdate()
	{
		// Lifted from source/cpp/Characters/HoldUseable.c (Characters.HoldUseable$$OnFixedUpdate): clean
		if (this.IsActive == false) {
			return;
		}
		this.ActiveFixedUpdate();
		return;
	}

	[Token(Token = "0x600402A")]
	[Address(RVA = "0x5ABCE40", Offset = "0x5ABBE40", VA = "0x5ABCE40", Slot = "12")]
	public override void SetInput(bool key)
	{
		// Lifted from source/cpp/Characters/HoldUseable.c (Characters.HoldUseable$$SetInput): 7 lines keep C-only constructs
		VirtualInvokeData_6411beea80bb pVVar1;
		bool bVar2;
		VirtualInvokeData_6411beea80bb pVVar3;
		undefined7 in_register_00000031;
		float fVar4;

		bVar2 = this.IsActive;
		if ((int)CONCAT71(in_register_00000031, key) == 0) {
			if (bVar2 != false) {
				this.IsActive = false;
				pVVar3 = &(this.klass.vtable)._10_Deactivate;
				pVVar1 = &(this.klass.vtable)._10_Deactivate;
	label_05bbcec0: ;
				(*pVVar3.methodPtr)(this,pVVar1.method);
				return;
			}
		}
		else if (bVar2 == false) {
			bVar2 = this.CanUse();
			if (bVar2) {
				this.IsActive = true;
				fVar4 = this.get_ActiveTime();
				this._activeTimeLeft = fVar4;
				this.Activate();
				pVVar3 = &(this.klass.vtable)._8_OnUse;
				pVVar1 = &(this.klass.vtable)._8_OnUse;
				goto label_05bbcec0;
			}
		}
		return;
	}

	[Token(Token = "0x600402B")]
	[Address(RVA = "0x5ABCED0", Offset = "0x5ABBED0", VA = "0x5ABCED0", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
		// Lifted from source/cpp/Characters/HoldUseable.c (Characters.HoldUseable$$ReadInput): clean
		bool bVar1;

		if (keybind == null) {
			throw new NullReferenceException();
		}
		bVar1 = keybind.GetKey(false);
		this.SetInput(bVar1);
		return;
	}
}
