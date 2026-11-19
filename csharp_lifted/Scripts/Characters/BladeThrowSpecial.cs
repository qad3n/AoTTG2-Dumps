// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BladeThrowSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BladeThrowSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BladeThrowSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006D6")]
internal class BladeThrowSpecial : BaseAttackSpecial
{
	[Token(Token = "0x4002058")]
	[FieldOffset(Offset = "0x48")]
	protected bool _needActivate;

	[Token(Token = "0x4002059")]
	[FieldOffset(Offset = "0x4C")]
	protected float Speed;

	[Token(Token = "0x400205A")]
	[FieldOffset(Offset = "0x50")]
	protected float LiveTime;

	[Token(Token = "0x17000B65")]
	protected override float ActiveTime
	{
		[Token(Token = "0x6004296")]
		[Address(RVA = "0x5B09050", Offset = "0x5B08050", VA = "0x5B09050", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/BladeThrowSpecial.c (Characters.BladeThrowSpecial$$get_ActiveTime): clean
			return 0.8;
		}
	}

	[Token(Token = "0x6004297")]
	[Address(RVA = "0x5B09060", Offset = "0x5B08060", VA = "0x5B09060")]
	public BladeThrowSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/BladeThrowSpecial.c (Characters.BladeThrowSpecial$$.ctor): clean
		this.Speed = 80.0;
		this.LiveTime = 2.0;
		base(owner);
		this.Cooldown = 1.0;
		return;
	}

