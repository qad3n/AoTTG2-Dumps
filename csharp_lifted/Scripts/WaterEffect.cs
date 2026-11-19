// ==================== AoTTG2 cross-reference ====================
// Type: WaterEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/WaterEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/WaterEffect.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x200000D")]
public class WaterEffect : MonoBehaviour
{
	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x20")]
	private PostProcessingManager _postProcessingManager;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x28")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5745DA0", Offset = "0x5744DA0", VA = "0x5745DA0")]
	private void Start()
	{
		// Lifted from source/cpp/WaterEffect.c (WaterEffect$$Start): 2 lines keep C-only constructs
		PostProcessingManager* targetAddress;
		Object x;
		bool bVar1;
		PostProcessingManager pPVar2;
		BoxCollider pUVar3;

		pPVar2 = this._postProcessingManager;
		bVar1 = ((Object)pPVar2 == null);
		if (bVar1) {
			targetAddress = &this._postProcessingManager;
			pPVar2 = Object.FindFirstObjectByType<PostProcessingManager>();
			*targetAddress = pPVar2;
		}
		pUVar3 = this.GetComponent<BoxCollider>();
		this._boxCollider = pUVar3;
		x = (Object)this._boxCollider;
		bVar1 = (x == null);
		if (bVar1) {
			Debug.Log((Il2CppObject *)"Unsupported Object for Water Effect (must have box collider).");
			this.enabled = false;
			return;
		}
		return;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5745EF0", Offset = "0x5744EF0", VA = "0x5745EF0")]
	private bool IsInsideBounds(Vector3 worldPos, BoxCollider bc)
	{
		// Lifted from source/cpp/WaterEffect.c (WaterEffect$$IsInsideBounds): 19 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		Transform __this_00;
		float fVar5;
		float fVar6;
		float fVar7;
		uint uVar8;
		float fVar9;
		byte[] auVar10 = new byte[16];
		byte[] auVar11 = new byte[16];
		float fVar12;
		float fVar14;
		byte[] auVar13 = new byte[16];
		Vector3 UVar15;
		Vector3 UVar16;
		Vector3 UVar17;
		Vector3 UVar18;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_88;

		if (bc != null) {
			__this_00 = bc.transform;
			if (__this_00 != null) {
				fVar7 = 0.0;
				UVar15 = __this_00.InverseTransformPoint(worldPos);
				fVar12 = fVar7;
				UVar16 = bc.center;
				fVar14 = fVar12;
				UVar17 = bc.size;
				fStack_94 = UVar15.y;
				fStack_a4 = UVar16.y;
				fVar9 = UVar17.y * 0.5 + (fStack_94 - fStack_a4);
				uVar2 = (Vector3.zeroVector).x;
				uVar3 = (Vector3.zeroVector).y;
				fVar6 = (float)uVar3;
				if ((float)uVar3 <= fVar9) {
					fVar6 = fVar9;
				}
				fVar1 = (Vector3.zeroVector).z;
				uVar8 = 0;
				UVar18 = bc.size;
				fVar5 = UVar18.y;
				if (fVar5 <= fVar9) {
					fVar9 = fVar5;
				}
				local_98 = UVar15.x;
				local_a8 = UVar16.x;
				local_88 = UVar17.x;
				auVar10._0_4_ = UVar17.z * 0.5 + (UVar15.z - UVar16.z);
				auVar10._4_4_ = local_88 * 0.5 + (local_98 - local_a8);
				auVar10._8_4_ = fVar14 * 0.0 + (fVar7 - fVar12);
				auVar10._12_4_ = UVar17.y * 0.0 + (fStack_94 - fStack_a4);
				auVar13._4_4_ = uVar2;
				auVar13._0_4_ = fVar1;
				auVar13._8_4_ = 0;
				auVar13._12_4_ = uVar3;
				auVar13 = maxps(auVar13, auVar10);
				auVar11._4_4_ = UVar18.x;
				auVar11._0_4_ = UVar18.z;
				auVar11._8_4_ = uVar8;
				auVar11._12_4_ = fVar5;
				auVar11 = minps(auVar10, auVar11);
				fVar12 = auVar13._0_4_ - auVar11._0_4_;
				fVar14 = auVar13._4_4_ - auVar11._4_4_;
				return fVar14 * fVar14 + (fVar6 - fVar9) * (fVar6 - fVar9) + fVar12 * fVar12 < 9.9999994e-11;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5746080", Offset = "0x5745080", VA = "0x5746080")]
	private void FixedUpdate()
	{
		// Lifted from source/cpp/WaterEffect.c (WaterEffect$$FixedUpdate): clean
		PostProcessingManager pPVar1;
		BaseCamera pCVar2;
		Camera __this_00;
		bool bVar3;
		WaterEffect __this_01;
		Vector3 worldPos;

		pPVar1 = this._postProcessingManager;
		bVar3 = ((Object)pPVar1 == null);
		if (bVar3) {
			return;
		}
		pCVar2 = SceneLoader.CurrentCamera;
		if (((pCVar2 == null) ||(__this_00 = pCVar2.Camera, __this_00 == null)) ||(__this_01 = (WaterEffect)__this_00.transform , __this_01 == null)) {
	label_05846136: ;
			throw new NullReferenceException();
		}
		worldPos = __this_01.position;
		bVar3 = __this_01.IsInsideBounds(worldPos, this._boxCollider);
		if (bVar3) {
			pPVar1 = this._postProcessingManager;
			if (pPVar1 == null) goto label_05846136;
			pPVar1.InsideWater = true;
		}
		return;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x5746140", Offset = "0x5745140", VA = "0x5746140")]
	public WaterEffect()
	{
		// Lifted from source/cpp/WaterEffect.c (WaterEffect$$.ctor): clean
		base();
		return;
	}
}
