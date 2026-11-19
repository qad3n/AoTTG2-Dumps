// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileAimAssist
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileAimAssist.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Settings;

[Token(Token = "0x2000096")]
internal static class MobileAimAssist
{
	[Token(Token = "0x4000303")]
	private const float AimAssistDuration = 0.35f;

	[Token(Token = "0x4000304")]
	private const float BladeAttackRange = 2f;

	[Token(Token = "0x4000305")]
	private const float BladeAssistMaxRange = 60f;

	[Token(Token = "0x4000306")]
	private const float BladeAssistMinSpeed = 0.1f;

	[Token(Token = "0x4000307")]
	private const float BladeAssistMaxVelocityAngle = 89f;

	[Token(Token = "0x4000308")]
	private const float MaxNearestDistance = 120f;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x0")]
	private static BaseCharacter _target;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x8")]
	private static BaseCharacter _lastHookedTarget;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x10")]
	private static float _activeUntil;

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x58CB7D0", Offset = "0x58CA7D0", VA = "0x58CB7D0")]
	public static void SnapToNearestTarget()
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$SnapToNearestTarget): clean
		if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
			return;
		}
		return;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x58CC170", Offset = "0x58CB170", VA = "0x58CC170")]
	public static bool TryGetAimPoint(out Vector3 aimPoint)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$TryGetAimPoint): clean
		float fVar1;
		float fVar3;

		fVar3 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		aimPoint.x = (Vector3.zeroVector).x;
		aimPoint.y = fVar3;
		aimPoint.z = fVar1;
		if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
			return false;
		}
		return false;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x58CC420", Offset = "0x58CB420", VA = "0x58CC420")]
	public static bool TryUpdateBladeFacing(Human human)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$TryUpdateBladeFacing): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545c3d == false) {
			Il2CppMethodInitialized_07545c3d = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return false;
		}
		return false;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x58CC590", Offset = "0x58CB590", VA = "0x58CC590")]
	public static void UpdateBladeFacingLock()
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$UpdateBladeFacingLock): 1 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		BaseGameManager pGVar3;

		pGVar2 = SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			pGVar3 = pGVar2.klass;
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (pGVar3._2).typeHierarchyDepth) &&((pGVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameManager))) {
				if ((typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor == 0) {
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x58CB9A0", Offset = "0x58CA9A0", VA = "0x58CB9A0")]
	private static BaseCharacter GetPreferredTarget(InGameManager manager, Human human)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$GetPreferredTarget): clean
		uint uVar1;
		BaseComponentCache pUVar2;
		Transform __this;
		bool bVar3;
		BaseCharacter pCVar4;
		float fVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		float fStack_28;
		float fStack_24;

		bVar3 = MobileAimAssist.IsValidTarget(MobileAimAssist._lastHookedTarget, human);
		if (bVar3) {
			if (((human == null) ||(pUVar2 = human.Cache, pUVar2 == null)) ||(__this = pUVar2.Transform, __this == null)) {
				throw new NullReferenceException();
			}
			UVar7 = __this.position;
			UVar8 = MobileAimAssist.GetTargetAimPoint(MobileAimAssist._lastHookedTarget);
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fStack_28 = UVar7.x;
			fStack_24 = UVar7.y;
			fStack_24 = fStack_24 - UVar8.y;
			fVar6 = UVar7.z - UVar8.z;
			fStack_28 = fStack_28 - UVar8.x;
			fVar6 = fStack_24 * fStack_24 + fStack_28 * fStack_28 + fVar6 * fVar6;
			if (fVar6 < 0.0) {
				fVar6 = sqrtf(fVar6);
			}
			else {
				fVar6 = SQRT(fVar6);
			}
			if (fVar6 <= 120.0) {
				return MobileAimAssist._lastHookedTarget;
			}
		}
		pCVar4 = MobileAimAssist.GetNearestTarget(manager, human);
		return pCVar4;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x58CB860", Offset = "0x58CA860", VA = "0x58CB860")]
	private static void UpdateLastHookedTarget(Human human)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$UpdateLastHookedTarget): clean
		HookUseable pCVar1;
		Settings_MobileAimAssist_StaticFields pSVar2;
		bool bVar3;
		BaseCharacter target;
		BaseCharacter target_00;

		bVar3 = ((Object)human == null);
		if (!bVar3) {
			if (human == null) {
	label_059cb999: ;
				throw new NullReferenceException();
			}
			pCVar1 = human.HookLeft;
			target = null;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsHooked();
				if (bVar3) {
					pCVar1 = human.HookLeft;
					if (pCVar1 == null) goto label_059cb999;
					target = pCVar1.GetHookCharacter();
				}
			}
			pCVar1 = human.HookRight;
			target_00 = null;
			if (pCVar1 != null) {
				bVar3 = pCVar1.IsHooked();
				if (bVar3) {
					pCVar1 = human.HookRight;
					if (pCVar1 == null) goto label_059cb999;
					target_00 = pCVar1.GetHookCharacter();
				}
			}
			bVar3 = MobileAimAssist.IsValidTarget(target, human);
			if (bVar3) {
				pSVar2 = typeof(MobileAimAssist).static_fields;
				pSVar2._lastHookedTarget = target;
				return;
			}
			bVar3 = MobileAimAssist.IsValidTarget(target_00, human);
			if (bVar3) {
				pSVar2 = typeof(MobileAimAssist).static_fields;
				pSVar2._lastHookedTarget = target_00;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x58CC670", Offset = "0x58CB670", VA = "0x58CC670")]
	private static bool IsValidTarget(BaseCharacter target, Human human)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$IsValidTarget): clean
		bool bVar1;
		bool bVar2;

		bVar2 = false;
		bVar1 = ((Object)target != null);
		if (bVar1) {
			bVar2 = false;
			bVar1 = ((Object)target != (Object)human);
			if (bVar1) {
				if (target == null) {
					throw new NullReferenceException();
				}
				bVar1 = target.ValidTarget();
				if (bVar1) {
					bVar2 = TeamInfo.SameTeam(target, (BaseCharacter)human);
					bVar2 = !bVar2;
				}
				else {
					bVar2 = false;
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x58CC760", Offset = "0x58CB760", VA = "0x58CC760")]
	private static BaseCharacter GetNearestTarget(InGameManager manager, Human human)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$GetNearestTarget): 21 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		BaseComponentCache pUVar4;
		Transform __this;
		bool bVar5;
		object pIVar6;
		VirtualInvokeData pVVar7;
		BaseCharacter target;
		ulong uVar8;
		BaseCharacter pCVar9;
		long lVar10;
		float fVar11;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar12;
		object pIStack_98;
		float fStack_8c;
		object* ppIStack_80;
		byte[] auStack_78 = new byte[16];
		float fStack_68;
		float fStack_58;
		byte[] auStack_48 = new byte[24];

		if (Il2CppMethodInitialized_07545c42 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerable<BaseCharacter>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerator<BaseCharacter>)) ;
			Il2CppMethodInitialized_07545c42 = true;
		}
		pIStack_98 = null;
		if ((manager == null) ||(pIVar6 = (object)manager.GetAllCharactersEnumerable(), pIVar6 == null)) {
			throw new NullReferenceException();
		}
		pIVar2 = pIVar6.klass;
		uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
		pIStack_98 = pIVar6.Dispose();
		ppIStack_80 = &pIStack_98;
		if (pIStack_98 == null) {
	label_059ccb47: ;
			throw new NullReferenceException();
		}
		fVar11 = 120.0;
	label_059cc88d: ;
		fStack_8c = fVar11;
		do {
			pIVar6 = pIStack_98;
			pIVar2 = pIStack_98.klass;
			uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
			bVar5 = pIVar6.Dispose();
			pIVar6 = pIStack_98;
			if (!bVar5) {
				if (pIStack_98 == null) {
					return pCVar9;
				}
				pIVar2 = pIStack_98.klass;
				uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar8 == 0) goto label_059ccaff;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar10 = 0;
				goto label_059ccaf0;
			}
			if (pIStack_98 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = pIStack_98.klass;
			uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
			target = (BaseCharacter)pIVar6.Dispose();
			bVar5 = MobileAimAssist.IsValidTarget(target, human);
			if (bVar5) {
				if (human == null) {
					throw new NullReferenceException();
				}
				pUVar4 = human.Cache;
				if (pUVar4 == null) {
					throw new NullReferenceException();
				}
				__this = pUVar4.Transform;
				if (__this == null) {
					throw new NullReferenceException();
				}
				UVar12 = __this.position;
				fStack_58 = UVar12.z;
				auStack_48._8_4_ = extraout_XMM0_Dc;
				auStack_48._0_8_ = UVar12._0_8_;
				auStack_48._12_4_ = extraout_XMM0_Dd;
				UVar12 = MobileAimAssist.GetTargetAimPoint(target);
				fStack_68 = UVar12.z;
				auStack_78._8_4_ = extraout_XMM0_Dc_00;
				auStack_78._0_8_ = UVar12._0_8_;
				auStack_78._12_4_ = extraout_XMM0_Dd_00;
				if (Il2CppMethodInitialized_0753e7b7 == false) {
					Il2CppMethodInitialized_0753e7b7 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				fVar11 = ((float)auStack_48._4_4_ - (float)auStack_78._4_4_) *((float)auStack_48._4_4_ - (float)auStack_78._4_4_) +((float)auStack_48._0_4_ - (float)auStack_78._0_4_) *((float)auStack_48._0_4_ - (float)auStack_78._0_4_) +(fStack_58 - fStack_68) * (fStack_58 - fStack_68);
				if (0.0 <= fVar11) {
					fVar11 = SQRT(fVar11);
					if (fVar11 < fStack_8c) break;
				}
				else {
					fVar11 = sqrtf(fVar11);
					if (fVar11 < fStack_8c) break;
				}
			}
			if (pIStack_98 == null) goto label_059ccb47;
		} while(true);
		if (pIStack_98 == null) goto label_059ccb47;
		goto label_059cc88d;
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar8 * 0x10 != lVar10)) break;
	label_059ccaf0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10);
				goto label_059ccb1d;
			}
		}
	label_059ccaff: ;
	label_059ccb1d: ;
		pIVar6.Dispose();
		return pCVar9;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x58CBB40", Offset = "0x58CAB40", VA = "0x58CBB40")]
	private static void ApplyBladeAssistMovement(Human human, BaseCharacter target)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$ApplyBladeAssistMovement): 94 lines keep C-only constructs
		byte bVar1;
		BaseUseable pCVar2;
		BaseUseable pCVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		byte[] auVar6 = new byte[16];
		bool bVar7;
		Rigidbody pUVar9;
		Object x;
		float extraout_XMM0_Da;
		byte[] auVar11 = new byte[12];
		uint extraout_XMM0_Db;
		uint uVar15;
		uint extraout_XMM0_Dc;
		uint uVar16;
		ulong extraout_XMM0_Qb;
		float fVar17;
		uint extraout_XMM0_Dd;
		uint uVar18;
		ulong extraout_XMM0_Qb_01;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		uint extraout_XMM0_Db_01;
		ulong uVar10;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd_00;
		ulong extraout_XMM0_Qb_02;
		byte[] auVar14 = new byte[16];
		float fVar19;
		float fVar20;
		float fVar21;
		Vector3 UVar22;
		Vector3 value;
		Vector3 UStack_108;
		Vector3 UStack_f8;
		byte[] auStack_e8 = new byte[8];
		float fStack_e0;
		float fStack_dc;
		float fStack_d8;
		uint uStack_d4;
		uint uStack_d0;
		uint uStack_cc;
		ulong uStack_c8;
		float fStack_c0;
		ulong uStack_b8;
		ulong uStack_b0;
		byte[] auStack_a8 = new byte[8];
		float fStack_a0;
		float fStack_9c;
		byte[] auStack_98 = new byte[16];
		byte[] auStack_88 = new byte[16];
		float fStack_78;
		uint uStack_74;
		uint uStack_70;
		uint uStack_6c;
		byte[] auStack_68 = new byte[16];
		float fStack_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float fStack_48;
		uint uStack_3c;
		float fStack_38;

		UStack_f8 = (Vector3)ZEXT812(0);
		UStack_108 = (Vector3)ZEXT812(0);
		uStack_c8 = 0;
		bVar7 = ((Object)human == null);
		if (bVar7) {
			return;
		}
		bVar7 = ((Object)target == null);
		if (bVar7) {
			return;
		}
		if (human != null) {
			pCVar2 = human.Weapon;
			if (pCVar2 == null) {
				return;
			}
			pCVar3 = pCVar2.klass;
			bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((pCVar3._2).typeHierarchyDepth < bVar1) {
				return;
			}
			if ((pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BladeWeapon)) {
				return;
			}
			pUVar4 = human.Cache;
			if (pUVar4 == null) {
				x = null;
			}
			else {
				x = (Object)pUVar4.Rigidbody;
			}
			bVar7 = (x == null);
			if (bVar7) {
				return;
			}
			UVar22 = MobileAimAssist.GetTargetAimPoint(target);
			uStack_b8 = UVar22._0_8_;
			auStack_98._0_4_ = UVar22.z;
			pUVar4 = human.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_059cc16a;
			uStack_b0 = extraout_XMM0_Qb;
			UVar22 = pUVar5.position;
			fStack_d8 = UVar22.z;
			auStack_e8 = UVar22._0_8_;
			fVar19 = (float)uStack_b8 - auStack_e8._0_4_;
			fVar21 = uStack_b8._4_4_ - auStack_e8._4_4_;
			fVar20 = auStack_e8._8_4_;
			fVar17 = auStack_e8._12_4_;
			fStack_d8 = (float)auStack_98._0_4_ - fStack_d8;
			uStack_d4 = 0;
			uStack_d0 = 0;
			uStack_cc = 0;
			auStack_e8._4_4_ = fVar21;
			auStack_e8._0_4_ = fVar19;
			fStack_e0 = (float)uStack_b0 - fVar20;
			fStack_dc = uStack_b0._4_4_ - fVar17;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fVar19 = (float)auStack_e8._0_4_;
				fVar21 = (float)auStack_e8._4_4_;
			}
			fVar19 = fStack_d8 * fStack_d8 + fVar21 * fVar21 + fVar19 * fVar19;
			if (fVar19 < 0.0) {
				fVar19 = sqrtf(fVar19);
				uVar15 = extraout_XMM0_Db;
				uVar16 = extraout_XMM0_Dc;
				uVar18 = extraout_XMM0_Dd;
			}
			else {
				fVar19 = SQRT(fVar19);
				uVar15 = uStack_d4;
				uVar16 = uStack_d0;
				uVar18 = uStack_cc;
			}
			if (60.0 < fVar19) {
				return;
			}
			if (fVar19 <= 0.0001) {
				return;
			}
			pUVar4 = human.Cache;
			if ((pUVar4 == null) ||(pUVar9 = pUVar4.Rigidbody, fStack_78 = fVar19, uStack_74 = uVar15, uStack_70 = uVar16, uStack_6c = uVar18, pUVar9 == null)) goto label_059cc16a;
			UStack_f8 = pUVar9.linearVelocity;
			il2cpp_runtime_helper_0599adc0(&UStack_f8);
			uStack_3c = (undefined4)((ulong)extraout_XMM0_Qb_01 >> 0x20);
			if (extraout_XMM0_Da < 0.1) {
				return;
			}
			auVar12._4_4_ = fStack_78;
			auVar12._0_4_ = fStack_78;
			auVar12._8_4_ = fStack_78;
			auVar12._12_4_ = fStack_78;
			_auStack_a8 = divps(_auStack_e8, auVar12);
			fVar20 = fStack_d8 / fStack_78;
			auVar13._8_8_ = 0;
			auVar13._0_4_ = UStack_f8.x;
			auVar13._4_4_ = UStack_f8.y;
			auVar6._4_4_ = extraout_XMM0_Da;
			auVar6._0_4_ = extraout_XMM0_Da;
			auVar6._8_4_ = extraout_XMM0_Da;
			auVar6._12_4_ = extraout_XMM0_Da;
			auStack_88 = divps(auVar13, auVar6);
			fVar21 = UStack_f8.z / extraout_XMM0_Da;
			fStack_58 = extraout_XMM0_Da;
			fStack_54 = extraout_XMM0_Da;
			fStack_50 = extraout_XMM0_Da;
			fStack_4c = extraout_XMM0_Da;
			fStack_48 = extraout_XMM0_Da;
			fVar19 = (float)il2cpp_runtime_helper_059d7e70(0);
			if (89.0 <= fVar19) {
				return;
			}
			UVar22.z = fStack_d8;
			UVar22.x = (float)auStack_e8._0_4_;
			UVar22.y = (float)auStack_e8._4_4_;
			MobileAimAssist.FaceBladeTarget(human, UVar22);
			if (target != null) {
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 <= (target.klass._2).typeHierarchyDepth) &&((target.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
					pUVar4 = human.Cache;
					if ((pUVar4 == null) ||(pUVar9 = pUVar4.Rigidbody, pUVar9 == null)) goto label_059cc16a;
					fVar20 = fVar20 * fStack_48;
					auVar14._0_4_ = (float)auStack_a8._0_4_ * fStack_58;
					auVar14._4_4_ = (float)auStack_a8._4_4_ * fStack_54;
					auVar14._8_4_ = fStack_a0 * fStack_50;
					auVar14._12_4_ = fStack_9c * fStack_4c;
					goto label_059cc154;
				}
			}
			fVar19 = MobileAimAssist.GetBladeAssistRange(target);
			if (fStack_78 <= fVar19) {
				return;
			}
			pUVar4 = human.Cache;
			if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, fStack_38 = fVar19, pUVar5 != null)) {
				auStack_68 = ZEXT416((uint)(fVar20 * fVar21 +(float)auStack_a8._4_4_ * (float)auStack_88._4_4_ +(float)auStack_a8._0_4_ * (float)auStack_88._0_4_));
				pUVar5.position;
				fVar19 = (float)il2cpp_runtime_helper_05956b50(0);
				if ((0.0 < (float)auStack_68._0_4_) && (fVar19 <= fStack_38)) {
					return;
				}
				fVar19 = fStack_38 / fStack_78;
				auVar11 = ZEXT812(0x3f800000);
				if (fVar19 <= auVar11._0_4_) {
					auVar11._4_8_ = auVar11._4_8_;
					auVar11._0_4_ = fVar19;
				}
				fVar19 = asinf((float)(-(uint)(0.0 <= fVar19) & auVar11._0_4_));
				uStack_b8 = CONCAT44(uStack_b8._4_4_, fVar19);
				UStack_108.x = (float)auStack_88._0_4_ - (float)auStack_68._0_4_ * (float)auStack_a8._0_4_;
				UStack_108.y = (float)auStack_88._4_4_ - (float)auStack_68._0_4_ * (float)auStack_a8._4_4_;
				UStack_108.z = fVar21 - fVar20 * (float)auStack_68._0_4_;
				if (UStack_108.z * UStack_108.z + UStack_108.y * UStack_108.y + UStack_108.x * UStack_108.x < 0.0001) {
					pUVar4 = human.Cache;
					if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_059cc16a;
					UStack_108 = (Vector3)pUVar5.right;
				}
				il2cpp_runtime_helper_059d8010(&UStack_108);
				fStack_d8 = cosf((float)uStack_b8);
				fVar20 = fVar20 * fStack_d8;
				auStack_98._0_4_ = UStack_108.x;
				auStack_98._4_4_ = UStack_108.y;
				auStack_98._8_8_ = 0;
				auStack_e8._0_4_ = UStack_108.z;
				uStack_d4 = extraout_XMM0_Db_01;
				uStack_d0 = extraout_XMM0_Dc_00;
				uStack_cc = extraout_XMM0_Dd_00;
				fVar19 = sinf((float)uStack_b8);
				fStack_c0 = (float)auStack_e8._0_4_ * fVar19 + fVar20;
				fVar20 = (float)auStack_a8._0_4_ * fStack_d8;
				uStack_c8 = CONCAT44(fVar19 * (float)auStack_98._4_4_ + (float)auStack_a8._4_4_ * fStack_d8, fVar19 * (float)auStack_98._0_4_ + fVar20);
				pUVar4 = human.Cache;
				if (pUVar4 != null) {
					pUVar9 = pUVar4.Rigidbody;
					uVar10 = il2cpp_runtime_helper_059d80e0(&uStack_c8);
					if (pUVar9 != null) {
						fVar20 = fStack_48 * fVar20;
						auVar14._4_4_ = fStack_54 * (float)((ulong)uVar10 >> 0x20);
						auVar14._0_4_ = fStack_58 * (float)uVar10;
						auVar14._8_4_ = fStack_50 * (float)extraout_XMM0_Qb_02;
						auVar14._12_4_ = fStack_4c * (float)((ulong)extraout_XMM0_Qb_02 >> 0x20);
	label_059cc154: ;
						value._0_8_ = auVar14._0_8_;
						value.z = fVar20;
						pUVar9.linearVelocity = value;
						return;
					}
				}
			}
		}
	label_059cc16a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x58CCBD0", Offset = "0x58CBBD0", VA = "0x58CCBD0")]
	private static float GetBladeAssistRange(BaseCharacter target)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$GetBladeAssistRange): 9 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Collider __this;
		IntPtr pvVar3;
		bool bVar4;
		object pIVar5;
		uint uVar6;
		ulong uVar7;
		ulong uVar8;
		long lVar9;
		ulong uVar10;
		ulong uVar11;
		Object x;
		float fVar12;
		float fVar13;
		float local_38;
		float fStack_34;
		Bounds local_28;

		if (target != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (target.klass._2).typeHierarchyDepth) &&((target.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				if ((*(ulong)((sbyte)target + 0x108)) == null) {
					x = null;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					x = *(Object*)((long)(*(ulong)((sbyte)target + 0x108)) + 0x68);
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar4 = (x != null);
				if (bVar4) {
					if (((*(ulong)((sbyte)target + 0x108)) != null) &&(__this = *(Collider*)((long)(*(ulong)((sbyte)target + 0x108)) + 0x68), __this != null)) {
						local_28 = __this.bounds;
						pIVar5 = new float[3];
						if (pIVar5 != null) {
							pvVar3 = pIVar5[1].monitor;
							uVar6 = (uint)pvVar3;
							if (uVar6 != 0) {
								local_38 = local_28.m_Extents.x;
								fStack_34 = local_28.m_Extents.y;
								*(float)&pIVar5[2].klass = local_38;
								if ((uVar6 != 1) && (*(float)((long)&pIVar5[2].klass + 4) = fStack_34, 2 < uVar6)) {
									*(float)&pIVar5[2].monitor = local_28.m_Extents.z;
									if (1 < (int)uVar6) {
										uVar8 = (ulong)pvVar3 & 0xffffffff;
										uVar11 = uVar8 - 1;
										uVar7 = (ulong)((uint)uVar11 & 3);
										if (uVar8 - 2 < 3) {
											lVar9 = 1;
										}
										else {
											uVar8 = 0;
											do {
												uVar10 = uVar8;
												fVar12 = *(float)((long)&pIVar5[2].klass + uVar10 * 4 + 4);
												if (local_38 <= fVar12) {
													fVar12 = local_38;
												}
												fVar13 = *(float)((long)&pIVar5[2].monitor + uVar10 * 4);
												if (fVar12 <= fVar13) {
													fVar13 = fVar12;
												}
												fVar12 = *(float)((long)&pIVar5[2].monitor + uVar10 * 4 + 4);
												if (fVar13 <= fVar12) {
													fVar12 = fVar13;
												}
												local_38 = *(float)((long)&pIVar5[3].klass + uVar10 * 4);
												if (fVar12 <= local_38) {
													local_38 = fVar12;
												}
												uVar8 = uVar10 + 4;
											} while ((uVar11 & 0xfffffffffffffffc) != uVar10 + 4);
											lVar9 = uVar10 + 5;
										}
										if (uVar7 != 0) {
											uVar11 = 0;
											fVar12 = local_38;
											do {
												local_38 = *(float)((long)&pIVar5[2].klass + uVar11 * 4 + lVar9 * 4);
												if (fVar12 <= local_38) {
													local_38 = fVar12;
												}
												uVar11 = uVar11 + 1;
												fVar12 = local_38;
											} while (uVar7 != uVar11);
										}
									}
									return local_38 + 2.0;
								}
							}
							throw new IndexOutOfRangeException();
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return 2.0;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x58CC4A0", Offset = "0x58CB4A0", VA = "0x58CC4A0")]
	private static void FaceBladeTarget(Human human, Vector3 direction)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$FaceBladeTarget): 14 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform __this;
		Rigidbody __this_00;
		float fVar2;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float __x;
		uint uVar3;
		uint uVar4;
		Quaternion value;
		Quaternion value_00;
		Vector3 local_38;
		byte[] local_28 = new byte[16];
		byte[] local_18 = new byte[16];

		__x = direction.z;
		fVar2 = direction.x;
		if (__x * __x + fVar2 * fVar2 + 0.0 < 0.0001) {
			return;
		}
		fVar2 = atan2f(fVar2, __x);
		local_38.x = 0.0;
		uVar3 = 0;
		uVar4 = 0;
		local_28._0_4_ = fVar2 * 57.29578;
		local_38.y = fVar2 * 57.29578 * 0.017453292;
		local_38.z = 0.0;
		value = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_38);
		if (human != null) {
			human.TargetAngle = (float)local_28._0_4_;
			human._targetRotation = value;
			pUVar1 = human.Cache;
			if ((pUVar1 != null) &&(__this = pUVar1.Transform, __this != null)) {
				local_28._8_4_ = extraout_XMM0_Dc;
				local_28._0_8_ = value._0_8_;
				local_28._12_4_ = extraout_XMM0_Dd;
				local_18._8_4_ = uVar3;
				local_18._0_8_ = value._8_8_;
				local_18._12_4_ = uVar4;
				__this.rotation = (Quaternion)value;
				pUVar1 = human.Cache;
				if ((pUVar1 != null) &&(__this_00 = pUVar1.Rigidbody, __this_00 != null)) {
					value_00.z = (float)local_18._0_4_;
					value_00.w = (float)local_18._4_4_;
					value_00.x = (float)local_28._0_4_;
					value_00.y = (float)local_28._4_4_;
					__this_00.rotation = value_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x58CC210", Offset = "0x58CB210", VA = "0x58CC210")]
	private static Vector3 GetTargetAimPoint(BaseCharacter character)
	{
		// Lifted from source/cpp/Settings/MobileAimAssist.c (Settings.MobileAimAssist$$GetTargetAimPoint): 7 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		Object x;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		bool bVar7;
		BaseCharacter pCVar8;
		byte bVar9;
		float in_XMM1_Da;
		Vector3 UVar10;
		Vector3 UVar11;
		Vector3 UVar12;
		Vector3 UVar13;

		if (character == null) {
	label_059cc413: ;
			throw new NullReferenceException();
		}
		pCVar8 = character.klass;
		bVar9 = (pCVar8._2).typeHierarchyDepth;
		bVar3 = (typeof(BaseTitan)._2).typeHierarchyDepth;
		if (((bVar3 <= bVar9) &&((pCVar8._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(BaseTitan))) &&((*(ulong)((sbyte)character + 0x108)) != null)) {
			x = *(Object*)((long)(*(ulong)((sbyte)character + 0x108)) + 0x40);
			bVar7 = (x != null);
			if (bVar7) {
				if (((*(ulong)((sbyte)character + 0x108)) != null) &&(pUVar5 = *(Transform*)((long)(*(ulong)((sbyte)character + 0x108)) + 0x40), pUVar5 != null)) {
					UVar11 = (Vector3)pUVar5.position;
					return (Vector3)UVar11;
				}
				goto label_059cc413;
			}
			pCVar8 = character.klass;
			bVar9 = (pCVar8._2).typeHierarchyDepth;
		}
		bVar3 = (typeof(Human)._2).typeHierarchyDepth;
		if (((bVar3 <= bVar9) &&((pCVar8._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(Human))) &&(pUVar4 = character.Cache, pUVar4 != null)) {
			pUVar5 = pUVar4.Transform;
			bVar7 = ((Object)pUVar5 != null);
			if (bVar7) {
				pUVar4 = character.Cache;
				if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
					UVar12 = pUVar5.position;
					uVar1 = (Vector3.upVector).x;
					uVar2 = (Vector3.upVector).y;
					UVar13.x = UVar12.x + (float)uVar1 * 1.2;
					UVar13.y = UVar12.y + (float)uVar2 * 1.2;
					UVar13.z = UVar12.z + (Vector3.upVector).z * 1.2;
					return (Vector3)UVar13;
				}
				goto label_059cc413;
			}
			pCVar8 = character.klass;
		}
		UVar12._0_8_ =character.GetPosition();
		UVar10.z = in_XMM1_Da;
		UVar10._0_8_ = (undefined8)UVar12._0_8_;
		return (Vector3)UVar10;
	}
}
