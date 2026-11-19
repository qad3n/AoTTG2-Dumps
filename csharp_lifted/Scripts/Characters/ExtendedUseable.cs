// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ExtendedUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ExtendedUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseUseable/ExtendedUseable.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Characters;

[Token(Token = "0x2000697")]
internal abstract class ExtendedUseable : BaseUseable
{
	[Token(Token = "0x4001DC9")]
	[FieldOffset(Offset = "0x38")]
	protected float _activeTimeLeft;

	[Token(Token = "0x17000B1B")]
	protected virtual float ActiveTime
	{
		[Token(Token = "0x6004021")]
		[Address(RVA = "0x5ABCC30", Offset = "0x5ABBC30", VA = "0x5ABCC30", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/ExtendedUseable.c (Characters.ExtendedUseable$$get_ActiveTime): clean
			return 0.0;
		}
	}

	[Token(Token = "0x6004022")]
	[Address(RVA = "0x5ABCC40", Offset = "0x5ABBC40", VA = "0x5ABCC40")]
	public ExtendedUseable(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/ExtendedUseable.c (Characters.ExtendedUseable$$.ctor): clean
		this._lastUseTime = -1000.0;
		base();
		this._owner = owner;
		this.Cooldown = 0.0;
		this.UsesLeft = -1;
		this.MaxUses = -1;
		return;
	}

	[Token(Token = "0x6004023")]
	[Address(RVA = "0x5ABCC80", Offset = "0x5ABBC80", VA = "0x5ABCC80", Slot = "15")]
	protected virtual float GetActiveTime()
	{
		// Lifted from source/cpp/Characters/ExtendedUseable.c (Characters.ExtendedUseable$$GetActiveTime): clean
		float fVar1;

		return fVar1;
	}

	[Token(Token = "0x6004024")]
	[Address(RVA = "0x5ABCCA0", Offset = "0x5ABBCA0", VA = "0x5ABCCA0", Slot = "11")]
	public override void ReadInput(KeybindSetting keybind)
	{
		// Lifted from source/cpp/Characters/ExtendedUseable.c (Characters.ExtendedUseable$$ReadInput): clean
		bool bVar1;

		if (keybind == null) {
			throw new NullReferenceException();
		}
		bVar1 = keybind.GetKeyDown(false);
		this.SetInput(bVar1);
		return;
	}

	[Token(Token = "0x6004025")]
	[Address(RVA = "0x5ABCCE0", Offset = "0x5ABBCE0", VA = "0x5ABCCE0", Slot = "12")]
	public override void SetInput(bool key)
	{
		// Lifted from source/cpp/Characters/ExtendedUseable.c (Characters.ExtendedUseable$$SetInput): 2 lines keep C-only constructs
		bool bVar1;
		undefined7 in_register_00000031;
		float fVar2;

		if ((int)CONCAT71(in_register_00000031, key) != 0) {
			bVar1 = this.CanUse();
			if ((bVar1) && (this.IsActive == false)) {
				this.IsActive = true;
				fVar2 = this.GetActiveTime();
				this._activeTimeLeft = fVar2;
				this.Activate();
				this.OnUse();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004026")]
	[Address(RVA = "0x5ABCD50", Offset = "0x5ABBD50", VA = "0x5ABCD50", Slot = "13")]
	public override void OnFixedUpdate()
	{
		// Lifted from source/cpp/Characters/ExtendedUseable.c (Characters.ExtendedUseable$$OnFixedUpdate): 5 lines keep C-only constructs
		VirtualInvokeData_6411beea80bb pVVar1;
		VirtualInvokeData_6411beea80bb pVVar2;
		float fVar3;
		float fVar4;

		if (this.IsActive == false) {
			return;
		}
		fVar4 = this._activeTimeLeft;
		fVar3 = Time.fixedDeltaTime;
		fVar4 = fVar4 - fVar3;
		this._activeTimeLeft = fVar4;
		if (fVar4 <= 0.0) {
			this.IsActive = false;
			pVVar2 = &(this.klass.vtable)._10_Deactivate;
			pVVar1 = &(this.klass.vtable)._10_Deactivate;
		}
		else {
			pVVar2 = &(this.klass.vtable)._16_ActiveFixedUpdate;
			pVVar1 = &(this.klass.vtable)._16_ActiveFixedUpdate;
		}
		(*pVVar2.methodPtr)(this,pVVar1.method);
		return;
	}

	[Token(Token = "0x6004027")]
	[Address(RVA = "0x5ABCDD0", Offset = "0x5ABBDD0", VA = "0x5ABCDD0", Slot = "16")]
	protected virtual void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/ExtendedUseable.c (Characters.ExtendedUseable$$ActiveFixedUpdate): clean
		return;
	}
}
