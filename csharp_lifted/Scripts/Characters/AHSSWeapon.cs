// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AHSSWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AHSSWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AHSSWeapon.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006E9")]
internal class AHSSWeapon : AmmoWeapon
{
	[Token(Token = "0x400207C")]
	[FieldOffset(Offset = "0x4C")]
	protected Vector3 _target;

	[Token(Token = "0x60042F6")]
	[Address(RVA = "0x5B0FEC0", Offset = "0x5B0EEC0", VA = "0x5B0FEC0")]
	public AHSSWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown)
	{
		// Lifted from source/cpp/Characters/AHSSWeapon.c (Characters.AHSSWeapon$$.ctor): clean
		int iVar1;

		iVar1 = 0;
		base(owner);
		this.MaxAmmo = ammo;
		this.RoundLeft = ammoPerRound;
		this.MaxRound = ammoPerRound;
		this.Cooldown = cooldown;
		if (ammoPerRound == -1) {
			this.RoundLeft = ammo;
		}
		else {
			iVar1 = ammo - ammoPerRound;
		}
		this.AmmoLeft = iVar1;
		return;
	}

	[Token(Token = "0x60042F7")]
	[Address(RVA = "0x5B0FF80", Offset = "0x5B0EF80", VA = "0x5B0FF80", Slot = "15")]
	protected override float GetActiveTime()
	{
		// Lifted from source/cpp/Characters/AHSSWeapon.c (Characters.AHSSWeapon$$GetActiveTime): 2 lines keep C-only constructs
		uint uVar1;
		code *vtableDispatch;
		JSONNode pSVar2;
		long plVar3;
		float fVar4;

		if (Il2CppMethodInitialized_075476d5 == false) {
			Il2CppMethodInitialized_075476d5 = true;
			uVar1 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = CharacterData.HumanWeaponInfo;
		}
		else {
			pSVar2 = *(JSONNode*)(typeof(CharacterData)).static_fields ;
		}
		if (((pSVar2 == null) ||(pSVar2 = pSVar2.get_Item("AHSS"), pSVar2 == null)) ||(plVar3 = (long)pSVar2.get_Item("FireDelay"), plVar3 == null)) {
			throw new NullReferenceException();
		}
		vtableDispatch = *(code*)(*plVar3 + 0x388);
		fVar4 = (float)(*vtableDispatch)(plVar3,*(ulong)(*plVar3 + 0x390),vtableDispatch);
		return fVar4;
	}

	[Token(Token = "0x60042F8")]
	[Address(RVA = "0x5B10070", Offset = "0x5B0F070", VA = "0x5B10070", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/AHSSWeapon.c (Characters.AHSSWeapon$$Activate): 5 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		BaseCharacter pCVar3;
		Vector3 UVar4;
		float in_XMM1_Da;

		pCVar2 = this._owner;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		pCVar3 = pCVar2.klass;
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar3._2).typeHierarchyDepth < bVar1) ||((pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		UVar4._0_8_ =pCVar2.GetAimPoint();
		this._target = UVar4._0_8_;
		this._target.z = in_XMM1_Da;
		return;
	}

	[Token(Token = "0x60042F9")]
	[Address(RVA = "0x5B100F0", Offset = "0x5B0F0F0", VA = "0x5B100F0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/AHSSWeapon.c (Characters.AHSSWeapon$$Deactivate): 147 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		byte bVar7;
		int iVar8;
		Human __this_00;
		BaseComponentCache pUVar9;
		HookUseable pCVar10;
		HumanComponentCache pCVar11;
		BaseHitbox pCVar12;
		Rigidbody __this_01;
		HUDBottomHandler __this_02;
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[16];
		bool bVar15;
		UnityEngine_Vector3_StaticFields pUVar16;
		long lVar17;
		String pSVar18;
		JSONNode pSVar19;
		JSONNode pSVar20;
		Transform pUVar21;
		BaseMenu __this_03;
		UnityEngine_Vector3_StaticFields pUVar22;
		float fVar23;
		float fVar24;
		float extraout_XMM0_Db;
		float extraout_XMM0_Db_00;
		float extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		float extraout_XMM0_Dc_02;
		float fVar25;
		float extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		float fVar26;
		uint uVar31;
		byte[] auVar27 = new byte[16];
		byte[] auVar30 = new byte[12];
		byte[] auVar28 = new byte[16];
		byte[] auVar29 = new byte[16];
		uint uVar33;
		float fVar34;
		byte[] auVar35 = new byte[16];
		Vector3 UVar36;
		Vector3 euler;
		Vector3 value;
		Vector3 force;
		Quaternion UVar37;
		Quaternion UVar38;
		byte[] auStack_c8 = new byte[16];
		Quaternion UStack_b8;
		byte[] auStack_a8 = new byte[8];
		byte[] auStack_a0 = new byte[12];
		float fStack_94;
		byte[] auStack_88 = new byte[16];
		float fStack_78;
		float fStack_74;
		float fStack_70;
		float fStack_6c;
		byte[] auStack_68 = new byte[8];
		byte[] auStack_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		Quaternion UStack_48;

		UStack_48 = (Quaternion)ZEXT816(0);
		__this_00 = (Human)this._owner;
		if (__this_00 == null) goto label_05c10c45;
		bVar7 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar7) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar7 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		pUVar9 = __this_00.Cache;
		if ((pUVar9 == null) ||(pUVar21 = pUVar9.Transform, pUVar21 == null)) goto label_05c10c45;
		uVar1 = this._target.x;
		uVar4 = this._target.y;
		fStack_70 = 0.0;
		fStack_6c = 0.0;
		fStack_78 = (float)uVar1;
		fStack_74 = (float)uVar4;
		UVar36 = pUVar21.position;
		fVar23 = UVar36.z;
		fVar24 = UVar36.x;
		fVar34 = UVar36.y;
		if (g_data_0753e72d == false) {
			auStack_a8._0_4_ = fVar23;
			UStack_b8.z = extraout_XMM0_Dc;
			UStack_b8._0_8_ = UVar36._0_8_;
			UStack_b8.w = extraout_XMM0_Dd;
			g_data_0753e72d = true;
			auStack_c8._0_4_ = 0.0;
			auStack_c8._4_4_ = 0.0;
			fVar24 = UStack_b8.x;
			fVar34 = UStack_b8.y;
			fVar25 = UStack_b8.z;
			fVar26 = UStack_b8.w;
			fVar23 = (float)auStack_a8._0_4_;
		}
		else {
			auStack_c8._0_4_ = 0.0;
			auStack_c8._4_4_ = 0.0;
			fVar25 = extraout_XMM0_Dc;
			fVar26 = extraout_XMM0_Dd;
		}
		auStack_c8._0_8_ = 0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_c8._0_8_ = 0;
			auStack_a8._0_4_ = fVar23;
			UStack_b8.y = fVar34;
			UStack_b8.x = fVar24;
			UStack_b8.z = fVar25;
			UStack_b8.w = fVar26;
			Il2CppMethodInitialized_0753e729 = true;
			fVar24 = UStack_b8.x;
			fVar34 = UStack_b8.y;
			fVar25 = UStack_b8.z;
			fVar26 = UStack_b8.w;
			fVar23 = (float)auStack_a8._0_4_;
		}
		pUVar16 = (UnityEngine_Vector3_StaticFields)auStack_c8;
		pUVar22 = (UnityEngine_Vector3_StaticFields)auStack_c8;
		UVar37.x = fStack_78 - fVar24;
		UVar37.y = fStack_74 - fVar34;
		UVar37.z = fStack_70 - fVar25;
		UVar37.w = fStack_6c - fVar26;
		fVar24 = (float)auStack_a0._8_4_ - fVar23;
		fVar34 = fStack_94;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			auStack_a8._0_4_ = (float)auStack_a0._8_4_ - fVar23;
			UStack_b8 = UVar37;
			fVar34 = 0.0;
			fVar24 = (float)auStack_a8._0_4_;
			UVar37 = UStack_b8;
		}
		fVar23 = fVar24 * fVar24 + UVar37.y * UVar37.y + UVar37.x * UVar37.x;
		if (fVar23 < 0.0) {
			auStack_a8._0_4_ = fVar24;
			UStack_b8 = UVar37;
			fVar23 = sqrtf(fVar23);
			fVar34 = extraout_XMM0_Db;
			fVar24 = (float)auStack_a8._0_4_;
			UVar37 = UStack_b8;
			if (fVar23 <= 1e-05) goto label_05c102bf;
	label_05c102fb: ;
			fVar24 = fVar24 / fVar23;
			auVar29._4_4_ = fVar23;
			auVar29._0_4_ = fVar23;
			auVar29._8_4_ = fVar34;
			auVar29._12_4_ = fVar34;
			auVar29 = divps((byte[])UVar37, auVar29);
			auStack_c8._0_8_ = auVar29._0_8_;
		}
		else {
			fVar23 = SQRT(fVar23);
			if (1e-05 < fVar23) goto label_05c102fb;
	label_05c102bf: ;
			pUVar16 = typeof(Vector3).static_fields;
			fVar24 = (pUVar16.zeroVector).z;
		}
		pUVar9 = __this_00.Cache;
		if (pUVar9 == null) goto label_05c10c45;
		auStack_a8._0_4_ = fVar24;
		pUVar21 = pUVar9.Transform;
		if (pUVar21 == null) goto label_05c10c45;
		uVar2 = (pUVar16.zeroVector).x;
		uVar5 = (pUVar16.zeroVector).y;
		UStack_b8.y = (float)uVar5;
		UStack_b8.x = (float)uVar2;
		UStack_b8.z = 0.0;
		UStack_b8.w = 0.0;
		UVar36 = pUVar21.forward;
		pCVar10 = __this_00.HookLeft;
		auStack_68._0_4_ = UVar36.z * UStack_b8.x - UVar36.x * (float)auStack_a8._0_4_;
		if (__this_00.Grounded == false) {
			if (pCVar10 == null) goto label_05c10c45;
			bVar15 = pCVar10.IsHooked();
			if ((bVar15) || (0.0 <= (float)auStack_68._0_4_)) {
				pCVar10 = __this_00.HookRight;
				if (pCVar10 == null) goto label_05c10c45;
				bVar15 = pCVar10.IsHooked();
				if (!bVar15) {
					lVar17 = 0xf8;
					goto label_05c104d5;
				}
			}
			lVar17 = 0x100;
		}
		else {
			if (pCVar10 == null) goto label_05c10c45;
			bVar15 = pCVar10.IsHooked();
			if ((bVar15) || (0.0 <= (float)auStack_68._0_4_)) {
				pCVar10 = __this_00.HookRight;
				if (pCVar10 == null) goto label_05c10c45;
				bVar15 = pCVar10.IsHooked();
				if (!bVar15) {
					lVar17 = 0xe0;
					goto label_05c104d5;
				}
			}
			lVar17 = 0xe8;
		}
	label_05c104d5: ;
		pSVar18 = *(String*)((long)&HumanAnimations.HorseMount + lVar17);
		__this_00.State = 1;
		__this_00.AttackAnimation = pSVar18;
		__this_00.CrossFade(pSVar18, 0.05, 0.0);
		auStack_c8._0_4_ = UStack_b8.x;
		auStack_c8._4_4_ = UStack_b8.y;
		auStack_c8._8_4_ = auStack_a8._0_4_;
		pUVar16 = typeof(Vector3).static_fields;
		auStack_88._0_4_ = (pUVar16.upVector).x;
		auStack_88._4_4_ = (pUVar16.upVector).y;
		auStack_88._8_4_ = (pUVar16.upVector).z;
		auVar29 = ZEXT416((uint)auStack_88._8_4_);
		UStack_48 = Quaternion.Internal_LookRotation((Vector3)auStack_c8, (Vector3)auStack_88);
		auVar27._8_8_ = auVar29._8_8_;
		auVar27._0_8_ = UStack_48._8_8_;
		UVar36 = Quaternion.Internal_ToEulerRad(ref UStack_48);
		auVar30 = auVar27._4_12_;
		euler.x = UVar36.x * 57.29578;
		euler.y = UVar36.y * 57.29578;
		euler.z = UVar36.z * 57.29578;
		UVar36 = Quaternion.Internal_MakePositive(euler);
		auVar28._12_4_ = 0;
		auVar28._0_12_ = auVar30;
		auVar28 = auVar28 << 0x20;
		__this_00.TargetAngle = UVar36.y;
		auStack_c8._0_8_ = (ulong)(uint)(UVar36.y * 0.017453292) << 0x20;
		auStack_c8._8_8_ = (ulong)(uint)auStack_c8._12_4_ << 0x20;
		UVar37 = (Quaternion)Quaternion.Internal_FromEulerRad((Vector3)auStack_c8);
		__this_00._targetRotation = UVar37;
		pUVar9 = __this_00.Cache;
		if ((pUVar9 == null) ||(pUVar21 = pUVar9.Transform, pUVar21 == null)) goto label_05c10c45;
		UVar38 = pUVar21.rotation;
		UStack_b8.z = (float)extraout_XMM0_Dc_00;
		UStack_b8._0_8_ = UVar38._0_8_;
		UStack_b8.w = (float)extraout_XMM0_Dd_00;
		auStack_68 = (byte[])UVar38._8_8_;
		fVar24 = Time.deltaTime;
		auStack_c8._0_4_ = UStack_b8.x;
		auStack_c8._4_4_ = UStack_b8.y;
		auStack_c8._8_8_ = auStack_68;
		auStack_88._0_8_ = auStack_a8;
		auStack_88._8_8_ = auStack_a0._0_8_;
		UVar38 = Quaternion.Internal_Lerp((Quaternion)auStack_c8, (Quaternion)auStack_88, fVar24 * 30.0);
		pUVar21.rotation = UVar38;
		pUVar9 = __this_00.Cache;
		if ((pUVar9 == null) ||(pUVar21 = pUVar9.Transform, pUVar21 == null)) goto label_05c10c45;
		UVar36 = pUVar21.position;
		pUVar9 = __this_00.Cache;
		if (pUVar9 == null) goto label_05c10c45;
		UStack_b8.x = UVar36.z;
		auStack_a0._0_4_ = extraout_XMM0_Dc_01;
		auStack_a8._0_4_ = UVar36.x;
		auStack_a8._4_4_ = UVar36.y;
		auStack_a0._4_4_ = extraout_XMM0_Dd_01;
		pUVar21 = pUVar9.Transform;
		if (pUVar21 == null) goto label_05c10c45;
		UVar36 = pUVar21.up;
		fVar24 = UVar36.z * 0.8;
		fVar34 = UVar36.x * 0.8;
		fVar23 = UVar36.y * 0.8;
		fVar25 = extraout_XMM0_Dc_02 * 0.0;
		fVar26 = extraout_XMM0_Dd_02 * 0.0;
		if (g_data_0753e72d == false) {
			auStack_68._0_4_ = fVar24;
			auStack_58._4_4_ = fVar23;
			auStack_58._0_4_ = fVar34;
			fStack_50 = extraout_XMM0_Dc_02 * 0.0;
			fStack_4c = extraout_XMM0_Dd_02 * 0.0;
			g_data_0753e72d = true;
			fVar34 = (float)auStack_58._0_4_;
			fVar23 = (float)auStack_58._4_4_;
			fVar25 = fStack_50;
			fVar26 = fStack_4c;
			fVar24 = (float)auStack_68._0_4_;
		}
		auStack_a8._0_4_ = (float)auStack_a8._0_4_ + fVar34;
		auStack_a8._4_4_ = (float)auStack_a8._4_4_ + fVar23;
		auStack_a0._0_4_ = (float)auStack_a0._0_4_ + fVar25;
		auStack_a0._4_4_ = (float)auStack_a0._4_4_ + fVar26;
		fVar24 = UStack_b8.x + fVar24;
		auStack_c8._0_4_ = 0.0;
		auStack_c8._4_4_ = 0.0;
		UStack_b8.x = fVar24;
		fVar34 = (float)auStack_a8._0_4_;
		fVar23 = (float)auStack_a8._4_4_;
		fVar25 = (float)auStack_a0._0_4_;
		fVar26 = (float)auStack_a0._4_4_;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			fVar34 = (float)auStack_a8._0_4_;
			fVar23 = (float)auStack_a8._4_4_;
			fVar25 = (float)auStack_a0._0_4_;
			fVar26 = (float)auStack_a0._4_4_;
			fVar24 = UStack_b8.x;
		}
		auStack_a0._8_4_ = (float)auStack_a0._8_4_ - fVar24;
		fStack_78 = fStack_78 - fVar34;
		fStack_74 = fStack_74 - fVar23;
		fStack_70 = fStack_70 - fVar25;
		fStack_6c = fStack_6c - fVar26;
		fVar24 = fStack_94;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar24 = fStack_94;
		}
		fVar34 = (float)auStack_a0._8_4_ * (float)auStack_a0._8_4_ + fStack_74 * fStack_74 + fStack_78 * fStack_78;
		if (fVar34 < 0.0) {
			fStack_94 = fVar24;
			fVar34 = sqrtf(fVar34);
			fVar24 = extraout_XMM0_Db_00;
			if (fVar34 <= 1e-05) goto label_05c107ba;
	label_05c107e6: ;
			auStack_a0._8_4_ = (float)auStack_a0._8_4_ / fVar34;
			auVar14._4_4_ = fStack_74;
			auVar14._0_4_ = fStack_78;
			auVar14._8_4_ = fStack_70;
			auVar14._12_4_ = fStack_6c;
			auVar13._4_4_ = fVar34;
			auVar13._0_4_ = fVar34;
			auVar13._8_4_ = fVar24;
			auVar13._12_4_ = fVar24;
			auVar29 = divps(auVar14, auVar13);
			auStack_c8._0_4_ = auVar29._0_4_;
			auStack_c8._4_4_ = auVar29._4_4_;
		}
		else {
			fVar34 = SQRT(fVar34);
			fStack_94 = fVar24;
			if (1e-05 < fVar34) goto label_05c107e6;
	label_05c107ba: ;
			pUVar22 = typeof(Vector3).static_fields;
			auStack_a0._8_4_ = (pUVar22.zeroVector).z;
			fStack_94 = 0.0;
		}
		uVar3 = (pUVar22.zeroVector).x;
		uVar6 = (pUVar22.zeroVector).y;
		fStack_70 = 0.0;
		fStack_6c = 0.0;
		fVar24 = (float)auStack_a0._8_4_;
		fStack_78 = (float)uVar3;
		fStack_74 = (float)uVar6;
		if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor == 0) {
			fVar24 = (float)auStack_a0._8_4_;
		}
		pSVar18 = EffectPrefabs.GunExplode;
		auStack_c8._0_8_ = CONCAT44(fStack_74, fStack_78);
		auStack_c8._8_4_ = fVar24;
		pUVar16 = typeof(Vector3).static_fields;
		auStack_88._0_4_ = (pUVar16.upVector).x;
		auStack_88._4_4_ = (pUVar16.upVector).y;
		uVar31 = 0;
		uVar33 = 0;
		auStack_88._8_4_ = (pUVar16.upVector).z;
		UVar38 = Quaternion.Internal_LookRotation((Vector3)auStack_c8, (Vector3)auStack_88);
		auVar35._8_4_ = uVar31;
		auVar35._0_8_ = UVar38._8_8_;
		auVar35._12_4_ = uVar33;
		fVar24 = UVar38.x;
		fVar34 = UVar38.y;
		if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
			auStack_68 = (byte[])UVar38._0_8_;
			_auStack_58 = auVar35;
			fVar24 = (float)auStack_68._0_4_;
			fVar34 = (float)auStack_68._4_4_;
			auVar35 = _auStack_58;
		}
		UVar36.z = UStack_b8.x;
		UVar36.x = (float)auStack_a8._0_4_;
		UVar36.y = (float)auStack_a8._4_4_;
		UVar38.y = fVar34;
		UVar38.x = fVar24;
		UVar38._8_8_ = auVar35._0_8_;
		EffectSpawner.Spawn(pSVar18, UVar36, UVar38, 1.0, true, null);
		pSVar18 = HumanSounds.GetRandomAHSSGunShot();
		__this_00.PlaySound(pSVar18);
		pSVar19 = CharacterData.HumanWeaponInfo;
		if (pSVar19 != null) {
			pSVar19 = pSVar19.get_Item("AHSS");
			pCVar11 = __this_00.HumanCache;
			if (((pCVar11 != null) &&(pCVar12 = pCVar11.AHSSHit, pCVar12 != null)) &&(pSVar19 != null)) {
				__this_03 = (BaseMenu)pCVar12._collider;
				pSVar20 = pSVar19.get_Item("Radius");
				if ((pSVar20 != null) &&(fVar24 = pSVar20.get_AsFloat(), __this_03 != null)) {
					bVar7 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
					if (((__this_03.klass._2).typeHierarchyDepth < bVar7) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar7 - 1] !=typeof(CapsuleCollider))) {
	label_05c10c55: ;
						throw new InvalidCastException();
					}
					__this_03.radius = fVar24;
					pCVar11 = __this_00.HumanCache;
					if (((pCVar11 != null) &&(pCVar12 = pCVar11.AHSSHit, pCVar12 != null)) &&(pUVar21 = pCVar12.transform, pUVar21 != null)) {
						value.z = UStack_b8.x;
						value.x = (float)auStack_a8._0_4_;
						value.y = (float)auStack_a8._4_4_;
						pUVar21.position = value;
						pCVar11 = __this_00.HumanCache;
						if ((pCVar11 != null) &&(pCVar12 = pCVar11.AHSSHit, pCVar12 != null)) {
							pUVar21 = pCVar12.transform;
							auStack_c8._0_8_ = CONCAT44(fStack_74, fStack_78);
							auStack_c8._8_4_ = auStack_a0._8_4_;
							pUVar16 = typeof(Vector3).static_fields;
							auStack_88._0_4_ = (pUVar16.upVector).x;
							auStack_88._4_4_ = (pUVar16.upVector).y;
							auStack_88._8_4_ = (pUVar16.upVector).z;
							UVar38 = Quaternion.Internal_LookRotation((Vector3)auStack_c8, (Vector3)auStack_88);
							if (pUVar21 != null) {
								pUVar21.rotation = UVar38;
								pCVar11 = __this_00.HumanCache;
								if ((pCVar11 != null) &&(pCVar12 = pCVar11.AHSSHit, pCVar12 != null)) {
									pCVar12.Activate(0.0, 0.1);
									pUVar9 = __this_00.Cache;
									if (pUVar9 != null) {
										__this_01 = pUVar9.Rigidbody;
										pSVar19 = pSVar19.get_Item("KnockbackForce");
										if ((pSVar19 != null) &&(fVar24 = pSVar19.get_AsFloat(), __this_01 != null)) {
											force.z = -(float)auStack_a0._8_4_ * fVar24;
											force.x = fVar24 * -fStack_78;
											force.y = fVar24 * -fStack_74;
											__this_01.AddForce(force, 2);
											if (__this_00.AI != false) {
												return;
											}
											__this_03 = UIManager.CurrentMenu;
											if (__this_03 != null) {
												bVar7 = (typeof(InGameMenu)._2).typeHierarchyDepth;
												if (((__this_03.klass._2).typeHierarchyDepth < bVar7) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar7 - 1] !=typeof(InGameMenu))) goto label_05c10c55;
												__this_02 = (HUDBottomHandler)(*(ulong)((sbyte)__this_03 + 0xb8));
												if (__this_02 != null) {
													iVar8 = this.RoundLeft;
													__this_02.ShootAHSS(iVar8 == 1, iVar8 == 0);
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c10c45: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042FA")]
	[Address(RVA = "0x5B10C60", Offset = "0x5B0FC60", VA = "0x5B10C60")]
	public void HandleUI()
	{
		// Lifted from source/cpp/Characters/AHSSWeapon.c (Characters.AHSSWeapon$$HandleUI): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		uint uVar3;
		BaseMenu pUVar4;
		HUDBottomHandler __this_00;

		if (Il2CppMethodInitialized_075476d8 == false) {
			Il2CppMethodInitialized_075476d8 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pUVar4 = UIManager.CurrentMenu;
		}
		else {
			pUVar4 = *(BaseMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (pUVar4 != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			__this_00 = (HUDBottomHandler)(*(ulong)((sbyte)pUVar4 + 0xb8));
			if (__this_00 != null) {
				uVar3 = this.RoundLeft;
				__this_00.ShootAHSS(uVar3 < 2, uVar3 == 0);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