	[Token(Token = "0x6004298")]
	[Address(RVA = "0x5B09080", Offset = "0x5B08080", VA = "0x5B09080", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/BladeThrowSpecial.c (Characters.BladeThrowSpecial$$Activate): clean
		Human __this_00;

		this._needActivate = true;
		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.StartSpecialAttack(HumanAnimations.SpecialPetra);
		return;
	}

	[Token(Token = "0x6004299")]
	[Address(RVA = "0x5B090F0", Offset = "0x5B080F0", VA = "0x5B090F0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
		// Lifted from source/cpp/Characters/BladeThrowSpecial.c (Characters.BladeThrowSpecial$$ActiveFixedUpdate): 43 lines keep C-only constructs
		float pfVar1;
		byte bVar2;
		uint uVar3;
		Human pCVar4;
		SoundSettings pSVar5;
		BoolSetting pSVar6;
		HumanSetup pCVar7;
		GameObject pUVar8;
		BaseUseable pCVar9;
		BaseComponentCache pUVar10;
		Transform pUVar11;
		Rigidbody __this_00;
		byte[] auVar12 = new byte[16];
		String* ppSVar13;
		UnityEngine_Vector3_StaticFields pUVar14;
		float fVar15;
		uint extraout_XMM0_Db;
		uint uVar16;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar17;
		byte[] auVar18 = new byte[16];
		Quaternion UVar19;
		Quaternion UVar20;
		Vector3 UVar21;
		Vector3 UVar22;
		Vector3 euler;
		Vector3 target;
		Quaternion UStack_68;
		byte[] auStack_58 = new byte[12];
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;
		Quaternion UStack_38;
		Quaternion UStack_28;

		UStack_38 = (Quaternion)ZEXT816(0);
		pCVar4 = this._human;
		if (pCVar4 == null) goto label_05c0967a;
		if (pCVar4._state != 9) {
			this.IsActive = false;
		}
		if (this._needActivate == false) {
			return;
		}
		pfVar1 = &this._activeTimeLeft;
		if (0.4 < *pfVar1 || *pfVar1 == 0.4) {
			return;
		}
		this._needActivate = false;
		pSVar5 = SettingsManager.SoundSettings;
		if ((pSVar5 == null) ||(pSVar6 = pSVar5.OldBladeEffect, pSVar6 == null)) goto label_05c0967a;
		uVar3 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		if (pSVar6._value == false) {
			if (uVar3 == 0) {
			}
			ppSVar13 = &HumanSounds.BladeSwing4;
		}
		else {
			if (uVar3 == 0) {
			}
			ppSVar13 = &HumanSounds.OldBladeSwing;
		}
		pCVar4.PlaySound(*ppSVar13);
		pCVar4 = this._human;
		if (((pCVar4 == null) ||(pCVar7 = pCVar4.Setup, pCVar7 == null)) ||(pUVar8 = pCVar7._part_blade_l, pUVar8 == null)) goto label_05c0967a;
		pUVar8.SetActive(false);
		pCVar4 = this._human;
		if (((pCVar4 == null) ||(pCVar7 = pCVar4.Setup, pCVar7 == null)) ||(pUVar8 = pCVar7._part_blade_r, pUVar8 == null)) goto label_05c0967a;
		pUVar8.SetActive(false);
		pCVar4 = this._human;
		if ((pCVar4 == null) ||(pCVar9 = pCVar4.Weapon, pCVar9 == null)) goto label_05c0967a;
		bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
		if (((pCVar9.klass._2).typeHierarchyDepth < bVar2) ||((pCVar9.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BladeWeapon))) {
			throw new InvalidCastException();
		}
		*(uint)&(*(ulong)((sbyte)pCVar9 + 0x40)) = 0;
		UVar21 = pCVar4.GetAimPoint();
		fStack_40 = (float)extraout_XMM0_Dc;
		auStack_48 = UVar21._0_8_;
		fStack_3c = (float)extraout_XMM0_Dd;
		pCVar4 = this._human;
		if (((pCVar4 == null) ||(pUVar10 = pCVar4.Cache, pUVar10 == null)) ||(pUVar11 = pUVar10.Transform, pUVar11 == null)) goto label_05c0967a;
		UVar22 = pUVar11.position;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_68.x = 0.0;
			UStack_68.y = 0.0;
		}
		else {
			UStack_68.x = 0.0;
			UStack_68.y = 0.0;
		}
		UStack_68.x = 0.0;
		UStack_68.y = 0.0;
		if (g_data_0753e729 == false) {
			UStack_68.x = 0.0;
			UStack_68.y = 0.0;
			g_data_0753e729 = true;
		}
		auVar18._0_4_ = (float)auStack_48._0_4_ - UVar22.x;
		auVar18._4_4_ = (float)auStack_48._4_4_ - UVar22.y;
		auVar18._8_4_ = fStack_40 - extraout_XMM0_Dc_00;
		auVar18._12_4_ = fStack_3c - extraout_XMM0_Dd_00;
		fVar17 = UVar21.z - UVar22.z;
		uVar16 = 0;
		fVar15 = fVar17 * fVar17 + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_;
		if (fVar15 < 0.0) {
			fVar15 = sqrtf(fVar15);
			uVar16 = extraout_XMM0_Db;
			if (1e-05 < fVar15) goto label_05c093e7;
	label_05c093ab: ;
			pUVar14 = typeof(Vector3).static_fields;
			UStack_68.z = (pUVar14.zeroVector).z;
		}
		else {
			fVar15 = SQRT(fVar15);
			if (fVar15 <= 1e-05) goto label_05c093ab;
	label_05c093e7: ;
			UStack_68.z = fVar17 / fVar15;
			auVar12._4_4_ = fVar15;
			auVar12._0_4_ = fVar15;
			auVar12._8_4_ = uVar16;
			auVar12._12_4_ = uVar16;
			auVar18 = divps(auVar18, auVar12);
			UStack_68.x = auVar18._0_4_;
			UStack_68.y = auVar18._4_4_;
			pUVar14 = (UnityEngine_Vector3_StaticFields)&UStack_68;
		}
		UStack_68.x = (pUVar14.zeroVector).x;
		UStack_68.y = (pUVar14.zeroVector).y;
		pCVar4 = this._human;
		pUVar14 = typeof(Vector3).static_fields;
		auStack_58._0_4_ = (pUVar14.upVector).x;
		auStack_58._4_4_ = (pUVar14.upVector).y;
		auStack_58._8_4_ = (pUVar14.upVector).z;
		UStack_38 = Quaternion.Internal_LookRotation(ref UStack_68, (Vector3)auStack_58);
		UVar22 = Quaternion.Internal_ToEulerRad(ref UStack_38);
		euler.x = UVar22.x * 57.29578;
		euler.y = UVar22.y * 57.29578;
		euler.z = UVar22.z * 57.29578;
		UVar22 = Quaternion.Internal_MakePositive(euler);
		if (pCVar4 != null) {
			pCVar4.TargetAngle = UVar22.y;
			pCVar4 = this._human;
			if (pCVar4 != null) {
				UStack_68._0_8_ = (ulong)(uint)(pCVar4.TargetAngle * 0.017453292) << 0x20;
				UStack_68.z = 0.0;
				UVar19 = (Quaternion)Quaternion.Internal_FromEulerRad(ref UStack_68);
				pCVar4._targetRotation = UVar19;
				pCVar4 = this._human;
				if (((pCVar4 != null) &&(pUVar10 = pCVar4.Cache, pUVar10 != null)) &&(pUVar11 = pUVar10.Transform, pUVar11 != null)) {
					UVar20 = pUVar11.rotation;
					pCVar4 = this._human;
					if (pCVar4 != null) {
						UStack_28.x = pCVar4._targetRotation.x;
						UStack_28.y = pCVar4._targetRotation.y;
						UStack_28.z = pCVar4._targetRotation.z;
						UStack_28.w = pCVar4._targetRotation.w;
						fVar17 = Time.deltaTime;
						UStack_68.z = UVar20.z;
						UStack_68.w = UVar20.w;
						auStack_58._0_4_ = UStack_28.x;
						auStack_58._4_4_ = UStack_28.y;
						auStack_58._8_4_ = UStack_28.z;
						UStack_68._0_8_ = UVar20._0_8_;
						UVar20 = Quaternion.Internal_Lerp(ref UStack_68, (Quaternion)auStack_58, fVar17 * 30.0);
						pUVar11.rotation = UVar20;
						pCVar4 = this._human;
						if (((pCVar4 != null) &&(pUVar10 = pCVar4.Cache, pUVar10 != null)) &&(__this_00 = pUVar10.Rigidbody, __this_00 != null)) {
							UVar22 = __this_00.linearVelocity;
							UVar21.x = (float)auStack_48._0_4_;
							UVar21.y = (float)auStack_48._4_4_;
							this.SpawnBladeProjectile(true, UVar21, UVar22);
							target.z = UVar21.z;
							target.x = (float)auStack_48._0_4_;
							target.y = (float)auStack_48._4_4_;
							this.SpawnBladeProjectile(false, target, UVar22);
							return;
						}
					}
				}
			}
		}
	label_05c0967a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600429A")]
	[Address(RVA = "0x5B09690", Offset = "0x5B08690", VA = "0x5B09690")]
	protected void SpawnBladeProjectile(bool left, Vector3 target, Vector3 velocity)
	{
		// Lifted from source/cpp/Characters/BladeThrowSpecial.c (Characters.BladeThrowSpecial$$SpawnBladeProjectile): 59 lines keep C-only constructs
		uint uVar1;
		uint uVar3;
		ulong uVar2;
		byte bVar4;
		Human pCVar5;
		BaseComponentCache pUVar6;
		Transform pUVar7;
		String name;
		Rigidbody __this_00;
		byte[] auVar8 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar9;
		PhotonView pPVar10;
		BaseProjectile pPVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		uint uVar15;
		uint extraout_XMM0_Db;
		float in_XMM0_Dc;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		float in_XMM0_Dd;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float fVar16;
		uint extraout_XMM0_Dd_02;
		float fVar17;
		uint uVar18;
		float fVar19;
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		byte[] auVar20 = new byte[16];
		Vector3 UVar21;
		Vector3 UVar22;
		Quaternion UVar23;
		Vector3 velocity_00;
		float local_a8;
		float fStack_a4;
		Vector3 local_80;
		float local_70;
		float local_6c;
		float local_68;
		byte[] local_58 = new byte[16];
		Vector3 local_48;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		local_68 = velocity.z;
		local_58._8_4_ = in_XMM2_Dc;
		local_58._0_8_ = velocity._0_8_;
		local_58._12_4_ = in_XMM2_Dd;
		pCVar5 = this._human;
		if (((pCVar5 == null) ||(pUVar6 = pCVar5.Cache, pUVar6 == null)) ||(pUVar7 = pUVar6.Transform, pUVar7 == null)) goto label_05c09ba0;
		UVar21 = pUVar7.position;
		pUVar9 = typeof(Vector3).static_fields;
		uVar1 = (pUVar9.upVector).x;
		uVar3 = (pUVar9.upVector).y;
		fVar19 = (pUVar9.upVector).z;
		pCVar5 = this._human;
		if (left) {
			if (((pCVar5 == null) ||(pUVar6 = pCVar5.Cache, pUVar6 == null)) ||(pUVar7 = pUVar6.Transform, pUVar7 == null)) goto label_05c09ba0;
			UVar22 = pUVar7.right;
			fVar17 = UVar22.z * -0.5;
			fVar12 = UVar22.x * -0.5;
			fVar14 = UVar22.y * -0.5;
			fVar13 = extraout_XMM0_Dc_00;
			fVar16 = extraout_XMM0_Dd_00;
		}
		else {
			if (((pCVar5 == null) ||(pUVar6 = pCVar5.Cache, pUVar6 == null)) ||(pUVar7 = pUVar6.Transform, pUVar7 == null)) goto label_05c09ba0;
			UVar22 = pUVar7.right;
			fVar17 = UVar22.z * 0.5;
			fVar12 = UVar22.x * 0.5;
			fVar14 = UVar22.y * 0.5;
			fVar13 = extraout_XMM0_Dc_01;
			fVar16 = extraout_XMM0_Dd_01;
		}
		fVar12 = UVar21.x + (float)uVar1 * 2.5 + fVar12;
		fVar14 = UVar21.y + (float)uVar3 * 2.5 + fVar14;
		fVar17 = UVar21.z + fVar19 * 2.5 + fVar17;
		local_a8 = target.x;
		fStack_a4 = target.y;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_80.x = 0.0;
			local_80.y = 0.0;
		}
		else {
			local_80.x = 0.0;
			local_80.y = 0.0;
		}
		local_80.x = 0.0;
		local_80.y = 0.0;
		if (g_data_0753e729 == false) {
			local_80.x = 0.0;
			local_80.y = 0.0;
			g_data_0753e729 = true;
		}
		auVar20._0_4_ = local_a8 - fVar12;
		auVar20._4_4_ = fStack_a4 - fVar14;
		auVar20._8_4_ = in_XMM0_Dc - (extraout_XMM0_Dc + 0.0 + fVar13 * 0.0);
		auVar20._12_4_ = in_XMM0_Dd - (extraout_XMM0_Dd + 0.0 + fVar16 * 0.0);
		fVar19 = target.z - fVar17;
		uVar15 = 0;
		fVar13 = fVar19 * fVar19 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
		if (fVar13 < 0.0) {
			fVar13 = sqrtf(fVar13);
			uVar15 = extraout_XMM0_Db;
			if (fVar13 <= 1e-05) goto label_05c098c3;
	label_05c098fd: ;
			fVar19 = fVar19 / fVar13;
			auVar8._4_4_ = fVar13;
			auVar8._0_4_ = fVar13;
			auVar8._8_4_ = uVar15;
			auVar8._12_4_ = uVar15;
			auVar20 = divps(auVar20, auVar8);
			local_80.x = auVar20._0_4_;
			local_80.y = auVar20._4_4_;
			pUVar9 = (UnityEngine_Vector3_StaticFields)&local_80;
		}
		else {
			fVar13 = SQRT(fVar13);
			if (1e-05 < fVar13) goto label_05c098fd;
	label_05c098c3: ;
			pUVar9 = typeof(Vector3).static_fields;
			fVar19 = (pUVar9.zeroVector).z;
		}
		uVar2._0_4_ = (pUVar9.zeroVector).x;
		uVar2._4_4_ = (pUVar9.zeroVector).y;
		local_68 = local_68 * fVar19 + (float)local_58._4_4_ * uVar2._4_4_ + (float)local_58._0_4_ * (float)uVar2;
		if (local_68 <= 0.0) {
			local_68 = 0.0;
		}
		local_68 = local_68 + this.Speed;
		name = ProjectilePrefabs.BladeThrow;
		local_80._0_8_ = uVar2;
		local_80.z = fVar19;
		pUVar9 = typeof(Vector3).static_fields;
		local_48.x = (pUVar9.upVector).x;
		local_48.y = (pUVar9.upVector).y;
		local_48.z = (pUVar9.upVector).z;
		uVar15 = 0;
		uVar18 = 0;
		UVar23 = Quaternion.Internal_LookRotation(ref local_80, ref local_48) ;
		local_58._8_4_ = extraout_XMM0_Dc_02;
		local_58._0_8_ = UVar23._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd_02;
		local_28._8_4_ = uVar15;
		local_28._0_8_ = UVar23._8_8_;
		local_28._12_4_ = uVar18;
		pCVar5 = this._human;
		if (pCVar5 != null) {
			pUVar9 = typeof(Vector3).static_fields;
			local_38._0_4_ = (pUVar9.zeroVector).x;
			local_38._4_4_ = (pUVar9.zeroVector).y;
			local_38._8_4_ = 0.0;
			local_38._12_4_ = 0.0;
			local_6c = (pUVar9.zeroVector).z;
			local_70 = this.LiveTime;
			pPVar10 = pCVar5.photonView;
			if (pPVar10 != null) {
				velocity_00.z = fVar19 * local_68;
				velocity_00.x = (float)uVar2 * local_68;
				velocity_00.y = uVar2._4_4_ * local_68;
				UVar21.z = fVar17;
				UVar21.x = fVar12;
				UVar21.y = fVar14;
				UVar23.z = (float)local_28._0_4_;
				UVar23.w = (float)local_28._4_4_;
				UVar23.x = (float)local_58._0_4_;
				UVar23.y = (float)local_58._4_4_;
				UVar22.z = local_6c;
				UVar22.x = (float)local_38._0_4_;
				UVar22.y = (float)local_38._4_4_;
				pPVar11 = ProjectileSpawner.Spawn(name, UVar21, UVar23, velocity_00, UVar22, local_70, pPVar10.viewIdField, "", null);
				pCVar5 = this._human;
				if (((pCVar5 != null) &&(pUVar6 = pCVar5.Cache, pUVar6 != null)) &&(__this_00 = pUVar6.Rigidbody, __this_00 != null)) {
					UVar21 = __this_00.linearVelocity;
					if (pPVar11 != null) {
						bVar4 = (typeof(BladeThrowProjectile)._2).typeHierarchyDepth;
						if (((pPVar11.klass._2).typeHierarchyDepth < bVar4) ||((pPVar11.klass._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(BladeThrowProjectile))) {
							throw new InvalidCastException();
						}
						(*(ulong)((sbyte)pPVar11 + 0xf8)) = UVar21._0_8_;
						*(float)&(*(ulong)((sbyte)pPVar11 + 0x100)) = UVar21.z;
						return;
					}
				}
			}
		}
	label_05c09ba0: ;
		throw new NullReferenceException();
	}
}
