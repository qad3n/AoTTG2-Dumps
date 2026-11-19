// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneUtility
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneUtility.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000010")]
public static class EZSoftBoneUtility
{
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x31A4950", Offset = "0x31A3950", VA = "0x31A4950")]
	public static Vector3 Abs(this Vector3 v)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$Abs): 1 lines keep C-only constructs
		Vector3 UVar1;

		UVar1._0_8_ = v._0_8_ & 0x7fffffff7fffffff;
		UVar1.z = ABS(v.z);
		return (Vector3)UVar1;
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x31A4960", Offset = "0x31A3960", VA = "0x31A4960")]
	public static float Max(this Vector3 v)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$Max): clean
		float fVar1;
		float fVar2;

		fVar2 = v.y;
		if (v.y <= v.z) {
			fVar2 = v.z;
		}
		if (v.x <= fVar2) {
		}
		return fVar1;
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x31A5EE0", Offset = "0x31A4EE0", VA = "0x31A5EE0")]
	public static bool Contains(this LayerMask mask, int layer)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$Contains): clean
		uint uVar1;
		uint uVar2;

		uVar1 = ((LayerMask)mask);
		uVar2 = ((LayerMask)mask);
		return (uVar1 | 1 << (layer & 0x1fU)) == uVar2;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x31A8990", Offset = "0x31A7990", VA = "0x31A8990")]
	public static void GetCapsuleParams(CapsuleCollider collider, out Vector3 center0, out Vector3 center1, out float radius)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCapsuleParams): 5 lines keep C-only constructs
		int iVar1;
		Transform pUVar2;
		float pfVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Vector3 UVar8;

		if (collider == null) goto label_032a8b90;
		pUVar2 = collider.transform;
		if (pUVar2 == null) goto label_032a8b90;
		UVar8 = pUVar2.lossyScale;
		fVar7 = ABS(UVar8.x);
		fVar4 = ABS(UVar8.y);
		fVar6 = ABS(UVar8.z);
		fVar5 = collider.radius;
		*radius = fVar5;
		UVar8 = collider.center;
		center1.x = UVar8.x;
		center1.y = UVar8.y;
		center1.z = UVar8.z;
		center0.x = UVar8.x;
		center0.y = UVar8.y;
		center0.z = UVar8.z;
		fVar5 = collider.height;
		fVar5 = fVar5 * 0.5;
		iVar1 = collider.direction;
		if (iVar1 == 2) {
			pfVar3 = &center1.z;
			if (fVar7 <= fVar4) {
				fVar7 = fVar4;
			}
			fVar4 = *radius;
			*radius = fVar7 * fVar4;
			fVar5 = fVar5 - (fVar7 * fVar4) / fVar6;
			fVar4 = 0.0;
			if (0.0 <= fVar5) {
				fVar4 = fVar5;
			}
			center0.z = center0.z - fVar4;
	label_032a8b20: ;
			*pfVar3 = fVar4 + *pfVar3;
		}
		else {
			if (iVar1 == 1) {
				if (fVar7 <= fVar6) {
					fVar7 = fVar6;
				}
				fVar6 = *radius;
				*radius = fVar7 * fVar6;
				fVar5 = fVar5 - (fVar7 * fVar6) / fVar4;
				fVar4 = 0.0;
				if (0.0 <= fVar5) {
					fVar4 = fVar5;
				}
				center0.y = center0.y - fVar4;
				pfVar3 = &center1.y;
				goto label_032a8b20;
			}
			if (iVar1 == 0) {
				if (fVar4 <= fVar6) {
					fVar4 = fVar6;
				}
				fVar6 = *radius;
				*radius = fVar4 * fVar6;
				fVar5 = fVar5 - (fVar4 * fVar6) / fVar7;
				fVar4 = 0.0;
				if (0.0 <= fVar5) {
					fVar4 = fVar5;
				}
				center0.x = center0.x - fVar4;
				pfVar3 = (float)center1;
				goto label_032a8b20;
			}
		}
		pUVar2 = collider.transform;
		if (pUVar2 != null) {
			UVar8 = pUVar2.TransformPoint((Vector3)center0.fields);
			center0.x = UVar8.x;
			center0.y = UVar8.y;
			center0.z = UVar8.z;
			pUVar2 = collider.transform;
			if (pUVar2 != null) {
				UVar8 = pUVar2.TransformPoint((Vector3)center1.fields);
				center1.x = UVar8.x;
				center1.y = UVar8.y;
				center1.z = UVar8.z;
				return;
			}
		}
	label_032a8b90: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x31A8BA0", Offset = "0x31A7BA0", VA = "0x31A8BA0")]
	public static void GetCylinderParams(Transform transform, out Vector3 center, out Vector3 direction, out float radius, out float height)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$GetCylinderParams): clean
		float fVar1;
		Vector3 UVar2;
		Vector3 UVar3;

		if (transform == null) {
			throw new NullReferenceException();
		}
		UVar2 = transform.lossyScale;
		UVar3 = transform.position;
		center.x = UVar3.x;
		center.y = UVar3.y;
		center.z = UVar3.z;
		UVar3 = transform.up;
		direction.x = UVar3.x;
		direction.y = UVar3.y;
		direction.z = UVar3.z;
		fVar1 = ABS(UVar2.x);
		if (ABS(UVar2.x) <= ABS(UVar2.z)) {
			fVar1 = ABS(UVar2.z);
		}
		*radius = fVar1 * 0.5;
		*height = ABS(UVar2.y);
		return;
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x31A7450", Offset = "0x31A6450", VA = "0x31A7450")]
	public static void PointOutsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere): 31 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		byte[] auVar4 = new byte[16];
		Transform pUVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		float fVar7;
		float fVar8;
		uint uVar9;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc_00;
		float fVar10;
		float extraout_XMM0_Dd_00;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar15;
		byte[] auVar14 = new byte[16];
		float fVar16;
		Vector3 UVar17;
		Vector3 position_00;
		float fStack_58;
		float fStack_54;
		byte[] auStack_40 = new byte[12];
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		float fStack_28;

		if ((collider != null) &&(pUVar5 = collider.transform, pUVar5 != null)) {
			UVar17 = pUVar5.lossyScale;
			fVar7 = collider.radius;
			pUVar5 = collider.transform;
			position_00 = collider.center;
			if (pUVar5 != null) {
				fStack_58 = UVar17.x;
				fStack_54 = UVar17.y;
				fVar12 = ABS(fStack_54);
				if (ABS(fStack_54) <= ABS(UVar17.z)) {
					fVar12 = ABS(UVar17.z);
				}
				fStack_28 = ABS(fStack_58);
				if (ABS(fStack_58) <= fVar12) {
					fStack_28 = fVar12;
				}
				UVar17 = pUVar5.TransformPoint(position_00);
				fVar13 = position.x;
				fVar15 = position.y;
				fVar12 = position.z;
				fStack_30 = extraout_XMM0_Dc_00;
				fStack_2c = extraout_XMM0_Dd_00;
				fVar16 = UVar17.x;
				fVar8 = UVar17.y;
				fVar10 = extraout_XMM0_Dc_00;
				fVar11 = extraout_XMM0_Dd_00;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					fVar16 = (float)auStack_40._8_4_;
					fVar8 = fStack_34;
					fVar10 = fStack_30;
					fVar11 = fStack_2c;
				}
				fVar7 = fVar7 * fStack_28;
				fVar13 = fVar13 - fVar16;
				fVar15 = fVar15 - fVar8;
				fVar12 = fVar12 - UVar17.z;
				fVar7 = fVar7 + spacing;
				fVar16 = fVar12 * fVar12 + fVar15 * fVar15 + fVar13 * fVar13;
				if (fVar16 < 0.0) {
					fVar8 = sqrtf(fVar16);
				}
				else {
					fVar8 = SQRT(fVar16);
				}
				if (fVar8 < fVar7) {
					if (Il2CppMethodInitialized_0753e72d == false) {
						Il2CppMethodInitialized_0753e72d = true;
						auStack_40._0_4_ = 0.0;
						auStack_40._4_4_ = 0.0;
					}
					else {
						auStack_40._0_4_ = 0.0;
						auStack_40._4_4_ = 0.0;
					}
					if (Il2CppMethodInitialized_0753e729 == false) {
						auStack_40._0_4_ = 0.0;
						auStack_40._4_4_ = 0.0;
						Il2CppMethodInitialized_0753e729 = true;
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						auStack_40._0_4_ = 0.0;
						auStack_40._4_4_ = 0.0;
						uVar3 = *(uint)((long)typeof(Math) + 0xe4);
					}
					if (uVar3 == 0) {
					}
					else {
					}
					if (0.0 <= fVar16) {
						uVar9 = 0;
						fVar16 = SQRT(fVar16);
					}
					else {
						fVar16 = sqrtf(fVar16);
						uVar9 = extraout_XMM0_Db;
					}
					auVar14._4_4_ = fVar15;
					auVar14._0_4_ = fVar13;
					auVar14._8_4_ = 0.0 - fVar10;
					auVar14._12_4_ = 0.0 - fVar11;
					if (fVar16 <= 1e-05) {
						pUVar6 = typeof(Vector3).static_fields;
						fVar12 = (pUVar6.zeroVector).z;
					}
					else {
						fVar12 = fVar12 / fVar16;
						auVar4._4_4_ = fVar16;
						auVar4._0_4_ = fVar16;
						auVar4._8_4_ = uVar9;
						auVar4._12_4_ = uVar9;
						auVar14 = divps(auVar14, auVar4);
						auStack_40._0_4_ = auVar14._0_4_;
						auStack_40._4_4_ = auVar14._4_4_;
						pUVar6 = (UnityEngine_Vector3_StaticFields)auStack_40;
					}
					uVar1 = (pUVar6.zeroVector).x;
					uVar2 = (pUVar6.zeroVector).y;
					position.x = (float)auStack_40._8_4_ + fVar7 * (float)uVar1;
					position.y = fStack_34 + fVar7 * (float)uVar2;
					position.z = UVar17.z + fVar12 * fVar7;
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x31A8C50", Offset = "0x31A7C50", VA = "0x31A8C50")]
	private static void PointOutsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideSphere): 31 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		float fVar7;
		uint uVar8;
		uint extraout_XMM0_Db;
		float in_XMM0_Dc;
		float in_XMM0_Dd;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		byte[] auStack_40 = new byte[12];
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		float fStack_28;

		fStack_28 = radius;
		uVar1 = position.x;
		uVar3 = position.y;
		fVar11 = position.z;
		fStack_30 = in_XMM0_Dc;
		fStack_2c = in_XMM0_Dd;
		fVar13 = spherePosition.x;
		fVar14 = spherePosition.y;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			fVar13 = (float)auStack_40._8_4_;
			fVar14 = fStack_34;
			in_XMM0_Dc = fStack_30;
			in_XMM0_Dd = fStack_2c;
		}
		fVar13 = (float)uVar1 - fVar13;
		fVar14 = (float)uVar3 - fVar14;
		fVar11 = fVar11 - spherePosition.z;
		fVar12 = fVar11 * fVar11 + fVar14 * fVar14 + fVar13 * fVar13;
		if (fVar12 < 0.0) {
			fVar7 = sqrtf(fVar12);
			if (fStack_28 <= fVar7) {
				return;
			}
		}
		else if (fStack_28 <= SQRT(fVar12)) {
			return;
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
		}
		else {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
			uVar5 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		else {
		}
		if (0.0 <= fVar12) {
			uVar8 = 0;
			fVar12 = SQRT(fVar12);
		}
		else {
			fVar12 = sqrtf(fVar12);
			uVar8 = extraout_XMM0_Db;
		}
		if (1e-05 < fVar12) {
			auVar9._4_4_ = fVar14;
			auVar9._0_4_ = fVar13;
			auVar9._8_4_ = 0.0 - in_XMM0_Dc;
			auVar9._12_4_ = 0.0 - in_XMM0_Dd;
			fVar11 = fVar11 / fVar12;
			auVar10._4_4_ = fVar12;
			auVar10._0_4_ = fVar12;
			auVar10._8_4_ = uVar8;
			auVar10._12_4_ = uVar8;
			auVar10 = divps(auVar9, auVar10);
			auStack_40._0_4_ = auVar10._0_4_;
			auStack_40._4_4_ = auVar10._4_4_;
			pUVar6 = (UnityEngine_Vector3_StaticFields)auStack_40;
		}
		else {
			pUVar6 = typeof(Vector3).static_fields;
			fVar11 = (pUVar6.zeroVector).z;
		}
		uVar2 = (pUVar6.zeroVector).x;
		uVar4 = (pUVar6.zeroVector).y;
		position.x = fStack_28 * (float)uVar2 + (float)auStack_40._8_4_;
		position.y = fStack_28 * (float)uVar4 + fStack_34;
		position.z = fVar11 * fStack_28 + spherePosition.z;
		return;
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x31A71D0", Offset = "0x31A61D0", VA = "0x31A71D0")]
	public static void PointInsideSphere(ref Vector3 position, SphereCollider collider, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere): 25 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		byte[] auVar6 = new byte[16];
		Transform __this;
		UnityEngine_Vector3_StaticFields pUVar7;
		float fVar8;
		uint uVar9;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar10;
		byte[] auVar11 = new byte[16];
		Vector3 UVar12;
		Vector3 UStack_40;
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		byte[] auStack_28 = new byte[8];
		float fStack_20;
		float fStack_1c;

		if (collider != null) {
			__this = collider.transform;
			UVar12 = collider.center;
			if (__this != null) {
				UVar12 = __this.TransformPoint(UVar12);
				fStack_20 = (float)extraout_XMM0_Dc;
				auStack_28 = (byte[])UVar12._0_8_;
				fStack_1c = (float)extraout_XMM0_Dd;
				fVar8 = collider.radius;
				fVar1 = position.x;
				fVar3 = position.y;
				fStack_30 = 0.0;
				fStack_2c = 0.0;
				fVar10 = position.z;
				if (Il2CppMethodInitialized_0753e729 == false) {
					fStack_30 = 0.0;
					fStack_2c = 0.0;
					UStack_40.z = fVar1;
					fStack_34 = fVar3;
					Il2CppMethodInitialized_0753e729 = true;
					fVar1 = UStack_40.z;
					fVar3 = fStack_34;
				}
				fVar10 = fVar10 - UVar12.z;
				UStack_40.z = fVar1 - (float)auStack_28._0_4_;
				fStack_34 = fVar3 - (float)auStack_28._4_4_;
				fStack_30 = fStack_30 - fStack_20;
				fStack_2c = fStack_2c - fStack_1c;
				fVar8 = fVar8 - spacing;
				fVar1 = fVar10 * fVar10 + fStack_34 * fStack_34 + UStack_40.z * UStack_40.z;
				if (fVar1 < 0.0) {
					fVar3 = sqrtf(fVar1);
				}
				else {
					fVar3 = SQRT(fVar1);
				}
				if (fVar8 < fVar3) {
					if (Il2CppMethodInitialized_0753e72d == false) {
						Il2CppMethodInitialized_0753e72d = true;
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
					}
					else {
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
					}
					if (Il2CppMethodInitialized_0753e729 == false) {
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
						Il2CppMethodInitialized_0753e729 = true;
						uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						UStack_40.x = 0.0;
						UStack_40.y = 0.0;
						uVar5 = *(uint)((long)typeof(Math) + 0xe4);
					}
					if (uVar5 == 0) {
					}
					else {
					}
					if (0.0 <= fVar1) {
						uVar9 = 0;
						fVar1 = SQRT(fVar1);
					}
					else {
						fVar1 = sqrtf(fVar1);
						uVar9 = extraout_XMM0_Db;
					}
					if (fVar1 <= 1e-05) {
						pUVar7 = typeof(Vector3).static_fields;
						fVar10 = (pUVar7.zeroVector).z;
					}
					else {
						fVar10 = fVar10 / fVar1;
						auVar6._4_4_ = fStack_34;
						auVar6._0_4_ = UStack_40.z;
						auVar6._8_4_ = fStack_30;
						auVar6._12_4_ = fStack_2c;
						auVar11._4_4_ = fVar1;
						auVar11._0_4_ = fVar1;
						auVar11._8_4_ = uVar9;
						auVar11._12_4_ = uVar9;
						auVar11 = divps(auVar6, auVar11);
						UStack_40.x = auVar11._0_4_;
						UStack_40.y = auVar11._4_4_;
						pUVar7 = (UnityEngine_Vector3_StaticFields)&UStack_40;
					}
					uVar2 = (pUVar7.zeroVector).x;
					uVar4 = (pUVar7.zeroVector).y;
					position.x = (float)auStack_28._0_4_ + fVar8 * (float)uVar2;
					position.y = (float)auStack_28._4_4_ + fVar8 * (float)uVar4;
					position.z = UVar12.z + fVar10 * fVar8;
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x31A8E90", Offset = "0x31A7E90", VA = "0x31A8E90")]
	private static void PointInsideSphere(ref Vector3 position, Vector3 spherePosition, float radius)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideSphere): 31 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		float fVar7;
		uint uVar8;
		uint extraout_XMM0_Db;
		float in_XMM0_Dc;
		float in_XMM0_Dd;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		byte[] auStack_40 = new byte[12];
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		float fStack_28;

		fStack_28 = radius;
		uVar1 = position.x;
		uVar3 = position.y;
		fVar11 = position.z;
		fStack_30 = in_XMM0_Dc;
		fStack_2c = in_XMM0_Dd;
		fVar13 = spherePosition.x;
		fVar14 = spherePosition.y;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			fVar13 = (float)auStack_40._8_4_;
			fVar14 = fStack_34;
			in_XMM0_Dc = fStack_30;
			in_XMM0_Dd = fStack_2c;
		}
		fVar13 = (float)uVar1 - fVar13;
		fVar14 = (float)uVar3 - fVar14;
		fVar11 = fVar11 - spherePosition.z;
		fVar12 = fVar11 * fVar11 + fVar14 * fVar14 + fVar13 * fVar13;
		if (fVar12 < 0.0) {
			fVar7 = sqrtf(fVar12);
			if (fVar7 <= fStack_28) {
				return;
			}
		}
		else if (SQRT(fVar12) <= fStack_28) {
			return;
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
		}
		else {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
			uVar5 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		else {
		}
		if (0.0 <= fVar12) {
			uVar8 = 0;
			fVar12 = SQRT(fVar12);
		}
		else {
			fVar12 = sqrtf(fVar12);
			uVar8 = extraout_XMM0_Db;
		}
		if (1e-05 < fVar12) {
			auVar9._4_4_ = fVar14;
			auVar9._0_4_ = fVar13;
			auVar9._8_4_ = 0.0 - in_XMM0_Dc;
			auVar9._12_4_ = 0.0 - in_XMM0_Dd;
			fVar11 = fVar11 / fVar12;
			auVar10._4_4_ = fVar12;
			auVar10._0_4_ = fVar12;
			auVar10._8_4_ = uVar8;
			auVar10._12_4_ = uVar8;
			auVar10 = divps(auVar9, auVar10);
			auStack_40._0_4_ = auVar10._0_4_;
			auStack_40._4_4_ = auVar10._4_4_;
			pUVar6 = (UnityEngine_Vector3_StaticFields)auStack_40;
		}
		else {
			pUVar6 = typeof(Vector3).static_fields;
			fVar11 = (pUVar6.zeroVector).z;
		}
		uVar2 = (pUVar6.zeroVector).x;
		uVar4 = (pUVar6.zeroVector).y;
		position.x = fStack_28 * (float)uVar2 + (float)auStack_40._8_4_;
		position.y = fStack_28 * (float)uVar4 + fStack_34;
		position.z = fVar11 * fStack_28 + spherePosition.z;
		return;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x31A77C0", Offset = "0x31A67C0", VA = "0x31A77C0")]
	public static void PointOutsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule): 2 lines keep C-only constructs
		Vector3 center1;
		Vector3 center0;
		MethodInfo method_00;
		float local_30;
		float local_2c;
		Vector3 local_28;
		Il2CppMethodPointer local_18;
		float local_10;

		local_10 = 0.0;
		local_18 = (Il2CppMethodPointer)0x0;
		local_28.z = 0.0;
		local_28.x = 0.0;
		local_28.y = 0.0;
		local_30 = 0.0;
		method_00 = (MethodInfo)&local_18;
		local_2c = spacing;
		EZSoftBoneUtility.GetCapsuleParams(collider, (Vector3)method_00, ref local_28, ref local_30);
		center0.z = local_10;
		center0._0_8_ = local_18;
		center1.z = local_28.z;
		center1.x = local_28.x;
		center1.y = local_28.y;
		EZSoftBoneUtility.PointOutsideCapsule(position, center0, center1, local_2c + local_30);
		return;
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x31A90C0", Offset = "0x31A80C0", VA = "0x31A90C0")]
	private static void PointOutsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCapsule): 100 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		float fVar17;
		UnityEngine_Vector3_StaticFields pUVar18;
		uint uVar19;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		float in_XMM0_Dc;
		float in_XMM0_Dd;
		byte[] auVar20 = new byte[16];
		byte[] auVar21 = new byte[16];
		byte[] auVar22 = new byte[16];
		byte[] auVar23 = new byte[16];
		byte[] auVar24 = new byte[4];
		float in_XMM3_Db;
		float in_XMM3_Dc;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		float fVar30;
		byte[] auVar31 = new byte[4];
		float fVar32;
		float fVar33;
		byte[] auVar34 = new byte[4];
		float fVar35;
		float fVar36;
		float fVar37;
		Vector3 local_60;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		byte[] local_48 = new byte[4];
		byte[] auStack_44 = new byte[8];
		byte[] local_38 = new byte[4];
		byte[] auStack_34 = new byte[12];
		float local_28;
		float local_14;

		auVar24 = (byte[])center1.z;
		auVar22._8_8_ = center1._8_8_;
		auVar22._0_8_ = center1._0_8_;
		local_60.z = center0.z;
		local_28 = radius;
		fVar25 = center1.x - center0.x;
		fVar26 = center1.y - center0.y;
		fVar27 = center1.z - in_XMM0_Dc;
		fVar29 = center1._12_4_ - in_XMM0_Dd;
		auVar31 = (byte[])((float)auVar24 - local_60.z);
		uVar1 = position.x;
		uVar7 = position.y;
		fVar33 = position.z;
		_local_38 = center0._0_8_;
		auVar21 = _local_38;
		fVar36 = (float)uVar1 - center0.x;
		fVar37 = (float)uVar7 - center0.y;
		fVar35 = fVar33 - local_60.z;
		auVar34 = (byte[])((float)auVar31 * fVar35 + fVar26 * fVar37 + fVar25 * fVar36);
		if (0.0 < (float)auVar34) {
			fVar32 = (float)auVar31 * (float)auVar31 + fVar26 * fVar26 + fVar25 * fVar25;
			if (fVar32 <= (float)auVar34) {
				local_38 = auVar24;
				local_60.z = fVar33;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					auVar24 = local_38;
				}
				fVar25 = (float)uVar1 - local_48;
				fVar26 = (float)uVar7 - local_48._4_4_;
				fVar33 = local_48._8_4_;
				fVar35 = local_48._12_4_;
				local_60.z = local_60.z - (float)auVar24;
				fVar27 = local_60.z * local_60.z + fVar26 * fVar26 + fVar25 * fVar25;
				if (fVar27 < 0.0) {
					fVar29 = sqrtf(fVar27);
					if (local_28 <= fVar29) {
						return;
					}
				}
				else if (local_28 <= SQRT(fVar27)) {
					return;
				}
				if (Il2CppMethodInitialized_0753e72d == false) {
					Il2CppMethodInitialized_0753e72d = true;
					local_60.x = 0.0;
					local_60.y = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) goto label_032a97b9;
	label_032a9581: ;
					local_60.x = 0.0;
					local_60.y = 0.0;
					if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_032a9591;
	label_032a97e3: ;
					if (fVar27 < 0.0) goto label_032a97fc;
	label_032a959e: ;
					uVar19 = 0;
					fVar27 = SQRT(fVar27);
				}
				else {
					local_60.x = 0.0;
					local_60.y = 0.0;
					if (Il2CppMethodInitialized_0753e729 != false) goto label_032a9581;
	label_032a97b9: ;
					local_60.x = 0.0;
					local_60.y = 0.0;
					Il2CppMethodInitialized_0753e729 = true;
					if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_032a97e3;
	label_032a9591: ;
					if (0.0 <= fVar27) goto label_032a959e;
	label_032a97fc: ;
					fVar27 = sqrtf(fVar27);
					uVar19 = extraout_XMM0_Db_01;
				}
				auVar21._4_4_ = fVar26;
				auVar21._0_4_ = fVar25;
				auVar21._8_4_ = 0.0 - fVar33;
				auVar21._12_4_ = 0.0 - fVar35;
				if (fVar27 <= 1e-05) {
					pUVar18 = typeof(Vector3).static_fields;
					local_60.z = (pUVar18.zeroVector).z;
				}
				else {
					local_60.z = local_60.z / fVar27;
					auVar15._4_4_ = fVar27;
					auVar15._0_4_ = fVar27;
					auVar15._8_4_ = uVar19;
					auVar15._12_4_ = uVar19;
					auVar21 = divps(auVar21, auVar15);
					local_60.x = auVar21._0_4_;
					local_60.y = auVar21._4_4_;
					pUVar18 = (UnityEngine_Vector3_StaticFields)&local_60;
				}
				uVar6 = (pUVar18.zeroVector).x;
				uVar12 = (pUVar18.zeroVector).y;
				fVar33 = local_28 * (float)uVar6 + (float)local_48;
				fVar25 = local_28 * (float)uVar12 + (float)auStack_44._0_4_;
				local_60.z = local_60.z * local_28 + (float)local_38;
				goto label_032a986d;
			}
			if (g_data_0753e81c == false) {
				local_38 = auVar31;
				auStack_44._0_4_ = in_XMM3_Db;
				local_48 = auVar34;
				auStack_44._4_4_ = in_XMM3_Dc;
				local_60.z = fVar25;
				fStack_54 = fVar26;
				fStack_50 = fVar27;
				fStack_4c = fVar29;
				local_14 = fVar32;
				g_data_0753e81c = true;
				fVar25 = local_60.z;
				fVar26 = fStack_54;
				fVar27 = fStack_50;
				fVar29 = fStack_4c;
				auVar31 = local_38;
				fVar32 = local_14;
				auVar34 = local_48;
				auVar21 = _local_38;
			}
			_local_38 = auVar21;
			if (Mathf.Epsilon <= fVar32) {
				fVar32 = (float)auVar34 / fVar32;
				auVar31 = (byte[])((float)auVar31 * fVar32);
				fVar28 = fVar25 * fVar32;
				fVar30 = fVar26 * fVar32;
				fVar17 = fVar27 * fVar32;
				fVar29 = fVar29 * fVar32;
				fVar33 = local_60.z;
				fVar25 = fStack_54;
				fVar26 = fStack_50;
				fVar27 = fStack_4c;
			}
			else {
				pUVar18 = typeof(Vector3).static_fields;
				uVar2 = (pUVar18.zeroVector).x;
				uVar8 = (pUVar18.zeroVector).y;
				auVar31 = (byte[])(pUVar18.zeroVector).z;
				fVar28 = (float)uVar2;
				fVar30 = (float)uVar8;
				fVar17 = 0.0;
				fVar29 = 0.0;
				fVar33 = local_60.z;
				fVar25 = fStack_54;
				fVar26 = fStack_50;
				fVar27 = fStack_4c;
			}
			fStack_4c = fVar29;
			fStack_50 = fVar17;
			fStack_54 = fVar30;
			local_60.z = fVar28;
			fVar29 = local_60.z;
			fVar32 = fStack_54;
			fVar28 = fStack_50;
			fVar30 = fStack_4c;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_38 = auVar31;
				Il2CppMethodInitialized_0753e729 = true;
				fVar29 = local_60.z;
				fVar32 = fStack_54;
				fVar28 = fStack_50;
				fVar30 = fStack_4c;
				auVar31 = local_38;
				fVar33 = local_60.z;
				fVar25 = fStack_54;
				fVar26 = fStack_50;
				fVar27 = fStack_4c;
			}
			fStack_4c = fVar27;
			fStack_50 = fVar26;
			fStack_54 = fVar25;
			local_60.z = fVar33;
			fVar36 = fVar36 - fVar29;
			fVar37 = fVar37 - fVar32;
			fVar35 = fVar35 - (float)auVar31;
			fVar33 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
			local_38 = (byte[])fVar33;
			if (fVar33 < 0.0) {
				fVar33 = sqrtf(fVar33);
				local_28 = local_28 - fVar33;
			}
			else {
				local_28 = local_28 - SQRT(fVar33);
			}
			if (local_28 <= 0.0) {
				return;
			}
			uVar3 = position.x;
			uVar9 = position.y;
			auStack_44._0_4_ = uVar9;
			local_48 = (byte[])uVar3;
			local_60.z = position.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_60.x = 0.0;
				local_60.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_032a98ac;
	label_032a9607: ;
				local_60.x = 0.0;
				local_60.y = 0.0;
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_60.x = 0.0;
				local_60.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_032a9607;
	label_032a98ac: ;
				local_60.x = 0.0;
				local_60.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar13 == 0) {
			}
			uVar19 = 0;
			if ((float)local_38 < 0.0) {
				fVar33 = sqrtf((float)local_38);
				uVar19 = extraout_XMM0_Db_00;
				if (1e-05 < fVar33) goto label_032a9750;
	label_032a9647: ;
				pUVar18 = typeof(Vector3).static_fields;
				fVar35 = (pUVar18.zeroVector).z;
			}
			else {
				fVar33 = SQRT((float)local_38);
				if (fVar33 <= 1e-05) goto label_032a9647;
	label_032a9750: ;
				auVar20._4_4_ = fVar37;
				auVar20._0_4_ = fVar36;
				auVar20._8_4_ = (0.0 - in_XMM0_Dc) - fVar28;
				auVar20._12_4_ = (0.0 - in_XMM0_Dd) - fVar30;
				fVar35 = fVar35 / fVar33;
				auVar14._4_4_ = fVar33;
				auVar14._0_4_ = fVar33;
				auVar14._8_4_ = uVar19;
				auVar14._12_4_ = uVar19;
				auVar21 = divps(auVar20, auVar14);
				local_60.x = auVar21._0_4_;
				local_60.y = auVar21._4_4_;
				pUVar18 = (UnityEngine_Vector3_StaticFields)&local_60;
			}
			uVar5 = (pUVar18.zeroVector).x;
			uVar11 = (pUVar18.zeroVector).y;
			local_60.z = local_60.z + fVar35 * local_28;
			fVar33 = local_28 * (float)uVar5 + (float)local_48;
			fVar25 = local_28 * (float)uVar11 + (float)auStack_44._0_4_;
			goto label_032a986d;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar13 == 0) {
		}
		local_48 = (byte[])(fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36);
		if ((float)local_48 < 0.0) {
			fVar33 = sqrtf((float)local_48);
			auVar31 = local_48;
			if (local_28 <= fVar33) {
				return;
			}
		}
		else {
			auVar31 = local_48;
			if (local_28 <= SQRT((float)local_48)) {
				return;
			}
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_60.x = 0.0;
			local_60.y = 0.0;
			auVar31 = local_48;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_032a9691;
	label_032a93bd: ;
			local_60.x = 0.0;
			local_60.y = 0.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_032a93cd;
	label_032a96ba: ;
			auVar31 = local_48;
			if ((float)local_48 < 0.0) goto label_032a96d1;
	label_032a93d9: ;
			uVar19 = 0;
			fVar33 = SQRT((float)auVar31);
			if (fVar33 <= 1e-05) goto label_032a93f7;
	label_032a96f0: ;
			auVar23._4_4_ = fVar37;
			auVar23._0_4_ = fVar36;
			auVar23._8_4_ = 0.0 - in_XMM0_Dc;
			auVar23._12_4_ = 0.0 - in_XMM0_Dd;
			fVar35 = fVar35 / fVar33;
			auVar16._4_4_ = fVar33;
			auVar16._0_4_ = fVar33;
			auVar16._8_4_ = uVar19;
			auVar16._12_4_ = uVar19;
			auVar21 = divps(auVar23, auVar16);
			local_60.x = auVar21._0_4_;
			local_60.y = auVar21._4_4_;
			pUVar18 = (UnityEngine_Vector3_StaticFields)&local_60;
		}
		else {
			local_60.x = 0.0;
			local_60.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_032a93bd;
	label_032a9691: ;
			local_60.x = 0.0;
			local_60.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			auVar31 = local_48;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_032a96ba;
	label_032a93cd: ;
			if (0.0 <= (float)auVar31) goto label_032a93d9;
	label_032a96d1: ;
			fVar33 = sqrtf((float)auVar31);
			uVar19 = extraout_XMM0_Db;
			if (1e-05 < fVar33) goto label_032a96f0;
	label_032a93f7: ;
			pUVar18 = typeof(Vector3).static_fields;
			fVar35 = (pUVar18.zeroVector).z;
		}
		uVar4 = (pUVar18.zeroVector).x;
		uVar10 = (pUVar18.zeroVector).y;
		fVar33 = local_28 * (float)uVar4 + (float)local_38;
		fVar25 = local_28 * (float)uVar10 + (float)auStack_34._0_4_;
		local_60.z = fVar35 * local_28 + local_60.z;
	label_032a986d: ;
		position.x = fVar33;
		position.y = fVar25;
		position.z = local_60.z;
		return;
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x31A7730", Offset = "0x31A6730", VA = "0x31A7730")]
	public static void PointInsideCapsule(ref Vector3 position, CapsuleCollider collider, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule): 2 lines keep C-only constructs
		Vector3 center1;
		Vector3 center0;
		MethodInfo method_00;
		float local_30;
		float local_2c;
		Vector3 local_28;
		Il2CppMethodPointer local_18;
		float local_10;

		local_10 = 0.0;
		local_18 = (Il2CppMethodPointer)0x0;
		local_28.z = 0.0;
		local_28.x = 0.0;
		local_28.y = 0.0;
		local_30 = 0.0;
		method_00 = (MethodInfo)&local_18;
		local_2c = spacing;
		EZSoftBoneUtility.GetCapsuleParams(collider, (Vector3)method_00, ref local_28, ref local_30);
		center0.z = local_10;
		center0._0_8_ = local_18;
		center1.z = local_28.z;
		center1.x = local_28.x;
		center1.y = local_28.y;
		EZSoftBoneUtility.PointInsideCapsule(position, center0, center1, local_30 - local_2c);
		return;
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x31A98F0", Offset = "0x31A88F0", VA = "0x31A98F0")]
	private static void PointInsideCapsule(ref Vector3 position, Vector3 center0, Vector3 center1, float radius)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCapsule): 100 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		float fVar17;
		UnityEngine_Vector3_StaticFields pUVar18;
		uint uVar19;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		float in_XMM0_Dc;
		float in_XMM0_Dd;
		byte[] auVar20 = new byte[16];
		byte[] auVar21 = new byte[16];
		byte[] auVar22 = new byte[16];
		byte[] auVar23 = new byte[16];
		byte[] auVar24 = new byte[4];
		float in_XMM3_Db;
		float in_XMM3_Dc;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		float fVar30;
		byte[] auVar31 = new byte[4];
		float fVar32;
		float fVar33;
		byte[] auVar34 = new byte[4];
		float fVar35;
		float fVar36;
		float fVar37;
		Vector3 local_60;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		byte[] local_48 = new byte[4];
		byte[] auStack_44 = new byte[8];
		byte[] local_38 = new byte[4];
		byte[] auStack_34 = new byte[12];
		float local_28;
		float local_14;

		auVar24 = (byte[])center1.z;
		auVar22._8_8_ = center1._8_8_;
		auVar22._0_8_ = center1._0_8_;
		local_60.z = center0.z;
		local_28 = radius;
		fVar25 = center1.x - center0.x;
		fVar26 = center1.y - center0.y;
		fVar27 = center1.z - in_XMM0_Dc;
		fVar29 = center1._12_4_ - in_XMM0_Dd;
		auVar31 = (byte[])((float)auVar24 - local_60.z);
		uVar1 = position.x;
		uVar7 = position.y;
		fVar33 = position.z;
		_local_38 = center0._0_8_;
		auVar21 = _local_38;
		fVar36 = (float)uVar1 - center0.x;
		fVar37 = (float)uVar7 - center0.y;
		fVar35 = fVar33 - local_60.z;
		auVar34 = (byte[])((float)auVar31 * fVar35 + fVar26 * fVar37 + fVar25 * fVar36);
		if (0.0 < (float)auVar34) {
			fVar32 = (float)auVar31 * (float)auVar31 + fVar26 * fVar26 + fVar25 * fVar25;
			if (fVar32 <= (float)auVar34) {
				local_38 = auVar24;
				local_60.z = fVar33;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					auVar24 = local_38;
				}
				fVar25 = (float)uVar1 - local_48;
				fVar26 = (float)uVar7 - local_48._4_4_;
				fVar33 = local_48._8_4_;
				fVar35 = local_48._12_4_;
				local_60.z = local_60.z - (float)auVar24;
				fVar27 = local_60.z * local_60.z + fVar26 * fVar26 + fVar25 * fVar25;
				if (fVar27 < 0.0) {
					fVar29 = sqrtf(fVar27);
					if (fVar29 <= local_28) {
						return;
					}
				}
				else if (SQRT(fVar27) <= local_28) {
					return;
				}
				if (Il2CppMethodInitialized_0753e72d == false) {
					Il2CppMethodInitialized_0753e72d = true;
					local_60.x = 0.0;
					local_60.y = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) goto label_032a9fdd;
	label_032a9da5: ;
					local_60.x = 0.0;
					local_60.y = 0.0;
					if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_032a9db5;
	label_032aa007: ;
					if (fVar27 < 0.0) goto label_032aa020;
	label_032a9dc2: ;
					uVar19 = 0;
					fVar27 = SQRT(fVar27);
				}
				else {
					local_60.x = 0.0;
					local_60.y = 0.0;
					if (Il2CppMethodInitialized_0753e729 != false) goto label_032a9da5;
	label_032a9fdd: ;
					local_60.x = 0.0;
					local_60.y = 0.0;
					Il2CppMethodInitialized_0753e729 = true;
					if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_032aa007;
	label_032a9db5: ;
					if (0.0 <= fVar27) goto label_032a9dc2;
	label_032aa020: ;
					fVar27 = sqrtf(fVar27);
					uVar19 = extraout_XMM0_Db_01;
				}
				auVar21._4_4_ = fVar26;
				auVar21._0_4_ = fVar25;
				auVar21._8_4_ = 0.0 - fVar33;
				auVar21._12_4_ = 0.0 - fVar35;
				if (fVar27 <= 1e-05) {
					pUVar18 = typeof(Vector3).static_fields;
					local_60.z = (pUVar18.zeroVector).z;
				}
				else {
					local_60.z = local_60.z / fVar27;
					auVar15._4_4_ = fVar27;
					auVar15._0_4_ = fVar27;
					auVar15._8_4_ = uVar19;
					auVar15._12_4_ = uVar19;
					auVar21 = divps(auVar21, auVar15);
					local_60.x = auVar21._0_4_;
					local_60.y = auVar21._4_4_;
					pUVar18 = (UnityEngine_Vector3_StaticFields)&local_60;
				}
				uVar6 = (pUVar18.zeroVector).x;
				uVar12 = (pUVar18.zeroVector).y;
				fVar33 = local_28 * (float)uVar6 + (float)local_48;
				fVar25 = local_28 * (float)uVar12 + (float)auStack_44._0_4_;
				local_60.z = local_60.z * local_28 + (float)local_38;
				goto label_032aa091;
			}
			if (g_data_0753e81c == false) {
				local_38 = auVar31;
				auStack_44._0_4_ = in_XMM3_Db;
				local_48 = auVar34;
				auStack_44._4_4_ = in_XMM3_Dc;
				local_60.z = fVar25;
				fStack_54 = fVar26;
				fStack_50 = fVar27;
				fStack_4c = fVar29;
				local_14 = fVar32;
				g_data_0753e81c = true;
				fVar25 = local_60.z;
				fVar26 = fStack_54;
				fVar27 = fStack_50;
				fVar29 = fStack_4c;
				auVar31 = local_38;
				fVar32 = local_14;
				auVar34 = local_48;
				auVar21 = _local_38;
			}
			_local_38 = auVar21;
			if (Mathf.Epsilon <= fVar32) {
				fVar32 = (float)auVar34 / fVar32;
				auVar31 = (byte[])((float)auVar31 * fVar32);
				fVar28 = fVar25 * fVar32;
				fVar30 = fVar26 * fVar32;
				fVar17 = fVar27 * fVar32;
				fVar29 = fVar29 * fVar32;
				fVar33 = local_60.z;
				fVar25 = fStack_54;
				fVar26 = fStack_50;
				fVar27 = fStack_4c;
			}
			else {
				pUVar18 = typeof(Vector3).static_fields;
				uVar2 = (pUVar18.zeroVector).x;
				uVar8 = (pUVar18.zeroVector).y;
				auVar31 = (byte[])(pUVar18.zeroVector).z;
				fVar28 = (float)uVar2;
				fVar30 = (float)uVar8;
				fVar17 = 0.0;
				fVar29 = 0.0;
				fVar33 = local_60.z;
				fVar25 = fStack_54;
				fVar26 = fStack_50;
				fVar27 = fStack_4c;
			}
			fStack_4c = fVar29;
			fStack_50 = fVar17;
			fStack_54 = fVar30;
			local_60.z = fVar28;
			fVar29 = local_60.z;
			fVar32 = fStack_54;
			fVar28 = fStack_50;
			fVar30 = fStack_4c;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_38 = auVar31;
				Il2CppMethodInitialized_0753e729 = true;
				fVar29 = local_60.z;
				fVar32 = fStack_54;
				fVar28 = fStack_50;
				fVar30 = fStack_4c;
				auVar31 = local_38;
				fVar33 = local_60.z;
				fVar25 = fStack_54;
				fVar26 = fStack_50;
				fVar27 = fStack_4c;
			}
			fStack_4c = fVar27;
			fStack_50 = fVar26;
			fStack_54 = fVar25;
			local_60.z = fVar33;
			fVar36 = fVar36 - fVar29;
			fVar37 = fVar37 - fVar32;
			fVar35 = fVar35 - (float)auVar31;
			fVar33 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
			local_38 = (byte[])fVar33;
			if (fVar33 < 0.0) {
				fVar33 = sqrtf(fVar33);
				local_28 = local_28 - fVar33;
			}
			else {
				local_28 = local_28 - SQRT(fVar33);
			}
			if (0.0 <= local_28) {
				return;
			}
			uVar3 = position.x;
			uVar9 = position.y;
			auStack_44._0_4_ = uVar9;
			local_48 = (byte[])uVar3;
			local_60.z = position.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_60.x = 0.0;
				local_60.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_032aa0d0;
	label_032a9e2b: ;
				local_60.x = 0.0;
				local_60.y = 0.0;
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_60.x = 0.0;
				local_60.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_032a9e2b;
	label_032aa0d0: ;
				local_60.x = 0.0;
				local_60.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar13 == 0) {
			}
			uVar19 = 0;
			if ((float)local_38 < 0.0) {
				fVar33 = sqrtf((float)local_38);
				uVar19 = extraout_XMM0_Db_00;
				if (1e-05 < fVar33) goto label_032a9f74;
	label_032a9e6b: ;
				pUVar18 = typeof(Vector3).static_fields;
				fVar35 = (pUVar18.zeroVector).z;
			}
			else {
				fVar33 = SQRT((float)local_38);
				if (fVar33 <= 1e-05) goto label_032a9e6b;
	label_032a9f74: ;
				auVar20._4_4_ = fVar37;
				auVar20._0_4_ = fVar36;
				auVar20._8_4_ = (0.0 - in_XMM0_Dc) - fVar28;
				auVar20._12_4_ = (0.0 - in_XMM0_Dd) - fVar30;
				fVar35 = fVar35 / fVar33;
				auVar14._4_4_ = fVar33;
				auVar14._0_4_ = fVar33;
				auVar14._8_4_ = uVar19;
				auVar14._12_4_ = uVar19;
				auVar21 = divps(auVar20, auVar14);
				local_60.x = auVar21._0_4_;
				local_60.y = auVar21._4_4_;
				pUVar18 = (UnityEngine_Vector3_StaticFields)&local_60;
			}
			uVar5 = (pUVar18.zeroVector).x;
			uVar11 = (pUVar18.zeroVector).y;
			local_60.z = local_60.z + fVar35 * local_28;
			fVar33 = local_28 * (float)uVar5 + (float)local_48;
			fVar25 = local_28 * (float)uVar11 + (float)auStack_44._0_4_;
			goto label_032aa091;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar13 == 0) {
		}
		local_48 = (byte[])(fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36);
		if ((float)local_48 < 0.0) {
			fVar33 = sqrtf((float)local_48);
			auVar31 = local_48;
			if (fVar33 <= local_28) {
				return;
			}
		}
		else {
			auVar31 = local_48;
			if (SQRT((float)local_48) <= local_28) {
				return;
			}
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_60.x = 0.0;
			local_60.y = 0.0;
			auVar31 = local_48;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_032a9eb5;
	label_032a9be4: ;
			local_60.x = 0.0;
			local_60.y = 0.0;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_032a9bf4;
	label_032a9ede: ;
			auVar31 = local_48;
			if ((float)local_48 < 0.0) goto label_032a9ef5;
	label_032a9c00: ;
			uVar19 = 0;
			fVar33 = SQRT((float)auVar31);
			if (fVar33 <= 1e-05) goto label_032a9c1e;
	label_032a9f14: ;
			auVar23._4_4_ = fVar37;
			auVar23._0_4_ = fVar36;
			auVar23._8_4_ = 0.0 - in_XMM0_Dc;
			auVar23._12_4_ = 0.0 - in_XMM0_Dd;
			fVar35 = fVar35 / fVar33;
			auVar16._4_4_ = fVar33;
			auVar16._0_4_ = fVar33;
			auVar16._8_4_ = uVar19;
			auVar16._12_4_ = uVar19;
			auVar21 = divps(auVar23, auVar16);
			local_60.x = auVar21._0_4_;
			local_60.y = auVar21._4_4_;
			pUVar18 = (UnityEngine_Vector3_StaticFields)&local_60;
		}
		else {
			local_60.x = 0.0;
			local_60.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_032a9be4;
	label_032a9eb5: ;
			local_60.x = 0.0;
			local_60.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			auVar31 = local_48;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_032a9ede;
	label_032a9bf4: ;
			if (0.0 <= (float)auVar31) goto label_032a9c00;
	label_032a9ef5: ;
			fVar33 = sqrtf((float)auVar31);
			uVar19 = extraout_XMM0_Db;
			if (1e-05 < fVar33) goto label_032a9f14;
	label_032a9c1e: ;
			pUVar18 = typeof(Vector3).static_fields;
			fVar35 = (pUVar18.zeroVector).z;
		}
		uVar4 = (pUVar18.zeroVector).x;
		uVar10 = (pUVar18.zeroVector).y;
		fVar33 = local_28 * (float)uVar4 + (float)local_38;
		fVar25 = local_28 * (float)uVar10 + (float)auStack_34._0_4_;
		local_60.z = fVar35 * local_28 + local_60.z;
	label_032aa091: ;
		position.x = fVar33;
		position.y = fVar25;
		position.z = local_60.z;
		return;
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x31A82A0", Offset = "0x31A72A0", VA = "0x31A82A0")]
	public static void PointOutsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder): clean
		float fVar1;
		Vector3 UVar2;
		Vector3 center;
		Vector3 direction;

		if (transform == null) {
			throw new NullReferenceException();
		}
		UVar2 = transform.lossyScale;
		center = transform.position;
		direction = transform.up;
		fVar1 = ABS(UVar2.x);
		if (ABS(UVar2.x) <= ABS(UVar2.z)) {
			fVar1 = ABS(UVar2.z);
		}
		EZSoftBoneUtility.PointOutsideCylinder(position, center, direction, fVar1 * 0.5 + spacing, ABS(UVar2.y) + spacing);
		return;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x31AA110", Offset = "0x31A9110", VA = "0x31AA110")]
	private static void PointOutsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCylinder): 71 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar4;
		uint uVar5;
		ulong uVar3;
		uint uVar6;
		byte[] auVar7 = new byte[16];
		byte[] auVar8 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar9;
		float fVar10;
		float fVar11;
		uint extraout_XMM0_Db;
		uint uVar12;
		uint extraout_XMM0_Db_00;
		float in_XMM0_Dc;
		float in_XMM0_Dd;
		byte[] auVar13 = new byte[16];
		float in_XMM2_Dc;
		float in_XMM2_Dd;
		float fVar14;
		float fVar15;
		float in_XMM4_Db;
		float in_XMM4_Dc;
		float in_XMM4_Dd;
		float fVar16;
		float in_XMM5_Db;
		float fVar17;
		float in_XMM5_Dc;
		float in_XMM5_Dd;
		UnityEngine_Vector3_StaticFields UStack_98;

		fVar1 = position.x;
		fVar4 = position.y;
		UStack_98.leftVector.z = 0.0;
		UStack_98.rightVector.x = 0.0;
		fVar15 = position.z;
		fVar10 = center.x;
		fVar11 = center.y;
		fVar14 = direction.z;
		fVar16 = direction.x;
		fVar17 = direction.y;
		UStack_98.rightVector.y = height;
		UStack_98.rightVector.z = in_XMM5_Db;
		UStack_98.forwardVector.x = in_XMM5_Dc;
		UStack_98.forwardVector.y = in_XMM5_Dd;
		UStack_98.forwardVector.z = radius;
		UStack_98.backVector.x = in_XMM4_Db;
		UStack_98.backVector.y = in_XMM4_Dc;
		UStack_98.backVector.z = in_XMM4_Dd;
		if (g_data_0753e81c == false) {
			UStack_98.leftVector.z = 0.0;
			UStack_98.rightVector.x = 0.0;
			UStack_98.upVector.z = direction.z;
			UStack_98.upVector.x = in_XMM2_Dc;
			UStack_98.oneVector._4_8_ = direction._0_8_;
			UStack_98.upVector.y = in_XMM2_Dd;
			UStack_98.positiveInfinityVector.z = in_XMM0_Dc;
			UStack_98.positiveInfinityVector._0_8_ = center._0_8_;
			UStack_98.negativeInfinityVector.x = in_XMM0_Dd;
			UStack_98.leftVector.x = fVar1;
			UStack_98.leftVector.y = fVar4;
			g_data_0753e81c = true;
			fVar10 = UStack_98.positiveInfinityVector.x;
			fVar11 = UStack_98.positiveInfinityVector.y;
			in_XMM0_Dc = UStack_98.positiveInfinityVector.z;
			in_XMM0_Dd = UStack_98.negativeInfinityVector.x;
			fVar1 = UStack_98.leftVector.x;
			fVar4 = UStack_98.leftVector.y;
			fVar14 = UStack_98.upVector.z;
			fVar16 = UStack_98.oneVector.y;
			fVar17 = UStack_98.oneVector.z;
			in_XMM2_Dc = UStack_98.upVector.x;
			in_XMM2_Dd = UStack_98.upVector.y;
		}
		UStack_98.leftVector.x = fVar1 - fVar10;
		UStack_98.leftVector.y = fVar4 - fVar11;
		UStack_98.leftVector.z = UStack_98.leftVector.z - in_XMM0_Dc;
		UStack_98.rightVector.x = UStack_98.rightVector.x - in_XMM0_Dd;
		fVar15 = fVar15 - center.z;
		fVar1 = fVar14 * fVar14 + fVar17 * fVar17 + fVar16 * fVar16;
		if (Mathf.Epsilon <= fVar1) {
			fVar1 = (fVar15 * fVar14 + UStack_98.leftVector.y * fVar17 + UStack_98.leftVector.x * fVar16 ) / fVar1;
			UStack_98.oneVector.z = fVar1 * fVar17;
			UStack_98.oneVector.y = fVar1 * fVar16;
			UStack_98.upVector.x = fVar1 * in_XMM2_Dc;
			UStack_98.upVector.y = fVar1 * in_XMM2_Dd;
			auVar13 = ZEXT416((uint)(fVar1 * fVar14));
			UStack_98.upVector.z = (float)auVar13._0_4_;
			UStack_98.downVector.x = (float)auVar13._4_4_;
			UStack_98.downVector.y = (float)auVar13._8_4_;
			UStack_98.downVector.z = (float)auVar13._12_4_;
		}
		else {
			pUVar9 = typeof(Vector3).static_fields;
			uVar2 = (pUVar9.zeroVector).x;
			uVar5 = (pUVar9.zeroVector).y;
			UStack_98.oneVector.z = (float)uVar5;
			UStack_98.oneVector.y = (float)uVar2;
			UStack_98.upVector.x = 0.0;
			UStack_98.upVector.y = 0.0;
			auVar13 = ZEXT416((uint)(pUVar9.zeroVector).z);
			UStack_98.upVector.z = (float)auVar13._0_4_;
			UStack_98.downVector.x = (float)auVar13._4_4_;
			UStack_98.downVector.y = (float)auVar13._8_4_;
			UStack_98.downVector.z = (float)auVar13._12_4_;
		}
		fVar1 = UStack_98.upVector.z * UStack_98.upVector.z + UStack_98.oneVector.z * UStack_98.oneVector.z + UStack_98.oneVector.y * UStack_98.oneVector.y;
		if (fVar1 < 0.0) {
			fVar4 = sqrtf(fVar1);
			UStack_98.rightVector.y = UStack_98.rightVector.y - fVar4;
		}
		else {
			UStack_98.rightVector.y = UStack_98.rightVector.y - SQRT(fVar1);
		}
		if (UStack_98.rightVector.y <= 0.0) {
			return;
		}
		fVar15 = fVar15 - UStack_98.upVector.z;
		UStack_98.leftVector.x = UStack_98.leftVector.x - UStack_98.oneVector.y;
		UStack_98.leftVector.y = UStack_98.leftVector.y - UStack_98.oneVector.z;
		UStack_98.leftVector.z = UStack_98.leftVector.z - UStack_98.upVector.x;
		UStack_98.rightVector.x = UStack_98.rightVector.x - UStack_98.upVector.y;
		fVar4 = fVar15 * fVar15 + UStack_98.leftVector.y * UStack_98.leftVector.y + UStack_98.leftVector.x * UStack_98.leftVector.x;
		UStack_98.positiveInfinityVector.x = fVar4;
		if (fVar4 < 0.0) {
			fVar4 = sqrtf(fVar4);
		}
		else {
			fVar4 = SQRT(fVar4);
		}
		UStack_98.forwardVector.z = UStack_98.forwardVector.z - fVar4;
		if (UStack_98.forwardVector.z <= 0.0) {
			return;
		}
		UStack_98.negativeInfinityVector.y = position.x;
		UStack_98.negativeInfinityVector.z = position.y;
		UStack_98.oneVector.x = position.z;
		if (UStack_98.rightVector.y <= UStack_98.forwardVector.z) {
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				UStack_98.zeroVector.x = 0.0;
				UStack_98.zeroVector.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_032aa5f4;
	label_032aa473: ;
				UStack_98.zeroVector.x = 0.0;
				UStack_98.zeroVector.y = 0.0;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				UStack_98.zeroVector.x = 0.0;
				UStack_98.zeroVector.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_032aa473;
	label_032aa5f4: ;
				UStack_98.zeroVector.x = 0.0;
				UStack_98.zeroVector.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
			}
			uVar12 = 0;
			if (fVar1 < 0.0) {
				fVar1 = sqrtf(fVar1);
				uVar12 = extraout_XMM0_Db_00;
				if (1e-05 < fVar1) goto label_032aa503;
	label_032aa4a1: ;
				pUVar9 = typeof(Vector3).static_fields;
				fVar15 = (pUVar9.zeroVector).z;
			}
			else {
				fVar1 = SQRT(fVar1);
				if (fVar1 <= 1e-05) goto label_032aa4a1;
	label_032aa503: ;
				fVar15 = UStack_98.upVector.z / fVar1;
				auVar13._4_4_ = fVar1;
				auVar13._0_4_ = fVar1;
				auVar13._8_4_ = uVar12;
				auVar13._12_4_ = uVar12;
				auVar13 = divps((byte[])UStack_98._16_16_, auVar13);
				UStack_98.zeroVector.x = auVar13._0_4_;
				UStack_98.zeroVector.y = auVar13._4_4_;
				pUVar9 = &UStack_98;
			}
			uVar3._0_4_ = (pUVar9.zeroVector).x;
			uVar3._4_4_ = (pUVar9.zeroVector).y;
			UStack_98.forwardVector.z = UStack_98.rightVector.y;
			goto label_032aa52d;
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_98.zeroVector.x = 0.0;
			UStack_98.zeroVector.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_032aa592;
	label_032aa404: ;
			UStack_98.zeroVector.x = 0.0;
			UStack_98.zeroVector.y = 0.0;
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			UStack_98.zeroVector.x = 0.0;
			UStack_98.zeroVector.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_032aa404;
	label_032aa592: ;
			UStack_98.zeroVector.x = 0.0;
			UStack_98.zeroVector.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar6 == 0) {
		}
		uVar12 = 0;
		if (UStack_98.positiveInfinityVector.x < 0.0) {
			UStack_98.positiveInfinityVector.x = sqrtf(UStack_98.positiveInfinityVector.x);
			uVar12 = extraout_XMM0_Db;
			if (1e-05 < UStack_98.positiveInfinityVector.x) goto label_032aa4d1;
	label_032aa43a: ;
			pUVar9 = typeof(Vector3).static_fields;
			fVar15 = (pUVar9.zeroVector).z;
		}
		else {
			UStack_98.positiveInfinityVector.x = SQRT(UStack_98.positiveInfinityVector.x);
			if (UStack_98.positiveInfinityVector.x <= 1e-05) goto label_032aa43a;
	label_032aa4d1: ;
			fVar15 = fVar15 / UStack_98.positiveInfinityVector.x;
			auVar8._4_4_ = UStack_98.leftVector.y;
			auVar8._0_4_ = UStack_98.leftVector.x;
			auVar8._8_4_ = UStack_98.leftVector.z;
			auVar8._12_4_ = UStack_98.rightVector.x;
			auVar7._4_4_ = UStack_98.positiveInfinityVector.x;
			auVar7._0_4_ = UStack_98.positiveInfinityVector.x;
			auVar7._8_4_ = uVar12;
			auVar7._12_4_ = uVar12;
			auVar13 = divps(auVar8, auVar7);
			UStack_98.zeroVector.x = auVar13._0_4_;
			UStack_98.zeroVector.y = auVar13._4_4_;
			pUVar9 = &UStack_98;
		}
		uVar3._0_4_ = (pUVar9.zeroVector).x;
		uVar3._4_4_ = (pUVar9.zeroVector).y;
	label_032aa52d: ;
		position.x = UStack_98.negativeInfinityVector.y + UStack_98.forwardVector.z * (float)uVar3;
		position.y = UStack_98.negativeInfinityVector.z + UStack_98.forwardVector.z * (float)((ulong)uVar3 >> 0x20);
		position.z = UStack_98.oneVector.x + fVar15 * UStack_98.forwardVector.z;
		return;
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x31A81E0", Offset = "0x31A71E0", VA = "0x31A81E0")]
	public static void PointInsideCylinder(ref Vector3 position, Transform transform, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder): clean
		float fVar1;
		Vector3 UVar2;
		Vector3 center;
		Vector3 direction;

		if (transform == null) {
			throw new NullReferenceException();
		}
		UVar2 = transform.lossyScale;
		center = transform.position;
		direction = transform.up;
		fVar1 = ABS(UVar2.x);
		if (ABS(UVar2.x) <= ABS(UVar2.z)) {
			fVar1 = ABS(UVar2.z);
		}
		EZSoftBoneUtility.PointInsideCylinder(position, center, direction, fVar1 * 0.5 - spacing, ABS(UVar2.y) - spacing);
		return;
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x31AA630", Offset = "0x31A9630", VA = "0x31AA630")]
	private static void PointInsideCylinder(ref Vector3 position, Vector3 center, Vector3 direction, float radius, float height)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideCylinder): 66 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		byte[] auVar6 = new byte[16];
		byte[] auVar7 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar8;
		float fVar9;
		float fVar10;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint uVar11;
		float in_XMM0_Dc;
		float in_XMM0_Dd;
		ulong uVar12;
		byte[] auVar13 = new byte[16];
		float fVar14;
		float fVar15;
		float in_XMM2_Dc;
		float in_XMM2_Dd;
		float fVar16;
		float fVar17;
		float in_XMM5_Db;
		float in_XMM5_Dc;
		float in_XMM5_Dd;
		UnityEngine_Vector3_StaticFields UStack_a0;
		ulong uStack_28;

		UStack_a0.upVector.x = radius;
		fVar1 = position.x;
		fVar3 = position.y;
		UStack_a0.oneVector.y = 0.0;
		UStack_a0.oneVector.z = 0.0;
		fVar17 = position.z;
		fVar9 = center.x;
		fVar10 = center.y;
		fVar14 = direction.x;
		fVar15 = direction.y;
		fVar16 = direction.z;
		UStack_a0.backVector.y = height;
		UStack_a0.backVector.z = in_XMM5_Db;
		UStack_a0.positiveInfinityVector.x = in_XMM5_Dc;
		UStack_a0.positiveInfinityVector.y = in_XMM5_Dd;
		if (g_data_0753e81c == false) {
			UStack_a0.oneVector.y = 0.0;
			UStack_a0.oneVector.z = 0.0;
			UStack_a0.forwardVector.x = direction.z;
			UStack_a0.rightVector.y = in_XMM2_Dc;
			UStack_a0._56_8_ = direction._0_8_;
			UStack_a0.rightVector.z = in_XMM2_Dd;
			UStack_a0.negativeInfinityVector.y = in_XMM0_Dc;
			UStack_a0._104_8_ = center._0_8_;
			UStack_a0.negativeInfinityVector.z = in_XMM0_Dd;
			UStack_a0.zeroVector.z = fVar1;
			UStack_a0.oneVector.x = fVar3;
			g_data_0753e81c = true;
			fVar9 = UStack_a0.positiveInfinityVector.z;
			fVar10 = UStack_a0.negativeInfinityVector.x;
			in_XMM0_Dc = UStack_a0.negativeInfinityVector.y;
			in_XMM0_Dd = UStack_a0.negativeInfinityVector.z;
			fVar14 = UStack_a0.leftVector.z;
			fVar15 = UStack_a0.rightVector.x;
			in_XMM2_Dc = UStack_a0.rightVector.y;
			in_XMM2_Dd = UStack_a0.rightVector.z;
			fVar16 = UStack_a0.forwardVector.x;
			fVar1 = UStack_a0.zeroVector.z;
			fVar3 = UStack_a0.oneVector.x;
		}
		UStack_a0.zeroVector.z = fVar1 - fVar9;
		UStack_a0.oneVector.x = fVar3 - fVar10;
		UStack_a0.oneVector.y = UStack_a0.oneVector.y - in_XMM0_Dc;
		UStack_a0.oneVector.z = UStack_a0.oneVector.z - in_XMM0_Dd;
		fVar17 = fVar17 - center.z;
		fVar1 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
		if (Mathf.Epsilon <= fVar1) {
			fVar1 = (fVar17 * fVar16 + UStack_a0.oneVector.x * fVar15 + UStack_a0.zeroVector.z * fVar14) / fVar1;
			UStack_a0.rightVector.x = fVar1 * fVar15;
			UStack_a0.leftVector.z = fVar1 * fVar14;
			UStack_a0.rightVector.y = fVar1 * in_XMM2_Dc;
			UStack_a0.rightVector.z = fVar1 * in_XMM2_Dd;
			auVar13 = ZEXT416((uint)(fVar1 * fVar16));
			UStack_a0.forwardVector.x = (float)auVar13._0_4_;
			UStack_a0.forwardVector.y = (float)auVar13._4_4_;
			UStack_a0.forwardVector.z = (float)auVar13._8_4_;
			UStack_a0.backVector.x = (float)auVar13._12_4_;
		}
		else {
			pUVar8 = typeof(Vector3).static_fields;
			uVar2 = (pUVar8.zeroVector).x;
			uVar4 = (pUVar8.zeroVector).y;
			UStack_a0.rightVector.x = (float)uVar4;
			UStack_a0.leftVector.z = (float)uVar2;
			UStack_a0.rightVector.y = 0.0;
			UStack_a0.rightVector.z = 0.0;
			auVar13 = ZEXT416((uint)(pUVar8.zeroVector).z);
			UStack_a0.forwardVector.x = (float)auVar13._0_4_;
			UStack_a0.forwardVector.y = (float)auVar13._4_4_;
			UStack_a0.forwardVector.z = (float)auVar13._8_4_;
			UStack_a0.backVector.x = (float)auVar13._12_4_;
		}
		fVar1 = UStack_a0.forwardVector.x * UStack_a0.forwardVector.x + UStack_a0.rightVector.x * UStack_a0.rightVector.x + UStack_a0.leftVector.z * UStack_a0.leftVector.z;
		UStack_a0.positiveInfinityVector.z = fVar1;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
		}
		else {
			fVar1 = SQRT(fVar1);
		}
		fVar17 = fVar17 - UStack_a0.forwardVector.x;
		UStack_a0.zeroVector.z = UStack_a0.zeroVector.z - UStack_a0.leftVector.z;
		UStack_a0.oneVector.x = UStack_a0.oneVector.x - UStack_a0.rightVector.x;
		UStack_a0.oneVector.y = UStack_a0.oneVector.y - UStack_a0.rightVector.y;
		UStack_a0.oneVector.z = UStack_a0.oneVector.z - UStack_a0.rightVector.z;
		UStack_a0.backVector.y = UStack_a0.backVector.y - fVar1;
		fVar1 = fVar17 * fVar17 + UStack_a0.oneVector.x * UStack_a0.oneVector.x + UStack_a0.zeroVector.z * UStack_a0.zeroVector.z;
		if (fVar1 < 0.0) {
			fVar3 = sqrtf(fVar1);
			fVar3 = UStack_a0.upVector.x - fVar3;
		}
		else {
			fVar3 = UStack_a0.upVector.x - SQRT(fVar1);
		}
		if (0.0 <= UStack_a0.backVector.y) {
			if (0.0 <= fVar3) {
				return;
			}
		}
		uStack_28._0_4_ = position.x;
		uStack_28._4_4_ = position.y;
		UStack_a0.leftVector.y = position.z;
		if (UStack_a0.backVector.y <= fVar3) {
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				UStack_a0.zeroVector.x = 0.0;
				UStack_a0.zeroVector.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_032aa9bd;
	label_032aab37: ;
				UStack_a0.zeroVector.x = 0.0;
				UStack_a0.zeroVector.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				UStack_a0.zeroVector.x = 0.0;
				UStack_a0.zeroVector.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_032aab37;
	label_032aa9bd: ;
				UStack_a0.zeroVector.x = 0.0;
				UStack_a0.zeroVector.y = 0.0;
				uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar5 == 0) {
			}
			uVar11 = 0;
			if (UStack_a0.positiveInfinityVector.z < 0.0) {
				UStack_a0.positiveInfinityVector.z = sqrtf(UStack_a0.positiveInfinityVector.z);
				uVar11 = extraout_XMM0_Db_00;
				if (UStack_a0.positiveInfinityVector.z <= 1e-05) goto label_032aa9eb;
	label_032aaa4c: ;
				fVar17 = UStack_a0.forwardVector.x / UStack_a0.positiveInfinityVector.z;
				auVar13._4_4_ = UStack_a0.positiveInfinityVector.z;
				auVar13._0_4_ = UStack_a0.positiveInfinityVector.z;
				auVar13._8_4_ = uVar11;
				auVar13._12_4_ = uVar11;
				auVar13 = divps((byte[])UStack_a0._56_16_, auVar13);
				UStack_a0.zeroVector.x = auVar13._0_4_;
				UStack_a0.zeroVector.y = auVar13._4_4_;
				pUVar8 = &UStack_a0;
			}
			else {
				UStack_a0.positiveInfinityVector.z = SQRT(UStack_a0.positiveInfinityVector.z);
				if (1e-05 < UStack_a0.positiveInfinityVector.z) goto label_032aaa4c;
	label_032aa9eb: ;
				pUVar8 = typeof(Vector3).static_fields;
				fVar17 = (pUVar8.zeroVector).z;
			}
			uVar12._0_4_ = (pUVar8.zeroVector).x;
			uVar12._4_4_ = (pUVar8.zeroVector).y;
			goto label_032aaa73;
		}
		UStack_a0.upVector.x = fVar3;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_032aa945;
	label_032aaad7: ;
			UStack_a0.zeroVector.x = 0.0;
			UStack_a0.zeroVector.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_0753e729 == false) goto label_032aaad7;
	label_032aa945: ;
			UStack_a0.zeroVector.x = 0.0;
			UStack_a0.zeroVector.y = 0.0;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		uVar11 = 0;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
			uVar11 = extraout_XMM0_Db;
			UStack_a0.backVector.y = UStack_a0.upVector.x;
		}
		else {
			fVar1 = SQRT(fVar1);
			UStack_a0.backVector.y = UStack_a0.upVector.x;
		}
		if (1e-05 < fVar1) {
			fVar17 = fVar17 / fVar1;
			auVar7._4_4_ = UStack_a0.oneVector.x;
			auVar7._0_4_ = UStack_a0.zeroVector.z;
			auVar7._8_4_ = UStack_a0.oneVector.y;
			auVar7._12_4_ = UStack_a0.oneVector.z;
			auVar6._4_4_ = fVar1;
			auVar6._0_4_ = fVar1;
			auVar6._8_4_ = uVar11;
			auVar6._12_4_ = uVar11;
			auVar13 = divps(auVar7, auVar6);
			uVar12 = auVar13._0_8_;
		}
		else {
			pUVar8 = typeof(Vector3).static_fields;
			fVar17 = (pUVar8.zeroVector).z;
			uVar12._0_4_ = (pUVar8.zeroVector).x;
			uVar12._4_4_ = (pUVar8.zeroVector).y;
		}
	label_032aaa73: ;
		position.x = (float)uStack_28 + UStack_a0.backVector.y * (float)uVar12;
		position.y = uStack_28._4_4_ + UStack_a0.backVector.y * (float)((ulong)uVar12 >> 0x20);
		position.z = UStack_a0.leftVector.y + fVar17 * UStack_a0.backVector.y;
		return;
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x31A7AB0", Offset = "0x31A6AB0", VA = "0x31A7AB0")]
	public static void PointOutsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox): 29 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Transform pUVar4;
		float pfVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Vector3 UVar12;
		Vector3 position_00;
		float[] afStack_88 = new float[2];
		ulong uStack_80;
		float fStack_78;
		byte[] auStack_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		byte[] auStack_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		float fStack_48;
		byte[] auStack_38 = new byte[8];
		float fStack_30;
		float fStack_2c;
		float fStack_28;

		fStack_28 = spacing;
		if ((collider != null) &&(pUVar4 = collider.transform, pUVar4 != null)) {
			fVar6 = 0.0;
			fVar7 = 0.0;
			fVar8 = 0.0;
			UVar12 = pUVar4.InverseTransformPoint((Vector3)position.fields);
			fStack_78 = UVar12.z;
			fStack_50 = (float)extraout_XMM0_Dc;
			auStack_58 = (byte[])UVar12._0_8_;
			fStack_4c = (float)extraout_XMM0_Dd;
			UVar12 = collider.center;
			fStack_30 = (float)extraout_XMM0_Dc_00;
			auStack_38 = UVar12._0_8_;
			fStack_2c = (float)extraout_XMM0_Dd_00;
			afStack_88[0] = fStack_78 - UVar12.z;
			fStack_78 = afStack_88[0];
			UVar12 = collider.size;
			fStack_48 = UVar12.z;
			fStack_60 = (float)extraout_XMM0_Dc_01;
			auStack_68 = (byte[])UVar12._0_8_;
			fStack_5c = (float)extraout_XMM0_Dd_01;
			auStack_58._0_4_ = (float)auStack_58._0_4_ - (float)auStack_38._0_4_;
			auStack_58._4_4_ = (float)auStack_58._4_4_ - (float)auStack_38._4_4_;
			fStack_50 = fStack_50 - fStack_30;
			fStack_4c = fStack_4c - fStack_2c;
			uStack_80 = CONCAT44(auStack_58._4_4_, auStack_58._0_4_);
			pUVar4 = collider.transform;
			if (pUVar4 != null) {
				auStack_68._4_4_ = ABS((float)auStack_68._4_4_) * 0.5;
				auStack_68._0_4_ = ABS((float)auStack_68._0_4_) * 0.5;
				fStack_60 = ABS(fStack_60) * 0.0;
				fStack_5c = ABS(fStack_5c) * 0.0;
				UVar12.z = (Vector3.oneVector).z * fStack_28;
				uVar1 = (Vector3.oneVector).x;
				uVar2 = (Vector3.oneVector).y;
				UVar12.x = fStack_28 * (float)uVar1;
				UVar12.y = fStack_28 * (float)uVar2;
				UVar12 = pUVar4.InverseTransformVector(UVar12);
				fVar6 = ABS(UVar12.x) + (float)auStack_68._0_4_;
				fVar7 = ABS(UVar12.y) + (float)auStack_68._4_4_;
				if ((ABS((float)auStack_58._0_4_) < fVar6) && (ABS((float)auStack_58._4_4_) < fVar7)) {
					fVar8 = ABS(UVar12.z) + ABS(fStack_48) * 0.5;
					if (ABS(fStack_78) < fVar8) {
						fVar9 = ABS(ABS((float)auStack_58._0_4_) - fVar6);
						fVar10 = ABS(ABS((float)auStack_58._4_4_) - fVar7);
						fVar11 = ABS(ABS(fStack_78) - fVar8);
						if (fVar10 <= fVar9) {
							if (fVar11 <= fVar10) {
								pfVar5 = afStack_88;
							}
							else {
								fStack_78 = (float)auStack_58._4_4_;
								pfVar5 = (float)((long)&uStack_80 + 4);
								fVar8 = fVar7;
							}
						}
						else {
							pfVar5 = afStack_88;
							if (fVar9 < fVar11) {
								fStack_78 = (float)auStack_58._0_4_;
								pfVar5 = (float)&uStack_80;
								fVar8 = fVar6;
							}
						}
						*pfVar5 = (float)(~-(uint)(0.0 <= fStack_78) & (uint)-fVar8 |(uint)fVar8 & -(uint)(0.0 <= fStack_78));
					}
				}
				pUVar4 = collider.transform;
				UVar12 = collider.center;
				if (pUVar4 != null) {
					position_00.z = UVar12.z + afStack_88[0];
					position_00.x = UVar12.x + (float)uStack_80;
					position_00.y = UVar12.y + (float)((ulong)uStack_80 >> 0x20);
					UVar12 = pUVar4.TransformPoint(position_00);
					position.x = UVar12.x;
					position.y = UVar12.y;
					position.z = UVar12.z;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x31AAB70", Offset = "0x31A9B70", VA = "0x31AAB70")]
	private static void PointOutsideBox(ref Vector3 position, Vector3 boxSize)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideBox): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		float pfVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;

		fVar6 = boxSize.z;
		uVar1 = position.x;
		uVar2 = position.y;
		fVar4 = boxSize.x;
		if ((ABS((float)uVar1) < fVar4) && (fVar5 = boxSize.y, ABS((float)uVar2) < fVar5)) {
			fVar9 = position.z;
			if (ABS(fVar9) < fVar6) {
				pfVar3 = &position.z;
				fVar7 = ABS(ABS((float)uVar1) - fVar4);
				fVar8 = ABS(ABS((float)uVar2) - fVar5);
				fVar10 = ABS(ABS(fVar9) - fVar6);
				if (fVar8 <= fVar7) {
					if (fVar8 < fVar10) {
						pfVar3 = &position.y;
						fVar6 = fVar5;
						fVar9 = (float)uVar2;
					}
				}
				else {
					if (fVar7 < fVar10) {
						pfVar3 = (float)position;
						fVar6 = fVar4;
					}
					fVar9 = (float)(~-(uint)(fVar7 < fVar10) & (uint)fVar9 | uVar1 & -(uint)(fVar7 < fVar10));
				}
				*pfVar3 = (float)(~-(uint)(0.0 <= fVar9) & (uint)-fVar6 | (uint)fVar6 & -(uint)(0.0 <= fVar9));
			}
		}
		return;
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x31A7850", Offset = "0x31A6850", VA = "0x31A7850")]
	public static void PointInsideBox(ref Vector3 position, BoxCollider collider, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox): clean
		uint uVar1;
		uint uVar2;
		Transform pUVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		Vector3 UVar10;
		Vector3 UVar11;
		Vector3 UVar12;
		Vector3 UVar13;
		float local_88;
		float fStack_84;
		float local_68;
		float fStack_64;
		float local_38;
		float fStack_34;

		if ((collider != null) &&(pUVar4 = collider.transform, pUVar4 != null)) {
			UVar8 = pUVar4.InverseTransformPoint((Vector3)position.fields);
			UVar9 = collider.center;
			UVar10 = collider.size;
			pUVar4 = collider.transform;
			if (pUVar4 != null) {
				local_68 = UVar10.x;
				fStack_64 = UVar10.y;
				local_88 = UVar8.x;
				fStack_84 = UVar8.y;
				local_38 = UVar9.x;
				fStack_34 = UVar9.y;
				local_88 = local_88 - local_38;
				fStack_84 = fStack_84 - fStack_34;
				UVar11.z = (Vector3.oneVector).z * spacing;
				uVar1 = (Vector3.oneVector).x;
				uVar2 = (Vector3.oneVector).y;
				UVar11.x = spacing * (float)uVar1;
				UVar11.y = spacing * (float)uVar2;
				UVar11 = pUVar4.InverseTransformVector(UVar11);
				fVar5 = ABS(local_68) * 0.5 - ABS(UVar11.x);
				fVar6 = ABS(fStack_64) * 0.5 - ABS(UVar11.y);
				if (fVar6 < ABS(fStack_84)) {
					fStack_84 = (float)(~-(uint)(0.0 <= fStack_84) & (uint)-fVar6 |(uint)fVar6 & -(uint)(0.0 <= fStack_84));
				}
				pUVar4 = collider.transform;
				UVar12 = collider.center;
				if (pUVar4 != null) {
					fVar6 = UVar8.z - UVar9.z;
					fVar7 = ABS(UVar10.z) * 0.5 - ABS(UVar11.z);
					UVar8.y = fStack_84 + UVar12.y;
					UVar8.x =(float)(~-(uint)(fVar5 < ABS(local_88)) & (uint)local_88 |(~-(uint)(0.0 <= local_88) & (uint)-fVar5 | -(uint)(0.0 <= local_88) & (uint)fVar5) & -(uint)(fVar5 < ABS(local_88))) + UVar12.x;
					UVar8.z =(float)(~-(uint)(fVar7 < ABS(fVar6)) & (uint)fVar6 |(~-(uint)(0.0 <= fVar6) & (uint)-fVar7 | -(uint)(0.0 <= fVar6) & (uint)fVar7) & -(uint)(fVar7 < ABS(fVar6))) + UVar12.z;
					UVar13 = (Vector3)pUVar4.TransformPoint(UVar8);
					position.fields = UVar13;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x31AAC20", Offset = "0x31A9C20", VA = "0x31AAC20")]
	private static void PointInsideBox(ref Vector3 position, Vector3 boxSize)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointInsideBox): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		float fVar5;
		float fVar6;
		float fVar7;

		fVar7 = boxSize.z;
		fVar5 = boxSize.x;
		fVar6 = boxSize.y;
		uVar2 = position.x;
		uVar3 = position.y;
		fVar1 = position.z;
		if (fVar5 < ABS((float)uVar2)) {
			position.x =(float)(~-(uint)(0.0 <= (float)uVar2) & (uint)-fVar5 | -(uint)(0.0 <= (float)uVar2) & (uint)fVar5);
		}
		if (fVar6 < ABS((float)uVar3)) {
			position.y =(float)(~-(uint)(0.0 <= (float)uVar3) & (uint)-fVar6 | (uint)fVar6 & -(uint)(0.0 <= (float)uVar3));
		}
		if (fVar7 < ABS(fVar1)) {
			uVar4 = -(uint)(0.0 <= fVar1);
			position.z = (float)(~uVar4 & (uint)-fVar7 | (uint)fVar7 & uVar4);
			return;
		}
		return;
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x31A5F10", Offset = "0x31A4F10", VA = "0x31A5F10")]
	public static void PointOutsideCollider(ref Vector3 position, Collider collider, float spacing)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$PointOutsideCollider): 49 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		uint uVar3;
		float fVar4;
		byte[] auVar5 = new byte[16];
		byte[] auVar6 = new byte[16];
		UnityEngine_Vector3_StaticFields pUVar7;
		float fVar8;
		uint extraout_XMM0_Db;
		uint uVar9;
		uint extraout_XMM0_Db_00;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		Vector3 UVar12;
		Vector3 end;
		Color color;
		Bounds local_70;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		byte[] local_48 = new byte[16];
		float local_38;
		byte[] local_28 = new byte[16];

		local_38 = spacing;
		if (collider == null) {
			throw new NullReferenceException();
		}
		UVar12 = collider.ClosestPoint((Vector3)position.fields);
		UVar12.z = UVar12.z;
		uVar1 = position.x;
		uVar3 = position.y;
		fVar8 = position.z;
		local_48._8_4_ = extraout_XMM0_Dc;
		local_48._0_8_ = UVar12._0_8_;
		local_48._12_4_ = extraout_XMM0_Dd;
		local_58 = (float)uVar1 - UVar12.x;
		fStack_54 = (float)uVar3 - UVar12.y;
		fVar4 = fVar8 - UVar12.z;
		fStack_50 = 0.0 - extraout_XMM0_Dc;
		fStack_4c = 0.0 - extraout_XMM0_Dd;
		fVar2 = fVar4 * fVar4 + fStack_54 * fStack_54 + local_58 * local_58;
		if (9.9999994e-11 <= fVar2) {
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_032a61e4;
	label_032a6112: ;
				if (0.0 <= fVar2) goto label_032a611e;
	label_032a61fb: ;
				fVar8 = sqrtf(fVar2);
				if (local_38 <= fVar8) {
					return;
				}
			}
			else {
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_032a6112;
	label_032a61e4: ;
				if (fVar2 < 0.0) goto label_032a61fb;
	label_032a611e: ;
				if (local_38 <= SQRT(fVar2)) {
					return;
				}
			}
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_70.m_Center.x = 0.0;
				local_70.m_Center.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_032a62a8;
	label_032a6232: ;
				local_70.m_Center.x = 0.0;
				local_70.m_Center.y = 0.0;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_032a6242;
	label_032a62d1: ;
				if (fVar2 < 0.0) goto label_032a62e8;
	label_032a624e: ;
				uVar9 = 0;
				fVar2 = SQRT(fVar2);
			}
			else {
				local_70.m_Center.x = 0.0;
				local_70.m_Center.y = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_032a6232;
	label_032a62a8: ;
				local_70.m_Center.x = 0.0;
				local_70.m_Center.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_032a62d1;
	label_032a6242: ;
				if (0.0 <= fVar2) goto label_032a624e;
	label_032a62e8: ;
				fVar2 = sqrtf(fVar2);
				uVar9 = extraout_XMM0_Db_00;
			}
			if (fVar2 <= 1e-05) goto label_032a6262;
			fVar8 = fVar4 / fVar2;
			auVar6._4_4_ = fStack_54;
			auVar6._0_4_ = local_58;
			auVar6._8_4_ = fStack_50;
			auVar6._12_4_ = fStack_4c;
			auVar11._4_4_ = fVar2;
			auVar11._0_4_ = fVar2;
			auVar11._8_4_ = uVar9;
			auVar11._12_4_ = uVar9;
			auVar11 = divps(auVar6, auVar11);
			local_70.m_Center.x = auVar11._0_4_;
			local_70.m_Center.y = auVar11._4_4_;
			pUVar7 = (UnityEngine_Vector3_StaticFields)&local_70;
		}
		else {
			local_70 = collider.bounds;
			local_58 = local_70.m_Center.x;
			fStack_54 = local_70.m_Center.y;
			fStack_50 = 0.0;
			fStack_4c = 0.0;
			fVar8 = fVar8 - local_70.m_Center.z;
			local_70 = collider.bounds;
			fVar2 = local_70.m_Center.x;
			fVar4 = local_70.m_Center.y;
			if ((typeof(Debug)._2).cctor_finished_or_no_cctor == 0) {
				local_28._0_4_ = local_70.m_Center.x;
				local_28._4_4_ = local_70.m_Center.y;
				local_28._8_4_ = 0.0;
				local_28._12_4_ = 0.0;
				fVar2 = (float)local_28._0_4_;
				fVar4 = (float)local_28._4_4_;
			}
			UVar12.y = fVar4;
			UVar12.x = fVar2;
			UVar12.z = local_70.m_Center.z;
			end.z = UVar12.z;
			end.x = (float)local_48._0_4_;
			end.y = (float)local_48._4_4_;
			color.b = 0.0;
			color.a = 1.0;
			color.r = 1.0;
			color.g = 0.0;
			Debug.DrawLine(UVar12, end, color);
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_70.m_Center.x = 0.0;
				local_70.m_Center.y = 0.0;
			}
			else {
				local_70.m_Center.x = 0.0;
				local_70.m_Center.y = 0.0;
			}
			local_70.m_Center.x = 0.0;
			local_70.m_Center.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_70.m_Center.x = 0.0;
				local_70.m_Center.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			auVar10._0_4_ = (float)uVar1 - local_58;
			auVar10._4_4_ = (float)uVar3 - fStack_54;
			auVar10._8_4_ = 0.0 - fStack_50;
			auVar10._12_4_ = 0.0 - fStack_4c;
			uVar9 = 0;
			fVar2 = fVar8 * fVar8 + auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_;
			if (fVar2 < 0.0) {
				fVar2 = sqrtf(fVar2);
				uVar9 = extraout_XMM0_Db;
			}
			else {
				fVar2 = SQRT(fVar2);
			}
			if (1e-05 < fVar2) {
				fVar8 = fVar8 / fVar2;
				auVar5._4_4_ = fVar2;
				auVar5._0_4_ = fVar2;
				auVar5._8_4_ = uVar9;
				auVar5._12_4_ = uVar9;
				auVar11 = divps(auVar10, auVar5);
				fVar2 = auVar11._0_4_;
				fVar4 = auVar11._4_4_;
				goto label_032a6320;
			}
	label_032a6262: ;
			pUVar7 = typeof(Vector3).static_fields;
			fVar8 = (pUVar7.zeroVector).z;
		}
		fVar2 = (pUVar7.zeroVector).x;
		fVar4 = (pUVar7.zeroVector).y;
	label_032a6320: ;
		position.x = (float)local_48._0_4_ + local_38 * fVar2;
		position.y = (float)local_48._4_4_ + local_38 * fVar4;
		position.z = UVar12.z + fVar8 * local_38;
		return;
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x31AACD0", Offset = "0x31A9CD0", VA = "0x31AACD0")]
	public static void DrawGizmosArrow(Vector3 startPoint, Vector3 direction, float halfWidth, Vector3 normal)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosArrow): 75 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		IntPtr pvVar3;
		byte[] auVar4 = new byte[16];
		uint uVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		object pIVar7;
		float pfVar8;
		ulong uVar9;
		float fVar10;
		float extraout_XMM0_Db;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar11;
		float fVar12;
		float in_XMM2_Dc;
		float in_XMM2_Dd;
		float fVar13;
		float fVar14;
		float in_XMM3_Db;
		byte[] auVar15 = new byte[16];
		float in_XMM5_Dc;
		float in_XMM5_Dd;
		float fVar16;
		float in_XMM6_Db;
		float in_XMM6_Dd;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		Vector3 to;
		UnityEngine_Vector3_StaticFields local_a0;
		byte[] local_28 = new byte[16];

		fVar11 = startPoint.z;
		local_a0.positiveInfinityVector.z = halfWidth;
		local_a0.forwardVector.x = direction.z;
		local_28._8_4_ = in_XMM0_Dc;
		local_28._0_8_ = startPoint._0_8_;
		local_28._12_4_ = in_XMM0_Dd;
		local_a0.leftVector.z = direction.x;
		local_a0.rightVector.x = direction.y;
		local_a0.rightVector.y = in_XMM2_Dc;
		local_a0.rightVector.z = in_XMM2_Dd;
		fVar10 = direction.x;
		fVar14 = direction.y;
		fVar25 = normal.x;
		fVar12 = normal.y;
		fVar13 = normal.z;
		local_a0.positiveInfinityVector.y = in_XMM6_Db;
		local_a0.forwardVector.y = in_XMM3_Db;
		if (g_data_0753e81b == false) {
			local_a0.leftVector.x = in_XMM5_Dc;
			local_a0.downVector._4_8_ = normal._0_8_;
			local_a0.leftVector.y = in_XMM5_Dd;
			local_a0.upVector.x = normal.z;
			local_a0.upVector.y = in_XMM6_Db;
			local_a0.downVector.x = in_XMM6_Dd;
			g_data_0753e81b = true;
			fVar10 = local_a0.leftVector.z;
			fVar14 = local_a0.rightVector.x;
			in_XMM2_Dc = local_a0.rightVector.y;
			in_XMM2_Dd = local_a0.rightVector.z;
			fVar25 = local_a0.downVector.y;
			fVar12 = local_a0.downVector.z;
			in_XMM5_Dc = local_a0.leftVector.x;
			in_XMM5_Dd = local_a0.leftVector.y;
			fVar13 = local_a0.upVector.x;
			local_a0.positiveInfinityVector.y = local_a0.upVector.y;
		}
		fVar26 = local_a0.forwardVector.x;
		fVar27 = fVar25;
		fVar16 = fVar13;
		fVar19 = local_a0.forwardVector.x;
		local_a0.upVector.z = local_a0.positiveInfinityVector.y;
		fVar22 = local_a0.forwardVector.y;
		fVar17 = fVar12;
		fVar20 = fVar10;
		if (Il2CppMethodInitialized_0753e72d == false) {
			local_a0.downVector.z = fVar12;
			local_a0.downVector.y = fVar25;
			local_a0.leftVector.x = in_XMM5_Dc;
			local_a0.leftVector.y = in_XMM5_Dd;
			local_a0.upVector.y = local_a0.forwardVector.x;
			local_a0.downVector.x = local_a0.forwardVector.y;
			local_a0.backVector.y = local_a0.forwardVector.x;
			local_a0.positiveInfinityVector.x = local_a0.forwardVector.y;
			local_a0.zeroVector.z = fVar12;
			local_a0.oneVector.x = fVar10;
			local_a0.oneVector.y = in_XMM5_Dc;
			local_a0.oneVector.z = in_XMM5_Dd;
			local_a0.upVector.x = fVar13;
			local_a0.backVector.z = fVar13;
			Il2CppMethodInitialized_0753e72d = true;
			fVar26 = local_a0.backVector.y;
			fVar13 = local_a0.backVector.z;
			local_a0.forwardVector.y = local_a0.positiveInfinityVector.x;
			fVar10 = local_a0.leftVector.z;
			fVar27 = local_a0.downVector.y;
			fVar16 = local_a0.upVector.x;
			fVar19 = local_a0.upVector.y;
			fVar22 = local_a0.downVector.x;
			fVar17 = local_a0.zeroVector.z;
			fVar20 = local_a0.oneVector.x;
			in_XMM5_Dc = local_a0.oneVector.y;
			in_XMM5_Dd = local_a0.oneVector.z;
		}
		local_a0.zeroVector.x = 0.0;
		local_a0.zeroVector.y = 0.0;
		fVar18 = fVar17 * fVar26;
		fVar21 = fVar20 * fVar13;
		fVar23 = in_XMM5_Dc * local_a0.forwardVector.y;
		fVar24 = in_XMM5_Dd * local_a0.positiveInfinityVector.y;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_a0.zeroVector.z = fVar17 * fVar26;
			local_a0.oneVector.x = fVar20 * fVar13;
			local_a0.oneVector.y = in_XMM5_Dc * local_a0.forwardVector.y;
			local_a0.oneVector.z = in_XMM5_Dd * local_a0.positiveInfinityVector.y;
			Il2CppMethodInitialized_0753e729 = true;
			fVar18 = local_a0.zeroVector.z;
			fVar21 = local_a0.oneVector.x;
			fVar23 = local_a0.oneVector.y;
			fVar24 = local_a0.oneVector.z;
		}
		auVar15._0_4_ = fVar14 * fVar16 - fVar18;
		auVar15._4_4_ = fVar25 * fVar19 - fVar21;
		auVar15._8_4_ = in_XMM2_Dc * local_a0.upVector.z - fVar23;
		auVar15._12_4_ = in_XMM2_Dd * fVar22 - fVar24;
		fVar13 = fVar12 * fVar10 - direction.y * fVar27;
		fVar10 = fVar13 * fVar13 + auVar15._4_4_ * auVar15._4_4_ + auVar15._0_4_ * auVar15._0_4_;
		if (fVar10 < 0.0) {
			fVar10 = sqrtf(fVar10);
			fVar12 = extraout_XMM0_Db;
		}
		else {
			fVar10 = SQRT(fVar10);
		}
		if (1e-05 < fVar10) {
			fVar13 = fVar13 / fVar10;
			auVar4._4_4_ = fVar10;
			auVar4._0_4_ = fVar10;
			auVar4._8_4_ = fVar12;
			auVar4._12_4_ = fVar12;
			auVar15 = divps(auVar15, auVar4);
			local_a0.zeroVector.x = auVar15._0_4_;
			local_a0.zeroVector.y = auVar15._4_4_;
			pUVar6 = &local_a0;
		}
		else {
			pUVar6 = typeof(Vector3).static_fields;
			fVar13 = (pUVar6.zeroVector).z;
		}
		uVar1 = (pUVar6.zeroVector).x;
		uVar2 = (pUVar6.zeroVector).y;
		pIVar7 = new Vector3[8];
		if (pIVar7 == null) {
			throw new NullReferenceException();
		}
		pvVar3 = pIVar7[1].monitor;
		uVar5 = (uint)pvVar3;
		if (uVar5 != 0) {
			fVar12 = (float)uVar1 * local_a0.positiveInfinityVector.z * 0.5;
			fVar10 = (float)uVar2 * local_a0.positiveInfinityVector.z * 0.5;
			fVar14 = fVar13 * local_a0.positiveInfinityVector.z * 0.5;
			fVar25 = fVar12 + (float)local_28._0_4_;
			fVar26 = fVar10 + (float)local_28._4_4_;
			fVar27 = fVar14 + fVar11;
			pIVar7[2].klass = (Il2CppClass)CONCAT44(fVar26, fVar25);
			*(float)&pIVar7[2].monitor = fVar27;
			if (uVar5 != 1) {
				fVar16 = local_a0.forwardVector.x * 0.5 + fVar27;
				fVar19 = local_a0.leftVector.z * 0.5 + fVar25;
				fVar22 = local_a0.rightVector.x * 0.5 + fVar26;
				*(ulong)((long)&pIVar7[2].monitor + 4) = CONCAT44(fVar22, fVar19);
				*(float)((long)&pIVar7[3].klass + 4) = fVar16;
				if (2 < uVar5) {
					pIVar7[3].monitor = (IntPtr)CONCAT44(fVar22 + fVar10, fVar19 + fVar12);
					*(float)&pIVar7[4].klass = fVar16 + fVar14;
					if (uVar5 != 3) {
						*(ulong)((long)&pIVar7[4].klass + 4) = CONCAT44(local_a0.rightVector.x + (float)local_28._4_4_, local_a0.leftVector.z + (float)local_28._0_4_);
						*(float)((long)&pIVar7[4].monitor + 4) = local_a0.forwardVector.x + fVar11;
						if (4 < uVar5) {
							fVar19 = local_a0.forwardVector.x * 0.5 +(fVar11 - fVar13 * local_a0.positiveInfinityVector.z);
							fVar13 = local_a0.leftVector.z * 0.5 +((float)local_28._0_4_ - (float)uVar1 * local_a0.positiveInfinityVector.z);
							fVar16 = local_a0.rightVector.x * 0.5 +((float)local_28._4_4_ - (float)uVar2 * local_a0.positiveInfinityVector.z);
							pIVar7[5].klass = (Il2CppClass)CONCAT44(fVar16, fVar13);
							*(float)&pIVar7[5].monitor = fVar19;
							if (uVar5 != 5) {
								*(ulong)((long)&pIVar7[5].monitor + 4) = CONCAT44(fVar16 + fVar10, fVar13 + fVar12);
								*(float)((long)&pIVar7[6].klass + 4) = fVar19 + fVar14;
								if (6 < uVar5) {
									pIVar7[6].monitor =(IntPtr)CONCAT44((float)local_28._4_4_ - fVar10, (float)local_28._0_4_ - fVar12);
									*(float)&pIVar7[7].klass = fVar11 - fVar14;
									if (uVar5 != 7) {
										*(ulong)((long)&pIVar7[7].klass + 4) = CONCAT44(fVar26, fVar25);
										*(float)((long)&pIVar7[7].monitor + 4) = fVar27;
										if (0 < (int)(uVar5 - 1)) {
											pfVar8 = (float)((long)&pIVar7[3].klass + 4);
											uVar9 = 0;
											do {
												if ((((ulong)pvVar3 & 0xffffffff) <= uVar9) ||(uVar9 = uVar9 + 1, ((ulong)pvVar3 & 0xffffffff) <= uVar9)) goto label_032ab0ea;
												to.z = *pfVar8;
												to.x = pfVar8[-2];
												to.y = pfVar8[-1];
												Gizmos.DrawLine((UnityEngine_Vector3_o)*(Vector3)(pfVar8 + -5), to);
												pvVar3 = pIVar7[1].monitor;
												pfVar8 = pfVar8 + 3;
											} while ((long)uVar9 < (long)((int)pvVar3 + -1));
										}
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_032ab0ea: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x31AB100", Offset = "0x31AA100", VA = "0x31AB100")]
	public static void DrawGizmosPolyLine(params Vector3[] vertices)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneUtility.c (EZhex1991.EZSoftBone.EZSoftBoneUtility$$DrawGizmosPolyLine): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		ulong uVar3;
		float pfVar4;
		ulong uVar5;
		Vector3 to;

		if (vertices == null) {
			throw new NullReferenceException();
		}
		uVar3 = vertices.Length;
		if (0 < (int)uVar3 + -1) {
			pfVar4 = &vertices[1].z;
			uVar5 = 0;
			do {
				if (((uVar3 & 0xffffffff) <= uVar5) || (uVar5 = uVar5 + 1, (uVar3 & 0xffffffff) <= uVar5)) {
					throw new IndexOutOfRangeException();
				}
				uVar1 = ((Vector3)(pfVar4 + -2)).x;
				uVar2 = ((Vector3)(pfVar4 + -2)).y;
				to.y = (float)uVar2;
				to.x = (float)uVar1;
				to.z = *pfVar4;
				Gizmos.DrawLine((UnityEngine_Vector3_o)*(Vector3)(pfVar4 + -5), to);
				uVar3 = vertices.Length;
				pfVar4 = pfVar4 + 3;
			} while ((long)uVar5 < (long)((int)uVar3 + -1));
		}
		return;
	}
}
