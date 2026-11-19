// ==================== AoTTG2 cross-reference ====================
// Type: UI.ViewportScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ViewportScaler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007E8")]
internal class ViewportScaler : IgnoreScaler
{
	[Token(Token = "0x4002779")]
	[FieldOffset(Offset = "0x24")]
	public Vector2 ContentSize;

	[Token(Token = "0x6004C0D")]
	[Address(RVA = "0x5BECEA0", Offset = "0x5BEBEA0", VA = "0x5BECEA0", Slot = "5")]
	public override void ApplyScale()
	{
		// Lifted from source/cpp/UI/ViewportScaler.c (UI.ViewportScaler$$ApplyScale): 23 lines keep C-only constructs
		Vector2 UVar1;
		bool bVar2;
		RectTransform __this_00;
		RectTransform pUVar3;
		RectTransform __this_01;
		byte[] auVar5 = new byte[12];
		float fVar4;
		float fVar7;
		byte[] auVar6 = new byte[16];
		float fVar8;
		float fVar9;
		byte[] auVar10 = new byte[16];
		Vector3 UVar11;
		Rect UVar12;
		Rect UVar13;
		byte[] local_58 = new byte[12];
		float local_48;

		__this_00 = (RectTransform)this.transform;
		if (__this_00 == null) {
	label_05ced0eb: ;
			throw new NullReferenceException();
		}
		if (__this_00.klass != typeof(RectTransform)) {
			throw new InvalidCastException();
		}
		pUVar3 = (RectTransform)__this_00.parent;
		__this_01 = null;
		if ((pUVar3 != null) &&(__this_01 = null, pUVar3.klass == typeof(RectTransform))) {
			__this_01 = pUVar3;
		}
		bVar2 = ((Object)__this_01 == null);
		if (!bVar2) {
			UVar12 = __this_00.rect;
			if (0.0 < UVar12.m_Width) {
				UVar12 = __this_00.rect;
				fVar4 = UVar12.m_Height;
				if (0.0 < fVar4) {
					fVar7 = fVar4;
					UVar12 = __this_00.rect;
					local_58._8_4_ = fVar4;
					local_58._0_8_ = UVar12._8_8_;
					if (__this_01 == null) goto label_05ced0eb;
					UVar1 = this.ContentSize;
					UVar12 = __this_01.rect;
					UVar13 = __this_01.rect;
					auVar6._8_8_ = 0;
					auVar6._0_8_ = UVar1;
					auVar6 = maxps(_local_58, auVar6);
					local_48 = UVar12.m_Width;
					auVar10._0_4_ = local_48 * (float)0x3f666666;
					auVar10._4_4_ = UVar13.m_Height * (float)0x3f666666;
					auVar10._8_4_ = fVar4 * 0.0;
					auVar10._12_4_ = fVar7 * 0.0;
					auVar6 = divps(auVar10, auVar6);
					fVar4 = auVar6._0_4_;
					if (auVar6._4_4_ <= auVar6._0_4_) {
						fVar4 = auVar6._4_4_;
					}
					auVar5 = ZEXT812(0x3f800000);
					if (fVar4 <= auVar5._0_4_) {
						auVar5._4_8_ = auVar5._4_8_;
						auVar5._0_4_ = fVar4;
					}
					fVar8 = (float)(-(uint)(0.0 <= fVar4) & auVar5._0_4_);
					this.Scale = fVar8;
					UVar11 = __this_00.localScale ;
					fVar9 = UVar11.z + -1.0;
					fVar4 = UVar11.x - fVar8;
					fVar7 = UVar11.y - fVar8;
					if (9.9999994e-11 <= fVar9 * fVar9 + fVar7 * fVar7 + fVar4 * fVar4) {
						UVar11.y = fVar8;
						UVar11.x = fVar8;
						UVar11.z = 1.0;
						__this_00.localScale = UVar11 ;
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004C0E")]
	[Address(RVA = "0x5BED100", Offset = "0x5BEC100", VA = "0x5BED100")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/UI/ViewportScaler.c (UI.ViewportScaler$$LateUpdate): clean
		this.ApplyScale();
		return;
	}

	[Token(Token = "0x6004C0F")]
	[Address(RVA = "0x5BED120", Offset = "0x5BEC120", VA = "0x5BED120")]
	public ViewportScaler()
	{
		// Lifted from source/cpp/UI/ViewportScaler.c (UI.ViewportScaler$$.ctor): clean
		this.Scale = 1.0;
		base();
		return;
	}
}
