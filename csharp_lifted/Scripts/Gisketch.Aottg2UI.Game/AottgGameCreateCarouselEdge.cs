// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselEdge.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000218")]
internal sealed class AottgGameCreateCarouselEdge : MaskableGraphic
{
	[Token(Token = "0x4000B20")]
	[FieldOffset(Offset = "0xD8")]
	private bool _right;

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x5D8B500", Offset = "0x5D8A500", VA = "0x5D8B500")]
	public void Setup(bool right)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselEdge.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$Setup): 1 lines keep C-only constructs
		this._right = right;
		this.set_raycastTarget(false);
		this.set_color((Color)ZEXT816(0));
		this.SetVerticesDirty();
		return;
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x5D8C3F0", Offset = "0x5D8B3F0", VA = "0x5D8C3F0")]
	public void SetOpacity(float opacity)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselEdge.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$SetOpacity): 1 lines keep C-only constructs
		float fVar1;
		float fVar2;
		float fVar3;
		Color UVar4;

		UVar4 = this.get_color();
		fVar2 = ABS(UVar4.a);
		if (fVar2 <= ABS(opacity)) {
			fVar2 = ABS(opacity);
		}
		fVar3 = Mathf.Epsilon * 8.0;
		fVar1 = fVar2 * 1e-06;
		if (fVar2 * 1e-06 <= fVar3) {
			fVar1 = fVar3;
		}
		if (ABS(opacity - UVar4.a) < fVar1) {
			return;
		}
		this.set_color((Color)(ZEXT416((uint)opacity) << 0x60));
		return;
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x5D8CAE0", Offset = "0x5D8BAE0", VA = "0x5D8CAE0", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper vh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselEdge.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$OnPopulateMesh): 42 lines keep C-only constructs
		byte[] auVar1 = new byte[12];
		byte[] auVar2 = new byte[12];
		Color32 UVar3;
		RectTransform __this_00;
		ulong extraout_XMM0_Qb;
		ulong extraout_XMM0_Qb_00;
		byte[] auVar4 = new byte[16];
		byte[] auVar5 = new byte[16];
		ulong extraout_XMM0_Qb_01;
		byte[] auVar6 = new byte[16];
		byte[] auVar7 = new byte[16];
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		Rect UVar8;
		Vector4 uv0;
		Vector4 uv0_00;
		Vector4 uv0_01;
		Vector4 uv0_02;
		Vector3 position;
		Vector3 position_00;
		Vector3 position_01;
		Vector3 position_02;
		Vector3 position_03;
		Vector3 position_04;
		float local_98;
		float fStack_94;
		float local_88;
		float fStack_84;
		float fStack_80;
		float fStack_7c;

		if (vh != null) {
			vh.Clear();
			__this_00 = this.rectTransform;
			if (__this_00 != null) {
				UVar8 = __this_00.rect;
				position._0_8_ = UVar8._0_8_;
				if ((this._right != false) ||(this.get_color(), this._right != false)) {
					this.get_color();
				}
				this.get_color();
				UVar3._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(0);
				uv0.z = 0.0;
				uv0.w = 0.0;
				uv0._0_8_ = (Vector2.zeroVector);
				position.z = 0.0;
				vh.AddVert(position, UVar3, uv0);
				local_98 = UVar8.m_Width;
				fStack_94 = UVar8.m_Height;
				local_88 = UVar8.m_XMin;
				fStack_84 = UVar8.m_YMin;
				fStack_80 = (float)extraout_XMM0_Qb;
				fStack_7c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
				position_03.x = local_98 + local_88;
				position_00.y = fStack_94 + fStack_84;
				auVar4._8_4_ = in_XMM1_Dc + fStack_80;
				auVar4._12_4_ = in_XMM1_Dd + fStack_7c;
				UVar3._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(0);
				position_00.x = local_88;
				uv0_00.z = 0.0;
				uv0_00.w = 0.0;
				uv0_00._0_8_ = (Vector2.upVector);
				position_00.z = 0.0;
				vh.AddVert(position_00, UVar3, uv0_00);
				auVar5._0_4_ = local_98 * 0.5 + local_88;
				UVar3._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(0);
				auVar1._4_8_ = extraout_XMM0_Qb_00;
				auVar1._0_4_ = position_00.y;
				auVar4._0_8_ = auVar1._0_8_ << 0x20;
				auVar5._4_12_ = auVar4._4_12_;
				position_01._0_8_ = auVar5._0_8_;
				position_01.z = 0.0;
				vh.AddVert(position_01, UVar3, (Vector4)ZEXT816(0x3f8000003f000000));
				UVar3._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(0);
				auVar2._4_8_ = extraout_XMM0_Qb_01;
				auVar2._0_4_ = fStack_84;
				auVar6._0_8_ = auVar2._0_8_ << 0x20;
				auVar6._8_4_ = fStack_80;
				auVar6._12_4_ = fStack_7c;
				auVar7._4_12_ = auVar6._4_12_;
				auVar7._0_4_ = auVar5._0_4_;
				position_02._0_8_ = auVar7._0_8_;
				position_02.z = 0.0;
				vh.AddVert(position_02, UVar3, (Vector4)ZEXT816(0x3f000000));
				position_03.y = position_00.y;
				UVar3._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(0);
				uv0_01.z = 0.0;
				uv0_01.w = 0.0;
				uv0_01._0_8_ = (Vector2.oneVector);
				position_03.z = 0.0;
				vh.AddVert(position_03, UVar3, uv0_01);
				UVar3._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(0);
				position_04.y = fStack_84;
				position_04.x = position_03.x;
				uv0_02.z = 0.0;
				uv0_02.w = 0.0;
				uv0_02._0_8_ = (Vector2.rightVector);
				position_04.z = 0.0;
				vh.AddVert(position_04, UVar3, uv0_02);
				vh.AddTriangle(0, 1, 2);
				vh.AddTriangle(2, 3, 0);
				vh.AddTriangle(3, 2, 4);
				vh.AddTriangle(4, 5, 3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x5D8CEB0", Offset = "0x5D8BEB0", VA = "0x5D8CEB0")]
	public AottgGameCreateCarouselEdge()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselEdge.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselEdge$$.ctor): clean
		base();
		return;
	}
}
