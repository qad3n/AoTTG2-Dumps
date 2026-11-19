// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ThunderspearWeapon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ThunderspearWeapon.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/ThunderSpearWeapon.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Projectiles;
using SimpleJSONFixed;

namespace Characters;

[Token(Token = "0x20006ED")]
internal class ThunderspearWeapon : AmmoWeapon
{
	[Token(Token = "0x4002085")]
	[FieldOffset(Offset = "0x50")]
	public ThunderspearProjectile Current;

	[Token(Token = "0x4002086")]
	[FieldOffset(Offset = "0x58")]
	public float Radius;

	[Token(Token = "0x4002087")]
	[FieldOffset(Offset = "0x5C")]
	public float Speed;

	[Token(Token = "0x4002088")]
	[FieldOffset(Offset = "0x60")]
	public float TravelTime;

	[Token(Token = "0x4002089")]
	[FieldOffset(Offset = "0x64")]
	public float Delay;

	[Token(Token = "0x400208A")]
	[FieldOffset(Offset = "0x68")]
	private float _delayTimeLeft;

	[Token(Token = "0x400208B")]
	[FieldOffset(Offset = "0x70")]
	private JSONNode TSInfo;

	[Token(Token = "0x600430D")]
	[Address(RVA = "0x5B122E0", Offset = "0x5B112E0", VA = "0x5B122E0")]
	public ThunderspearWeapon(BaseCharacter owner, int ammo, int ammoPerRound, float cooldown, float radius, float speed, float travelTime, float delay, JSONNode tsInfo)
	{
		// Lifted from source/cpp/Characters/ThunderspearWeapon.c (Characters.ThunderspearWeapon$$.ctor): clean
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
		this.Radius = radius;
		this.Speed = speed;
		this.TravelTime = travelTime;
		this.Delay = delay;
		this.TSInfo = tsInfo;
		return;
	}

