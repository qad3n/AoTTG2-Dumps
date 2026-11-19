// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchDropShadow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000026")]
public sealed class GisketchDropShadow : BaseMeshEffect
{
	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x28")]
	private Color _color;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _offset;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x40")]
	private int _layers;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x44")]
	private float _grain;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x48")]
	private bool _solid;

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x522ECE0", Offset = "0x522DCE0", VA = "0x522ECE0")]
	public void Setup(Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c (Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup): clean
		bool bVar1;
		Graphic pUVar2;

		this._color.r = color.r;
		this._color.g = color.g;
		this._color.b = color.b;
		this._color.a = color.a;
		this._solid = false;
		pUVar2 = this.graphic;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = this.graphic;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			pUVar2.SetVerticesDirty();
			return;
		}
		return;
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x522EDA0", Offset = "0x522DDA0", VA = "0x522EDA0")]
	public void Setup(Color color, Vector2 offset, int layers, float grain, bool solid = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c (Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup): clean
		bool bVar1;
		int iVar2;
		Graphic pUVar3;
		float fVar4;

		this._color.r = color.r;
		this._color.g = color.g;
		this._color.b = color.b;
		this._color.a = color.a;
		this._offset = offset;
		iVar2 = 1;
		if (1 < layers) {
			iVar2 = layers;
		}
		this._layers = iVar2;
		fVar4 = 0.0;
		if (0.0 <= grain) {
			fVar4 = grain;
		}
		this._grain = fVar4;
		this._solid = solid;
		pUVar3 = this.graphic;
		bVar1 = ((Object)pUVar3 != null);
		if (bVar1) {
			pUVar3 = this.graphic;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			pUVar3.SetVerticesDirty();
			return;
		}
		return;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x522EE90", Offset = "0x522DE90", VA = "0x522EE90", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c (Gisketch.Aottg2UI.Styling.GisketchDropShadow$$ModifyMesh): 1 lines keep C-only constructs
		int iVar1;
		int iVar2;
		bool bVar3;
		int iVar4;
		List<UIVertex> __this_00;
		List<UIVertex> __this_01;
		uint layer;

		if (Il2CppMethodInitialized_07542857 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count) ;
			Il2CppMethodInitialized_07542857 = true;
		}
		bVar3 = this.IsActive();
		if (!bVar3) {
			return;
		}
		if (vh != null) {
			iVar4 = vh.currentVertCount;
			if (iVar4 == 0) {
				return;
			}
			__this_00 = new List<UIVertex>();
			vh.GetUIVertexStream(__this_00);
			if (__this_00 != null) {
				iVar1 = this._layers;
				iVar2 = __this_00._size;
				__this_01 = new List<UIVertex>((iVar1 + 1) * iVar2);
				layer = this._layers;
				if (0 < (int)layer) {
					do {
						this.AddLayer(__this_00, __this_01, layer);
						bVar3 = 1 < layer;
						layer = layer - 1;
					} while (bVar3);
				}
				if (__this_01 != null) {
					__this_01.AddRange((IEnumerable<T>)__this_00);
					vh.Clear();
					vh.AddUIVertexTriangleStream(__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x522F000", Offset = "0x522E000", VA = "0x522F000")]
	private void AddLayer(List<UIVertex> source, List<UIVertex> output, int layer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c (Gisketch.Aottg2UI.Styling.GisketchDropShadow$$AddLayer): 31 lines keep C-only constructs
		int piVar1;
		UIVertex pUVar2;
		uint uVar3;
		Vector2 UVar4;
		uint uVar5;
		UIVertex[] pUVar6;
		UIVertex item;
		UIVertex pUVar7;
		Color32 UVar9;
		int index;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		UIVertex local_158;
		ulong local_e8;
		float fStack_e0;
		float fStack_dc;
		float fStack_d8;
		float fStack_d4;
		float fStack_d0;
		float local_c8;
		float fStack_c4;
		float fStack_c0;
		float fStack_bc;
		float local_b8;
		float fStack_b4;
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		ulong local_78;
		ulong uStack_70;
		ulong local_68;
		ulong uStack_60;
		ulong local_58;
		ulong uStack_50;
		ulong local_48;
		float fStack_40;
		float fStack_3c;

		if (Il2CppMethodInitialized_07542858 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIVertex_get_Count) ;
			Il2CppMethodInitialized_07542858 = true;
		}
		fVar11 = (float)layer;
		fVar10 = (float)this._layers;
		fVar13 = fVar11 / fVar10;
		fVar12 = this._color.a;
		if (this._solid == false) {
			fVar12 = ((fVar13 * -0.55 + 1.1) * fVar12) / fVar10;
		}
		local_a8 = ZEXT416((uint)fVar12);
		if (source == null) {
	label_0532f3f3: ;
			throw new NullReferenceException();
		}
		if (0 < source._size) {
			UVar4 = this._offset;
			local_c8 = fVar13 * UVar4.x;
			fStack_c4 = fVar13 * UVar4.y;
			fStack_c0 = fVar13 * 0.0;
			fStack_bc = fVar13 * 0.0;
			index = 0;
			local_b8 = fVar11;
			fStack_b4 = fVar11;
			do {
				while(true) {
					local_158 = source.get_Item(index);
					fVar12 = local_158.position.z;
					local_e8 = CONCAT44(local_158.normal.y, local_158.normal.x);
					fStack_e0 = local_158.normal.z;
					fStack_dc = local_158.tangent.x;
					fStack_d8 = local_158.tangent.y;
					fStack_d4 = local_158.tangent.z;
					fStack_d0 = local_158.tangent.w;
					local_78 = CONCAT44(local_158.uv0.y, local_158.uv0.x);
					uStack_70 = CONCAT44(local_158.uv0.w, local_158.uv0.z);
					local_68 = CONCAT44(local_158.uv1.y, local_158.uv1.x);
					uStack_60 = CONCAT44(local_158.uv1.w, local_158.uv1.z);
					local_58 = CONCAT44(local_158.uv2.y, local_158.uv2.x);
					uStack_50 = CONCAT44(local_158.uv2.w, local_158.uv2.z);
					local_48 = CONCAT44(local_158.uv3.y, local_158.uv3.x);
					fStack_40 = local_158.uv3.z;
					fStack_3c = local_158.uv3.w;
					local_88._0_4_ = local_158.position.x;
					local_88._4_4_ = local_158.position.y;
					local_88._8_8_ = 0;
					fVar10 = sinf(local_158.position.y * 78.233 + local_158.position.x * 12.9898 + fVar11 * 37.719);
					local_98 = ZEXT416((uint)this._grain);
					uVar3 = this._color.r;
					UVar9._overlap_0 =(Color32)il2cpp_runtime_helper_05334d00(uVar3, this._color.b, 0);
					if (output == null) goto label_0532f3f3;
					fVar12 = fVar12 + 0.0;
					fVar13 = floorf(fVar10 * 43758.547);
					fVar13 = (fVar10 * 43758.547 - fVar13) + -0.5;
					fVar10 = (float)local_88._0_4_ + fVar13 * (float)local_98._0_4_ * local_b8 + local_c8;
					fVar13 = (float)local_88._4_4_ + -fVar13 * (float)local_98._0_4_ * fStack_b4 + fStack_c4;
					local_158.position.y = fVar13;
					local_158.position.x = fVar10;
					local_158.tangent.y = fStack_d8;
					local_158.tangent.z = fStack_d4;
					local_158.tangent.w = fStack_d0;
					local_158.normal.x = (float)local_e8;
					local_158.normal.y = (float)((ulong)local_e8 >> 0x20);
					local_158.normal.z = fStack_e0;
					local_158.tangent.x = fStack_dc;
					local_158.uv3.x = (float)local_48;
					local_158.uv3.y = (float)((ulong)local_48 >> 0x20);
					local_158.uv3.z = fStack_40;
					local_158.uv3.w = fStack_3c;
					local_158.uv2.x = (float)local_58;
					local_158.uv2.y = (float)((ulong)local_58 >> 0x20);
					local_158.uv2.z = (float)uStack_50;
					local_158.uv2.w = (float)((ulong)uStack_50 >> 0x20);
					local_158.uv1.x = (float)local_68;
					local_158.uv1.y = (float)((ulong)local_68 >> 0x20);
					local_158.uv1.z = (float)uStack_60;
					local_158.uv1.w = (float)((ulong)uStack_60 >> 0x20);
					local_158.uv0.x = (float)local_78;
					local_158.uv0.y = (float)((ulong)local_78 >> 0x20);
					local_158.uv0.z = (float)uStack_70;
					local_158.uv0.w = (float)((ulong)uStack_70 >> 0x20);
					piVar1 = &output._version;
					*piVar1 = *piVar1 + 1;
					pUVar6 = output._items;
					local_158.position.z = fVar12;
					local_158.color._overlap_0 = UVar9._overlap_0;
					if (pUVar6 == null) goto label_0532f3f3;
					uVar5 = output._size;
					if ((uint)pUVar6.Length <= uVar5) break;
					output._size = uVar5 + 1;
					pUVar7 = &pUVar6[(int)uVar5];
					(pUVar7.uv3).x = (float)(undefined4)local_48;
					(pUVar7.uv3).y = (float)local_48._4_4_;
					(pUVar7.uv3).z = fStack_40;
					(pUVar7.uv3).w = fStack_3c;
					pUVar7 = &pUVar6[(int)uVar5];
					(pUVar7.uv2).y = local_158.uv2.y;
					(pUVar7.uv2).z = local_158.uv2.z;
					*(ulong)&(pUVar7.uv2).w = CONCAT44(local_158.uv3.x, local_158.uv2.w);
					pUVar7 = &pUVar6[(int)uVar5];
					(pUVar7.uv1).y = local_158.uv1.y;
					(pUVar7.uv1).z = local_158.uv1.z;
					*(ulong)&(pUVar7.uv1).w = CONCAT44(local_158.uv2.x, local_158.uv1.w);
					pUVar7 = &pUVar6[(int)uVar5];
					(pUVar7.uv0).y = local_158.uv0.y;
					(pUVar7.uv0).z = local_158.uv0.z;
					*(ulong)&(pUVar7.uv0).w = CONCAT44(local_158.uv1.x, local_158.uv0.w);
					pUVar7 = &pUVar6[(int)uVar5];
					(pUVar7.tangent).z = fStack_d4;
					(pUVar7.tangent).w = fStack_d0;
					pUVar7.color = (Color32)UVar9._overlap_0;
					(pUVar7.uv0).x = local_158.uv0.x;
					pUVar7 = &pUVar6[(int)uVar5];
					(pUVar7.normal).y = local_158.normal.y;
					(pUVar7.normal).z = fStack_e0;
					(pUVar7.tangent).x = fStack_dc;
					(pUVar7.tangent).y = fStack_d8;
					pUVar2 = pUVar6.m_Items + (int)uVar5;
					pUVar2.position.x = fVar10;
					pUVar2.position.y = fVar13;
					*(ulong)&pUVar2.position.z = CONCAT44(local_158.normal.x, fVar12);
					index = index + 1;
					if (source._size <= index) {
						return;
					}
				}
				item.uv2.z = local_158.uv2.z;
				item.uv2.y = local_158.uv2.y;
				item.uv1.z = local_158.uv1.z;
				item.uv1.y = local_158.uv1.y;
				item.uv2.x = local_158.uv2.x;
				item.uv1.w = local_158.uv1.w;
				item.normal.x = local_158.normal.x;
				item.position.z = fVar12;
				item.normal.z = fStack_e0;
				item.normal.y = local_158.normal.y;
				item.tangent.y = fStack_d8;
				item.tangent.x = fStack_dc;
				item.uv0.x = local_158.uv0.x;
				item.color._overlap_0 = UVar9._overlap_0;
				item.uv0.z = local_158.uv0.z;
				item.uv0.y = local_158.uv0.y;
				item.uv1.x = local_158.uv1.x;
				item.uv0.w = local_158.uv0.w;
				item.position.x = fVar10;
				item.position.y = fVar13;
				item.tangent.z = fStack_d4;
				item.tangent.w = fStack_d0;
				item.uv2.w = local_158.uv2.w;
				item.uv3.x = local_158.uv3.x;
				item.uv3.y = local_158.uv3.y;
				item.uv3.z = fStack_40;
				item.uv3.w = fStack_3c;
				output.AddWithResize(item);
				index = index + 1;
			} while (index < source._size);
		}
		return;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x522F400", Offset = "0x522E400", VA = "0x522F400")]
	private static float Hash(Vector3 position, int layer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c (Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Hash): clean
		float fVar1;
		float fVar2;

		fVar1 = sinf(position.x * 12.9898 + position.y * 78.233 + (float)layer * 37.719);
		fVar2 = floorf(fVar1 * 43758.547);
		return fVar1 * 43758.547 - fVar2;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x522F450", Offset = "0x522E450", VA = "0x522F450")]
	public GisketchDropShadow()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c (Gisketch.Aottg2UI.Styling.GisketchDropShadow$$.ctor): clean
		this._color.r = 0.0;
		this._color.g = 0.0;
		this._color.b = 0.0;
		this._color.a = 0.32;
		this._offset = (Vector2)0xc0e00000c0e00000;
		this._layers = 5;
		this._grain = 1.25;
		base();
		return;
	}
}
