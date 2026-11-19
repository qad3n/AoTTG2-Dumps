// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScrollContentLayout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollContentLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gilzoide.FlexUi;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B8")]
internal sealed class GisketchScrollContentLayout : FlexLayout
{
	[Token(Token = "0x40003D0")]
	private const float Epsilon = 0.01f;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x120")]
	private float _styleLeft;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x124")]
	private float _styleTop;

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x5290970", Offset = "0x528F970", VA = "0x5290970")]
	public void SyncScrollOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollContentLayout.c (Gisketch.Aottg2UI.Building.GisketchScrollContentLayout$$SyncScrollOffset): 18 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		RectTransform __this_00;
		float fVar3;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		float fVar9;
		Rect UVar10;
		float local_58;
		YGNode local_40;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[8];

		local_40._nodePtr = (YGNode)0;
		__this_00 = this.RectTransform;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = __this_00.anchorMin;
		fVar4 = ABS(UVar1.x);
		if (fVar4 <= 0.0) {
			fVar4 = 0.0;
		}
		fVar9 = Mathf.Epsilon * 8.0;
		fVar3 = fVar4 * 1e-06;
		if (fVar4 * 1e-06 <= fVar9) {
			fVar3 = fVar9;
		}
		if (ABS(0.0 - UVar1.x) < fVar3) {
			UVar1 = __this_00.anchorMax;
			fVar4 = ABS(UVar1.x);
			uVar5 = extraout_XMM0_Dc & 0x7fffffff;
			uVar7 = extraout_XMM0_Dd & 0x7fffffff;
			if (fVar4 <= 0.0) {
				fVar4 = 0.0;
			}
			fVar9 = Mathf.Epsilon * 8.0;
			fVar3 = fVar4 * 1e-06;
			if (fVar4 * 1e-06 <= fVar9) {
				fVar3 = fVar9;
			}
			if (ABS(0.0 - UVar1.x) < fVar3) {
				UVar1 = __this_00.anchoredPosition;
				UVar2 = __this_00.pivot;
				local_28._0_4_ = UVar2.x;
				local_28._4_4_ = UVar2.y;
				UVar10 = __this_00.rect;
				fVar4 = UVar10.m_Width;
				if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
					local_38._8_4_ = uVar5;
					local_38._0_8_ = UVar10._8_8_;
					local_38._12_4_ = uVar7;
					fVar4 = (float)local_38._0_4_;
				}
				local_58 = UVar1.x;
				local_58 = local_58 - (float)local_28._0_4_ * fVar4;
				if (0.01 <= ABS(local_58 - this._styleLeft)) {
					this._styleLeft = local_58;
					local_40 = this.LayoutNode;
					local_40.StyleSetPosition(0, local_58);
				}
			}
		}
		UVar1 = __this_00.anchorMin;
		fVar4 = ABS(UVar1.y);
		if (fVar4 <= 1.0) {
			fVar4 = 1.0;
		}
		fVar9 = Mathf.Epsilon * 8.0;
		fVar3 = fVar4 * 1e-06;
		if (fVar4 * 1e-06 <= fVar9) {
			fVar3 = fVar9;
		}
		if (ABS(1.0 - UVar1.y) < fVar3) {
			UVar1 = __this_00.anchorMax;
			fVar4 = ABS(UVar1.y);
			if (fVar4 <= 1.0) {
				fVar4 = 1.0;
			}
			uVar6 = 0;
			uVar8 = 0;
			fVar9 = Mathf.Epsilon * 8.0;
			fVar3 = fVar4 * 1e-06;
			if (fVar4 * 1e-06 <= fVar9) {
				fVar3 = fVar9;
			}
			if (ABS(1.0 - UVar1.y) < fVar3) {
				UVar1 = __this_00.anchoredPosition;
				UVar2 = __this_00.pivot;
				local_28._4_4_ = UVar2.y;
				local_28._0_4_ = local_28._4_4_;
				UVar10 = __this_00.rect;
				fVar4 = UVar10.m_Height;
				if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
					local_38._8_4_ = uVar6;
					local_38._0_8_ = UVar10._8_8_;
					local_38._12_4_ = uVar8;
					fVar4 = (float)local_38._4_4_;
				}
				fVar4 = -UVar1.y - (1.0 - (float)local_28._0_4_) * fVar4;
				if (0.01 <= ABS(fVar4 - this._styleTop)) {
					this._styleTop = fVar4;
					local_40 = this.LayoutNode;
					local_40.StyleSetPosition(1, fVar4);
				}
			}
		}
		return;
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x5290D20", Offset = "0x528FD20", VA = "0x5290D20")]
	public GisketchScrollContentLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollContentLayout.c (Gisketch.Aottg2UI.Building.GisketchScrollContentLayout$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07542b2f == false) {
			Il2CppMethodInitialized_07542b2f = true;
			uVar1 = (typeof(FlexLayout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(FlexLayout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