	[Token(Token = "0x600430E")]
	[Address(RVA = "0x5B123A0", Offset = "0x5B113A0", VA = "0x5B123A0", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/ThunderspearWeapon.c (Characters.ThunderspearWeapon$$Activate): 211 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar5;
		uint uVar6;
		ulong uVar4;
		uint uVar7;
		byte bVar8;
		sbyte cVar9;
		uint uVar10;
		int iVar11;
		int charViewId;
		BaseUseable pCVar12;
		BaseUseable pCVar13;
		BaseComponentCache pUVar14;
		HumanSetup pCVar15;
		GameObject pUVar16;
		InGameSet pSVar17;
		InGameMiscSettings pSVar18;
		BoolSetting pSVar19;
		Human pCVar20;
		Rigidbody __this_00;
		PhotonView pPVar21;
		AbilitySettings pSVar22;
		ColorSetting pSVar23;
		Color255 __this_01;
		HUDBottomHandler __this_02;
		byte[] auVar24 = new byte[16];
		byte[] auVar25 = new byte[16];
		byte[] auVar26 = new byte[12];
		byte[] auVar27 = new byte[16];
		ulong uVar28;
		ThunderspearProjectile pPVar29;
		bool bVar30;
		bool bVar31;
		Human pCVar32;
		UnityEngine_Vector3_StaticFields pUVar33;
		Transform pUVar34;
		String pSVar35;
		Object[] settings;
		object pIVar36;
		object pIVar37;
		ThunderspearProjectile pPVar38;
		JSONNode pSVar39;
		ThunderspearProjectile* targetAddress;
		Human __this_03;
		bool bVar40;
		byte[] auVar41 = new byte[4];
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint uVar42;
		float extraout_XMM0_Db_01;
		uint extraout_XMM0_Db_02;
		uint extraout_XMM0_Db_03;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		float extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dc_05;
		uint extraout_XMM0_Dc_06;
		uint extraout_XMM0_Dc_07;
		uint extraout_XMM0_Dc_08;
		uint extraout_XMM0_Dc_09;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		float extraout_XMM0_Dd_04;
		uint extraout_XMM0_Dd_05;
		uint extraout_XMM0_Dd_06;
		uint extraout_XMM0_Dd_07;
		uint extraout_XMM0_Dd_08;
		uint extraout_XMM0_Dd_09;
		byte[] auVar43 = new byte[16];
		float fVar44;
		byte[] auVar45 = new byte[16];
		Quaternion UVar46;
		Quaternion UVar47;
		Vector3 UVar48;
		Vector3 UVar49;
		Vector3 gravity;
		Vector3 velocity;
		byte uStack_129;
		byte[] auStack_128 = new byte[4];
		byte[] auStack_124 = new byte[8];
		float fStack_11c;
		Color UStack_110;
		float fStack_fc;
		byte[] auStack_f8 = new byte[4];
		byte[] auStack_f4 = new byte[8];
		float fStack_ec;
		byte[] auStack_e8 = new byte[16];
		byte[] auStack_d8 = new byte[8];
		float fStack_d0;
		float fStack_cc;
		Vector3 UStack_c8;
		byte[] auStack_b8 = new byte[8];
		float fStack_b0;
		float fStack_ac;
		String pSStack_a0;
		byte[] auStack_98 = new byte[16];
		ulong uStack_88;
		float fStack_78;
		uint uStack_74;
		uint uStack_70;
		uint uStack_6c;
		ulong uStack_68;
		byte[] auStack_58 = new byte[16];
		Quaternion UStack_48;

		UStack_48 = (Quaternion)ZEXT816(0);
		__this_03 = (Human)this._owner;
		if (__this_03 == null) goto label_05c1359d;
		pCVar32 = __this_03.klass;
		bVar8 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar32._2).typeHierarchyDepth < bVar8) ||((pCVar32._2).typeHierarchy[(ulong)bVar8 - 1] != typeof(Human))) goto label_05c135b2;
		if (((__this_03._state | 8U) == 9) &&(pCVar12 = __this_03.Special, pCVar12 != null)) {
			pCVar13 = pCVar12.klass;
			bVar8 = (typeof(StockSpecial)._2).typeHierarchyDepth;
			if ((bVar8 <= (pCVar13._2).typeHierarchyDepth) &&((pCVar13._2).typeHierarchy[(ulong)bVar8 - 1] == typeof(StockSpecial))) {
				pCVar12.IsActive = false;
				pCVar12.Deactivate();
				pCVar32 = __this_03.klass;
			}
		}
		UVar48 = __this_03.GetAimPoint();
		pUVar14 = __this_03.Cache;
		if (pUVar14 == null) goto label_05c1359d;
		fStack_d0 = (float)extraout_XMM0_Dc;
		auStack_d8 = (byte[])UVar48._0_8_;
		fStack_cc = (float)extraout_XMM0_Dd;
		pUVar34 = pUVar14.Transform;
		if (pUVar34 == null) goto label_05c1359d;
		UVar49 = pUVar34.position;
		UVar49.z = (byte[])UVar49.z;
		auVar41 = (byte[])UVar49.x;
		fVar44 = UVar49.y;
		if (Il2CppMethodInitialized_0753e72d == false) {
			auStack_128 = UVar49.z;
			auStack_f4._4_4_ = extraout_XMM0_Dc_00;
			fStack_ec = extraout_XMM0_Dd_00;
			Il2CppMethodInitialized_0753e72d = true;
			auVar41 = auStack_f8;
			fVar44 = (float)auStack_f4._0_4_;
			uVar4._0_4_ = (float)auStack_f4._4_4_;
			uVar4._4_4_ = fStack_ec;
			UVar49.z = auStack_128;
		}
		else {
			uVar4._0_4_ = extraout_XMM0_Dc_00;
			uVar4._4_4_ = extraout_XMM0_Dd_00;
		}
		auVar43._8_8_ = 0;
		auVar43._0_8_ = UStack_110._8_8_;
		UStack_110 = (Color)(auVar43 << 0x40);
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_128 = UVar49.z;
			auStack_f4._0_4_ = fVar44;
			auStack_f8 = auVar41;
			auStack_f4._4_4_ = (float)uVar4;
			fStack_ec = uVar4._4_4_;
			Il2CppMethodInitialized_0753e729 = true;
			auVar41 = auStack_f8;
			fVar44 = (float)auStack_f4._0_4_;
			uVar4._0_4_ = (float)auStack_f4._4_4_;
			uVar4._4_4_ = fStack_ec;
			UVar49.z = auStack_128;
		}
		auVar45._0_4_ = (float)auStack_d8._0_4_ - (float)auVar41;
		auVar45._4_4_ = (float)auStack_d8._4_4_ - fVar44;
		auVar45._8_4_ = fStack_d0 - (float)uVar4;
		auVar45._12_4_ = fStack_cc - uVar4._4_4_;
		fVar44 = UVar48.z - (float)UVar49.z;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			auStack_e8._0_4_ = fVar44;
			_auStack_128 = auVar45;
			auVar45 = _auStack_128;
			fVar44 = (float)auStack_e8._0_4_;
		}
		uVar42 = 0;
		uVar4._0_4_ = fVar44 * fVar44 + auVar45._4_4_ * auVar45._4_4_ + auVar45._0_4_ * auVar45._0_4_;
		if ((float)uVar4 < 0.0) {
			auStack_e8._0_4_ = fVar44;
			_auStack_128 = auVar45;
			uVar4._0_4_ = sqrtf((float)uVar4);
			uVar42 = extraout_XMM0_Db;
			auVar45 = _auStack_128;
			fVar44 = (float)auStack_e8._0_4_;
			if ((float)uVar4 <= 1e-05) goto label_05c12631;
	label_05c1266d: ;
			fVar44 = fVar44 / (float)uVar4;
			auVar25._4_4_ = (float)uVar4;
			auVar25._0_4_ = (float)uVar4;
			auVar25._8_4_ = uVar42;
			auVar25._12_4_ = uVar42;
			auVar43 = divps(auVar45, auVar25);
			UStack_110.r = (float)auVar43._0_4_;
			UStack_110.g = (float)auVar43._4_4_;
			pUVar33 = (UnityEngine_Vector3_StaticFields)&UStack_110;
		}
		else {
			uVar4._0_4_ = SQRT((float)uVar4);
			if (1e-05 < (float)uVar4) goto label_05c1266d;
	label_05c12631: ;
			pUVar33 = typeof(Vector3).static_fields;
			fVar44 = (pUVar33.zeroVector).z;
		}
		pUVar14 = __this_03.Cache;
		if (pUVar14 == null) goto label_05c1359d;
		auStack_e8._0_4_ = fVar44;
		pUVar34 = pUVar14.Transform;
		if (pUVar34 == null) goto label_05c1359d;
		uVar1 = (pUVar33.zeroVector).x;
		uVar5 = (pUVar33.zeroVector).y;
		auStack_b8._4_4_ = uVar5;
		auStack_b8._0_4_ = uVar1;
		UVar49 = pUVar34.forward;
		pCVar15 = __this_03.Setup;
		if (pCVar15 == null) goto label_05c1359d;
		auStack_f4._4_4_ = extraout_XMM0_Dc_01;
		fStack_ec = (float)extraout_XMM0_Dd_01;
		auStack_128 = (byte[])UVar49.z;
		pUVar16 = pCVar15._part_blade_l;
		if (pUVar16 == null) goto label_05c1359d;
		bVar30 = pUVar16.activeSelf;
		pCVar15 = __this_03.Setup;
		if (pCVar15 == null) goto label_05c1359d;
		pUVar16 = pCVar15._part_blade_r;
		if (pUVar16 == null) goto label_05c1359d;
		bVar31 = pUVar16.activeSelf;
		pSVar17 = SettingsManager.InGameCurrent;
		if (pSVar17 == null) goto label_05c1359d;
		pSVar18 = pSVar17.Misc;
		if (pSVar18 == null) goto label_05c1359d;
		pSVar19 = pSVar18.ThunderspearPVP;
		if (pSVar19 == null) goto label_05c1359d;
		if (pSVar19._value == false) {
			bVar40 = this.MaxRound == 2;
		}
		else {
			bVar40 = false;
		}
		if (0.0 <= (float)auStack_128 * (float)auStack_b8._0_4_ - (float)auStack_f8 * (float)auStack_e8._0_4_ || !bVar30) {
			if (bVar31) goto label_05c12843;
	label_05c12910: ;
			pCVar15 = __this_03.Setup;
			if (((pCVar15 == null) ||(pUVar16 = pCVar15._part_blade_l, pUVar16 == null)) ||(pUVar34 = pUVar16.transform, pUVar34 == null)) goto label_05c1359d;
			UVar49 = pUVar34.position;
			auStack_124._4_4_ = extraout_XMM0_Dc_03;
			_auStack_128 = UVar49._0_8_;
			fStack_11c = (float)extraout_XMM0_Dd_03;
			auStack_f8 = (byte[])UVar49.z;
			pSVar35 = HumanSounds.GetRandomTSLaunch();
			__this_03.PlaySound(pSVar35);
			__this_03.SetThunderspears(false, (bool)(bVar31 | bVar40 ^ 1U));
			uVar10 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			if (__this_03.Grounded == false) {
				if (uVar10 == 0) {
				}
				pSVar35 = HumanAnimations.TSShootLAir;
			}
			else {
				if (uVar10 == 0) {
				}
				pSVar35 = HumanAnimations.TSShootL;
			}
		}
		else {
			if ((__this_03._state != 0xd) || (!bVar31)) goto label_05c12910;
	label_05c12843: ;
			pCVar15 = __this_03.Setup;
			if (pCVar15 == null) goto label_05c1359d;
			pUVar16 = pCVar15._part_blade_r;
			if (pUVar16 == null) goto label_05c1359d;
			pUVar34 = pUVar16.transform;
			if (pUVar34 == null) goto label_05c1359d;
			UVar49 = pUVar34.position;
			auStack_124._4_4_ = extraout_XMM0_Dc_02;
			_auStack_128 = UVar49._0_8_;
			fStack_11c = (float)extraout_XMM0_Dd_02;
			auStack_f8 = (byte[])UVar49.z;
			pSVar35 = HumanSounds.GetRandomTSLaunch();
			__this_03.PlaySound(pSVar35);
			__this_03.SetThunderspears((bool)(bVar30 | bVar40 ^ 1U), false);
			uVar10 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			if (__this_03.Grounded == false) {
				if (uVar10 == 0) {
				}
				pSVar35 = HumanAnimations.TSShootRAir;
			}
			else {
				if (uVar10 == 0) {
				}
				pSVar35 = HumanAnimations.TSShootR;
			}
		}
		__this_03.AttackAnimation = pSVar35;
		if (__this_03.Grounded != false) {
			pCVar15 = __this_03.Setup;
			if (pCVar15 == null) goto label_05c1359d;
			pUVar16 = pCVar15._part_head;
			if (pUVar16 == null) goto label_05c1359d;
			pUVar34 = pUVar16.transform;
			if (pUVar34 == null) goto label_05c1359d;
			UVar49 = pUVar34.position;
			auStack_128 = (byte[])UVar49.x;
			auStack_124._0_4_ = UVar49.y;
			auStack_124._4_4_ = extraout_XMM0_Dc_04;
			fStack_11c = extraout_XMM0_Dd_04;
			auVar41 = (byte[])UVar49.z;
			if (Il2CppMethodInitialized_0753e72c == false) {
				_auStack_128 = UVar49._0_8_;
				auStack_f8 = (byte[])UVar49.z;
				Il2CppMethodInitialized_0753e72c = true;
				auVar41 = auStack_f8;
			}
			pUVar33 = typeof(Vector3).static_fields;
			uVar2 = (pUVar33.upVector).x;
			uVar6 = (pUVar33.upVector).y;
			auStack_124._0_4_ = (float)auStack_124._0_4_ + (float)uVar6;
			auStack_128 = (byte[])((float)auStack_128 + (float)uVar2);
			auStack_124._4_4_ = (float)auStack_124._4_4_ + 0.0;
			fStack_11c = fStack_11c + 0.0;
			auStack_f8 = (byte[])((float)auVar41 + (pUVar33.upVector).z);
		}
		else {
		}
		auVar27._8_8_ = 0;
		auVar27._0_8_ = UStack_110._8_8_;
		UStack_110 = (Color)(auVar27 << 0x40);
		auStack_d8._0_4_ = (float)auStack_d8._0_4_ - (float)auStack_128;
		auStack_d8._4_4_ = (float)auStack_d8._4_4_ - (float)auStack_124._0_4_;
		fVar44 = UVar48.z - (float)auStack_f8;
		fStack_d0 = fStack_d0 - (float)auStack_124._4_4_;
		fStack_cc = fStack_cc - fStack_11c;
		uVar4._0_4_ = (float)auStack_d8._0_4_;
		uVar4._4_4_ = (float)auStack_d8._4_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			uVar4._0_4_ = (float)auStack_d8._0_4_;
			uVar4._4_4_ = (float)auStack_d8._4_4_;
		}
		uVar42 = 0;
		uVar4._0_4_ = fVar44 * fVar44 + uVar4._4_4_ * uVar4._4_4_ + (float)uVar4 * (float)uVar4;
		if ((float)uVar4 < 0.0) {
			uVar4._0_4_ = sqrtf((float)uVar4);
			uVar42 = extraout_XMM0_Db_00;
			if ((float)uVar4 <= 1e-05) goto label_05c12b4d;
	label_05c12b92: ;
			fVar44 = fVar44 / (float)uVar4;
			auVar24._4_4_ = (float)uVar4;
			auVar24._0_4_ = (float)uVar4;
			auVar24._8_4_ = uVar42;
			auVar24._12_4_ = uVar42;
			auVar43 = divps(_auStack_d8, auVar24);
			UStack_110.r = (float)auVar43._0_4_;
			UStack_110.g = (float)auVar43._4_4_;
			uVar4._0_4_ = auVar43._0_4_;
			uVar4._4_4_ = auVar43._4_4_;
			cVar9 = __this_03.Grounded;
			uVar28 = auVar43._0_8_;
		}
		else {
			uVar4._0_4_ = SQRT((float)uVar4);
			if (1e-05 < (float)uVar4) goto label_05c12b92;
	label_05c12b4d: ;
			pUVar33 = typeof(Vector3).static_fields;
			fVar44 = (pUVar33.zeroVector).z;
			uVar4._0_4_ = (pUVar33.zeroVector).x;
			uVar4._4_4_ = (pUVar33.zeroVector).y;
			cVar9 = __this_03.Grounded;
			uVar28 = uVar4;
		}
		auStack_d8 = (byte[])uVar28;
		if (cVar9 != false) {
			auStack_124._0_4_ = (float)auStack_124._0_4_ + uVar4._4_4_;
			auStack_128 = (byte[])((float)auStack_128 + (float)uVar4);
			auStack_124._4_4_ = (float)auStack_124._4_4_ + 0.0;
			fStack_11c = fStack_11c + 0.0;
			auStack_f8 = (byte[])((float)auStack_f8 + fVar44);
		}
		iVar11 = __this_03._state;
		if (iVar11 != 0xb) {
			if (iVar11 == 1) {
				__this_03._attackButtonRelease = true;
			}
			__this_03.PlayAnimation(__this_03.AttackAnimation, 0.1);
			__this_03.State = 1;
			UStack_110.b = (float)auStack_e8._0_4_;
			UStack_110.r = (float)auStack_b8._0_4_;
			UStack_110.g = (float)auStack_b8._4_4_;
			pUVar33 = typeof(Vector3).static_fields;
			UStack_c8.x = (pUVar33.upVector).x;
			UStack_c8.y = (pUVar33.upVector).y;
			UStack_c8.z = (pUVar33.upVector).z;
			UStack_48 = (Quaternion)Quaternion.Internal_LookRotation(ref UStack_110, ref UStack_c8);
			UVar48 = Quaternion.Internal_ToEulerRad(ref UStack_48);
			UVar49.x = UVar48.x * 57.29578;
			UVar49.y = UVar48.y * 57.29578;
			UVar49.z = UVar48.z * 57.29578;
			UVar48 = Quaternion.Internal_MakePositive(UVar49);
			__this_03.TargetAngle = UVar48.y;
			auVar26._4_8_ = 0;
			auVar26._0_4_ = UVar48.y * 0.017453292;
			UStack_110._0_12_ = auVar26 << 0x20;
			UVar46 = (Quaternion)Quaternion.Internal_FromEulerRad(ref UStack_110);
			__this_03._targetRotation = UVar46;
		}
		if (__this_03.CarryState == 1) {
			pCVar20 = __this_03.Carrier;
			bVar30 = ((Object)pCVar20 != null);
			if (!bVar30) goto label_05c12d77;
			pCVar20 = __this_03.Carrier;
			if (pCVar20 == null) goto label_05c1359d;
			uVar3 = pCVar20.CarryVelocity.x;
			uVar7 = pCVar20.CarryVelocity.y;
			auStack_58._4_4_ = uVar7;
			auStack_58._0_4_ = uVar3;
			auStack_58._8_8_ = 0;
			fStack_fc = pCVar20.CarryVelocity.z;
		}
		else {
	label_05c12d77: ;
			pUVar14 = __this_03.Cache;
			if ((pUVar14 == null) ||(__this_00 = pUVar14.Rigidbody, __this_00 == null)) goto label_05c1359d;
			UVar48 = __this_00.linearVelocity;
			fStack_fc = UVar48.z;
			auStack_58._8_4_ = extraout_XMM0_Dc_05;
			auStack_58._0_8_ = UVar48._0_8_;
			auStack_58._12_4_ = extraout_XMM0_Dd_05;
		}
		pSVar17 = SettingsManager.InGameCurrent;
		if (pSVar17 == null) goto label_05c1359d;
		pSVar18 = pSVar17.Misc;
		if (pSVar18 == null) goto label_05c1359d;
		pSVar19 = pSVar18.ThunderspearPVP;
		if (pSVar19 == null) goto label_05c1359d;
		auStack_e8 = ZEXT416((uint)this.Speed);
		if (pSVar19._value == false) {
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			uStack_88._4_4_ = (undefined4)((ulong)uStack_88 >> 0x20);
			if (uVar10 == 0) {
			}
			auStack_98._0_4_ = fStack_fc * fStack_fc +(float)auStack_58._4_4_ * (float)auStack_58._4_4_ + (float)auStack_58._0_4_ * (float)auStack_58._0_4_ ;
			if ((float)auStack_98._0_4_ < 0.0) {
				uVar4._0_4_ = sqrtf((float)auStack_98._0_4_);
			}
			else {
				uVar4._0_4_ = SQRT((float)auStack_98._0_4_);
			}
			uStack_88 = CONCAT44(uStack_88._4_4_, (float)uVar4);
			pSVar39 = this.TSInfo;
			if ((pSVar39 == null) ||(pSVar39 = pSVar39.get_Item("SpeedMultiplier"), pSVar39 == null)) goto label_05c1359d;
			uVar4._0_4_ = pSVar39.get_AsFloat();
			pSStack_a0 = (String)CONCAT44(pSStack_a0._4_4_, (float)uVar4);
			pSVar39 = this.TSInfo;
			if ((pSVar39 == null) ||(pSVar39 = pSVar39.get_Item("Range"), pSVar39 == null)) goto label_05c1359d;
			auStack_b8._0_4_ =pSVar39.get_AsFloat();
			auStack_b8._4_4_ = extraout_XMM0_Db_01;
			fStack_b0 = (float)extraout_XMM0_Dc_07;
			fStack_ac = (float)extraout_XMM0_Dd_07;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05c133b4;
	label_05c13417: ;
				if (0.0 <= (float)auStack_98._0_4_) goto label_05c133c5;
	label_05c1342d: ;
				uVar4._0_4_ = sqrtf((float)auStack_98._0_4_);
			}
			else {
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05c13417;
	label_05c133b4: ;
				if ((float)auStack_98._0_4_ < 0.0) goto label_05c1342d;
	label_05c133c5: ;
				uVar4._0_4_ = SQRT((float)auStack_98._0_4_);
			}
			auStack_98._0_4_ = (float)uVar4;
			pSVar39 = this.TSInfo;
			if ((pSVar39 == null) ||(pSVar39 = pSVar39.get_Item("RangeMultiplier"), pSVar39 == null)) goto label_05c1359d;
			uVar4._0_4_ = pSVar39.get_AsFloat();
			uStack_68 = CONCAT44(uStack_68._4_4_, (float)uVar4);
			pSVar39 = this.TSInfo;
			if ((pSVar39 == null) ||(pSVar39 = pSVar39.get_Item("RangeMin"), pSVar39 == null)) goto label_05c1359d;
			fStack_78 = pSVar39.get_AsFloat();
			pSVar39 = this.TSInfo;
			if (pSVar39 == null) goto label_05c1359d;
			uStack_74 = extraout_XMM0_Db_02;
			uStack_70 = extraout_XMM0_Dc_08;
			uStack_6c = extraout_XMM0_Dd_08;
			pSVar39 = pSVar39.get_Item("RangeMax");
			if (pSVar39 == null) goto label_05c1359d;
			auStack_e8._0_4_ = (float)auStack_e8._0_4_ + (float)uStack_88 * pSStack_a0._0_4_;
			uVar4._0_4_ = pSVar39.get_AsFloat();
			auStack_b8._0_4_ = (float)auStack_b8._0_4_ + (float)auStack_98._0_4_ * (float)uStack_68;
			if ((float)auStack_b8._0_4_ <= (float)uVar4) {
				uVar4._0_4_ = (float)auStack_b8._0_4_;
			}
			auStack_b8._4_4_ = ~auStack_b8._4_4_ & uStack_74 | extraout_XMM0_Db_03 & auStack_b8._4_4_;
			auStack_b8._0_4_ =(float)(~-(uint)(fStack_78 <= (float)auStack_b8._0_4_) & (uint)fStack_78 |(uint)(float)uVar4 & -(uint)(fStack_78 <= (float)auStack_b8._0_4_)) / (float)auStack_e8._0_4_;
			fStack_b0 = (float)(~(uint)fStack_b0 & uStack_70 | extraout_XMM0_Dc_09 & (uint)fStack_b0);
			fStack_ac = (float)(~(uint)fStack_ac & uStack_6c | extraout_XMM0_Dd_09 & (uint)fStack_ac);
			uVar10 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar10 = (typeof(ProjectilePrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar10 == 0) {
		}
		pSVar35 = ProjectilePrefabs.Thunderspear;
		UStack_110.b = fVar44;
		UStack_110.r = (float)auStack_d8._0_4_;
		UStack_110.g = (float)auStack_d8._4_4_;
		pUVar33 = typeof(Vector3).static_fields;
		UStack_c8.x = (pUVar33.upVector).x;
		UStack_c8.y = (pUVar33.upVector).y;
		UStack_c8.z = (pUVar33.upVector).z;
		auVar43 = ZEXT416((uint)UStack_c8.z);
		UVar47 = Quaternion.Internal_LookRotation(ref UStack_110, ref UStack_c8);
		uStack_88 = UVar47._8_8_;
		auStack_98._8_4_ = extraout_XMM0_Dc_06;
		auStack_98._0_8_ = UVar47._0_8_;
		auStack_98._12_4_ = extraout_XMM0_Dd_06;
		pUVar14 = __this_03.Cache;
		if (pUVar14 != null) {
			pPVar21 = pUVar14.PhotonView;
			pSStack_a0 = pSVar35;
			if (pPVar21 != null) {
				pUVar33 = typeof(Vector3).static_fields;
				uStack_68._0_4_ = (pUVar33.zeroVector).x;
				uStack_68._4_4_ = (pUVar33.zeroVector).y;
				fStack_78 = (pUVar33.zeroVector).z;
				charViewId = pPVar21.viewIdField;
				settings = (Object[])new object[3];
				UStack_c8.x = this.Radius;
				pIVar36 = (object)UStack_c8;
				if (settings != null) {
					if ((pIVar36 != null) &&(pIVar37 = il2cpp_vm_Object_IsInst(pIVar36, (((settings.obj).klass)._1).element_class), pIVar37 == null)) goto label_05c135b7;
					if ((int)settings.Length == 0) goto label_05c135a2;
					settings[0] = pIVar36;
					pSVar22 = SettingsManager.AbilitySettings;
					if (((pSVar22 == null) ||(pSVar23 = pSVar22.BombColor, pSVar23 == null)) ||(__this_01 = pSVar23._value, __this_01 == null)) goto label_05c1359d;
					UStack_110 = __this_01.ToColor();
					pIVar36 = (object)UStack_110;
					if ((pIVar36 != null) &&(pIVar37 = il2cpp_vm_Object_IsInst(pIVar36, (((settings.obj).klass)._1).element_class), pIVar37 == null)) {
	label_05c135b7: ;
						pIVar36 = new ArrayTypeMismatchException();
						throw pIVar36;
					}
					if ((settings.Length & 0xfffffffe) == 0) {
	label_05c135a2: ;
						throw new IndexOutOfRangeException();
					}
					settings[1] = pIVar36;
					uStack_129 = 1;
					pIVar36 = (object)uStack_129;
					if ((pIVar36 != null) &&(pIVar37 = il2cpp_vm_Object_IsInst(pIVar36, (((settings.obj).klass)._1).element_class), pIVar37 == null)) goto label_05c135b7;
					if ((uint)settings.Length < 3) goto label_05c135a2;
					fVar44 = fVar44 * (float)auStack_e8._0_4_;
					auStack_d8._4_4_ = (float)auStack_d8._4_4_ * (float)auStack_e8._0_4_;
					auStack_d8._0_4_ = (float)auStack_d8._0_4_ * (float)auStack_e8._0_4_;
					fStack_d0 = fStack_d0 * (float)auStack_e8._0_4_;
					fStack_cc = fStack_cc * (float)auStack_e8._0_4_;
					settings[2] = pIVar36;
					UVar47.z = (float)uStack_88;
					UVar47.w = (float)uStack_88._4_4_;
					UVar47.x = (float)auStack_98._0_4_;
					UVar47.y = (float)auStack_98._4_4_;
					UVar48.z = (float)auStack_f8;
					UVar48.x = (float)auStack_128;
					UVar48.y = (float)auStack_124._0_4_;
					gravity.z = fStack_78;
					gravity.x = (float)uStack_68;
					gravity.y = (float)uStack_68._4_4_;
					velocity.z = fVar44;
					velocity.x = (float)auStack_d8._0_4_;
					velocity.y = (float)auStack_d8._4_4_;
					pPVar38 = (ThunderspearProjectile)ProjectileSpawner.Spawn(pSStack_a0, UVar48, UVar47, velocity, gravity, (float)auStack_b8._0_4_, charViewId, "", settings);
					pPVar29 = typeof(ThunderspearProjectile);
					if (pPVar38 == null) {
						this.Current = null;
					}
					else {
						bVar8 = (typeof(ThunderspearProjectile)._2).typeHierarchyDepth;
						if (((pPVar38.klass._2).typeHierarchyDepth < bVar8) ||((pPVar38.klass._2).typeHierarchy[(ulong)bVar8 - 1] !=typeof(ThunderspearProjectile))) {
	label_05c135a7: ;
							throw new InvalidCastException();
						}
						this.Current = pPVar38;
						if (((pPVar38.klass._2).typeHierarchyDepth < bVar8) ||((pPVar38.klass._2).typeHierarchy[(ulong)bVar8 - 1] != (Il2CppClass)pPVar29)) goto label_05c135a7;
					}
					targetAddress = &this.Current;
					pPVar38 = *targetAddress;
					if (pPVar38 != null) {
						pPVar38.InitialPlayerVelocity.x = (float)auStack_58._0_4_;
						pPVar38.InitialPlayerVelocity.y = (float)auStack_58._4_4_;
						pPVar38.InitialPlayerVelocity.z = fStack_fc;
						this._delayTimeLeft = this.Delay;
						if (__this_03.AI != false) {
							return;
						}
						__this_03 = (Human)UIManager.CurrentMenu;
						if (__this_03 != null) {
							bVar8 = (typeof(InGameMenu)._2).typeHierarchyDepth;
							if (((__this_03.klass._2).typeHierarchyDepth < bVar8) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar8 - 1] !=typeof(InGameMenu))) {
	label_05c135b2: ;
								throw new InvalidCastException();
							}
							__this_02 = (HUDBottomHandler)__this_03.MovementSync;
							if (__this_02 != null) {
								__this_02.ShootTS();
								return;
							}
						}
					}
				}
			}
		}
	label_05c1359d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600430F")]
	[Address(RVA = "0x5B13690", Offset = "0x5B12690", VA = "0x5B13690")]
	public bool HasActiveProjectile()
	{
		// Lifted from source/cpp/Characters/ThunderspearWeapon.c (Characters.ThunderspearWeapon$$HasActiveProjectile): clean
		ThunderspearProjectile pPVar1;
		bool bVar2;
		bool bVar3;

		pPVar1 = this.Current;
		bVar2 = ((Object)pPVar1 != null);
		if (bVar2) {
			pPVar1 = this.Current;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pPVar1.Disabled == false;
		}
		return bVar3;
	}

	[Token(Token = "0x6004310")]
	[Address(RVA = "0x5B13700", Offset = "0x5B12700", VA = "0x5B13700", Slot = "12")]
	public override void SetInput(bool key)
	{
		// Lifted from source/cpp/Characters/ThunderspearWeapon.c (Characters.ThunderspearWeapon$$SetInput): 5 lines keep C-only constructs
		ThunderspearProjectile* targetAddress;
		ThunderspearProjectile pPVar1;
		bool bVar2;
		undefined7 in_register_00000031;

		if ((int)CONCAT71(in_register_00000031, key) != 0) {
			pPVar1 = this.Current;
			bVar2 = ((Object)pPVar1 != null);
			if (bVar2) {
				targetAddress = &this.Current;
				pPVar1 = *targetAddress;
				if (pPVar1 == null) {
					throw new NullReferenceException();
				}
				if ((pPVar1.Disabled == false) && (this._delayTimeLeft <= 0.0)) {
					pPVar1.Explode();
					*targetAddress = null;
					return;
				}
			}
			bVar2 = this.CanUse();
			if (bVar2) {
				this.Activate();
				this.OnUse();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004311")]
	[Address(RVA = "0x5B137F0", Offset = "0x5B127F0", VA = "0x5B137F0", Slot = "13")]
	public override void OnFixedUpdate()
	{
		// Lifted from source/cpp/Characters/ThunderspearWeapon.c (Characters.ThunderspearWeapon$$OnFixedUpdate): 4 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		Human __this_00;
		ThunderspearProjectile pPVar3;
		HumanSetup pCVar4;
		GameObject pUVar5;
		InGameSet pSVar6;
		InGameMiscSettings pSVar7;
		BoolSetting pSVar8;
		bool bVar9;
		ThunderspearProjectile* targetAddress;
		float fVar10;

		__this_00 = (Human)this._owner;
		if (__this_00 == null) goto label_05c13a59;
		bVar2 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		if (__this_00.Dead != false) {
			pPVar3 = this.Current;
			bVar9 = ((Object)pPVar3 != null);
			if (!bVar9) {
				return;
			}
			targetAddress = &this.Current;
			pPVar3 = *targetAddress;
			if (pPVar3 != null) {
				pPVar3.DestroySelf();
				*targetAddress = null;
				return;
			}
			goto label_05c13a59;
		}
		bVar9 = this.CanUse();
		if (((bVar9) && (__this_00.Sheathed == false)) && (__this_00._state != 4)) {
			pCVar4 = __this_00.Setup;
			if ((pCVar4 == null) ||(pUVar5 = pCVar4._part_blade_l, pUVar5 == null)) goto label_05c13a59;
			bVar9 = pUVar5.activeSelf;
			if (bVar9) {
				pCVar4 = __this_00.Setup;
				if ((pCVar4 == null) ||(pUVar5 = pCVar4._part_blade_r, pUVar5 == null)) goto label_05c13a59;
				bVar9 = pUVar5.activeSelf;
				if (bVar9) goto label_05c139e3;
			}
			pSVar6 = SettingsManager.InGameCurrent;
			if (((pSVar6 == null) ||(pSVar7 = pSVar6.Misc, pSVar7 == null)) ||(pSVar8 = pSVar7.ThunderspearPVP, pSVar8 == null)) goto label_05c13a59;
			if (((pSVar8._value != false) || (this.MaxRound != 2)) ||(1 < this.RoundLeft)) {
				__this_00.SetThunderspears(true, true);
			}
		}
	label_05c139e3: ;
		pPVar3 = this.Current;
		bVar9 = ((Object)pPVar3 != null);
		if (bVar9) {
			pPVar3 = this.Current;
			if (pPVar3 == null) {
	label_05c13a59: ;
				throw new NullReferenceException();
			}
			if (pPVar3.Disabled == false) {
				fVar1 = this._delayTimeLeft;
				fVar10 = Time.fixedDeltaTime;
				this._delayTimeLeft = fVar1 - fVar10;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004312")]
	[Address(RVA = "0x5B135D0", Offset = "0x5B125D0", VA = "0x5B135D0")]
	private bool IsModelActive(Human human, bool left)
	{
		// Lifted from source/cpp/Characters/ThunderspearWeapon.c (Characters.ThunderspearWeapon$$IsModelActive): 2 lines keep C-only constructs
		HumanSetup pCVar1;
		bool bVar2;
		undefined3 in_register_00000011;
		GameObject __this_00;

		if (CONCAT31(in_register_00000011, left) == 0) {
			if ((human == null) ||(pCVar1 = human.Setup, pCVar1 == null)) goto label_05c13614;
			__this_00 = pCVar1._part_blade_r;
		}
		else {
			if ((human == null) ||(pCVar1 = human.Setup, pCVar1 == null)) goto label_05c13614;
			__this_00 = pCVar1._part_blade_l;
		}
		if (__this_00 != null) {
			return bVar2;
		}
	label_05c13614: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004313")]
	[Address(RVA = "0x5B13620", Offset = "0x5B12620", VA = "0x5B13620")]
	private bool IsTwoShotMode()
	{
		// Lifted from source/cpp/Characters/ThunderspearWeapon.c (Characters.ThunderspearWeapon$$IsTwoShotMode): clean
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		BoolSetting pSVar3;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Misc, pSVar2 == null)) ||(pSVar3 = pSVar2.ThunderspearPVP, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		if (pSVar3._value == false) {
			return this.MaxRound == 2;
		}
		return false;
	}
}
