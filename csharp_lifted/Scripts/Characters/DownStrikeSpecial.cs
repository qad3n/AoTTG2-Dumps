// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DownStrikeSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DownStrikeSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/DownStrikeSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DC")]
internal class DownStrikeSpecial : BaseHoldAttackSpecial
{
	[Token(Token = "0x4002062")]
	[FieldOffset(Offset = "0x49")]
	protected bool _needActivate;

	[Token(Token = "0x60042B6")]
	[Address(RVA = "0x5B0B520", Offset = "0x5B0A520", VA = "0x5B0B520")]
	public DownStrikeSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/DownStrikeSpecial.c (Characters.DownStrikeSpecial$$.ctor): clean
		base(owner);
		this.Cooldown = 5.0;
		return;
	}

	[Token(Token = "0x60042B7")]
	[Address(RVA = "0x5B0B540", Offset = "0x5B0A540", VA = "0x5B0B540", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/DownStrikeSpecial.c (Characters.DownStrikeSpecial$$Activate): clean
		Human pCVar1;
		HookUseable pCVar2;

		pCVar1 = this._human;
		if (pCVar1 != null) {
			if (pCVar1.MountState == 0) {
				this._needActivate = true;
				pCVar2 = pCVar1.HookLeft;
			}
			else {
				pCVar1.Unmount(false);
				pCVar1 = this._human;
				this._needActivate = true;
				if (pCVar1 == null) goto label_05c0b62a;
				pCVar2 = pCVar1.HookLeft;
			}
			if (pCVar2 != null) {
				pCVar2.DisableAnyHook();
				pCVar1 = this._human;
				if ((pCVar1 != null) &&(pCVar2 = pCVar1.HookRight, pCVar2 != null)) {
					pCVar2.DisableAnyHook();
					pCVar1 = this._human;
					if (pCVar1 != null) {
						pCVar1.CancelHookLeftKey = true;
						pCVar1.CancelHookRightKey = true;
						pCVar1.CancelHookBothKey = true;
						pCVar1.StartSpecialAttack(HumanAnimations.SpecialMikasa1);
						return;
					}
				}
			}
		}
	label_05c0b62a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042B8")]
	[Address(RVA = "0x5B0B630", Offset = "0x5B0A630", VA = "0x5B0B630", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/DownStrikeSpecial.c (Characters.DownStrikeSpecial$$ActiveFixedUpdate): 4 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		bool bVar5;
		uint uVar6;
		Human pCVar7;
		BaseComponentCache pUVar8;
		Rigidbody pUVar9;
		UnityEngine_Vector3_StaticFields pUVar10;
		SoundSettings pSVar11;
		BoolSetting pSVar12;
		HookUseable pCVar13;
		String* ppSVar14;
		Vector3 force;
		Vector3 force_00;

		this.ActiveFixedUpdate();
		bVar5 = this._needActivate;
		if (bVar5 != false) {
			pCVar7 = this._human;
			if ((pCVar7 == null) ||(pUVar8 = pCVar7.Cache, pUVar8 == null)) goto label_05c0b912;
			pUVar9 = pUVar8.Rigidbody;
			if (pUVar9 == null) goto label_05c0b912;
			pUVar10 = typeof(Vector3).static_fields;
			force.z = (pUVar10.upVector).z * 10.0;
			uVar1 = (pUVar10.upVector).x;
			uVar3 = (pUVar10.upVector).y;
			force.x = (float)uVar1 * 10.0;
			force.y = (float)uVar3 * 10.0;
			pUVar9.AddForce(force, 1);
			this._needActivate = false;
			pCVar7 = this._human;
			if ((pCVar7 == null) ||(pUVar8 = pCVar7.Cache, pUVar8 == null)) goto label_05c0b912;
			pUVar9 = pUVar8.Rigidbody;
			if (pUVar9 == null) goto label_05c0b912;
			pUVar9.linearVelocity = (Vector3)(Vector3.zeroVector);
			pCVar7 = this._human;
			if (pCVar7 == null) goto label_05c0b912;
			pCVar7.ActivateBlades();
			pSVar11 = SettingsManager.SoundSettings;
			if ((pSVar11 == null) ||(pSVar12 = pSVar11.OldBladeEffect, pSVar12 == null)) goto label_05c0b912;
			pCVar7 = this._human;
			uVar6 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			if (pSVar12._value == false) {
				if (uVar6 == 0) {
				}
				if (pCVar7 == null) goto label_05c0b912;
				ppSVar14 = &HumanSounds.BladeSwing4;
			}
			else {
				if (uVar6 == 0) {
				}
				if (pCVar7 == null) goto label_05c0b912;
				ppSVar14 = &HumanSounds.OldBladeSwing;
			}
			pCVar7.PlaySound(*ppSVar14);
		}
		pCVar7 = this._human;
		if ((pCVar7 != null) &&(pUVar8 = pCVar7.Cache, pUVar8 != null)) {
			pUVar9 = pUVar8.Rigidbody;
			if (pUVar9 == null) goto label_05c0b912;
			pUVar10 = typeof(Vector3).static_fields;
			force_00.z = (pUVar10.downVector).z * 3.0;
			uVar2 = (pUVar10.downVector).x;
			uVar4 = (pUVar10.downVector).y;
			force_00.x = (float)uVar2 * 3.0;
			force_00.y = (float)uVar4 * 3.0;
			pUVar9.AddForce(force_00, 2);
			pCVar7 = this._human;
			if (bVar5 == false) {
				if (pCVar7 == null) goto label_05c0b912;
				if (pCVar7.Grounded != false) goto label_05c0b8ef;
			}
			else if (pCVar7 == null) goto label_05c0b912;
			pCVar13 = pCVar7.HookLeft;
			if (pCVar13 != null) {
				if (pCVar13.IsActive == false) {
					pCVar13 = pCVar7.HookRight;
					if (pCVar13 == null) goto label_05c0b912;
					if ((pCVar13.IsActive == false) && (pCVar7._state != 7)) {
						return;
					}
				}
	label_05c0b8ef: ;
				this.IsActive = false;
				this.Deactivate();
				return;
			}
		}
	label_05c0b912: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042B9")]
	[Address(RVA = "0x5B0B920", Offset = "0x5B0A920", VA = "0x5B0B920", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/DownStrikeSpecial.c (Characters.DownStrikeSpecial$$CanUse): clean
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
}
