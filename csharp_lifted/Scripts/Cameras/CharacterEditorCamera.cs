// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.CharacterEditorCamera
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Cameras/CharacterEditorCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/CharacterEditorCamera.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Cameras;

[Token(Token = "0x20008EE")]
internal class CharacterEditorCamera : BaseCamera
{
	[Token(Token = "0x4002D45")]
	private const float MaxDistance = 4f;

	[Token(Token = "0x4002D46")]
	private const float MinDistance = 1f;

	[Token(Token = "0x4002D47")]
	private const float DefaultDistance = 3f;

	[Token(Token = "0x4002D48")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 AnchorPoint;

	[Token(Token = "0x60054F2")]
	[Address(RVA = "0x5CCF680", Offset = "0x5CCE680", VA = "0x5CCF680", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
		// Lifted from source/cpp/Cameras/CharacterEditorCamera.c (Cameras.CharacterEditorCamera$$SetDefaultCameraPosition): clean
		BaseComponentCache pUVar1;
		Transform pUVar2;
		Vector3 value;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
			value.z = 3.0;
			value.x = 0.0;
			value.y = 1.1;
			pUVar2.position = value;
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
				pUVar2.LookAt((Vector3)this.AnchorPoint);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054F3")]
	[Address(RVA = "0x5CCF6E0", Offset = "0x5CCE6E0", VA = "0x5CCF6E0")]
	protected void Update()
	{
		// Lifted from source/cpp/Cameras/CharacterEditorCamera.c (Cameras.CharacterEditorCamera$$Update): 48 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		byte bVar9;
		BaseMenu pUVar10;
		BaseMenu pUVar11;
		BaseComponentCache pUVar12;
		byte[] auVar13 = new byte[16];
		Vector3 UVar14;
		bool bVar15;
		sbyte cVar16;
		CharacterEditorMenu x;
		EventSystem __this_00;
		UnityEngine_Vector3_StaticFields pUVar17;
		Transform pUVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		uint uVar23;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		byte[] auVar24 = new byte[12];
		byte[] auVar25 = new byte[16];
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		Vector3 UVar30;
		Vector3 value;
		byte[] auStack_50 = new byte[12];
		float fStack_44;
		float fStack_40;
		float fStack_3c;
		byte[] auStack_38 = new byte[24];

		pUVar10 = UIManager.CurrentMenu;
		bVar15 = ((Object)pUVar10 == null);
		if (bVar15) {
			return;
		}
		pUVar10 = UIManager.CurrentMenu;
		if (pUVar10 != null) {
			x = pUVar10.GetComponent<CharacterEditorMenu>();
			bVar15 = ((Object)x == null);
			if (bVar15) {
				return;
			}
			pUVar10 = UIManager.CurrentMenu;
			if (pUVar10 != null) {
				pUVar11 = pUVar10.klass;
				bVar9 = (typeof(CharacterEditorMenu)._2).typeHierarchyDepth;
				if (((pUVar11._2).typeHierarchyDepth < bVar9) ||((pUVar11._2).typeHierarchy[(ulong)bVar9 - 1] != typeof(CharacterEditorMenu))) {
					throw new InvalidCastException();
				}
				cVar16 = (*((Il2CppClass)pUVar11).vtable[8].methodPtr)(pUVar10);
				if (cVar16 != false) {
					return;
				}
				__this_00 = EventSystem.current;
				if (__this_00 != null) {
					bVar15 = __this_00.IsPointerOverGameObject();
					if (bVar15) {
						return;
					}
					UVar30 = Input.mousePosition;
					fVar21 = UVar30.x;
					fVar19 = (float)(*((Il2CppClass)pUVar10.klass).vtable[11].methodPtr)(fVar21,UVar30.z,pUVar10, *(ulong)&((Il2CppClass)pUVar10.klass).vtable[11].method);
					if (fVar21 < fVar19) {
						return;
					}
					fVar19 = fVar21;
					fVar20 = (float)(*(code)((Il2CppClass)pUVar10.klass).vtable[12].methodPtr)();
					if (fVar20 < fVar21) {
						return;
					}
					fVar21 = Time.deltaTime;
					bVar15 = Input.GetKey(0x143);
					if ((bVar15) || (bVar15 = Input.GetKey(0x144))) {
						fVar20 = Input.GetAxis("Mouse X");
						fVar22 = Input.GetAxis("Mouse Y");
						pUVar12 = this.Cache;
						if (pUVar12 == null) goto label_05dcfd5d;
						pUVar18 = pUVar12.Transform;
						UVar14 = this.AnchorPoint;
						UVar30._0_8_ = il2cpp_runtime_helper_05bbcf10(0);
						if (pUVar18 == null) goto label_05dcfd5d;
						UVar30.z = fVar19;
						pUVar18.RotateAround((Vector3)UVar14, UVar30, fVar20 * fVar21 * 200.0);
						pUVar12 = this.Cache;
						if ((pUVar12 == null) ||(pUVar18 = pUVar12.Transform, pUVar18 == null)) goto label_05dcfd5d;
						UVar14 = this.AnchorPoint;
						UVar30 = pUVar18.right;
						pUVar18.RotateAround((Vector3)UVar14, UVar30, fVar21 * 200.0 * -fVar22);
					}
					fVar21 = Input.GetAxis("Mouse ScrollWheel");
					fVar19 = Time.deltaTime;
					pUVar12 = this.Cache;
					if ((pUVar12 != null) &&(pUVar18 = pUVar12.Transform, pUVar18 != null)) {
						UVar30 = pUVar18.position;
						uVar1 = this.AnchorPoint.x;
						uVar5 = this.AnchorPoint.y;
						fVar20 = UVar30.z - this.AnchorPoint.z;
						auStack_50._0_4_ = 0.0;
						auStack_50._4_4_ = 0.0;
						auVar25._0_4_ = UVar30.x - (float)uVar1;
						auVar25._4_4_ = UVar30.y - (float)uVar5;
						auVar25._8_4_ = extraout_XMM0_Dc - 0.0;
						auVar25._12_4_ = extraout_XMM0_Dd - 0.0;
						uVar23 = 0;
						fVar22 = fVar20 * fVar20 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
						if (fVar22 < 0.0) {
							fVar22 = sqrtf(fVar22);
							uVar23 = extraout_XMM0_Db;
						}
						else {
							fVar22 = SQRT(fVar22);
						}
						if (fVar22 <= 1e-05) {
							pUVar17 = typeof(Vector3).static_fields;
							fVar20 = (pUVar17.zeroVector).z;
						}
						else {
							fVar20 = fVar20 / fVar22;
							auVar13._4_4_ = fVar22;
							auVar13._0_4_ = fVar22;
							auVar13._8_4_ = uVar23;
							auVar13._12_4_ = uVar23;
							auVar25 = divps(auVar25, auVar13);
							auStack_50._0_4_ = auVar25._0_4_;
							auStack_50._4_4_ = auVar25._4_4_;
							pUVar17 = (UnityEngine_Vector3_StaticFields)auStack_50;
						}
						pUVar12 = this.Cache;
						if ((pUVar12 != null) &&(pUVar18 = pUVar12.Transform, pUVar18 != null)) {
							auStack_38._0_4_ = (pUVar17.zeroVector).x;
							auStack_38._4_4_ = (pUVar17.zeroVector).y;
							auStack_38._8_4_ = 0.0;
							auStack_38._12_4_ = 0.0;
							uVar2 = this.AnchorPoint.x;
							uVar6 = this.AnchorPoint.y;
							fVar22 = this.AnchorPoint.z;
							UVar30 = pUVar18.position;
							fVar26 = UVar30.x;
							fVar27 = UVar30.y;
							fVar28 = extraout_XMM0_Dc_00;
							fVar29 = extraout_XMM0_Dd_00;
							if (g_data_0753e7b7 == false) {
								fStack_40 = extraout_XMM0_Dc_00;
								fStack_3c = extraout_XMM0_Dd_00;
								g_data_0753e7b7 = true;
								fVar26 = (float)auStack_50._8_4_;
								fVar27 = fStack_44;
								fVar28 = fStack_40;
								fVar29 = fStack_3c;
							}
							if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
								fStack_44 = fVar27;
								auStack_50._8_4_ = fVar26;
								fStack_40 = fVar28;
								fStack_3c = fVar29;
								fVar26 = (float)auStack_50._8_4_;
								fVar27 = fStack_44;
							}
							fVar22 = fVar22 - UVar30.z;
							fVar22 = fVar22 * fVar22 +((float)uVar6 - fVar27) * ((float)uVar6 - fVar27) +((float)uVar2 - fVar26) * ((float)uVar2 - fVar26);
							if (fVar22 < 0.0) {
								fVar22 = sqrtf(fVar22);
							}
							else {
								fVar22 = SQRT(fVar22);
							}
							if (0.0 <= fVar21) {
								if (fVar21 <= 0.0) {
									return;
								}
								pUVar12 = this.Cache;
								if ((pUVar12 != null) &&(pUVar18 = pUVar12.Transform, pUVar18 != null)) {
									fVar22 = fVar22 - fVar19 * 30.0;
									auVar24 = ZEXT812(0x3f800000);
									if (auVar24._0_4_ <= fVar22) {
										auVar24._4_8_ = auVar24._4_8_;
										auVar24._0_4_ = fVar22;
									}
									fVar19 = auVar24._0_4_;
									fVar20 = fVar20 * fVar19 + this.AnchorPoint.z;
									uVar4 = this.AnchorPoint.x;
									uVar8 = this.AnchorPoint.y;
									fVar21 = (float)auStack_38._0_4_ * fVar19 + (float)uVar4;
									fVar19 = (float)auStack_38._4_4_ * fVar19 + (float)uVar8;
									goto label_05dcfd48;
								}
							}
							else {
								pUVar12 = this.Cache;
								if ((pUVar12 != null) &&(pUVar18 = pUVar12.Transform, pUVar18 != null)) {
									fVar22 = fVar19 * 30.0 + fVar22;
									fVar19 = 4.0;
									if (fVar22 <= 4.0) {
										fVar19 = fVar22;
									}
									fVar20 = fVar20 * fVar19 + this.AnchorPoint.z;
									uVar3 = this.AnchorPoint.x;
									uVar7 = this.AnchorPoint.y;
									fVar21 = (float)auStack_38._0_4_ * fVar19 + (float)uVar3;
									fVar19 = (float)auStack_38._4_4_ * fVar19 + (float)uVar7;
	label_05dcfd48: ;
									value.y = fVar19;
									value.x = fVar21;
									value.z = fVar20;
									pUVar18.position = value;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05dcfd5d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60054F4")]
	[Address(RVA = "0x5CCFD70", Offset = "0x5CCED70", VA = "0x5CCFD70")]
	private static bool IsInsidePreviewArea(CharacterEditorMenu menu, float screenX)
	{
		// Lifted from source/cpp/Cameras/CharacterEditorCamera.c (Cameras.CharacterEditorCamera$$IsInsidePreviewArea): clean
		float fVar1;

		if (menu == null) {
			throw new NullReferenceException();
		}
		fVar1 = menu.GetMinMouseX();
		if (screenX < fVar1) {
			return false;
		}
		fVar1 = menu.GetMaxMouseX();
		return screenX <= fVar1;
	}

	[Token(Token = "0x60054F5")]
	[Address(RVA = "0x5CCFDD0", Offset = "0x5CCEDD0", VA = "0x5CCFDD0")]
	public CharacterEditorCamera()
	{
		// Lifted from source/cpp/Cameras/CharacterEditorCamera.c (Cameras.CharacterEditorCamera$$.ctor): clean
		this.AnchorPoint.x = 0.0;
		this.AnchorPoint.y = 1.1;
		this.AnchorPoint.z = 0.0;
		base();
		return;
	}
}
