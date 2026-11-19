// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AHSSTwinShot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AHSSTwinShot.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/AHSSTwinShotSpecial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D2")]
internal class AHSSTwinShot : ExtendedUseable
{
	[Token(Token = "0x6004283")]
	[Address(RVA = "0x5B07F00", Offset = "0x5B06F00", VA = "0x5B07F00")]
	public AHSSTwinShot(BaseCharacter owner)
	{
		// Lifted from source/cpp/Characters/AHSSTwinShot.c (Characters.AHSSTwinShot$$.ctor): clean
		base(owner);
		this.Cooldown = 1.0;
		return;
	}

	[Token(Token = "0x6004284")]
	[Address(RVA = "0x5B07F20", Offset = "0x5B06F20", VA = "0x5B07F20", Slot = "15")]
	protected override float GetActiveTime()
	{
		// Lifted from source/cpp/Characters/AHSSTwinShot.c (Characters.AHSSTwinShot$$GetActiveTime): 2 lines keep C-only constructs
		uint uVar1;
		code *vtableDispatch;
		JSONNode pSVar2;
		long plVar3;
		float fVar4;

		if (Il2CppMethodInitialized_075476a8 == false) {
			Il2CppMethodInitialized_075476a8 = true;
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

	[Token(Token = "0x6004285")]
	[Address(RVA = "0x5B08010", Offset = "0x5B07010", VA = "0x5B08010", Slot = "6")]
	public override bool CanUse()
	{
		// Lifted from source/cpp/Characters/AHSSTwinShot.c (Characters.AHSSTwinShot$$CanUse): 2 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseCharacter pCVar3;
		PhotonView pPVar4;
		bool bVar5;

		pCVar3 = this._owner;
		if (pCVar3 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar3.klass._2).typeHierarchyDepth < bVar1) ||((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		pPVar4 = (*(ulong)((sbyte)pCVar3 + 0x120));
		if (pPVar4 != null) {
			bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pPVar4.klass._2).typeHierarchyDepth) &&((pPVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
				bVar5 = this.CanUse();
				if (bVar5) {
					iVar2 = pPVar4.Synchronization;
					return iVar2 == -1 || 1 < iVar2;
				}
				return false;
			}
		}
		return false;
	}

	[Token(Token = "0x6004286")]
	[Address(RVA = "0x5B080F0", Offset = "0x5B070F0", VA = "0x5B080F0", Slot = "8")]
	protected override void OnUse()
	{
		// Lifted from source/cpp/Characters/AHSSTwinShot.c (Characters.AHSSTwinShot$$OnUse): 2 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseCharacter pCVar3;
		PhotonView pPVar4;
		int iVar5;

		this.OnUse();
		pCVar3 = this._owner;
		if (pCVar3 == null) {
	label_05c081ae: ;
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Human)._2).typeHierarchyDepth;
		if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
			pPVar4 = (*(ulong)((sbyte)pCVar3 + 0x120));
			if (pPVar4 == null) goto label_05c081ae;
			bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pPVar4.klass._2).typeHierarchyDepth) &&((pPVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
				iVar2 = pPVar4.Synchronization;
				if (-1 < iVar2) {
					iVar5 = 2;
					if (2 < iVar2) {
						iVar5 = iVar2;
					}
					pPVar4.Synchronization = iVar5 + -2;
				}
				return;
			}
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004287")]
	[Address(RVA = "0x5B081C0", Offset = "0x5B071C0", VA = "0x5B081C0", Slot = "10")]
	protected override void Deactivate()
	{
		// Lifted from source/cpp/Characters/AHSSTwinShot.c (Characters.AHSSTwinShot$$Deactivate): 145 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		byte bVar5;
		uint uVar6;
		Human __this_00;
		Human pCVar7;
		BaseComponentCache pUVar8;
		HumanComponentCache pCVar9;
		BaseHitbox pCVar10;
		Rigidbody __this_01;
		HUDBottomHandler __this_02;
		byte[] auVar11 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar12;
		long lVar13;
		String pSVar14;
		JSONNode pSVar15;
		JSONNode pSVar16;
		Transform pUVar17;
		BaseMenu __this_03;
		UnityEngine_Vector3_StaticFields pUVar18;
		float fVar19;
		float fVar20;
		float extraout_XMM0_Db;
		float extraout_XMM0_Db_00;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		float extraout_XMM0_Dc_03;
		float fVar21;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		float extraout_XMM0_Dd_03;
		float fVar22;
		float in_XMM1_Db;
		uint uVar27;
		byte[] auVar23 = new byte[16];
		byte[] auVar26 = new byte[12];
		byte[] auVar24 = new byte[16];
		byte[] auVar25 = new byte[16];
		uint uVar29;
		float fVar30;
		byte[] auVar31 = new byte[16];
		Quaternion UVar32;
		Quaternion UVar33;
		Vector3 UVar34;
		Vector3 euler;
		Vector3 value;
		Vector3 force;
		byte[] local_b8 = new byte[16];
		Quaternion local_a8;
		byte[] local_98 = new byte[8];
		Vector3 UStack_90;
		float fStack_84;
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		byte[] local_58 = new byte[8];
		byte[] local_48 = new byte[8];
		float fStack_40;
		float fStack_3c;
		Quaternion local_38;

		local_38 = (Quaternion)ZEXT816(0);
		__this_00 = (Human)this._owner;
		if (__this_00 == null) goto label_05c08c1e;
		pCVar7 = __this_00.klass;
		bVar5 = (typeof(Human)._2).typeHierarchyDepth;
		if (((pCVar7._2).typeHierarchyDepth < bVar5) ||((pCVar7._2).typeHierarchy[(ulong)bVar5 - 1] != typeof(Human))) {
			throw new InvalidCastException();
		}
		UVar34 = __this_00.GetAimPoint();
		pUVar8 = __this_00.Cache;
		if (pUVar8 == null) goto label_05c08c1e;
		fStack_60 = (float)extraout_XMM0_Dc;
		local_68 = (byte[])UVar34._0_8_;
		fStack_5c = (float)extraout_XMM0_Dd;
		pUVar17 = pUVar8.Transform;
		UStack_90.z = UVar34.z;
		fStack_84 = in_XMM1_Db;
		if (pUVar17 == null) goto label_05c08c1e;
		UVar34 = pUVar17.position;
		fVar19 = UVar34.z;
		fVar20 = UVar34.x;
		fVar30 = UVar34.y;
		if (g_data_0753e72d == false) {
			local_98._0_4_ = fVar19;
			local_a8.z = extraout_XMM0_Dc_00;
			local_a8._0_8_ = UVar34._0_8_;
			local_a8.w = extraout_XMM0_Dd_00;
			g_data_0753e72d = true;
			local_b8._0_4_ = 0.0;
			local_b8._4_4_ = 0.0;
			fVar20 = local_a8.x;
			fVar30 = local_a8.y;
			fVar21 = local_a8.z;
			fVar22 = local_a8.w;
			fVar19 = (float)local_98._0_4_;
		}
		else {
			local_b8._0_4_ = 0.0;
			local_b8._4_4_ = 0.0;
			fVar21 = extraout_XMM0_Dc_00;
			fVar22 = extraout_XMM0_Dd_00;
		}
		local_b8._0_8_ = 0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_b8._0_8_ = 0;
			local_98._0_4_ = fVar19;
			local_a8.y = fVar30;
			local_a8.x = fVar20;
			local_a8.z = fVar21;
			local_a8.w = fVar22;
			Il2CppMethodInitialized_0753e729 = true;
			fVar20 = local_a8.x;
			fVar30 = local_a8.y;
			fVar21 = local_a8.z;
			fVar22 = local_a8.w;
			fVar19 = (float)local_98._0_4_;
		}
		pUVar12 = (UnityEngine_Vector3_StaticFields)local_b8;
		pUVar18 = (UnityEngine_Vector3_StaticFields)local_b8;
		UVar32.x = (float)local_68._0_4_ - fVar20;
		UVar32.y = (float)local_68._4_4_ - fVar30;
		UVar32.z = fStack_60 - fVar21;
		UVar32.w = fStack_5c - fVar22;
		fVar20 = UStack_90.z - fVar19;
		fVar30 = fStack_84;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_98._0_4_ = UStack_90.z - fVar19;
			local_a8 = UVar32;
			fVar30 = 0.0;
			fVar20 = (float)local_98._0_4_;
			UVar32 = local_a8;
		}
		fVar19 = fVar20 * fVar20 + UVar32.y * UVar32.y + UVar32.x * UVar32.x;
		if (fVar19 < 0.0) {
			local_98._0_4_ = fVar20;
			local_a8 = UVar32;
			fVar19 = sqrtf(fVar19);
			fVar30 = extraout_XMM0_Db;
			fVar20 = (float)local_98._0_4_;
			UVar32 = local_a8;
			if (1e-05 < fVar19) goto label_05c083ce;
	label_05c08392: ;
			pUVar12 = typeof(Vector3).static_fields;
			fVar20 = (pUVar12.zeroVector).z;
		}
		else {
			fVar19 = SQRT(fVar19);
			if (fVar19 <= 1e-05) goto label_05c08392;
	label_05c083ce: ;
			fVar20 = fVar20 / fVar19;
			auVar25._4_4_ = fVar19;
			auVar25._0_4_ = fVar19;
			auVar25._8_4_ = fVar30;
			auVar25._12_4_ = fVar30;
			auVar25 = divps((byte[])UVar32, auVar25);
			local_b8._0_8_ = auVar25._0_8_;
		}
		pUVar8 = __this_00.Cache;
		if (pUVar8 == null) goto label_05c08c1e;
		local_98._0_4_ = fVar20;
		pUVar17 = pUVar8.Transform;
		if (pUVar17 == null) goto label_05c08c1e;
		uVar1 = (pUVar12.zeroVector).x;
		uVar3 = (pUVar12.zeroVector).y;
		local_a8.y = (float)uVar3;
		local_a8.x = (float)uVar1;
		local_a8.z = 0.0;
		local_a8.w = 0.0;
		pUVar17.forward;
		uVar6 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		if (__this_00.Grounded == false) {
			if (uVar6 == 0) {
			}
			lVar13 = 0x108;
		}
		else {
			if (uVar6 == 0) {
			}
			lVar13 = 0xf0;
		}
		pSVar14 = *(String*)((long)&HumanAnimations.HorseMount + lVar13);
		__this_00.State = 1;
		__this_00.AttackAnimation = pSVar14;
		__this_00.CrossFade(pSVar14, 0.05, 0.0);
		local_b8._0_4_ = local_a8.x;
		local_b8._4_4_ = local_a8.y;
		local_b8._8_4_ = local_98._0_4_;
		pUVar12 = typeof(Vector3).static_fields;
		local_78._0_4_ = (pUVar12.upVector).x;
		local_78._4_4_ = (pUVar12.upVector).y;
		local_78._8_4_ = (pUVar12.upVector).z;
		auVar25 = ZEXT416((uint)local_78._8_4_);
		local_38 = Quaternion.Internal_LookRotation((Vector3)local_b8, (Vector3)local_78) ;
		auVar23._8_8_ = auVar25._8_8_;
		auVar23._0_8_ = local_38._8_8_;
		UVar34 = Quaternion.Internal_ToEulerRad(ref local_38);
		auVar26 = auVar23._4_12_;
		euler.x = UVar34.x * 57.29578;
		euler.y = UVar34.y * 57.29578;
		euler.z = UVar34.z * 57.29578;
		UVar34 = Quaternion.Internal_MakePositive(euler);
		auVar24._12_4_ = 0;
		auVar24._0_12_ = auVar26;
		auVar24 = auVar24 << 0x20;
		__this_00.TargetAngle = UVar34.y;
		local_b8._0_8_ = (ulong)(uint)(UVar34.y * 0.017453292) << 0x20;
		local_b8._8_8_ = (ulong)(uint)local_b8._12_4_ << 0x20;
		UVar32 = (Quaternion)Quaternion.Internal_FromEulerRad((Vector3)local_b8);
		__this_00._targetRotation = UVar32;
		pUVar8 = __this_00.Cache;
		if ((pUVar8 == null) ||(pUVar17 = pUVar8.Transform, pUVar17 == null)) goto label_05c08c1e;
		UVar33 = pUVar17.rotation;
		local_a8.z = (float)extraout_XMM0_Dc_01;
		local_a8._0_8_ = UVar33._0_8_;
		local_a8.w = (float)extraout_XMM0_Dd_01;
		local_58 = (byte[])UVar33._8_8_;
		fVar20 = Time.deltaTime;
		local_b8._0_4_ = local_a8.x;
		local_b8._4_4_ = local_a8.y;
		local_b8._8_8_ = local_58;
		local_78._0_8_ = local_98;
		local_78._8_4_ = UStack_90.x;
		local_78._12_4_ = UStack_90.y;
		UVar33 = Quaternion.Internal_Lerp((Quaternion)local_b8, (Quaternion)local_78, fVar20 * 30.0);
		pUVar17.rotation = UVar33;
		pUVar8 = __this_00.Cache;
		if ((pUVar8 == null) ||(pUVar17 = pUVar8.Transform, pUVar17 == null)) goto label_05c08c1e;
		UVar34 = pUVar17.position;
		pUVar8 = __this_00.Cache;
		if (pUVar8 == null) goto label_05c08c1e;
		local_a8.x = UVar34.z;
		UStack_90.x = (float)extraout_XMM0_Dc_02;
		local_98._0_4_ = UVar34.x;
		local_98._4_4_ = UVar34.y;
		UStack_90.y = extraout_XMM0_Dd_02;
		pUVar17 = pUVar8.Transform;
		if (pUVar17 == null) goto label_05c08c1e;
		UVar34 = pUVar17.up;
		fVar20 = UVar34.z * 0.8;
		fVar30 = UVar34.x * 0.8;
		fVar19 = UVar34.y * 0.8;
		fVar21 = extraout_XMM0_Dc_03 * 0.0;
		fVar22 = extraout_XMM0_Dd_03 * 0.0;
		if (g_data_0753e72d == false) {
			local_58._0_4_ = fVar20;
			local_48._4_4_ = fVar19;
			local_48._0_4_ = fVar30;
			fStack_40 = extraout_XMM0_Dc_03 * 0.0;
			fStack_3c = extraout_XMM0_Dd_03 * 0.0;
			g_data_0753e72d = true;
			fVar30 = (float)local_48._0_4_;
			fVar19 = (float)local_48._4_4_;
			fVar21 = fStack_40;
			fVar22 = fStack_3c;
			fVar20 = (float)local_58._0_4_;
		}
		local_98._0_4_ = (float)local_98._0_4_ + fVar30;
		local_98._4_4_ = (float)local_98._4_4_ + fVar19;
		UStack_90.x = UStack_90.x + fVar21;
		UStack_90.y = UStack_90.y + fVar22;
		fVar20 = local_a8.x + fVar20;
		local_b8._0_4_ = 0.0;
		local_b8._4_4_ = 0.0;
		local_a8.x = fVar20;
		fVar30 = (float)local_98._0_4_;
		fVar19 = (float)local_98._4_4_;
		fVar21 = UStack_90.x;
		fVar22 = UStack_90.y;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			fVar30 = (float)local_98._0_4_;
			fVar19 = (float)local_98._4_4_;
			fVar21 = UStack_90.x;
			fVar22 = UStack_90.y;
			fVar20 = local_a8.x;
		}
		local_68._0_4_ = (float)local_68._0_4_ - fVar30;
		local_68._4_4_ = (float)local_68._4_4_ - fVar19;
		UStack_90.z = UStack_90.z - fVar20;
		fStack_60 = fStack_60 - fVar21;
		fStack_5c = fStack_5c - fVar22;
		fVar20 = (float)local_68._0_4_;
		fVar19 = (float)local_68._4_4_;
		fVar30 = fStack_84;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			fVar20 = (float)local_68._0_4_;
			fVar19 = (float)local_68._4_4_;
			fVar30 = fStack_84;
		}
		fVar20 = UStack_90.z * UStack_90.z + fVar19 * fVar19 + fVar20 * fVar20;
		fStack_84 = fVar30;
		if (fVar20 < 0.0) {
			fVar20 = sqrtf(fVar20);
			fVar30 = extraout_XMM0_Db_00;
			if (1e-05 < fVar20) goto label_05c087cc;
	label_05c087a1: ;
			pUVar18 = typeof(Vector3).static_fields;
			UStack_90.z = (pUVar18.zeroVector).z;
			fStack_84 = 0.0;
		}
		else {
			fVar20 = SQRT(fVar20);
			if (fVar20 <= 1e-05) goto label_05c087a1;
	label_05c087cc: ;
			UStack_90.z = UStack_90.z / fVar20;
			auVar11._4_4_ = fVar20;
			auVar11._0_4_ = fVar20;
			auVar11._8_4_ = fVar30;
			auVar11._12_4_ = fVar30;
			auVar25 = divps(_local_68, auVar11);
			local_b8._0_4_ = auVar25._0_4_;
			local_b8._4_4_ = auVar25._4_4_;
		}
		uVar2 = (pUVar18.zeroVector).x;
		uVar4 = (pUVar18.zeroVector).y;
		local_68._4_4_ = uVar4;
		local_68._0_4_ = uVar2;
		pSVar14 = EffectPrefabs.GunExplode;
		local_b8._0_8_ = local_68;
		local_b8._8_4_ = UStack_90.z;
		pUVar12 = typeof(Vector3).static_fields;
		local_78._0_4_ = (pUVar12.upVector).x;
		local_78._4_4_ = (pUVar12.upVector).y;
		uVar27 = 0;
		uVar29 = 0;
		local_78._8_4_ = (pUVar12.upVector).z;
		UVar33 = Quaternion.Internal_LookRotation((Vector3)local_b8, (Vector3)local_78);
		auVar31._8_4_ = uVar27;
		auVar31._0_8_ = UVar33._8_8_;
		auVar31._12_4_ = uVar29;
		fVar20 = UVar33.x;
		fVar30 = UVar33.y;
		if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
			local_58 = (byte[])UVar33._0_8_;
			_local_48 = auVar31;
			fVar20 = (float)local_58._0_4_;
			fVar30 = (float)local_58._4_4_;
			auVar31 = _local_48;
		}
		UVar33.y = fVar30;
		UVar33.x = fVar20;
		UVar33._8_8_ = auVar31._0_8_;
		UVar34.z = local_a8.x;
		UVar34.x = (float)local_98._0_4_;
		UVar34.y = (float)local_98._4_4_;
		EffectSpawner.Spawn(pSVar14, UVar34, UVar33, 2.0, true, null);
		pSVar14 = HumanSounds.GetRandomAHSSGunShotDouble();
		__this_00.PlaySound(pSVar14);
		pSVar15 = CharacterData.HumanWeaponInfo;
		if (pSVar15 != null) {
			pSVar15 = pSVar15.get_Item("AHSS");
			pCVar9 = __this_00.HumanCache;
			if (((pCVar9 != null) &&(pCVar10 = pCVar9.AHSSHit, pCVar10 != null)) &&(pSVar15 != null)) {
				__this_03 = (BaseMenu)pCVar10._collider;
				pSVar16 = pSVar15.get_Item("Radius");
				if ((pSVar16 != null) &&(fVar20 = pSVar16.get_AsFloat(), __this_03 != null)) {
					bVar5 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
					if (((__this_03.klass._2).typeHierarchyDepth < bVar5) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(CapsuleCollider))) {
	label_05c08c2e: ;
						throw new InvalidCastException();
					}
					__this_03.radius = fVar20 + fVar20;
					pCVar9 = __this_00.HumanCache;
					if (((pCVar9 != null) &&(pCVar10 = pCVar9.AHSSHit, pCVar10 != null)) &&(pUVar17 = pCVar10.transform, pUVar17 != null)) {
						value.z = local_a8.x;
						value.x = (float)local_98._0_4_;
						value.y = (float)local_98._4_4_;
						pUVar17.position = value;
						pCVar9 = __this_00.HumanCache;
						if ((pCVar9 != null) &&(pCVar10 = pCVar9.AHSSHit, pCVar10 != null)) {
							pUVar17 = pCVar10.transform;
							local_b8._0_8_ = local_68;
							local_b8._8_4_ = UStack_90.z;
							pUVar12 = typeof(Vector3).static_fields;
							local_78._0_4_ = (pUVar12.upVector).x;
							local_78._4_4_ = (pUVar12.upVector).y;
							local_78._8_4_ = (pUVar12.upVector).z;
							UVar33 = Quaternion.Internal_LookRotation((Vector3)local_b8, (Vector3)local_78);
							if (pUVar17 != null) {
								pUVar17.rotation = UVar33;
								pCVar9 = __this_00.HumanCache;
								if ((pCVar9 != null) &&(pCVar10 = pCVar9.AHSSHit, pCVar10 != null)) {
									pCVar10.Activate(0.0, 0.1);
									pUVar8 = __this_00.Cache;
									if (pUVar8 != null) {
										__this_01 = pUVar8.Rigidbody;
										pSVar15 = pSVar15.get_Item("KnockbackForce");
										if ((pSVar15 != null) &&(fVar20 = pSVar15.get_AsFloat(), __this_01 != null)) {
											force.z = -UStack_90.z * fVar20 + -UStack_90.z * fVar20;
											force.x = fVar20 * -(float)local_68._0_4_ + fVar20 * -(float)local_68._0_4_;
											force.y = fVar20 * -(float)local_68._4_4_ + fVar20 * -(float)local_68._4_4_;
											__this_01.AddForce(force, 2);
											__this_03 = UIManager.CurrentMenu;
											if (__this_03 != null) {
												bVar5 = (typeof(InGameMenu)._2).typeHierarchyDepth;
												if (((__this_03.klass._2).typeHierarchyDepth < bVar5) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(InGameMenu))) goto label_05c08c2e;
												__this_02 = (HUDBottomHandler)(*(ulong)((sbyte)__this_03 + 0xb8));
												if (__this_02 != null) {
													__this_02.ShootAHSS(true, true);
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
	label_05c08c1e: ;
		throw new NullReferenceException();
	}
}
