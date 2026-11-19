// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Spin3Special
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/Spin3Special.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/Spin3Special.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006E5")]
internal class Spin3Special : BaseAttackSpecial
{
	[Token(Token = "0x4002073")]
	[FieldOffset(Offset = "0x48")]
	protected float AnimationLoopStartTime;

	[Token(Token = "0x4002074")]
	[FieldOffset(Offset = "0x4C")]
	protected float AnimationLoopEndTime;

	[Token(Token = "0x4002075")]
	[FieldOffset(Offset = "0x50")]
	protected int Loops;

	[Token(Token = "0x4002076")]
	[FieldOffset(Offset = "0x54")]
	protected int _stage;

	[Token(Token = "0x4002077")]
	[FieldOffset(Offset = "0x58")]
	protected Vector3 _aimPoint;

	[Token(Token = "0x4002078")]
	[FieldOffset(Offset = "0x64")]
	protected bool _pulled;

	[Token(Token = "0x4002079")]
	[FieldOffset(Offset = "0x65")]
	protected bool _startSpin;

	[Token(Token = "0x400207A")]
	[FieldOffset(Offset = "0x68")]
	protected float PullForce;

	[Token(Token = "0x17000B79")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042DE")]
		[Address(RVA = "0x5B0ECD0", Offset = "0x5B0DCD0", VA = "0x5B0ECD0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/Spin3Special.c (Characters.Spin3Special$$get_ActiveTime): clean
			return 1.0;
		}
	}

	[Token(Token = "0x60042DF")]
	[Address(RVA = "0x5B0ECE0", Offset = "0x5B0DCE0", VA = "0x5B0ECE0")]
	public Spin3Special(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/Spin3Special.c (Characters.Spin3Special$$.ctor): clean
		this.AnimationLoopStartTime = 0.35;
		this.AnimationLoopEndTime = 0.5;
		this.Loops = 3;
		this.PullForce = 13.0;
		base(owner);
		this.Cooldown = 3.5;
		return;
	}

	[Token(Token = "0x60042E0")]
	[Address(RVA = "0x5B0ED10", Offset = "0x5B0DD10", VA = "0x5B0ED10", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/Spin3Special.c (Characters.Spin3Special$$Activate): 2 lines keep C-only constructs
		HookUseable pCVar1;
		HumanStats pCVar2;
		Vector3 UVar5;
		Human pCVar3;
		float fVar4;

		pCVar3 = this._human;
		if (pCVar3 != null) {
			if (pCVar3.MountState == 0) {
				this._stage = 0;
				pCVar1 = pCVar3.HookLeft;
			}
			else {
				pCVar3.Unmount(true);
				pCVar3 = this._human;
				this._stage = 0;
				if (pCVar3 == null) goto label_05c0ee06;
				pCVar1 = pCVar3.HookLeft;
			}
			if (pCVar1 != null) {
				pCVar1.DisableAnyHook();
				pCVar3 = this._human;
				if ((pCVar3 != null) &&(pCVar1 = pCVar3.HookRight, pCVar1 != null)) {
					pCVar1.DisableAnyHook();
					pCVar3 = this._human;
					if ((pCVar3 != null) &&(pCVar2 = pCVar3.Stats, pCVar2 != null)) {
						fVar4 = 0.0;
						if (pCVar2.CurrentGas <= 0.0) {
	label_05c0ede5: ;
							UVar5._0_8_ =pCVar3.GetAimPoint();
							this._aimPoint = UVar5._0_8_;
							this._aimPoint.z = fVar4;
							this._pulled = false;
							this._startSpin = false;
							return;
						}
						pCVar1 = pCVar3.HookRight;
						if (pCVar1 != null) {
							pCVar1.SetInput(true);
							pCVar3 = this._human;
							if (pCVar3 != null) goto label_05c0ede5;
						}
					}
				}
			}
		}
	label_05c0ee06: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042E1")]
	[Address(RVA = "0x5B0EE10", Offset = "0x5B0DE10", VA = "0x5B0EE10", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/Spin3Special.c (Characters.Spin3Special$$ActiveFixedUpdate): 37 lines keep C-only constructs
		float pfVar1;
		int piVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		Human pCVar8;
		AnimationHandler pCVar9;
		BaseComponentCache pUVar10;
		Rigidbody pUVar11;
		SoundSettings pSVar12;
		BoolSetting pSVar13;
		HookUseable pCVar14;
		byte[] auVar15 = new byte[16];
		bool bVar16;
		int iVar17;
		int iVar18;
		Transform __this_00;
		String* ppSVar19;
		UnityEngine_Vector3_StaticFields pUVar20;
		float fVar21;
		float fVar22;
		uint uVar23;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float fVar24;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar25;
		byte[] auVar26 = new byte[16];
		Vector3 UVar27;
		Vector3 force;
		Vector3 UVar28;
		float fStack_48;
		float fStack_44;
		byte[] auStack_30 = new byte[12];
		float fStack_24;
		float fStack_20;
		float fStack_1c;

		if (this._startSpin == false) {
			if (1.0 < this._activeTimeLeft) {
				return;
			}
			pCVar8 = this._human;
			if (pCVar8 != null) {
				pCVar8.StartSpecialAttack(HumanAnimations.SpecialLevi);
				pCVar8 = this._human;
				if (((pCVar8 != null) &&(pUVar10 = pCVar8.Cache, pUVar10 != null)) &&(pUVar11 = pUVar10.Rigidbody, pUVar11 != null)) {
					UVar27 = pUVar11.linearVelocity;
					pUVar20 = typeof(Vector3).static_fields;
					uVar3 = (pUVar20.upVector).x;
					uVar5 = (pUVar20.upVector).y;
					UVar28.x = UVar27.x + (float)uVar3 * 5.0;
					UVar28.y = UVar27.y + (float)uVar5 * 5.0;
					UVar28.z = UVar27.z + (pUVar20.upVector).z * 5.0;
					pUVar11.linearVelocity = UVar28;
					this._startSpin = true;
					return;
				}
			}
			goto label_05c0f48d;
		}
		pCVar8 = this._human;
		if (pCVar8 == null) goto label_05c0f48d;
		if (pCVar8._state != 9) {
			this.IsActive = false;
		}
		pCVar9 = pCVar8.Animation;
		if (pCVar9 == null) goto label_05c0f48d;
		bVar16 = pCVar9.IsPlaying(HumanAnimations.SpecialLevi);
		if (bVar16) {
			pCVar8 = this._human;
			if (pCVar8 == null) goto label_05c0f48d;
			pCVar9 = pCVar8.Animation;
			if (pCVar9 == null) goto label_05c0f48d;
			fVar21 = pCVar9.GetNormalizedTime(HumanAnimations.SpecialLevi);
			pCVar8 = this._human;
			if (pCVar8 == null) goto label_05c0f48d;
			if (((pCVar8.Grounded != false) && (0.4 < fVar21)) && (fVar21 < 0.61)) {
				pUVar10 = pCVar8.Cache;
				if (pUVar10 == null) goto label_05c0f48d;
				pUVar11 = pUVar10.Rigidbody;
				__this_00 = pCVar8.transform;
				if (__this_00 == null) goto label_05c0f48d;
				UVar27 = __this_00.forward;
				if (pUVar11 == null) goto label_05c0f48d;
				force.z = UVar27.z * 200.0;
				force.x = UVar27.x * 200.0;
				force.y = UVar27.y * 200.0;
				pUVar11.AddForce(force);
			}
			iVar17 = this._stage;
			if ((iVar17 != 0) ||(pfVar1 = &this.AnimationLoopStartTime, fVar21 < *pfVar1 || fVar21 == *pfVar1)) {
				if ((iVar17 < this.Loops) &&(pfVar1 = &this.AnimationLoopEndTime, *pfVar1 <= fVar21 && fVar21 != *pfVar1)) {
					pCVar8 = this._human;
					if (pCVar8 == null) goto label_05c0f48d;
					pCVar8.PlayAnimation(HumanAnimations.SpecialLevi, this.AnimationLoopStartTime);
					goto label_05c0f13c;
				}
			}
			else {
				pCVar8 = this._human;
				if (pCVar8 == null) goto label_05c0f48d;
				pCVar8.ActivateBlades();
	label_05c0f13c: ;
				pSVar12 = SettingsManager.SoundSettings;
				if ((pSVar12 == null) ||(pSVar13 = pSVar12.OldBladeEffect, pSVar13 == null)) goto label_05c0f48d;
				pCVar8 = this._human;
				uVar7 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
				if (pSVar13._value == false) {
					if (uVar7 == 0) {
					}
					if (pCVar8 == null) goto label_05c0f48d;
					ppSVar19 = &HumanSounds.BladeSwing3;
				}
				else {
					if (uVar7 == 0) {
					}
					if (pCVar8 == null) goto label_05c0f48d;
					ppSVar19 = &HumanSounds.OldBladeSwing;
				}
				pCVar8.PlaySound(*ppSVar19);
				iVar17 = this._stage + 1;
				this._stage = iVar17;
			}
			if (iVar17 == 3) {
				pCVar8 = this._human;
				if ((pCVar8 == null) ||(pCVar14 = pCVar8.HookRight, pCVar14 == null)) goto label_05c0f48d;
				pCVar14.SetInput(false);
				pCVar8 = this._human;
				if ((pCVar8 == null) ||(pCVar14 = pCVar8.HookLeft, pCVar14 == null)) goto label_05c0f48d;
				pCVar14.DisableAnyHook();
				pCVar8 = this._human;
				if ((pCVar8 == null) ||(pCVar14 = pCVar8.HookRight, pCVar14 == null)) goto label_05c0f48d;
				pCVar14.DisableAnyHook();
				piVar2 = &this._stage;
				*piVar2 = *piVar2 + 1;
			}
		}
		pCVar8 = this._human;
		if ((pCVar8 != null) &&(pCVar14 = pCVar8.HookRight, pCVar14 != null)) {
			bVar16 = pCVar14.HasHook();
			if (!bVar16) {
				return;
			}
			pCVar8 = this._human;
			if ((pCVar8 != null) &&(pCVar14 = pCVar8.HookRight, pCVar14 != null)) {
				iVar18 = pCVar14.GetHookState();
				if ((iVar18 != 4) && (iVar18 != 2)) {
					return;
				}
				if (this._pulled != false) {
					return;
				}
				this._pulled = true;
				pCVar8 = this._human;
				if ((pCVar8 != null) &&(pCVar14 = pCVar8.HookRight, pCVar14 != null)) {
					UVar27 = pCVar14.GetHookPosition();
					pCVar8 = this._human;
					if ((pCVar8 != null) &&((pUVar10 = pCVar8.Cache, pUVar10 != null &&(pUVar11 = pUVar10.Rigidbody, pUVar11 != null)))) {
						UVar28 = pUVar11.position;
						fVar21 = UVar28.x;
						fVar22 = UVar28.y;
						fVar24 = extraout_XMM0_Dc_00;
						fVar25 = extraout_XMM0_Dd_00;
						if (g_data_0753e72d == false) {
							fStack_20 = extraout_XMM0_Dc_00;
							fStack_1c = extraout_XMM0_Dd_00;
							g_data_0753e72d = true;
							fVar21 = (float)auStack_30._8_4_;
							fVar22 = fStack_24;
							fVar24 = fStack_20;
							fVar25 = fStack_1c;
						}
						auStack_30._0_4_ = 0.0;
						auStack_30._4_4_ = 0.0;
						if (g_data_0753e729 == false) {
							fStack_24 = fVar22;
							auStack_30._8_4_ = fVar21;
							fStack_20 = fVar24;
							fStack_1c = fVar25;
							g_data_0753e729 = true;
							fVar21 = (float)auStack_30._8_4_;
							fVar22 = fStack_24;
							fVar24 = fStack_20;
							fVar25 = fStack_1c;
						}
						fStack_48 = UVar27.x;
						fStack_44 = UVar27.y;
						auVar26._0_4_ = fStack_48 - fVar21;
						auVar26._4_4_ = fStack_44 - fVar22;
						auVar26._8_4_ = extraout_XMM0_Dc - fVar24;
						auVar26._12_4_ = extraout_XMM0_Dd - fVar25;
						fVar21 = UVar27.z - UVar28.z;
						uVar23 = 0;
						fVar22 = fVar21 * fVar21 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
						if (fVar22 < 0.0) {
							fVar22 = sqrtf(fVar22);
							uVar23 = extraout_XMM0_Db;
						}
						else {
							fVar22 = SQRT(fVar22);
						}
						if (1e-05 < fVar22) {
							fVar21 = fVar21 / fVar22;
							auVar15._4_4_ = fVar22;
							auVar15._0_4_ = fVar22;
							auVar15._8_4_ = uVar23;
							auVar15._12_4_ = uVar23;
							auVar26 = divps(auVar26, auVar15);
							auStack_30._0_4_ = auVar26._0_4_;
							auStack_30._4_4_ = auVar26._4_4_;
							pUVar20 = (UnityEngine_Vector3_StaticFields)auStack_30;
						}
						else {
							pUVar20 = typeof(Vector3).static_fields;
							fVar21 = (pUVar20.zeroVector).z;
						}
						uVar4 = (pUVar20.zeroVector).x;
						uVar6 = (pUVar20.zeroVector).y;
						fVar22 = this.PullForce;
						UVar27.z = fVar21 * fVar22;
						UVar27.x = fVar22 * (float)uVar4;
						UVar27.y = fVar22 * (float)uVar6;
						pUVar11.AddForce(UVar27, 1);
						return;
					}
				}
			}
		}
	label_05c0f48d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042E2")]
	[Address(RVA = "0x5B0F4A0", Offset = "0x5B0E4A0", VA = "0x5B0F4A0")]
	protected float GetAnimationTime()
	{
		// Lifted from source/cpp/Characters/Spin3Special.c (Characters.Spin3Special$$GetAnimationTime): clean
		Human pCVar1;
		AnimationHandler __this_00;
		float fVar2;

		pCVar1 = this._human;
		if (pCVar1 != null) {
			__this_00 = pCVar1.Animation;
			if (__this_00 != null) {
				return fVar2;
			}
		}
		throw new NullReferenceException();
	}
}
