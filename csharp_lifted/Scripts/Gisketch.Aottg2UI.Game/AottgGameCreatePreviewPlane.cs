// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePreviewPlane.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000214")]
internal sealed class AottgGameCreatePreviewPlane : BaseMeshEffect
{
	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x28")]
	private float _depth;

	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x2C")]
	private Vector2 _tilt;

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x5D88E50", Offset = "0x5D87E50", VA = "0x5D88E50")]
	public void Setup(float depth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePreviewPlane.c (Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$Setup): clean
		Graphic pUVar1;

		this._depth = depth;
		pUVar1 = this.graphic;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.SetVerticesDirty();
		return;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x5D898C0", Offset = "0x5D888C0", VA = "0x5D898C0")]
	public void SetTilt(Vector2 tilt)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePreviewPlane.c (Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$SetTilt): clean
		Vector2 UVar1;
		Graphic pUVar2;
		float fVar3;
		float fVar4;

		UVar1 = this._tilt;
		fVar3 = UVar1.x - tilt.x;
		fVar4 = UVar1.y - tilt.y;
		if (fVar4 * fVar4 + fVar3 * fVar3 < 9.9999994e-11) {
			return;
		}
		this._tilt = tilt;
		pUVar2 = this.graphic;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar2.SetVerticesDirty();
		return;
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x5D8A1D0", Offset = "0x5D891D0", VA = "0x5D8A1D0", Slot = "20")]
	public override void ModifyMesh(VertexHelper vertices)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePreviewPlane.c (Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$ModifyMesh): 42 lines keep C-only constructs
		Vector2 UVar1;
		byte[] auVar2 = new byte[16];
		UIVertex vertex;
		byte[] auVar3 = new byte[16];
		bool bVar4;
		int iVar5;
		Graphic __this_00;
		RectTransform __this_01;
		int i;
		float fVar6;
		float fVar7;
		float fVar9;
		ulong extraout_XMM0_Qb;
		byte[] auVar8 = new byte[16];
		float fVar10;
		float fVar11;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar12;
		Rect UVar13;
		Quaternion UVar14;
		Vector3 UVar15;
		float local_f8;
		float fStack_f4;
		float local_e8;
		float fStack_e4;
		UIVertex local_c8;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		ulong local_38;

		bVar4 = this.IsActive();
		if (!bVar4) {
			return;
		}
		if (vertices != null) {
			iVar5 = vertices.currentVertCount;
			if (iVar5 == 0) {
				return;
			}
			__this_00 = this.graphic;
			if ((__this_00 != null) &&(__this_01 = __this_00.rectTransform, __this_01 != null)) {
				UVar13 = __this_01.rect;
				fVar10 = UVar13.m_Width;
				fVar11 = UVar13.m_Height;
				if (fVar10 <= 0.0) {
					return;
				}
				if (fVar11 <= 0.0) {
					return;
				}
				auVar3 = (byte[])local_c8._0_16_;
				fVar6 = fVar10 * -0.2 * this._depth;
				UVar1 = this._tilt;
				local_c8.position.y = UVar1.x * 9.0 * 0.017453292;
				local_c8.position.x = UVar1.y * -8.0 * 0.017453292;
				local_c8.normal.x = auVar3._12_4_;
				local_c8.position.z = 0.0;
				i = 0;
				UVar14 = Quaternion.Internal_FromEulerRad(ref local_c8);
				local_38 = UVar14._0_8_;
				local_48._8_4_ = in_XMM1_Dc;
				local_48._0_8_ = UVar14._8_8_;
				local_48._12_4_ = in_XMM1_Dd;
				UVar1 = this._tilt;
				local_58 = ZEXT416((uint)this._depth);
				local_c8.position = SUB1612(ZEXT816(0), 0);
				local_c8.normal.x = 0.0;
				local_c8.uv3.y = 0.0;
				local_c8.uv3.z = 0.0;
				local_c8.uv3.w = 0.0;
				local_c8.uv2.y = 0.0;
				local_c8.uv2.z = 0.0;
				local_c8.uv2.w = 0.0;
				local_c8.uv3.x = 0.0;
				local_c8._16_16_ = local_c8._0_16_;
				local_c8._32_16_ = local_c8._0_16_;
				local_c8._48_16_ = local_c8._0_16_;
				local_c8._64_16_ = local_c8._0_16_;
				iVar5 = vertices.currentVertCount;
				if (iVar5 < 1) {
					return;
				}
				fVar7 = fVar11;
				if (fVar11 <= fVar10) {
					fVar7 = fVar10;
				}
				fVar12 = (float)local_58._0_4_ * fVar10 * 0.025;
				local_f8 = UVar13.m_XMin;
				fStack_f4 = UVar13.m_YMin;
				local_f8 = local_f8 + fVar10 * 0.5;
				fStack_f4 = fStack_f4 + fVar11 * 0.5;
				local_e8 = UVar1.x;
				fStack_e4 = UVar1.y;
				do {
					vertices.PopulateUIVertex(ref local_c8, i);
					auVar3 = (byte[])local_c8._0_16_;
					fVar10 = local_c8.position.y;
					UVar15.x = (auVar3._0_4_ - local_f8) * 1.1;
					UVar15.y = (fVar10 - fStack_f4) * 1.1;
					UVar14.z = (float)local_48._0_4_;
					UVar14.w = (float)local_48._4_4_;
					UVar14.x = (float)(undefined4)local_38;
					UVar14.y = (float)local_38._4_4_;
					UVar15.z = fVar6;
					UVar15 = (UVar14 * UVar15);
					auVar3 = (byte[])local_c8._48_16_;
					auVar8._0_8_ = UVar15._0_8_;
					auVar8._8_8_ = extraout_XMM0_Qb;
					fVar11 = (UVar15.z + fVar7 * 2.5) / (fVar7 * 2.5 + fVar6);
					fVar10 = 0.01;
					if (0.01 <= fVar11) {
						fVar10 = fVar11;
					}
					auVar2._4_4_ = fVar10;
					auVar2._0_4_ = fVar10;
					auVar2._8_8_ = 0;
					auVar8 = divps(auVar8, auVar2);
					fVar11 = (auVar8._0_4_ + local_f8) - local_e8 * fVar12;
					fVar9 = (auVar8._4_4_ + fStack_f4) - fStack_e4 * fVar12;
					vertex.position.y = fVar9;
					vertex.position.x = fVar11;
					local_c8.position.z = 0.0;
					local_c8.position.x = fVar11;
					local_c8.position.y = fVar9;
					local_c8.uv1.x = fVar10;
					auVar8 = (byte[])local_c8._48_16_;
					local_c8.uv1._4_12_ = ZEXT812(0);
					auVar2 = (byte[])local_c8._64_16_;
					vertex.position.z = 0.0;
					vertex.normal.x = local_c8.normal.x;
					vertex.normal.y = local_c8.normal.y;
					vertex.normal.z = local_c8.normal.z;
					vertex.tangent.x = local_c8.tangent.x;
					vertex.tangent.y = local_c8.tangent.y;
					vertex.tangent.z = local_c8.tangent.z;
					vertex.tangent.w = local_c8.tangent.w;
					vertex.color._overlap_0 = local_c8.color._overlap_0;
					vertex.uv0.x = local_c8.uv0.x;
					local_c8.uv0.y = auVar3._0_4_;
					local_c8.uv0.z = auVar3._4_4_;
					vertex.uv0.y = local_c8.uv0.y;
					vertex.uv0.z = local_c8.uv0.z;
					local_c8.uv0.w = auVar3._8_4_;
					vertex.uv0.w = local_c8.uv0.w;
					vertex.uv1.x = fVar10;
					vertex.uv1.y = 0.0;
					vertex.uv1.z = 0.0;
					vertex.uv1.w = local_c8.uv1.w;
					vertex.uv2.x = local_c8.uv2.x;
					vertex.uv2.y = local_c8.uv2.y;
					vertex.uv2.z = local_c8.uv2.z;
					vertex.uv2.w = local_c8.uv2.w;
					vertex.uv3.x = local_c8.uv3.x;
					vertex.uv3.y = local_c8.uv3.y;
					vertex.uv3.z = local_c8.uv3.z;
					vertex.uv3.w = local_c8.uv3.w;
					local_c8._48_16_ = auVar8;
					local_c8._64_16_ = auVar2;
					vertices.SetUIVertex(vertex, i);
					i = i + 1;
					iVar5 = vertices.currentVertCount;
				} while (i < iVar5);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x5D8A5D0", Offset = "0x5D895D0", VA = "0x5D8A5D0")]
	public AottgGameCreatePreviewPlane()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreatePreviewPlane.c (Gisketch.Aottg2UI.Game.AottgGameCreatePreviewPlane$$.ctor): clean
		base();
		return;
	}
}
