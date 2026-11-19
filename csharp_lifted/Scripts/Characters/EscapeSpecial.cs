// ==================== AoTTG2 cross-reference ====================
// Type: Characters.EscapeSpecial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/EscapeSpecial.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/EscapeSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006DD")]
internal class EscapeSpecial : RechargeableUseable
{
	[Token(Token = "0x17000B71")]
	protected override float ActiveTime
	{
		[Token(Token = "0x60042BA")]
		[Address(RVA = "0x5B0B950", Offset = "0x5B0A950", VA = "0x5B0B950", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Characters/EscapeSpecial.c (Characters.EscapeSpecial$$get_ActiveTime): clean
			return 0.64;
		}
	}

	[Token(Token = "0x60042BB")]
	[Address(RVA = "0x5B0B960", Offset = "0x5B0A960", VA = "0x5B0B960")]
	public EscapeSpecial(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/EscapeSpecial.c (Characters.EscapeSpecial$$.ctor): clean
		base(owner, 0.0);
		this.UsesLeft = -1;
		this.MaxUses = 1;
		this.Cooldown = 300.0;
		this.ReduceCooldownAmount = 50.0;
		this.SetCooldownLeft(300.0);
		return;
	}

	[Token(Token = "0x60042BC")]
	[Address(RVA = "0x5B0B9A0", Offset = "0x5B0A9A0", VA = "0x5B0B9A0", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/EscapeSpecial.c (Characters.EscapeSpecial$$CanUse): 5 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseCharacter pCVar3;
		PhotonView pPVar4;
		sbyte cVar5;
		bool bVar6;
		bool bVar7;

		pCVar3 = this._owner;
		if (pCVar3 != null) {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if (((pCVar3.klass._2).typeHierarchyDepth < bVar1) ||((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
				throw new InvalidCastException();
			}
			pPVar4 = (*(ulong)((sbyte)pCVar3 + 0x120));
			if (pPVar4 != null) {
				cVar5 = (*((Il2CppClass)pPVar4.klass).vtable[7].methodPtr)();
				if (cVar5 != false) {
					bVar6 = this.CanUse();
					if (bVar6) {
						iVar2._0_1_ = (*(byte)((sbyte)pCVar3 + 0x178));
						iVar2._1_1_ = (*(byte)((sbyte)pCVar3 + 0x179));
						iVar2._2_2_ = *(ushort)&pCVar3[1].field_0x6a;
						bVar7 = iVar2 == 7;
					}
				}
				return bVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60042BD")]
	[Address(RVA = "0x5B0BA50", Offset = "0x5B0AA50", VA = "0x5B0BA50", Slot = "9")]
	protected override void Activate()
	{
		// Lifted from source/cpp/Characters/EscapeSpecial.c (Characters.EscapeSpecial$$Activate): 5 lines keep C-only constructs
		byte bVar1;
		BaseCharacter __this_00;
		PhotonView pPVar2;

		__this_00 = this._owner;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		pPVar2 = (*(ulong)((sbyte)__this_00 + 0x120));
		if (pPVar2 != null) {
			bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pPVar2.klass._2).typeHierarchyDepth) &&((pPVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon)) ) {
				__this_00.CrossFade(HumanAnimations.SpecialJean, 0.1, 0.0);
				pPVar2 = (*(ulong)((sbyte)__this_00 + 0x120));
				if (pPVar2 == null) {
					return;
				}
			}
			bVar1 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pPVar2.klass._2).typeHierarchyDepth) &&((pPVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AHSSWeapon))) {
				__this_00.CrossFade(HumanAnimations.AHSSShootBoth, 0.1, 0.0);
				pPVar2 = (*(ulong)((sbyte)__this_00 + 0x120));
				if (pPVar2 == null) {
					return;
				}
			}
			bVar1 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pPVar2.klass._2).typeHierarchyDepth) &&((pPVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ThunderspearWeapon))) {
				__this_00.CrossFade(HumanAnimations.TSShootLAir, 0.1, 0.0);
				pPVar2 = (*(ulong)((sbyte)__this_00 + 0x120));
				if (pPVar2 == null) {
					return;
				}
			}
			bVar1 = (typeof(APGWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pPVar2.klass._2).typeHierarchyDepth) &&((pPVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(APGWeapon))) {
				__this_00.CrossFade(HumanAnimations.AHSSShootBoth, 0.1, 0.0);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60042BE")]
	[Address(RVA = "0x5B0BCF0", Offset = "0x5B0ACF0", VA = "0x5B0BCF0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/EscapeSpecial.c (Characters.EscapeSpecial$$Deactivate): 358 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		byte bVar5;
		Human __this_00;
		BaseTitan pCVar6;
		HumanComponentCache pCVar7;
		BaseHitbox pCVar8;
		BaseComponentCache pUVar9;
		CapsuleCollider __this_01;
		Rigidbody __this_02;
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[16];
		bool bVar15;
		String* ppSVar16;
		Transform pUVar17;
		String pSVar18;
		Object[] pSVar19;
		object pIVar20;
		object pIVar21;
		BaseUseable pCVar22;
		UnityEngine_Vector3_StaticFields pUVar23;
		float fVar24;
		float fVar25;
		uint uVar26;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		uint extraout_XMM0_Db_02;
		float extraout_XMM0_Db_03;
		uint extraout_XMM0_Db_04;
		float fVar27;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		float extraout_XMM0_Dc_03;
		float extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dc_05;
		float extraout_XMM0_Dc_06;
		float extraout_XMM0_Dc_07;
		float extraout_XMM0_Dc_08;
		uint extraout_XMM0_Dc_09;
		float extraout_XMM0_Dc_10;
		float extraout_XMM0_Dc_11;
		float extraout_XMM0_Dc_12;
		uint extraout_XMM0_Dc_13;
		uint extraout_XMM0_Dc_14;
		uint extraout_XMM0_Dc_15;
		float extraout_XMM0_Dc_16;
		uint extraout_XMM0_Dc_17;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		float extraout_XMM0_Dd_03;
		float extraout_XMM0_Dd_04;
		uint extraout_XMM0_Dd_05;
		float extraout_XMM0_Dd_06;
		float extraout_XMM0_Dd_07;
		float extraout_XMM0_Dd_08;
		uint extraout_XMM0_Dd_09;
		float extraout_XMM0_Dd_10;
		float extraout_XMM0_Dd_11;
		uint extraout_XMM0_Dd_12;
		uint extraout_XMM0_Dd_13;
		uint extraout_XMM0_Dd_14;
		uint extraout_XMM0_Dd_15;
		float extraout_XMM0_Dd_16;
		uint extraout_XMM0_Dd_17;
		uint extraout_XMM1_Db;
		float fVar28;
		float fVar29;
		float fVar32;
		byte[] auVar30 = new byte[16];
		byte[] auVar31 = new byte[16];
		float fVar33;
		byte[] auVar34 = new byte[16];
		byte[] auVar35 = new byte[16];
		byte[] auVar36 = new byte[16];
		float fVar37;
		Quaternion UVar38;
		Vector3 UVar39;
		Vector3 UVar40;
		Vector3 UVar41;
		Vector3 position;
		Vector3 value;
		ulong uStack_158;
		byte[] auStack_148 = new byte[8];
		float fStack_140;
		float fStack_13c;
		ulong uStack_138;
		byte[] auStack_128 = new byte[24];
		float fStack_110;
		byte[] auStack_108 = new byte[16];
		byte[] auStack_f8 = new byte[8];
		float fStack_f0;
		float fStack_ec;
		byte[] auStack_e8 = new byte[8];
		float fStack_e0;
		float fStack_dc;
		byte[] auStack_d8 = new byte[8];
		float fStack_d0;
		float fStack_cc;
		float fStack_c0;
		float fStack_bc;
		float fStack_b8;
		float fStack_b4;
		float fStack_b0;
		float fStack_ac;
		byte[] auStack_a8 = new byte[8];
		ulong uStack_a0;
		byte[] auStack_98 = new byte[16];
		Vector3 UStack_80;
		float fStack_70;
		uint uStack_6c;
		float fStack_68;
		byte[] auStack_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;

		__this_00 = (Human)this._owner;
		if (__this_00 == null) goto label_05c0d783;
		bVar5 = (typeof(Human)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar5) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar5 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		if (__this_00.Dead != false) {
			return;
		}
		pCVar6 = __this_00.Grabber;
		bVar15 = ((Object)pCVar6 != null);
		if (!bVar15) {
			return;
		}
		if (__this_00._state != 7) {
			return;
		}
		pCVar6 = __this_00.Grabber;
		if (pCVar6 == null) goto label_05c0d783;
		if (pCVar6.HoldHumanLeft == false) {
			ppSVar16 = &"ForearmRHurtbox";
		}
		else {
			ppSVar16 = &"ForearmLHurtbox";
		}
		pCVar6.GetHit((BaseCharacter)__this_00, 0, "", *ppSVar16);
		uVar26 = extraout_XMM1_Db;
		__this_00.Ungrab(true, false, false);
		pCVar22 = __this_00.Weapon;
		if (pCVar22 != null) {
			bVar5 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar5 <= (pCVar22.klass._2).typeHierarchyDepth) &&((pCVar22.klass._2).typeHierarchy[(ulong)bVar5 - 1] == typeof(BladeWeapon) )) {
				pCVar7 = __this_00.HumanCache;
				if ((pCVar7 == null) ||(pCVar8 = pCVar7.BladeHitLeft, pCVar8 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.Blood1;
				pUVar17 = pCVar8.transform;
				if (pUVar17 == null) goto label_05c0d783;
				UVar39 = pUVar17.position;
				auStack_128._0_4_ = 4.712389;
				auStack_128._4_4_ = 0.0;
				auStack_128._8_4_ = 0.0;
				UVar38 = Quaternion.Internal_FromEulerRad((Vector3)auStack_128);
				uVar26 = 0;
				EffectSpawner.Spawn(pSVar18, UVar39, UVar38, 1.0, true, null);
				__this_00.PlaySound(HumanSounds.BladeHit);
				__this_00.SpecialActionState(0.5);
				pCVar22 = __this_00.Weapon;
				if (pCVar22 == null) goto label_05c0d704;
			}
			bVar5 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
			if ((bVar5 <= (pCVar22.klass._2).typeHierarchyDepth) &&((pCVar22.klass._2).typeHierarchy[(ulong)bVar5 - 1] == typeof(AHSSWeapon)) ) {
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.GunExplode;
				UVar39 = pUVar17.position;
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar40 = pUVar17.up;
				fStack_f0 = (float)extraout_XMM0_Dc;
				auStack_f8 = (byte[])UVar40._0_8_;
				fStack_ec = (float)extraout_XMM0_Dd;
				auStack_108._0_4_ = UVar40.z;
				UVar40 = __this_00.GetAimPoint();
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar41 = pUVar17.position;
				fVar24 = UVar41.x;
				fVar28 = UVar41.y;
				fVar32 = extraout_XMM0_Dc_01;
				fVar29 = extraout_XMM0_Dd_01;
				fVar33 = UVar41.z;
				if (g_data_0753e72d == false) {
					auStack_d8._0_4_ = UVar41.z;
					fStack_e0 = extraout_XMM0_Dc_01;
					auStack_e8 = (byte[])UVar41._0_8_;
					fStack_dc = extraout_XMM0_Dd_01;
					g_data_0753e72d = true;
					fVar24 = (float)auStack_e8._0_4_;
					fVar28 = (float)auStack_e8._4_4_;
					fVar32 = fStack_e0;
					fVar29 = fStack_dc;
					fVar33 = (float)auStack_d8._0_4_;
				}
				auStack_128._0_4_ = 0.0;
				auStack_128._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) {
					auStack_d8._0_4_ = fVar33;
					auStack_e8._4_4_ = fVar28;
					auStack_e8._0_4_ = fVar24;
					fStack_e0 = fVar32;
					fStack_dc = fVar29;
					Il2CppMethodInitialized_0753e729 = true;
					fVar24 = (float)auStack_e8._0_4_;
					fVar28 = (float)auStack_e8._4_4_;
					fVar32 = fStack_e0;
					fVar29 = fStack_dc;
					fVar33 = (float)auStack_d8._0_4_;
				}
				auStack_148._0_4_ = UVar40.x;
				auStack_148._4_4_ = UVar40.y;
				auVar34._0_4_ = (float)auStack_148._0_4_ - fVar24;
				auVar34._4_4_ = (float)auStack_148._4_4_ - fVar28;
				auVar34._8_4_ = extraout_XMM0_Dc_00 - fVar32;
				auVar34._12_4_ = extraout_XMM0_Dd_00 - fVar29;
				fVar33 = UVar40.z - fVar33;
				uVar26 = 0;
				fVar24 = fVar33 * fVar33 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
				if (fVar24 < 0.0) {
					fVar24 = sqrtf(fVar24);
					uVar26 = extraout_XMM0_Db;
				}
				else {
					fVar24 = SQRT(fVar24);
				}
				if (fVar24 <= 1e-05) {
					pUVar23 = typeof(Vector3).static_fields;
					auStack_128._8_4_ = (pUVar23.zeroVector).z;
				}
				else {
					auStack_128._8_4_ = fVar33 / fVar24;
					auVar10._4_4_ = fVar24;
					auVar10._0_4_ = fVar24;
					auVar10._8_4_ = uVar26;
					auVar10._12_4_ = uVar26;
					auVar34 = divps(auVar34, auVar10);
					auStack_128._0_4_ = auVar34._0_4_;
					auStack_128._4_4_ = auVar34._4_4_;
					pUVar23 = (UnityEngine_Vector3_StaticFields)auStack_128;
				}
				auStack_128._0_4_ = (pUVar23.zeroVector).x;
				auStack_128._4_4_ = (pUVar23.zeroVector).y;
				fVar24 = (float)auStack_108._0_4_ * 0.8;
				fVar28 = (float)auStack_f8._0_4_ * 0.8;
				fVar32 = (float)auStack_f8._4_4_ * 0.8;
				if (Il2CppMethodInitialized_0753e72c == false) {
					auStack_108._0_4_ = (float)auStack_108._0_4_ * 0.8;
					auStack_f8._4_4_ = (float)auStack_f8._4_4_ * 0.8;
					auStack_f8._0_4_ = (float)auStack_f8._0_4_ * 0.8;
					fStack_f0 = fStack_f0 * 0.0;
					fStack_ec = fStack_ec * 0.0;
					Il2CppMethodInitialized_0753e72c = true;
					fVar24 = (float)auStack_108._0_4_;
					fVar28 = (float)auStack_f8._0_4_;
					fVar32 = (float)auStack_f8._4_4_;
				}
				uStack_158._0_4_ = UVar39.x;
				uStack_158._4_4_ = UVar39.y;
				UVar39.z = UVar39.z + fVar24;
				pUVar23 = typeof(Vector3).static_fields;
				auStack_128._16_4_ = (pUVar23.upVector).x;
				auStack_128._20_4_ = (pUVar23.upVector).y;
				fStack_110 = (pUVar23.upVector).z;
				UVar38 = Quaternion.Internal_LookRotation((Vector3)auStack_128, (Vector3)(auStack_128 + 0x10));
				UVar39.x = (float)uStack_158 + fVar28;
				UVar39.y = uStack_158._4_4_ + fVar32;
				EffectSpawner.Spawn(pSVar18, UVar39, UVar38, 1.0, true, null);
				pCVar7 = __this_00.HumanCache;
				if ((pCVar7 == null) ||(pCVar8 = pCVar7.BladeHitLeft, pCVar8 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.Blood1;
				pUVar17 = pCVar8.transform;
				if (pUVar17 == null) goto label_05c0d783;
				UVar39 = pUVar17.position;
				auStack_128._0_4_ = 4.712389;
				auStack_128._4_4_ = 0.0;
				auStack_128._8_4_ = 0.0;
				UVar38 = Quaternion.Internal_FromEulerRad((Vector3)auStack_128);
				uVar26 = 0;
				EffectSpawner.Spawn(pSVar18, UVar39, UVar38, 1.0, true, null);
				pSVar18 = HumanSounds.GetRandomAHSSGunShot();
				__this_00.PlaySound(pSVar18);
				__this_00.SpecialActionState(0.5);
				pCVar22 = __this_00.Weapon;
				if (pCVar22 == null) goto label_05c0d704;
			}
			bVar5 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
			if ((bVar5 <= (pCVar22.klass._2).typeHierarchyDepth) &&((pCVar22.klass._2).typeHierarchy[(ulong)bVar5 - 1] ==typeof(ThunderspearWeapon))) {
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.ThunderspearExplode;
				UVar39 = pUVar17.position;
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar40 = pUVar17.up;
				fStack_f0 = (float)extraout_XMM0_Dc_02;
				auStack_f8 = (byte[])UVar40._0_8_;
				fStack_ec = (float)extraout_XMM0_Dd_02;
				auStack_108._0_4_ = UVar40.z;
				UVar40 = __this_00.GetAimPoint();
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar41 = pUVar17.position;
				fVar24 = UVar41.x;
				fVar28 = UVar41.y;
				fVar32 = extraout_XMM0_Dc_04;
				fVar29 = extraout_XMM0_Dd_04;
				fVar33 = UVar41.z;
				if (g_data_0753e72d == false) {
					auStack_d8._0_4_ = UVar41.z;
					fStack_e0 = extraout_XMM0_Dc_04;
					auStack_e8 = (byte[])UVar41._0_8_;
					fStack_dc = extraout_XMM0_Dd_04;
					g_data_0753e72d = true;
					fVar24 = (float)auStack_e8._0_4_;
					fVar28 = (float)auStack_e8._4_4_;
					fVar32 = fStack_e0;
					fVar29 = fStack_dc;
					fVar33 = (float)auStack_d8._0_4_;
				}
				auStack_128._0_4_ = 0.0;
				auStack_128._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) {
					auStack_d8._0_4_ = fVar33;
					auStack_e8._4_4_ = fVar28;
					auStack_e8._0_4_ = fVar24;
					fStack_e0 = fVar32;
					fStack_dc = fVar29;
					Il2CppMethodInitialized_0753e729 = true;
					fVar24 = (float)auStack_e8._0_4_;
					fVar28 = (float)auStack_e8._4_4_;
					fVar32 = fStack_e0;
					fVar29 = fStack_dc;
					fVar33 = (float)auStack_d8._0_4_;
				}
				auStack_148._0_4_ = UVar40.x;
				auStack_148._4_4_ = UVar40.y;
				auVar30._0_4_ = (float)auStack_148._0_4_ - fVar24;
				auVar30._4_4_ = (float)auStack_148._4_4_ - fVar28;
				auVar30._8_4_ = extraout_XMM0_Dc_03 - fVar32;
				auVar30._12_4_ = extraout_XMM0_Dd_03 - fVar29;
				fVar33 = UVar40.z - fVar33;
				uVar26 = 0;
				fVar24 = fVar33 * fVar33 + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_;
				if (fVar24 < 0.0) {
					fVar24 = sqrtf(fVar24);
					uVar26 = extraout_XMM0_Db_00;
				}
				else {
					fVar24 = SQRT(fVar24);
				}
				if (fVar24 <= 1e-05) {
					pUVar23 = typeof(Vector3).static_fields;
					auStack_128._8_4_ = (pUVar23.zeroVector).z;
				}
				else {
					auStack_128._8_4_ = fVar33 / fVar24;
					auVar11._4_4_ = fVar24;
					auVar11._0_4_ = fVar24;
					auVar11._8_4_ = uVar26;
					auVar11._12_4_ = uVar26;
					auVar34 = divps(auVar30, auVar11);
					auStack_128._0_4_ = auVar34._0_4_;
					auStack_128._4_4_ = auVar34._4_4_;
					pUVar23 = (UnityEngine_Vector3_StaticFields)auStack_128;
				}
				auStack_128._0_4_ = (pUVar23.zeroVector).x;
				auStack_128._4_4_ = (pUVar23.zeroVector).y;
				pUVar23 = typeof(Vector3).static_fields;
				auStack_128._16_4_ = (pUVar23.upVector).x;
				auStack_128._20_4_ = (pUVar23.upVector).y;
				fStack_110 = (pUVar23.upVector).z;
				pUVar23 = (UnityEngine_Vector3_StaticFields)(auStack_128 + 0x10);
				UVar38 = Quaternion.Internal_LookRotation((Vector3)auStack_128, (Vector3)pUVar23);
				pSVar19 = (Object[])new object[3];
				auStack_128._0_4_ = 0.0;
				auStack_128._4_4_ = 0.0;
				auStack_128._8_4_ = 0.0;
				auStack_128._12_4_ = 1.0;
				pIVar20 = (object)auStack_128;
				if (pSVar19 == null) goto label_05c0d783;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) goto label_05c0d78d;
				if ((int)pSVar19.Length == 0) goto label_05c0d788;
				pSVar19[0] = pIVar20;
				fStack_bc = 1.4013e-45;
				pIVar20 = (object)fStack_bc;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) goto label_05c0d78d;
				if ((pSVar19.Length & 0xfffffffe) == 0) goto label_05c0d788;
				pSVar19[1] = pIVar20;
				fStack_c0 = (float)CONCAT31(fStack_c0._1_3_, 1);
				pIVar20 = (object)fStack_c0;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) goto label_05c0d78d;
				if ((uint)pSVar19.Length < 3) goto label_05c0d788;
				fVar24 = (float)auStack_f8._0_4_ * 0.8;
				fVar28 = (float)auStack_f8._4_4_ * 0.8;
				uStack_138._0_4_ = UVar39.x;
				uStack_138._4_4_ = UVar39.y;
				UVar40.z = UVar39.z + (float)auStack_108._0_4_ * 0.8;
				pSVar19[2] = pIVar20;
				UVar40.x = (float)uStack_138 + fVar24;
				UVar40.y = uStack_138._4_4_ + fVar28;
				EffectSpawner.Spawn(pSVar18, UVar40, UVar38, 4.0, true, pSVar19);
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.Boom2;
				UVar39 = pUVar17.position;
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar40 = pUVar17.up;
				fStack_f0 = (float)extraout_XMM0_Dc_05;
				auStack_f8 = (byte[])UVar40._0_8_;
				fStack_ec = (float)extraout_XMM0_Dd_05;
				auStack_108._0_4_ = UVar40.z;
				UVar40 = __this_00.GetAimPoint();
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar41 = pUVar17.position;
				fVar24 = UVar41.x;
				fVar28 = UVar41.y;
				fVar32 = extraout_XMM0_Dc_07;
				fVar29 = extraout_XMM0_Dd_07;
				fVar33 = UVar41.z;
				if (g_data_0753e72d == false) {
					auStack_d8._0_4_ = UVar41.z;
					fStack_e0 = extraout_XMM0_Dc_07;
					auStack_e8 = (byte[])UVar41._0_8_;
					fStack_dc = extraout_XMM0_Dd_07;
					g_data_0753e72d = true;
					fVar24 = (float)auStack_e8._0_4_;
					fVar28 = (float)auStack_e8._4_4_;
					fVar32 = fStack_e0;
					fVar29 = fStack_dc;
					fVar33 = (float)auStack_d8._0_4_;
				}
				auStack_128._16_4_ = 0.0;
				auStack_128._20_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) {
					auStack_d8._0_4_ = fVar33;
					auStack_e8._4_4_ = fVar28;
					auStack_e8._0_4_ = fVar24;
					fStack_e0 = fVar32;
					fStack_dc = fVar29;
					Il2CppMethodInitialized_0753e729 = true;
					fVar24 = (float)auStack_e8._0_4_;
					fVar28 = (float)auStack_e8._4_4_;
					fVar32 = fStack_e0;
					fVar29 = fStack_dc;
					fVar33 = (float)auStack_d8._0_4_;
				}
				auStack_148._0_4_ = UVar40.x;
				auStack_148._4_4_ = UVar40.y;
				auVar35._0_4_ = (float)auStack_148._0_4_ - fVar24;
				auVar35._4_4_ = (float)auStack_148._4_4_ - fVar28;
				auVar35._8_4_ = extraout_XMM0_Dc_06 - fVar32;
				auVar35._12_4_ = extraout_XMM0_Dd_06 - fVar29;
				fVar33 = UVar40.z - fVar33;
				uVar26 = 0;
				fVar24 = fVar33 * fVar33 + auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_;
				if (fVar24 < 0.0) {
					fVar24 = sqrtf(fVar24);
					uVar26 = extraout_XMM0_Db_01;
				}
				else {
					fVar24 = SQRT(fVar24);
				}
				fVar28 = (float)auStack_f8._0_4_ * 0.8;
				fVar32 = (float)auStack_f8._4_4_ * 0.8;
				if (fVar24 <= 1e-05) {
					pUVar23 = typeof(Vector3).static_fields;
					fStack_110 = (pUVar23.zeroVector).z;
				}
				else {
					fStack_110 = fVar33 / fVar24;
					auVar12._4_4_ = fVar24;
					auVar12._0_4_ = fVar24;
					auVar12._8_4_ = uVar26;
					auVar12._12_4_ = uVar26;
					auVar34 = divps(auVar35, auVar12);
					auStack_128._16_4_ = auVar34._0_4_;
					auStack_128._20_4_ = auVar34._4_4_;
				}
				uStack_138._0_4_ = UVar39.x;
				uStack_138._4_4_ = UVar39.y;
				UVar41.z = UVar39.z + (float)auStack_108._0_4_ * 0.8;
				auStack_128._16_4_ = (pUVar23.zeroVector).x;
				auStack_128._20_4_ = (pUVar23.zeroVector).y;
				pUVar23 = typeof(Vector3).static_fields;
				UStack_80.x = (pUVar23.upVector).x;
				UStack_80.y = (pUVar23.upVector).y;
				UStack_80.z = (pUVar23.upVector).z;
				UVar38 = Quaternion.Internal_LookRotation((Vector3)(auStack_128 + 0x10), ref UStack_80);
				UVar41.x = (float)uStack_138 + fVar28;
				UVar41.y = uStack_138._4_4_ + fVar32;
				EffectSpawner.Spawn(pSVar18, UVar41, UVar38, 4.0, true, null);
				pCVar7 = __this_00.HumanCache;
				if ((pCVar7 == null) ||(pCVar8 = pCVar7.BladeHitLeft, pCVar8 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.Blood1;
				pUVar17 = pCVar8.transform;
				if (pUVar17 == null) goto label_05c0d783;
				UVar39 = pUVar17.position;
				auStack_128._16_4_ = 4.712389;
				auStack_128._20_4_ = 0.0;
				fStack_110 = 0.0;
				UVar38 = Quaternion.Internal_FromEulerRad((Vector3)(auStack_128 + 0x10));
				uVar26 = 0;
				EffectSpawner.Spawn(pSVar18, UVar39, UVar38, 1.0, true, null);
				pSVar18 = HumanSounds.GetRandomTSLaunch();
				__this_00.PlaySound(pSVar18);
				__this_00.SpecialActionState(0.5);
				pCVar22 = __this_00.Weapon;
				if (pCVar22 == null) goto label_05c0d704;
			}
			bVar5 = (typeof(APGWeapon)._2).typeHierarchyDepth;
			if ((bVar5 <= (pCVar22.klass._2).typeHierarchyDepth) &&((pCVar22.klass._2).typeHierarchy[(ulong)bVar5 - 1] == typeof(APGWeapon))) {
				UVar39 = __this_00.GetAimPoint();
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar40 = pUVar17.position;
				auVar31._0_8_ = UVar40._0_8_;
				auVar31._8_4_ = extraout_XMM0_Dc_09;
				auVar31._12_4_ = extraout_XMM0_Dd_09;
				if (g_data_0753e72d == false) {
					auStack_108 = auVar31;
					g_data_0753e72d = true;
					auVar31 = auStack_108;
				}
				auStack_148._0_4_ = UVar39.x;
				auStack_148._4_4_ = UVar39.y;
				fVar24 = auVar31._4_4_;
				if (Il2CppMethodInitialized_0753e729 == false) {
					auStack_108 = auVar31;
					Il2CppMethodInitialized_0753e729 = true;
					fVar24 = (float)auStack_108._4_4_;
				}
				fVar28 = UVar39.z - UVar40.z;
				fVar32 = (float)auStack_148._0_4_ - auVar31._0_4_;
				fVar24 = ((float)auStack_148._4_4_ - fVar24) * ((float)auStack_148._4_4_ - fVar24) + fVar32 * fVar32 + fVar28 * fVar28;
				if (fVar24 < 0.0) {
					sqrtf(fVar24);
				}
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar40 = pUVar17.position;
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				UVar41 = pUVar17.up;
				fVar33 = UVar41.z * 0.8;
				fVar24 = UVar41.x * 0.8;
				fVar28 = UVar41.y * 0.8;
				fVar32 = extraout_XMM0_Dc_11 * 0.0;
				fVar29 = extraout_XMM0_Dd_11 * 0.0;
				if (g_data_0753e72d == false) {
					auStack_108._0_4_ = fVar33;
					auStack_f8._4_4_ = fVar28;
					auStack_f8._0_4_ = fVar24;
					fStack_f0 = extraout_XMM0_Dc_11 * 0.0;
					fStack_ec = extraout_XMM0_Dd_11 * 0.0;
					g_data_0753e72d = true;
					fVar24 = (float)auStack_f8._0_4_;
					fVar28 = (float)auStack_f8._4_4_;
					fVar32 = fStack_f0;
					fVar29 = fStack_ec;
					fVar33 = (float)auStack_108._0_4_;
				}
				uStack_158._0_4_ = UVar40.x;
				uStack_158._4_4_ = UVar40.y;
				uStack_158._0_4_ = (float)uStack_158 + fVar24;
				uStack_158._4_4_ = uStack_158._4_4_ + fVar28;
				fVar33 = UVar40.z + fVar33;
				auStack_128._0_4_ = 0.0;
				auStack_128._4_4_ = 0.0;
				auStack_148._0_4_ = (float)auStack_148._0_4_ - (float)uStack_158;
				auStack_148._4_4_ = (float)auStack_148._4_4_ - uStack_158._4_4_;
				fVar24 = UVar39.z - fVar33;
				fStack_140 = extraout_XMM0_Dc_08 - (extraout_XMM0_Dc_10 + fVar32);
				fStack_13c = extraout_XMM0_Dd_08 - (extraout_XMM0_Dd_10 + fVar29);
				fVar28 = fVar24 * fVar24 +(float)auStack_148._4_4_ * (float)auStack_148._4_4_ +(float)auStack_148._0_4_ * (float)auStack_148._0_4_;
				if (fVar28 < 0.0) {
					fVar28 = sqrtf(fVar28);
					uVar26 = extraout_XMM0_Db_02;
				}
				else {
					fVar28 = SQRT(fVar28);
				}
				if (fVar28 <= 1e-05) {
					pUVar23 = typeof(Vector3).static_fields;
					fVar24 = (pUVar23.zeroVector).z;
				}
				else {
					fVar24 = fVar24 / fVar28;
					auVar13._4_4_ = fVar28;
					auVar13._0_4_ = fVar28;
					auVar13._8_4_ = uVar26;
					auVar13._12_4_ = uVar26;
					auVar34 = divps(_auStack_148, auVar13);
					auStack_128._0_4_ = auVar34._0_4_;
					auStack_128._4_4_ = auVar34._4_4_;
					pUVar23 = (UnityEngine_Vector3_StaticFields)auStack_128;
				}
				pCVar7 = __this_00.HumanCache;
				if (((pCVar7 == null) ||(pCVar8 = pCVar7.APGHit, pCVar8 == null)) ||(__this_01 = (CapsuleCollider)pCVar8._collider, __this_01 == null)) goto label_05c0d783;
				bVar5 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar5) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(CapsuleCollider))) {
					throw new InvalidCastException();
				}
				uVar1 = (pUVar23.zeroVector).x;
				uVar3 = (pUVar23.zeroVector).y;
				__this_01.radius = 0.1;
				auStack_f8._0_4_ = __this_01.height;
				auStack_f8._4_4_ = extraout_XMM0_Db_03;
				fStack_f0 = extraout_XMM0_Dc_12;
				fStack_ec = (float)extraout_XMM0_Dd_12;
				fVar28 = __this_01.radius;
				auStack_108._0_4_ = fVar28;
				fStack_68 = __this_01.height;
				pUVar9 = __this_00.Cache;
				if ((pUVar9 == null) ||(pUVar17 = pUVar9.Transform, pUVar17 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.APGTrail;
				UVar39 = pUVar17.position;
				pUVar9 = __this_00.Cache;
				if (pUVar9 == null) goto label_05c0d783;
				auStack_e8._0_4_ = UVar39.z;
				fStack_d0 = (float)extraout_XMM0_Dc_13;
				auStack_d8 = (byte[])UVar39._0_8_;
				fStack_cc = (float)extraout_XMM0_Dd_13;
				pUVar17 = pUVar9.Transform;
				if (pUVar17 == null) goto label_05c0d783;
				UVar39 = pUVar17.up;
				fStack_70 = UVar39.z;
				fStack_40 = (float)extraout_XMM0_Dc_14;
				auStack_48 = UVar39._0_8_;
				fStack_3c = (float)extraout_XMM0_Dd_14;
				UVar39 = __this_00.GetAimPoint();
				pUVar9 = __this_00.Cache;
				if (pUVar9 == null) goto label_05c0d783;
				uStack_a0._0_4_ = (float)extraout_XMM0_Dc_15;
				auStack_a8 = (byte[])UVar39._0_8_;
				uStack_a0._4_4_ = (float)extraout_XMM0_Dd_15;
				auStack_98._0_4_ = UVar39.z;
				pUVar17 = pUVar9.Transform;
				if (pUVar17 == null) goto label_05c0d783;
				UVar39 = pUVar17.position;
				fVar28 = UVar39.x;
				fVar32 = UVar39.y;
				fVar29 = extraout_XMM0_Dc_16;
				fVar27 = extraout_XMM0_Dd_16;
				fVar25 = UVar39.z;
				if (g_data_0753e72d == false) {
					fStack_50 = extraout_XMM0_Dc_16;
					auStack_58 = (byte[])UVar39._0_8_;
					fStack_4c = extraout_XMM0_Dd_16;
					fStack_b8 = UVar39.z;
					g_data_0753e72d = true;
					fVar28 = (float)auStack_58._0_4_;
					fVar32 = (float)auStack_58._4_4_;
					fVar29 = fStack_50;
					fVar27 = fStack_4c;
					fVar25 = fStack_b8;
				}
				auStack_128._0_4_ = 0.0;
				auStack_128._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) {
					auStack_58._4_4_ = fVar32;
					auStack_58._0_4_ = fVar28;
					fStack_50 = fVar29;
					fStack_4c = fVar27;
					fStack_b8 = fVar25;
					Il2CppMethodInitialized_0753e729 = true;
					fVar28 = (float)auStack_58._0_4_;
					fVar32 = (float)auStack_58._4_4_;
					fVar29 = fStack_50;
					fVar27 = fStack_4c;
					fVar25 = fStack_b8;
				}
				auVar36._0_4_ = (float)auStack_a8._0_4_ - fVar28;
				auVar36._4_4_ = (float)auStack_a8._4_4_ - fVar32;
				auVar36._8_4_ = (float)uStack_a0 - fVar29;
				auVar36._12_4_ = uStack_a0._4_4_ - fVar27;
				fVar32 = fStack_68;
				fVar29 = fStack_68;
				fVar27 = fStack_68;
				fVar37 = fStack_68;
				fVar28 = (float)auStack_98._0_4_ - fVar25;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					auStack_98._0_4_ = (float)auStack_98._0_4_ - fVar25;
					fStack_b8 = fStack_68;
					fStack_b4 = fStack_68;
					fStack_b0 = fStack_68;
					fStack_ac = fStack_68;
					_auStack_a8 = auVar36;
					auVar36 = _auStack_a8;
					fVar32 = fStack_b8;
					fVar29 = fStack_b4;
					fVar27 = fStack_b0;
					fVar37 = fStack_ac;
					fVar28 = (float)auStack_98._0_4_;
				}
				uVar26 = 0;
				fVar25 = fVar28 * fVar28 + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
				if (fVar25 < 0.0) {
					auStack_98._0_4_ = fVar28;
					fStack_b8 = fVar32 * (float)uVar1;
					fStack_b4 = fVar29 * (float)uVar3;
					fStack_b0 = fVar27 * 0.0;
					fStack_ac = fVar37 * 0.0;
					_auStack_a8 = auVar36;
					fStack_68 = fStack_68 * fVar24;
					fVar25 = sqrtf(fVar25);
					uVar26 = extraout_XMM0_Db_04;
					fVar27 = fStack_68;
					auVar36 = _auStack_a8;
					fVar32 = fStack_b8;
					fVar29 = fStack_b4;
					fVar28 = (float)auStack_98._0_4_;
				}
				else {
					fVar25 = SQRT(fVar25);
					fVar27 = fStack_68 * fVar24;
					fVar32 = fVar32 * (float)uVar1;
					fVar29 = fVar29 * (float)uVar3;
				}
				if (fVar25 <= 1e-05) {
					pUVar23 = typeof(Vector3).static_fields;
					auStack_128._8_4_ = (pUVar23.zeroVector).z;
				}
				else {
					auStack_128._8_4_ = fVar28 / fVar25;
					auVar14._4_4_ = fVar25;
					auVar14._0_4_ = fVar25;
					auVar14._8_4_ = uVar26;
					auVar14._12_4_ = uVar26;
					auVar34 = divps(auVar36, auVar14);
					auStack_128._0_4_ = auVar34._0_4_;
					auStack_128._4_4_ = auVar34._4_4_;
					pUVar23 = (UnityEngine_Vector3_StaticFields)auStack_128;
				}
				auStack_f8._0_4_ = (float)auStack_f8._0_4_ * 1.2;
				fVar28 = ((float)uStack_158 + (float)uStack_158 + fVar32) * 0.5;
				fVar32 = (uStack_158._4_4_ + uStack_158._4_4_ + fVar29) * 0.5;
				fVar29 = (fVar33 + fVar33 + fVar27) * 0.5;
				auStack_128._0_4_ = (pUVar23.zeroVector).x;
				auStack_128._4_4_ = (pUVar23.zeroVector).y;
				pUVar23 = typeof(Vector3).static_fields;
				auStack_128._16_4_ = (pUVar23.upVector).x;
				auStack_128._20_4_ = (pUVar23.upVector).y;
				fStack_110 = (pUVar23.upVector).z;
				auVar34 = ZEXT416((uint)fStack_110);
				UVar38 = Quaternion.Internal_LookRotation((Vector3)auStack_128, (Vector3)(auStack_128 + 0x10));
				auStack_98._8_4_ = extraout_XMM0_Dc_17;
				auStack_98._0_8_ = UVar38._0_8_;
				auStack_98._12_4_ = extraout_XMM0_Dd_17;
				uStack_a0 = auVar34._8_8_;
				auStack_a8 = (byte[])UVar38._8_8_;
				pSVar19 = (Object[])new object[5];
				fVar33 = (float)uVar1 * (float)auStack_f8._0_4_ * 0.5;
				fVar27 = (float)uVar3 * (float)auStack_f8._0_4_ * 0.5;
				fVar24 = fVar24 * (float)auStack_f8._0_4_ * 0.5;
				fStack_110 = fVar24 + fVar29;
				auStack_128._20_4_ = fVar27 + fVar32;
				auStack_128._16_4_ = fVar33 + fVar28;
				pIVar20 = (object)(auStack_128 + 0x10);
				if (pSVar19 == null) goto label_05c0d783;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) {
	label_05c0d78d: ;
					pIVar20 = new ArrayTypeMismatchException();
					throw pIVar20;
				}
				if ((int)pSVar19.Length == 0) {
	label_05c0d788: ;
					throw new IndexOutOfRangeException();
				}
				pSVar19[0] = pIVar20;
				UStack_80.z = fVar29 - fVar24;
				UStack_80.y = fVar32 - fVar27;
				UStack_80.x = fVar28 - fVar33;
				pIVar20 = (object)UStack_80;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) goto label_05c0d78d;
				if ((pSVar19.Length & 0xfffffffe) == 0) goto label_05c0d788;
				auStack_108._0_4_ = (float)auStack_108._0_4_ * 4.0;
				pSVar19[1] = pIVar20;
				fStack_bc = (float)auStack_108._0_4_;
				pIVar20 = (object)fStack_bc;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) goto label_05c0d78d;
				if ((uint)pSVar19.Length < 3) goto label_05c0d788;
				pSVar19[2] = pIVar20;
				fStack_c0 = (float)auStack_108._0_4_;
				pIVar20 = (object)fStack_c0;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) goto label_05c0d78d;
				if ((pSVar19.Length & 0xfffffffc) == 0) goto label_05c0d788;
				pSVar19[3] = pIVar20;
				uStack_6c = 0x3e800000;
				pIVar20 = (object)uStack_6c;
				if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((pSVar19.obj).klass)._1).element_class), pIVar21 == null)) goto label_05c0d78d;
				if ((uint)pSVar19.Length < 5) goto label_05c0d788;
				auStack_d8._4_4_ = (float)auStack_d8._4_4_ + (float)auStack_48._4_4_ * 0.8;
				auStack_d8._0_4_ = (float)auStack_d8._0_4_ + (float)auStack_48._0_4_ * 0.8;
				fStack_d0 = fStack_d0 + fStack_40 * 0.0;
				fStack_cc = fStack_cc + fStack_3c * 0.0;
				auStack_e8._0_4_ = (float)auStack_e8._0_4_ + fStack_70 * 0.8;
				pSVar19[4] = pIVar20;
				UVar38.z = (float)auStack_a8._0_4_;
				UVar38.w = (float)auStack_a8._4_4_;
				UVar38.x = (float)auStack_98._0_4_;
				UVar38.y = (float)auStack_98._4_4_;
				position.z = (float)auStack_e8._0_4_;
				position.x = (float)auStack_d8._0_4_;
				position.y = (float)auStack_d8._4_4_;
				EffectSpawner.Spawn(pSVar18, position, UVar38, 4.0, true, pSVar19);
				pCVar7 = __this_00.HumanCache;
				if ((pCVar7 == null) ||(pCVar8 = pCVar7.BladeHitLeft, pCVar8 == null)) goto label_05c0d783;
				pSVar18 = EffectPrefabs.Blood1;
				pUVar17 = pCVar8.transform;
				if (pUVar17 == null) goto label_05c0d783;
				UVar39 = pUVar17.position;
				auStack_128._0_4_ = 4.712389;
				auStack_128._4_4_ = 0.0;
				auStack_128._8_4_ = 0.0;
				UVar38 = Quaternion.Internal_FromEulerRad((Vector3)auStack_128);
				EffectSpawner.Spawn(pSVar18, UVar39, UVar38, 1.0, true, null);
				pSVar18 = HumanSounds.GetRandomAPGShot();
				__this_00.PlaySound(pSVar18);
				__this_00.SpecialActionState(0.5);
			}
		}
	label_05c0d704: ;
		pUVar9 = __this_00.Cache;
		if (pUVar9 != null) {
			__this_02 = pUVar9.Rigidbody;
			if (__this_02 != null) {
				pUVar23 = typeof(Vector3).static_fields;
				value.z = (pUVar23.upVector).z * 30.0;
				uVar2 = (pUVar23.upVector).x;
				uVar4 = (pUVar23.upVector).y;
				value.x = (float)uVar2 * 30.0;
				value.y = (float)uVar4 * 30.0;
				__this_02.linearVelocity = value;
				return;
			}
		}
	label_05c0d783: ;
		throw new NullReferenceException();
	}
}
