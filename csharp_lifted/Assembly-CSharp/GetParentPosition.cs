// ==================== AoTTG2 cross-reference ====================
// Type: GetParentPosition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GetParentPosition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000004")]
[ExecuteAlways]
[RequireComponent(typeof(Renderer))]
public class GetParentPosition : MonoBehaviour
{
	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int ParentScale;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int ParentWorldPosition;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x20")]
	private Renderer _renderer;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x28")]
	private MaterialPropertyBlock _properties;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x30")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 _lastScale;

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x313C330", Offset = "0x313B330", VA = "0x313C330")]
	private void OnEnable()
	{
		// Lifted from source/cpp/GetParentPosition.c (GetParentPosition$$OnEnable): 2 lines keep C-only constructs
		MaterialPropertyBlock* targetAddress;
		Renderer pUVar1;
		MaterialPropertyBlock __this_00;

		pUVar1 = this.GetComponent<Renderer>();
		this._renderer = pUVar1;
		if (this._properties == null) {
			targetAddress = &this._properties;
			__this_00 = new MaterialPropertyBlock();
			*targetAddress = __this_00;
		}
		this.UpdateProperties(true);
		return;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x313C6B0", Offset = "0x313B6B0", VA = "0x313C6B0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/GetParentPosition.c (GetParentPosition$$LateUpdate): clean


		this.UpdateProperties(false);
		return;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x313C3D0", Offset = "0x313B3D0", VA = "0x313C3D0")]
	private void UpdateProperties(bool force)
	{
		// Lifted from source/cpp/GetParentPosition.c (GetParentPosition$$UpdateProperties): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		Renderer pUVar7;
		MaterialPropertyBlock pUVar8;
		ulong uVar9;
		ulong uVar10;
		bool bVar11;
		Transform pUVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		Vector3 UVar16;
		Vector4 value;
		Vector4 value_00;
		float fStack_58;
		float fStack_54;
		float fStack_38;
		float fStack_34;

		pUVar12 = this.transform;
		if (pUVar12 != null) {
			pUVar12 = pUVar12.parent;
			bVar11 = ((Object)pUVar12 != null);
			if (bVar11) {
				if (pUVar12 == null) goto label_0323c6a3;
				UVar16 = pUVar12.position;
				fVar13 = UVar16.z;
				uVar9 = UVar16._0_8_;
				uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				pUVar6 = typeof(Vector3).static_fields;
				uVar9._0_4_ = (pUVar6.zeroVector).x;
				uVar9._4_4_ = (pUVar6.zeroVector).y;
				fVar13 = (pUVar6.zeroVector).z;
				uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar5 == 0) {
			}
			bVar11 = ((Object)pUVar12 != null);
			fStack_38 = (float)uVar9;
			fStack_34 = (float)((ulong)uVar9 >> 0x20);
			if (bVar11) {
				if (pUVar12 == null) goto label_0323c6a3;
				UVar16 = pUVar12.lossyScale;
				fVar14 = UVar16.z;
				uVar10 = UVar16._0_8_;
			}
			else {
				pUVar6 = typeof(Vector3).static_fields;
				uVar10._0_4_ = (pUVar6.oneVector).x;
				uVar10._4_4_ = (pUVar6.oneVector).y;
				fVar14 = (pUVar6.oneVector).z;
			}
			if ((!force) &&(uVar1 = this._lastPosition.x, uVar3 = this._lastPosition.y, fVar15 = fVar13 - this._lastPosition.z,(fStack_34 - (float)uVar3) * (fStack_34 - (float)uVar3) +(fStack_38 - (float)uVar1) * (fStack_38 - (float)uVar1) + fVar15 * fVar15 < 9.9999994e-11)) {
				uVar2 = this._lastScale.x;
				uVar4 = this._lastScale.y;
				fStack_58 = (float)uVar10;
				fStack_54 = (float)((ulong)uVar10 >> 0x20);
				fVar15 = fVar14 - this._lastScale.z;
				if ((fStack_54 - (float)uVar4) * (fStack_54 - (float)uVar4) +(fStack_58 - (float)uVar2) * (fStack_58 - (float)uVar2) + fVar15 * fVar15 < 9.9999994e-11) {
					return;
				}
			}
			pUVar7 = this._renderer;
			if (pUVar7 != null) {
				pUVar7.GetPropertyBlock(this._properties);
				pUVar8 = this._properties;
				if (pUVar8 != null) {
					value.z = fVar14;
					value.x = (float)(int)uVar10;
					value.y = (float)(int)((ulong)uVar10 >> 0x20);
					value.w = 0.0;
					pUVar8.SetVector(GetParentPosition.ParentScale, value);
					pUVar8 = this._properties;
					if (pUVar8 != null) {
						value_00.z = fVar13;
						value_00.x = (float)(int)uVar9;
						value_00.y = (float)(int)((ulong)uVar9 >> 0x20);
						value_00.w = 0.0;
						pUVar8.SetVector(GetParentPosition.ParentWorldPosition, value_00);
						pUVar7 = this._renderer;
						if (pUVar7 != null) {
							pUVar7.SetPropertyBlock(this._properties);
							this._lastPosition.x = (float)(int)uVar9;
							this._lastPosition.y = (float)(int)((ulong)uVar9 >> 0x20);
							this._lastPosition.z = fVar13;
							this._lastScale.x = (float)(int)uVar10;
							this._lastScale.y = (float)(int)((ulong)uVar10 >> 0x20);
							this._lastScale.z = fVar14;
							return;
						}
					}
				}
			}
		}
	label_0323c6a3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x313C6C0", Offset = "0x313B6C0", VA = "0x313C6C0")]
	public GetParentPosition()
	{
		// Lifted from source/cpp/GetParentPosition.c (GetParentPosition$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GetParentPosition.c.

	// GetParentPosition$$.cctor: clean
	static GetParentPosition()
	{
		int iVar1;

		iVar1 = Shader.PropertyToID("_Parent_Scale");
		GetParentPosition.ParentScale = iVar1;
		iVar1 = Shader.PropertyToID("_Parent_World_Position");
		GetParentPosition.ParentWorldPosition = iVar1;
		return;
	}
}
