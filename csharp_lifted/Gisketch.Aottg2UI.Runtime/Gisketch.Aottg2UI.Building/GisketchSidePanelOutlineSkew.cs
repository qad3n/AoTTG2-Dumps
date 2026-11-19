// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchSidePanelOutlineSkew.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BB")]
public sealed class GisketchSidePanelOutlineSkew : BaseMeshEffect
{
	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<UIVertex> _vertices;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x30")]
	private float _bottomOffset;

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x5291A60", Offset = "0x5290A60", VA = "0x5291A60")]
	public void Setup(float bottomOffset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSidePanelOutlineSkew.c (Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$Setup): clean
		Graphic pUVar1;

		this._bottomOffset = bottomOffset;
		pUVar1 = this.graphic;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.SetVerticesDirty();
		return;
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x5291A90", Offset = "0x5290A90", VA = "0x5291A90", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSidePanelOutlineSkew.c (Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$ModifyMesh): 3 lines keep C-only constructs
		int piVar1;
		UIVertex value;
		bool bVar2;
		int index;
		int index_00;
		List<UIVertex> pSVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fStack_138;
		UIVertex UStack_a0;

		if (Il2CppMethodInitialized_07542b36 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count) ;
			Il2CppMethodInitialized_07542b36 = true;
		}
		bVar2 = this.IsActive();
		if (bVar2) {
			fVar5 = this._bottomOffset;
			fVar7 = ABS(fVar5);
			if (fVar7 <= 0.0) {
				fVar7 = 0.0;
			}
			fVar4 = Mathf.Epsilon * 8.0;
			fVar6 = fVar7 * 1e-06;
			if (fVar7 * 1e-06 <= fVar4) {
				fVar6 = fVar4;
			}
			if (fVar6 <= ABS(0.0 - fVar5)) {
				pSVar3 = this._vertices;
				if (pSVar3 != null) {
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar3._size = 0;
					if (vh != null) {
						vh.GetUIVertexStream(pSVar3);
						pSVar3 = this._vertices;
						if (pSVar3 != null) {
							if (pSVar3._size == 0) {
								return;
							}
							UStack_a0 = pSVar3.get_Item(0);
							pSVar3 = this._vertices;
							if (pSVar3 != null) {
								index = 1;
								fStack_138 = UStack_a0.position.y;
								fVar5 = UStack_a0.position.y;
								do {
									if (pSVar3._size <= index) {
										fVar7 = 1.0;
										if (1.0 <= fVar5 - fStack_138) {
											fVar7 = fVar5 - fStack_138;
										}
										index_00 = 0;
										goto label_05391cd0;
									}
									UStack_a0 = pSVar3.get_Item(index) ;
									if (UStack_a0.position.y <= fStack_138) {
										fStack_138 = UStack_a0.position.y;
									}
									if (fVar5 <= UStack_a0.position.y) {
										fVar5 = UStack_a0.position.y;
									}
									index = index + 1;
									pSVar3 = this._vertices;
								} while (pSVar3 != null);
							}
						}
					}
				}
				goto label_05391e5c;
			}
		}
		return;
		while(true) {
			fVar6 = (UStack_a0.position.y - fStack_138) / fVar7;
			fVar5 = 1.0;
			if (fVar6 <= 1.0) {
				fVar5 = fVar6;
			}
			UStack_a0.position.x = UStack_a0.position.x +(float)(~-(uint)(0.0 <= fVar6) & 0x3f800000 | (uint)(1.0 - fVar5) & -(uint)(0.0 <= fVar6)) *this._bottomOffset;
			value.uv2.z = UStack_a0.uv2.z;
			value.uv2.y = UStack_a0.uv2.y;
			value.uv1.z = UStack_a0.uv1.z;
			value.uv1.y = UStack_a0.uv1.y;
			value.uv2.x = UStack_a0.uv2.x;
			value.uv1.w = UStack_a0.uv1.w;
			value.position.y = UStack_a0.position.y;
			value.position.x = UStack_a0.position.x;
			value.normal.x = UStack_a0.normal.x;
			value.position.z = UStack_a0.position.z;
			value.normal.z = UStack_a0.normal.z;
			value.normal.y = UStack_a0.normal.y;
			value.tangent.y = UStack_a0.tangent.y;
			value.tangent.x = UStack_a0.tangent.x;
			value.tangent.w = UStack_a0.tangent.w;
			value.tangent.z = UStack_a0.tangent.z;
			value.uv0.x = UStack_a0.uv0.x;
			value.color._overlap_0 = UStack_a0.color._overlap_0;
			value.uv0.z = UStack_a0.uv0.z;
			value.uv0.y = UStack_a0.uv0.y;
			value.uv1.x = UStack_a0.uv1.x;
			value.uv0.w = UStack_a0.uv0.w;
			value.uv2.w = UStack_a0.uv2.w;
			value.uv3.x = UStack_a0.uv3.x;
			value.uv3.y = UStack_a0.uv3.y;
			value.uv3.z = UStack_a0.uv3.z;
			value.uv3.w = UStack_a0.uv3.w;
			pSVar3.set_Item(index_00, value);
			index_00 = index_00 + 1;
			pSVar3 = this._vertices;
			if (pSVar3 == null) break;
	label_05391cd0: ;
			if (pSVar3._size <= index_00) {
				vh.Clear();
				vh.AddUIVertexTriangleStream(this._vertices);
				return;
			}
			UStack_a0 = pSVar3.get_Item(index_00);
			pSVar3 = this._vertices;
			if (pSVar3 == null) break;
		}
	label_05391e5c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x5291EA0", Offset = "0x5290EA0", VA = "0x5291EA0")]
	public GisketchSidePanelOutlineSkew()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchSidePanelOutlineSkew.c (Gisketch.Aottg2UI.Building.GisketchSidePanelOutlineSkew$$.ctor): clean
		List<UIVertex> __this_00;

		__this_00 = new List<UIVertex>();
		this._vertices = __this_00;
		base();
		return;
	}
}
