// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.TestCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/TestCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/TestCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20008F7")]
internal class TestCamera : BaseCamera
{
	[Token(Token = "0x4002D87")]
	private const float DefaultDistance = 30f;

	[Token(Token = "0x4002D88")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x4002D89")]
	[FieldOffset(Offset = "0x44")]
	private float MinDistance;

	[Token(Token = "0x4002D8A")]
	[FieldOffset(Offset = "0x48")]
	private float MaxDistance;

	[Token(Token = "0x6005549")]
	[Address(RVA = "0x5CD9440", Offset = "0x5CD8440", VA = "0x5CD9440", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
		// Lifted from source/cpp/Cameras/TestCamera.c (Cameras.TestCamera$$SetDefaultCameraPosition): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform pUVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
			pUVar2.position = (Vector3)(ZEXT412(0xc1f00000) << 0x40);
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
				pUVar2.LookAt((Vector3)this.AnchorPoint);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600554A")]
	[Address(RVA = "0x5CD94A0", Offset = "0x5CD84A0", VA = "0x5CD94A0")]
	protected void Update()
	{
		// Lifted from source/cpp/Cameras/TestCamera.c (Cameras.TestCamera$$Update): 57 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar9;
		uint uVar10;
		ulong uVar8;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		BaseComponentCache pUVar17;
		byte[] auVar18 = new byte[16];
		float fVar19;
		float fVar20;
		bool bVar21;
		UnityEngine_Vector3_StaticFields pUVar22;
		Transform pUVar23;
		float fVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		uint extraout_XMM0_Db;
		float fVar28;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		float extraout_XMM0_Dd_02;
		byte[] auVar29 = new byte[16];
		byte[] auVar30 = new byte[16];
		Vector3 UVar31;
		Vector3 point;
		Vector3 value;
		Vector3 axis;
		Vector3 axis_00;
		float fStack_78;
		byte[] auStack_40 = new byte[12];
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		byte[] auStack_28 = new byte[16];

		Input.mousePosition;
		fVar24 = Time.deltaTime;
		bVar21 = Input.GetKey(0x143);
		if ((bVar21) || (bVar21 = Input.GetKey(0x144))) {
			fVar24 = fVar24 * 150.0;
			fVar25 = Input.GetAxis("Mouse X");
			fVar26 = Input.GetAxis("Mouse Y");
			if (0.0 <= fVar25) {
				if (0.0 < fVar25) {
					pUVar17 = this.Cache;
					if (pUVar17 == null) goto label_05dd9aa4;
					pUVar23 = pUVar17.Transform;
					uVar2 = this.AnchorPoint.x;
					uVar10 = this.AnchorPoint.y;
					fVar25 = this.AnchorPoint.z;
					if (pUVar23 == null) goto label_05dd9aa4;
					pUVar22 = typeof(Vector3).static_fields;
					fVar27 = (pUVar22.upVector).z;
					uVar8._0_4_ = (pUVar22.upVector).x;
					uVar8._4_4_ = (pUVar22.upVector).y;
					uVar1 = uVar2;
					uVar9 = uVar10;
					fVar28 = fVar24;
					goto label_05dd9683;
				}
			}
			else {
				pUVar17 = this.Cache;
				if (pUVar17 == null) goto label_05dd9aa4;
				pUVar23 = pUVar17.Transform;
				uVar1 = this.AnchorPoint.x;
				uVar9 = this.AnchorPoint.y;
				fVar25 = this.AnchorPoint.z;
				if (pUVar23 == null) goto label_05dd9aa4;
				pUVar22 = typeof(Vector3).static_fields;
				fVar27 = (pUVar22.upVector).z;
				uVar8._0_4_ = (pUVar22.upVector).x;
				uVar8._4_4_ = (pUVar22.upVector).y;
				fVar28 = -fVar24;
	label_05dd9683: ;
				UVar31.y = (float)uVar9;
				UVar31.x = (float)uVar1;
				UVar31.z = fVar25;
				axis.z = fVar27;
				axis.x = (float)(int)uVar8;
				axis.y = (float)(int)((ulong)uVar8 >> 0x20);
				pUVar23.RotateAround(UVar31, axis, fVar28);
			}
			if (0.0 <= fVar26) {
				if (fVar26 <= 0.0) goto label_05dd9755;
				pUVar17 = this.Cache;
				if ((pUVar17 == null) ||(pUVar23 = pUVar17.Transform, pUVar23 == null)) goto label_05dd9aa4;
				fVar25 = this.AnchorPoint.z;
				uVar4 = this.AnchorPoint.x;
				uVar12 = this.AnchorPoint.y;
				UVar31 = pUVar23.right;
				fVar26 = UVar31.z;
				auVar30._0_8_ = UVar31._0_8_;
				auVar30._8_4_ = extraout_XMM0_Dc_00;
				auVar30._12_4_ = extraout_XMM0_Dd_00;
				fVar24 = -fVar24;
				uVar3 = uVar4;
				uVar11 = uVar12;
			}
			else {
				pUVar17 = this.Cache;
				if ((pUVar17 == null) ||(pUVar23 = pUVar17.Transform, pUVar23 == null)) goto label_05dd9aa4;
				fVar25 = this.AnchorPoint.z;
				uVar3 = this.AnchorPoint.x;
				uVar11 = this.AnchorPoint.y;
				UVar31 = pUVar23.right;
				fVar26 = UVar31.z;
				auVar30._0_8_ = UVar31._0_8_;
				auVar30._8_4_ = extraout_XMM0_Dc;
				auVar30._12_4_ = extraout_XMM0_Dd;
			}
			point.y = (float)uVar11;
			point.x = (float)uVar3;
			point.z = fVar25;
			axis_00._0_8_ = auVar30._0_8_;
			axis_00.z = fVar26;
			pUVar23.RotateAround(point, axis_00, fVar24);
		}
	label_05dd9755: ;
		fVar24 = Input.GetAxis("Mouse ScrollWheel");
		fVar25 = Time.deltaTime;
		pUVar17 = this.Cache;
		if ((pUVar17 == null) ||(pUVar23 = pUVar17.Transform, pUVar23 == null)) goto label_05dd9aa4;
		UVar31 = pUVar23.position;
		uVar5 = this.AnchorPoint.x;
		uVar13 = this.AnchorPoint.y;
		fStack_78 = UVar31.z - this.AnchorPoint.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
		}
		else {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
		}
		auStack_40._0_4_ = 0.0;
		auStack_40._4_4_ = 0.0;
		if (g_data_0753e729 == false) {
			auStack_40._0_4_ = 0.0;
			auStack_40._4_4_ = 0.0;
			g_data_0753e729 = true;
		}
		auVar29._0_4_ = UVar31.x - (float)uVar5;
		auVar29._4_4_ = UVar31.y - (float)uVar13;
		auVar29._8_4_ = extraout_XMM0_Dc_01 - 0.0;
		auVar29._12_4_ = extraout_XMM0_Dd_01 - 0.0;
		uVar1 = 0;
		fVar26 = fStack_78 * fStack_78 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
		if (fVar26 < 0.0) {
			fVar26 = sqrtf(fVar26);
			uVar1 = extraout_XMM0_Db;
			if (fVar26 <= 1e-05) goto label_05dd982b;
	label_05dd9861: ;
			fStack_78 = fStack_78 / fVar26;
			auVar18._4_4_ = fVar26;
			auVar18._0_4_ = fVar26;
			auVar18._8_4_ = uVar1;
			auVar18._12_4_ = uVar1;
			auVar30 = divps(auVar29, auVar18);
			auStack_40._0_4_ = auVar30._0_4_;
			auStack_40._4_4_ = auVar30._4_4_;
			pUVar22 = (UnityEngine_Vector3_StaticFields)auStack_40;
		}
		else {
			fVar26 = SQRT(fVar26);
			if (1e-05 < fVar26) goto label_05dd9861;
	label_05dd982b: ;
			pUVar22 = typeof(Vector3).static_fields;
			fStack_78 = (pUVar22.zeroVector).z;
		}
		pUVar17 = this.Cache;
		if ((pUVar17 == null) ||(pUVar23 = pUVar17.Transform, pUVar23 == null)) {
	label_05dd9aa4: ;
			throw new NullReferenceException();
		}
		auStack_28._0_4_ = (pUVar22.zeroVector).x;
		auStack_28._4_4_ = (pUVar22.zeroVector).y;
		auStack_28._8_4_ = 0.0;
		auStack_28._12_4_ = 0.0;
		uVar6 = this.AnchorPoint.x;
		uVar14 = this.AnchorPoint.y;
		fVar26 = this.AnchorPoint.z;
		UVar31 = pUVar23.position;
		fVar27 = UVar31.x;
		fVar28 = UVar31.y;
		if (g_data_0753e7b7 == false) {
			fStack_30 = extraout_XMM0_Dc_02;
			fStack_2c = extraout_XMM0_Dd_02;
			g_data_0753e7b7 = true;
			uVar16 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			fVar27 = (float)auStack_40._8_4_;
			fVar28 = fStack_34;
			fVar19 = fStack_30;
			fVar20 = fStack_2c;
		}
		else {
			uVar16 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			fVar19 = extraout_XMM0_Dc_02;
			fVar20 = extraout_XMM0_Dd_02;
		}
		if (uVar16 == 0) {
			fStack_34 = fVar28;
			auStack_40._8_4_ = fVar27;
			fStack_30 = fVar19;
			fStack_2c = fVar20;
			fVar27 = (float)auStack_40._8_4_;
			fVar28 = fStack_34;
		}
		fVar26 = fVar26 - UVar31.z;
		fVar26 = fVar26 * fVar26 +((float)uVar14 - fVar28) * ((float)uVar14 - fVar28) +((float)uVar6 - fVar27) * ((float)uVar6 - fVar27);
		if (fVar26 < 0.0) {
			fVar26 = sqrtf(fVar26);
		}
		else {
			fVar26 = SQRT(fVar26);
		}
		if (0.0 <= fVar24) {
			if (fVar24 <= 0.0) {
				return;
			}
			pUVar17 = this.Cache;
			if ((pUVar17 == null) ||(pUVar23 = pUVar17.Transform, pUVar23 == null)) goto label_05dd9aa4;
			fVar24 = this.MinDistance;
			fVar26 = fVar26 - fVar25 * 30.0;
			if (fVar24 <= fVar26) {
				fVar24 = fVar26;
			}
		}
		else {
			pUVar17 = this.Cache;
			if ((pUVar17 == null) ||(pUVar23 = pUVar17.Transform, pUVar23 == null)) goto label_05dd9aa4;
			fVar24 = this.MaxDistance;
			fVar26 = fVar25 * 30.0 + fVar26;
			if (fVar26 <= fVar24) {
				fVar24 = fVar26;
			}
		}
		value.z = fStack_78 * fVar24 + this.AnchorPoint.z;
		uVar7 = this.AnchorPoint.x;
		uVar15 = this.AnchorPoint.y;
		value.x = (float)auStack_28._0_4_ * fVar24 + (float)uVar7;
		value.y = (float)auStack_28._4_4_ * fVar24 + (float)uVar15;
		pUVar23.position = value;
		return;
	}

	[Token(Token = "0x600554B")]
	[Address(RVA = "0x5CD9AB0", Offset = "0x5CD8AB0", VA = "0x5CD9AB0")]
	public TestCamera()
	{
		// Lifted from source/cpp/Cameras/TestCamera.c (Cameras.TestCamera$$.ctor): 1 lines keep C-only constructs
		this.AnchorPoint.x = 0.0;
		this.AnchorPoint.y = 0.0;
		*(ulong)&this.AnchorPoint.z = 0x3f80000000000000;
		this.MaxDistance = 100.0;
		base();
		return;
	}
}
