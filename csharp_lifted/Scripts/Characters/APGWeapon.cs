// ==================== AoTTG2 cross-reference ====================
// Type: Characters.APGWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/APGWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/APGWeapon.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006EA")]
internal class APGWeapon : AmmoWeapon
{
	[Token(Token = "0x60042FB")]
	[Address(RVA = "0x5B10D50", Offset = "0x5B0FD50", VA = "0x5B10D50")]
	public APGWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown)
	{
		// Lifted from source/cpp/Characters/APGWeapon.c (Characters.APGWeapon$$.ctor): clean
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

	[Token(Token = "0x60042FC")]
	[Address(RVA = "0x5B10DB0", Offset = "0x5B0FDB0", VA = "0x5B10DB0", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/APGWeapon.c (Characters.APGWeapon$$Activate): 411 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		HookUseable __this_00;
		BaseComponentCache pUVar3;
		HumanComponentCache pCVar4;
		BaseHitbox pCVar5;
		InGameSet pSVar6;
		InGameMiscSettings pSVar7;
		BoolSetting pSVar8;
		CapsuleCollider __this_01;
		Rigidbody __this_02;
		HUDBottomHandler __this_03;
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		bool bVar12;
		long lVar13;
		UnityEngine_Vector3_StaticFields pUVar14;
		String pSVar15;
		Transform pUVar16;
		JSONNode pSVar17;
		JSONNode pSVar18;
		Object[] settings;
		object pIVar19;
		object pIVar20;
		Human __this_04;
		UnityEngine_Vector3_StaticFields pUVar21;
		uint uVar23;
		uint extraout_XMM0_Db;
		float fVar24;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		uint extraout_XMM0_Db_02;
		uint extraout_XMM0_Db_03;
		ulong uVar22;
		byte[] auVar26 = new byte[16];
		byte[] auVar29 = new byte[12];
		float extraout_XMM0_Db_05;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		float extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		float extraout_XMM0_Dc_06;
		uint extraout_XMM0_Dc_07;
		float extraout_XMM0_Dc_09;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		float extraout_XMM0_Dd_03;
		float fVar25;
		uint extraout_XMM0_Dd_04;
		float extraout_XMM0_Dd_06;
		uint extraout_XMM0_Dd_07;
		uint extraout_XMM0_Dd_09;
		byte[] auVar27 = new byte[16];
		byte[] auVar28 = new byte[16];
		uint uVar30;
		float fVar31;
		byte[] auVar32 = new byte[8];
		byte[] auVar33 = new byte[16];
		Quaternion UVar34;
		Quaternion UVar35;
		Quaternion rotation;
		Vector3 UVar36;
		Vector3 euler;
		Vector3 value;
		Vector3 position;
		byte[] auStack_138 = new byte[36];
		Vector3 UStack_114;
		byte[] auStack_108 = new byte[8];
		float fStack_100;
		float fStack_fc;
		float fStack_f8;
		float fStack_f4;
		byte[] auStack_f0 = new byte[8];
		Quaternion UStack_e8;
		byte[] auStack_d8 = new byte[8];
		float fStack_d0;
		float fStack_cc;
		ulong uStack_c8;
		ulong uStack_c0;
		uint uStack_b4;
		float fStack_b0;
		float fStack_ac;
		float fStack_a8;
		ulong uStack_98;
		ulong uStack_88;
		float fStack_80;
		float fStack_7c;
		byte[] auStack_78 = new byte[8];
		uint uStack_70;
		uint uStack_6c;
		ulong uStack_68;
		float fStack_60;
		float fStack_5c;
		Quaternion UStack_58;
		ulong uStack_48;

		uVar22 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		UStack_58 = (Quaternion)ZEXT816(0);
		__this_04 = (Human)this._owner;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (__this_04 == null) goto label_05c11ff1;
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_04.klass._2).typeHierarchyDepth < bVar1) ||((__this_04.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) goto label_05c1200d;
		__this_00 = __this_04.HookLeft;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = uVar22;
		if (__this_00 == null) goto label_05c11ff1;
		bVar12 = __this_00.IsHooked();
		uVar2 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		if (__this_04.Grounded == false) {
			if (bVar12) {
				if (uVar2 == 0) {
				}
				lVar13 = 0xf8;
			}
			else {
				if (uVar2 == 0) {
				}
				lVar13 = 0x100;
			}
		}
		else if (bVar12) {
			if (uVar2 == 0) {
			}
			lVar13 = 0xe0;
		}
		else {
			if (uVar2 == 0) {
			}
			lVar13 = 0xe8;
		}
		pSVar15 = *(String*)((long)&HumanAnimations.HorseMount + lVar13);
		__this_04.State = 1;
		__this_04.AttackAnimation = pSVar15;
		__this_04.CrossFade(pSVar15, 0.05, 0.0);
		UVar36 = __this_04.GetAimPoint();
		pUVar3 = __this_04.Cache;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar3 == null) goto label_05c11ff1;
		fStack_100 = (float)extraout_XMM0_Dc;
		auStack_108 = (byte[])UVar36._0_8_;
		fStack_fc = (float)extraout_XMM0_Dd;
		fStack_f8 = UVar36.z;
		pUVar16 = pUVar3.Transform;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar16 == null) goto label_05c11ff1;
		UVar36 = pUVar16.position;
		fVar24 = UVar36.z;
		uVar22._0_4_ = UVar36.x;
		uVar22._4_4_ = UVar36.y;
		if (g_data_0753e72d == false) {
			auStack_138._32_4_ = fVar24;
			auStack_138._24_4_ = extraout_XMM0_Dc_00;
			auStack_138._16_8_ = UVar36._0_8_;
			auStack_138._28_4_ = extraout_XMM0_Dd_00;
			g_data_0753e72d = true;
			auStack_138._0_4_ = 0.0;
			auStack_138._4_4_ = 0.0;
			uVar22._0_4_ = (float)auStack_138._16_4_;
			uVar22._4_4_ = (float)auStack_138._20_4_;
			fVar31 = (float)auStack_138._24_4_;
			fVar25 = (float)auStack_138._28_4_;
			fVar24 = (float)auStack_138._32_4_;
		}
		else {
			auStack_138._0_4_ = 0.0;
			auStack_138._4_4_ = 0.0;
			fVar31 = extraout_XMM0_Dc_00;
			fVar25 = extraout_XMM0_Dd_00;
		}
		auStack_138._0_4_ = 0.0;
		auStack_138._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_138._0_4_ = 0.0;
			auStack_138._4_4_ = 0.0;
			auStack_138._32_4_ = fVar24;
			auStack_138._20_4_ = uVar22._4_4_;
			auStack_138._16_4_ = (float)uVar22;
			auStack_138._24_4_ = fVar31;
			auStack_138._28_4_ = fVar25;
			Il2CppMethodInitialized_0753e729 = true;
			uVar22._0_4_ = (float)auStack_138._16_4_;
			uVar22._4_4_ = (float)auStack_138._20_4_;
			fVar31 = (float)auStack_138._24_4_;
			fVar25 = (float)auStack_138._28_4_;
			fVar24 = (float)auStack_138._32_4_;
		}
		pUVar14 = (UnityEngine_Vector3_StaticFields)auStack_138;
		pUVar21 = (UnityEngine_Vector3_StaticFields)auStack_138;
		auVar28._0_4_ = (float)auStack_108._0_4_ - (float)uVar22;
		auVar28._4_4_ = (float)auStack_108._4_4_ - uVar22._4_4_;
		auVar28._8_4_ = fStack_100 - fVar31;
		auVar28._12_4_ = fStack_fc - fVar25;
		auStack_138._8_4_ = fStack_f8 - fVar24;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			auStack_138._32_4_ = fStack_f8 - fVar24;
			auStack_138._16_16_ = auVar28;
			auStack_138._8_4_ = auStack_138._32_4_;
			auVar28 = (byte[])auStack_138._16_16_;
		}
		uVar23 = 0;
		uVar22._0_4_ = (float)auStack_138._8_4_ * (float)auStack_138._8_4_ + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
		if ((float)uVar22 < 0.0) {
			auStack_138._32_4_ = auStack_138._8_4_;
			auStack_138._16_16_ = auVar28;
			uVar22._0_4_ = sqrtf((float)uVar22);
			uVar23 = extraout_XMM0_Db;
			auStack_138._8_4_ = auStack_138._32_4_;
			auVar28 = (byte[])auStack_138._16_16_;
			if ((float)uVar22 <= 1e-05) goto label_05c110e2;
	label_05c1111e: ;
			auStack_138._8_4_ = (float)auStack_138._8_4_ / (float)uVar22;
			auVar11._4_4_ = (float)uVar22;
			auVar11._0_4_ = (float)uVar22;
			auVar11._8_4_ = uVar23;
			auVar11._12_4_ = uVar23;
			auVar28 = divps(auVar28, auVar11);
			auStack_138._0_4_ = auVar28._0_4_;
			auStack_138._4_4_ = auVar28._4_4_;
		}
		else {
			uVar22._0_4_ = SQRT((float)uVar22);
			if (1e-05 < (float)uVar22) goto label_05c1111e;
	label_05c110e2: ;
			pUVar14 = typeof(Vector3).static_fields;
			auStack_138._8_4_ = (pUVar14.zeroVector).z;
		}
		auStack_138._0_4_ = (pUVar14.zeroVector).x;
		auStack_138._4_4_ = (pUVar14.zeroVector).y;
		pUVar14 = typeof(Vector3).static_fields;
		UStack_e8.x = (pUVar14.upVector).x;
		UStack_e8.y = (pUVar14.upVector).y;
		UStack_e8.z = (pUVar14.upVector).z;
		auVar28 = ZEXT416((uint)UStack_e8.z);
		UStack_58 = Quaternion.Internal_LookRotation((Vector3)auStack_138, (Vector3)(auStack_f0 + 8));
		auVar26._8_8_ = auVar28._8_8_;
		auVar26._0_8_ = UStack_58._8_8_;
		UVar36 = Quaternion.Internal_ToEulerRad(ref UStack_58);
		auVar29 = auVar26._4_12_;
		euler.x = UVar36.x * 57.29578;
		euler.y = UVar36.y * 57.29578;
		euler.z = UVar36.z * 57.29578;
		UVar36 = Quaternion.Internal_MakePositive(euler);
		auVar27._12_4_ = 0;
		auVar27._0_12_ = auVar29;
		auVar27 = auVar27 << 0x20;
		__this_04.TargetAngle = UVar36.y;
		auStack_138._0_8_ = (ulong)(uint)(UVar36.y * 0.017453292) << 0x20;
		auStack_138._8_8_ = (ulong)(uint)auStack_138._12_4_ << 0x20;
		UVar34 = (Quaternion)Quaternion.Internal_FromEulerRad((Vector3)auStack_138);
		uVar22 = auVar27._8_8_;
		__this_04._targetRotation = UVar34;
		pUVar3 = __this_04.Cache;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar3 == null) goto label_05c11ff1;
		pUVar16 = pUVar3.Transform;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar16 == null) goto label_05c11ff1;
		UVar35 = pUVar16.rotation;
		uStack_c8 = UVar35._8_8_;
		auStack_138._24_4_ = extraout_XMM0_Dc_01;
		auStack_138._16_8_ = UVar35._0_8_;
		auStack_138._28_4_ = extraout_XMM0_Dd_01;
		uStack_c0 = uVar22;
		uVar22._0_4_ = Time.deltaTime;
		auStack_138._0_8_ = auStack_138._16_8_;
		auStack_138._8_8_ = uStack_c8;
		UStack_e8.x = (float)auStack_138._32_4_;
		UStack_e8.y = UStack_114.x;
		UStack_e8.z = UStack_114.y;
		UStack_e8.w = UStack_114.z;
		UVar35 = Quaternion.Internal_Lerp((Quaternion)auStack_138, (Quaternion)(auStack_f0 + 8), (float)uVar22 * 30.0);
		pUVar16.rotation = UVar35;
		pUVar3 = __this_04.Cache;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar3 == null) goto label_05c11ff1;
		pUVar16 = pUVar3.Transform;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar16 == null) goto label_05c11ff1;
		UVar36 = pUVar16.position;
		pUVar3 = __this_04.Cache;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar3 == null) goto label_05c11ff1;
		auStack_138._16_4_ = UVar36.z;
		UStack_114.y = (float)extraout_XMM0_Dc_02;
		auStack_138._32_4_ = UVar36.x;
		UStack_114.x = UVar36.y;
		UStack_114.z = extraout_XMM0_Dd_02;
		pUVar16 = pUVar3.Transform;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar16 == null) goto label_05c11ff1;
		UVar36 = pUVar16.up;
		uVar22._0_4_ = UVar36.z * 0.8;
		uVar22._4_4_ = UVar36.x * 0.8;
		fVar24 = UVar36.y * 0.8;
		fVar31 = extraout_XMM0_Dc_03 * 0.0;
		fVar25 = extraout_XMM0_Dd_03 * 0.0;
		if (g_data_0753e72d == false) {
			uStack_c8 = CONCAT44(uStack_c8._4_4_, (float)uVar22);
			auStack_d8._4_4_ = fVar24;
			auStack_d8._0_4_ = uVar22._4_4_;
			fStack_d0 = extraout_XMM0_Dc_03 * 0.0;
			fStack_cc = extraout_XMM0_Dd_03 * 0.0;
			g_data_0753e72d = true;
			uVar22._4_4_ = (float)auStack_d8._0_4_;
			fVar24 = (float)auStack_d8._4_4_;
			fVar31 = fStack_d0;
			fVar25 = fStack_cc;
			uVar22._0_4_ = (float)uStack_c8;
		}
		auStack_138._32_4_ = (float)auStack_138._32_4_ + uVar22._4_4_;
		UStack_114.x = UStack_114.x + fVar24;
		UStack_114.y = UStack_114.y + fVar31;
		UStack_114.z = UStack_114.z + fVar25;
		uVar22._0_4_ = (float)auStack_138._16_4_ + (float)uVar22;
		auStack_138._0_4_ = 0.0;
		auStack_138._4_4_ = 0.0;
		auStack_138._16_4_ = (float)uVar22;
		uVar22._4_4_ = (float)auStack_138._32_4_;
		fVar24 = UStack_114.x;
		fVar31 = UStack_114.y;
		fVar25 = UStack_114.z;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar22._0_4_ = (float)auStack_138._16_4_;
			uVar22._4_4_ = (float)auStack_138._32_4_;
			fVar24 = UStack_114.x;
			fVar31 = UStack_114.y;
			fVar25 = UStack_114.z;
		}
		auStack_108._0_4_ = (float)auStack_108._0_4_ - uVar22._4_4_;
		auStack_108._4_4_ = (float)auStack_108._4_4_ - fVar24;
		fStack_100 = fStack_100 - fVar31;
		fStack_fc = fStack_fc - fVar25;
		uVar22._4_4_ = (float)auStack_108._0_4_;
		fVar24 = (float)auStack_108._4_4_;
		fVar31 = fStack_f8 - (float)uVar22;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fStack_f8 = fStack_f8 - (float)uVar22;
			uVar22._4_4_ = (float)auStack_108._0_4_;
			fVar24 = (float)auStack_108._4_4_;
			fVar31 = fStack_f8;
		}
		uVar23 = 0;
		uVar22._0_4_ = fVar31 * fVar31 + fVar24 * fVar24 + uVar22._4_4_ * uVar22._4_4_;
		if ((float)uVar22 < 0.0) {
			fStack_f8 = fVar31;
			uVar22._0_4_ = sqrtf((float)uVar22);
			uVar23 = extraout_XMM0_Db_00;
			fVar31 = fStack_f8;
			if ((float)uVar22 <= 1e-05) goto label_05c113cd;
	label_05c113fa: ;
			fStack_f8 = fVar31 / (float)uVar22;
			auVar10._4_4_ = (float)uVar22;
			auVar10._0_4_ = (float)uVar22;
			auVar10._8_4_ = uVar23;
			auVar10._12_4_ = uVar23;
			auVar28 = divps(_auStack_108, auVar10);
			auStack_138._0_4_ = auVar28._0_4_;
			auStack_138._4_4_ = auVar28._4_4_;
		}
		else {
			uVar22._0_4_ = SQRT((float)uVar22);
			if (1e-05 < (float)uVar22) goto label_05c113fa;
	label_05c113cd: ;
			pUVar21 = typeof(Vector3).static_fields;
			fStack_f8 = (pUVar21.zeroVector).z;
		}
		uStack_c8._0_4_ = (pUVar21.zeroVector).x;
		uStack_c8._4_4_ = (pUVar21.zeroVector).y;
		uStack_c0 = 0;
		uVar22._0_4_ = fStack_f8;
		if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor == 0) {
			uVar22._0_4_ = fStack_f8;
		}
		pSVar15 = EffectPrefabs.GunExplode;
		auStack_138._0_8_ = uStack_c8;
		auStack_138._8_4_ = (float)uVar22;
		pUVar14 = typeof(Vector3).static_fields;
		UStack_e8.x = (pUVar14.upVector).x;
		UStack_e8.y = (pUVar14.upVector).y;
		uVar23 = 0;
		uVar30 = 0;
		UStack_e8.z = (pUVar14.upVector).z;
		UVar35 = Quaternion.Internal_LookRotation((Vector3)auStack_138, (Vector3)(auStack_f0 + 8));
		auVar33._8_4_ = uVar23;
		auVar33._0_8_ = UVar35._8_8_;
		auVar33._12_4_ = uVar30;
		uVar22._0_4_ = UVar35.x;
		uVar22._4_4_ = UVar35.y;
		if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
			fStack_100 = (float)extraout_XMM0_Dc_04;
			auStack_108 = (byte[])UVar35._0_8_;
			fStack_fc = (float)extraout_XMM0_Dd_04;
			_auStack_d8 = auVar33;
			uVar22._0_4_ = (float)auStack_108._0_4_;
			uVar22._4_4_ = (float)auStack_108._4_4_;
			auVar33 = _auStack_d8;
		}
		UVar35.y = uVar22._4_4_;
		UVar35.x = (float)uVar22;
		UVar35._8_8_ = auVar33._0_8_;
		UVar36.z = (float)auStack_138._16_4_;
		UVar36.x = (float)auStack_138._32_4_;
		UVar36.y = UStack_114.x;
		EffectSpawner.Spawn(pSVar15, UVar36, UVar35, 0.2, true, null);
		pSVar15 = HumanSounds.GetRandomAPGShot();
		__this_04.PlaySound(pSVar15);
		pCVar4 = __this_04.HumanCache;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pCVar4 == null) {
	label_05c11ff1: ;
			throw new NullReferenceException();
		}
		pCVar5 = pCVar4.APGHit;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pCVar5 == null) goto label_05c11ff1;
		pUVar16 = pCVar5.transform;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar16 == null) goto label_05c11ff1;
		value.z = (float)auStack_138._16_4_;
		value.x = (float)auStack_138._32_4_;
		value.y = UStack_114.x;
		pUVar16.position = value;
		pCVar4 = __this_04.HumanCache;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pCVar4 == null) goto label_05c11ff1;
		pCVar5 = pCVar4.APGHit;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pCVar5 == null) goto label_05c11ff1;
		pUVar16 = pCVar5.transform;
		auStack_138._0_8_ = uStack_c8;
		auStack_138._8_4_ = fStack_f8;
		pUVar14 = typeof(Vector3).static_fields;
		UStack_e8.x = (pUVar14.upVector).x;
		UStack_e8.y = (pUVar14.upVector).y;
		UStack_e8.z = (pUVar14.upVector).z;
		UVar35 = Quaternion.Internal_LookRotation((Vector3)auStack_138, (Vector3)(auStack_f0 + 8));
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar16 == null) goto label_05c11ff1;
		pUVar16.rotation = UVar35;
		pSVar17 = CharacterData.HumanWeaponInfo;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar17 == null) goto label_05c11ff1;
		pSVar17 = pSVar17.get_Item("APG");
		pSVar6 = SettingsManager.InGameCurrent;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar6 == null) goto label_05c11ff1;
		pSVar7 = pSVar6.Misc;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar7 == null) goto label_05c11ff1;
		pSVar8 = pSVar7.APGPVP;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar8 == null) goto label_05c11ff1;
		if (pSVar8._value != false) {
			pSVar17 = CharacterData.HumanWeaponInfo;
			uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
			uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
			uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
			uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
			if (pSVar17 == null) goto label_05c11ff1;
			pSVar17 = pSVar17.get_Item("APGPVP");
		}
		pCVar4 = __this_04.HumanCache;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pCVar4 == null) goto label_05c11ff1;
		pCVar5 = pCVar4.APGHit;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pCVar5 == null) goto label_05c11ff1;
		__this_01 = (CapsuleCollider)pCVar5._collider;
		if (__this_01 != null) {
			bVar1 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
			if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CapsuleCollider))) {
				throw new InvalidCastException();
			}
		}
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar17 == null) goto label_05c11ff1;
		pSVar18 = pSVar17.get_Item("Radius");
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar18 == null) goto label_05c11ff1;
		uVar22._0_4_ = (float)pSVar18.get_AsFloat();
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (__this_01 == null) goto label_05c11ff1;
		__this_01.radius = (float)uVar22;
		pSVar18 = pSVar17.get_Item("Range1Multiplier");
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar18 == null) goto label_05c11ff1;
		uVar22._0_4_ = pSVar18.get_AsFloat();
		auStack_108._0_4_ = (float)uVar22;
		pSVar18 = pSVar17.get_Item("Range2Multiplier");
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar18 == null) goto label_05c11ff1;
		uVar22._0_4_ = pSVar18.get_AsFloat();
		auStack_d8._0_4_ = (float)uVar22;
		pSVar18 = pSVar17.get_Item("Range1Constant");
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar18 == null) goto label_05c11ff1;
		uVar22._0_4_ = pSVar18.get_AsFloat();
		uStack_88 = CONCAT44(extraout_XMM0_Db_01, (float)uVar22);
		pSVar18 = pSVar17.get_Item("Range2Constant");
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar18 == null) goto label_05c11ff1;
		uVar22._0_4_ = pSVar18.get_AsFloat();
		uStack_98 = CONCAT44(extraout_XMM0_Db_02, (float)uVar22);
		pSVar18 = pSVar17.get_Item("MinRange");
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar18 == null) goto label_05c11ff1;
		uVar22._0_4_ = pSVar18.get_AsFloat();
		uStack_68 = CONCAT44(extraout_XMM0_Db_03, (float)uVar22);
		fStack_60 = extraout_XMM0_Dc_06;
		fStack_5c = extraout_XMM0_Dd_06;
		pSVar18 = pSVar17.get_Item("MaxRange");
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pSVar18 == null) goto label_05c11ff1;
		uVar22 = pSVar18.get_AsFloat();
		pUVar3 = __this_04.Cache;
		uStack_48 = CONCAT44(uStack_48._4_4_, (float)uStack_48);
		if (pUVar3 == null) goto label_05c11ff1;
		__this_02 = pUVar3.Rigidbody;
		uStack_48 = uVar22;
		if (__this_02 == null) goto label_05c11ff1;
		UVar36 = __this_02.linearVelocity;
		uVar22._0_4_ = UVar36.x;
		uVar22._4_4_ = UVar36.y;
		if (Il2CppMethodInitialized_0753e729 == false) {
			uStack_70 = extraout_XMM0_Dc_07;
			auStack_78 = (byte[])UVar36._0_8_;
			uStack_6c = extraout_XMM0_Dd_07;
			fStack_a8 = UVar36.z;
			Il2CppMethodInitialized_0753e729 = true;
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			uVar22._0_4_ = (float)auStack_78._0_4_;
			uVar22._4_4_ = (float)auStack_78._4_4_;
			uVar23 = uStack_70;
			uVar30 = uStack_6c;
			fVar31 = fStack_a8;
			fVar24 = fStack_a8;
		}
		else {
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			uVar23 = extraout_XMM0_Dc_07;
			uVar30 = extraout_XMM0_Dd_07;
			fVar31 = UVar36.z;
			fVar24 = fStack_a8;
		}
		fStack_a8 = fVar31;
		fVar31 = fStack_a8;
		if (uVar2 == 0) {
			auStack_78._4_4_ = uVar22._4_4_;
			auStack_78._0_4_ = (float)uVar22;
			uStack_70 = uVar23;
			uStack_6c = uVar30;
			uVar22._0_4_ = (float)auStack_78._0_4_;
			uVar22._4_4_ = (float)auStack_78._4_4_;
			fVar31 = fStack_a8;
			fVar24 = fStack_a8;
		}
		fStack_a8 = fVar24;
		uVar22._0_4_ = fVar31 * fVar31 + uVar22._4_4_ * uVar22._4_4_ + (float)uVar22 * (float)uVar22;
		if ((float)uVar22 < 0.0) {
			fStack_a8 = sqrtf((float)uVar22);
		}
		else {
			fStack_a8 = SQRT((float)uVar22);
		}
		pSVar17 = pSVar17.get_Item("Range2Speed");
		if (pSVar17 == null) goto label_05c11ff1;
		uVar22._0_4_ = (float)pSVar17.get_AsFloat();
		uVar22._4_4_ = (float)(~-(uint)((float)uVar22 < fStack_a8) &(uint)((float)uStack_88 + (float)auStack_108._0_4_ * fStack_a8) |(uint)((float)uStack_98 + (float)auStack_d8._0_4_ * fStack_a8) & -(uint)((float)uVar22 < fStack_a8));
		uVar22._0_4_ = (float)uStack_48;
		if (uVar22._4_4_ <= (float)uStack_48) {
			uVar22._0_4_ = uVar22._4_4_;
		}
		__this_01.height = (float)(~-(uint)((float)uStack_68 <= uVar22._4_4_) & (uint)(float)uStack_68 |(uint)(float)uVar22 & -(uint)((float)uStack_68 <= uVar22._4_4_));
		uVar22._0_4_ = __this_01.height;
		auVar29._4_8_ = 0;
		auVar29._0_4_ = (float)uVar22 * 0.5 + 0.5;
		__this_01.center = (Vector3)(auVar29 << 0x40);
		uVar22._0_4_ = __this_01.height;
		auStack_d8._4_4_ = extraout_XMM0_Db_05;
		auStack_d8._0_4_ = (float)uVar22 * 1.2;
		fStack_d0 = extraout_XMM0_Dc_09;
		fStack_cc = (float)extraout_XMM0_Dd_09;
		uVar22._0_4_ = __this_01.radius;
		auStack_108._0_4_ = (float)uVar22;
		uStack_68._0_4_ = (float)auStack_138._32_4_ + (float)auStack_138._32_4_;
		uStack_68._4_4_ = UStack_114.x + UStack_114.x;
		fStack_60 = UStack_114.y + UStack_114.y;
		fStack_5c = UStack_114.z + UStack_114.z;
		uStack_98._0_4_ = (float)auStack_138._16_4_ + (float)auStack_138._16_4_;
		uVar22._0_4_ = __this_01.height;
		uStack_98._0_4_ = (fStack_f8 * (float)uVar22 + (float)uStack_98) * 0.5;
		uStack_88._0_4_ = (float)uVar22;
		settings = (Object[])new object[5];
		uVar22._0_4_ = (float)uStack_88 * uStack_c8._4_4_;
		uVar22._4_4_ = (float)uStack_88 * (float)uStack_c0;
		fVar24 = (float)uStack_88 * uStack_c0._4_4_;
		uStack_88._0_4_ = ((float)uStack_88 * (float)uStack_c8 + (float)uStack_68) * 0.5;
		uStack_88._4_4_ = ((float)uVar22 + uStack_68._4_4_) * 0.5;
		fStack_80 = (uVar22._4_4_ + fStack_60) * 0.0;
		fStack_7c = (fVar24 + fStack_5c) * 0.0;
		fVar24 = (float)auStack_d8._0_4_ * (float)uStack_c0;
		fVar31 = (float)auStack_d8._0_4_ * uStack_c0._4_4_;
		uVar22._4_4_ = (float)auStack_d8._0_4_ * (float)uStack_c8 * 0.5;
		auStack_d8._4_4_ = (float)auStack_d8._0_4_ * uStack_c8._4_4_ * 0.5;
		uVar22._0_4_ = fStack_f8 * (float)auStack_d8._0_4_ * 0.5;
		auStack_d8._0_4_ = uVar22._4_4_;
		fStack_d0 = fVar24 * 0.0;
		fStack_cc = fVar31 * 0.0;
		fStack_f8 = (float)uVar22;
		auStack_138._0_8_ = CONCAT44((float)auStack_d8._4_4_ + uStack_88._4_4_, uVar22._4_4_ + (float)uStack_88);
		auStack_138._8_4_ = (float)uVar22 + (float)uStack_98;
		pIVar19 = (object)auStack_138;
		uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
		uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
		uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
		if (settings == null) goto label_05c11ff1;
		if (pIVar19 != null) {
			pIVar20 = il2cpp_vm_Object_IsInst(pIVar19, (((settings.obj).klass)._1).element_class);
			if (pIVar20 == null) goto label_05c11ffb;
		}
		if ((int)settings.Length != 0) {
			settings[0] = pIVar19;
			UStack_e8.x = (float)uStack_88 - (float)auStack_d8._0_4_;
			UStack_e8.y = uStack_88._4_4_ - (float)auStack_d8._4_4_;
			UStack_e8.z = (float)uStack_98 - fStack_f8;
			pIVar19 = (object)(auStack_f0 + 8);
			if (pIVar19 != null) {
				pIVar20 = il2cpp_vm_Object_IsInst(pIVar19, (((settings.obj).klass)._1).element_class);
				if (pIVar20 == null) goto label_05c11ffb;
			}
			if ((settings.Length & 0xfffffffe) == 0) goto label_05c11ff6;
			auStack_108._0_4_ = (float)auStack_108._0_4_ * 4.0;
			settings[1] = pIVar19;
			fStack_ac = (float)auStack_108._0_4_;
			pIVar19 = (object)fStack_ac;
			if (pIVar19 != null) {
				pIVar20 = il2cpp_vm_Object_IsInst(pIVar19, (((settings.obj).klass)._1).element_class);
				if (pIVar20 == null) goto label_05c11ffb;
			}
			if ((uint)settings.Length < 3) goto label_05c11ff6;
			settings[2] = pIVar19;
			fStack_b0 = (float)auStack_108._0_4_;
			pIVar19 = (object)fStack_b0;
			if (pIVar19 != null) {
				pIVar20 = il2cpp_vm_Object_IsInst(pIVar19, (((settings.obj).klass)._1).element_class);
				if (pIVar20 == null) goto label_05c11ffb;
			}
			if ((settings.Length & 0xfffffffc) != 0) {
				settings[3] = pIVar19;
				uStack_b4 = 0x3e800000;
				pIVar19 = (object)uStack_b4;
				if (pIVar19 != null) {
					pIVar20 = il2cpp_vm_Object_IsInst(pIVar19, (((settings.obj).klass)._1).element_class);
					if (pIVar20 == null) {
	label_05c11ffb: ;
						pIVar19 = new ArrayTypeMismatchException();
						throw pIVar19;
					}
				}
				if (4 < (uint)settings.Length) {
					settings[4] = pIVar19;
					if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor == 0) {
						pSVar15 = EffectPrefabs.APGTrail;
					}
					else {
						pSVar15 = EffectPrefabs.APGTrail;
					}
					uVar22._0_4_ = (Quaternion.identityQuaternion).x;
					uVar22._4_4_ = (Quaternion.identityQuaternion).y;
					auVar32._0_4_ = (Quaternion.identityQuaternion).z;
					auVar32._4_4_ = (Quaternion.identityQuaternion).w;
					if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
						auStack_f0._0_4_ = 0.0;
						auStack_f0._4_4_ = 0.0;
						auStack_108 = auVar32;
						uVar22._0_4_ = fStack_f8;
						uVar22._4_4_ = fStack_f4;
						auVar32 = auStack_108;
					}
					rotation.y = uVar22._4_4_;
					rotation.x = (float)uVar22;
					rotation.z = (float)SUB84(auVar32, 0);
					rotation.w = (float)(int)((ulong)auVar32 >> 0x20);
					position.z = (float)auStack_138._16_4_;
					position.x = (float)auStack_138._32_4_;
					position.y = UStack_114.x;
					EffectSpawner.Spawn(pSVar15, position, rotation, 1.0, true, settings);
					pCVar4 = __this_04.HumanCache;
					uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
					uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
					uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
					if (pCVar4 != null) {
						pCVar5 = pCVar4.APGHit;
						uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
						uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
						uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
						if (pCVar5 != null) {
							pCVar5.Activate(0.0, 0.1);
							if (__this_04.AI != false) {
								return;
							}
							__this_04 = (Human)UIManager.CurrentMenu;
							uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
							uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
							uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
							if (__this_04 != null) {
								bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
								uVar22 = uStack_48;
								if (((__this_04.klass._2).typeHierarchyDepth < bVar1) ||((__this_04.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameMenu))) {
	label_05c1200d: ;
									uStack_48 = uVar22;
									throw new InvalidCastException();
								}
								__this_03 = (HUDBottomHandler)__this_04.MovementSync;
								uStack_88 = CONCAT44(uStack_88._4_4_, (float)uStack_88);
								uStack_98 = CONCAT44(uStack_98._4_4_, (float)uStack_98);
								uStack_68 = CONCAT44(uStack_68._4_4_, (float)uStack_68);
								if (__this_03 != null) {
									__this_03.ShootAPG();
									return;
								}
							}
						}
					}
					goto label_05c11ff1;
				}
			}
		}
	label_05c11ff6: ;
		throw new IndexOutOfRangeException();
	}
}
