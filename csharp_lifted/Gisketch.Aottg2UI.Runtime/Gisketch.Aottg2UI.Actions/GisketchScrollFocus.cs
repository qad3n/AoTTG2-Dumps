// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchScrollFocus
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000EB")]
public static class GisketchScrollFocus
{
	[Token(Token = "0x40004C3")]
	private const float DefaultMargin = 12f;

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x52975C0", Offset = "0x52965C0", VA = "0x52975C0")]
	public static void Reveal(GameObject focused, float margin = 12f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c (Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$Reveal): clean
		RectTransform pUVar1;
		bool bVar2;
		RectTransform pUVar3;
		ScrollRect scroll;
		GameObject pUVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Rect UVar8;
		Rect UVar9;
		float fStack_44;
		float fStack_34;

		pUVar3 = null;
		bVar2 = ((Object)focused != null);
		if (bVar2) {
			if (focused == null) goto label_0539797a;
			pUVar3 = focused.GetComponent<RectTransform>();
		}
		bVar2 = ((Object)focused != null);
		if (bVar2) {
			if (focused != null) {
				scroll = focused.GetComponentInParent<ScrollRect>(false);
				bVar2 = GisketchScrollFocus.CanScroll(pUVar3, scroll);
				if (!bVar2) {
					return;
				}
				if ((scroll != null) &&(pUVar1 = scroll.m_Content, pUVar1 != null)) {
					pUVar4 = pUVar1.gameObject;
					GisketchScreenBuilder.SettleLayout(pUVar4, 2);
					fVar5 = GisketchScrollFocus.VisibilityOffset(pUVar3, scroll.m_Viewport, margin);
					if (ABS(fVar5) < 0.01) {
						return;
					}
					pUVar1 = scroll.m_Content;
					if (pUVar1 != null) {
						UVar8 = pUVar1.rect;
						pUVar1 = scroll.m_Viewport;
						if (pUVar1 != null) {
							UVar9 = pUVar1.rect;
							fStack_34 = UVar8.m_Height;
							fStack_34 = fStack_34 - UVar9.m_Height;
							fVar7 = 0.0;
							if (0.0 <= fStack_34) {
								fVar7 = fStack_34;
							}
							scroll.StopMovement();
							fVar6 = scroll.verticalNormalizedPosition;
							fVar6 = fVar6 - fVar5 / fVar7;
							fVar5 = 1.0;
							if (fVar6 <= 1.0) {
								fVar5 = fVar6;
							}
							scroll.verticalNormalizedPosition = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar5);
							pUVar1 = scroll.m_Content;
							if (pUVar1 != null) {
								pUVar4 = pUVar1.gameObject;
								GisketchScreenBuilder.SettleLayout(pUVar4, 2);
								fVar5 = GisketchScrollFocus.VisibilityOffset(pUVar3, scroll.m_Viewport, margin);
								if (ABS(fVar5) < 0.01) {
									return;
								}
								pUVar3 = scroll.m_Content;
								if (pUVar3 != null) {
									UVar8 = pUVar3.rect;
									pUVar3 = scroll.m_Viewport;
									if (pUVar3 != null) {
										UVar9 = pUVar3.rect;
										fStack_44 = UVar8.m_Height;
										fStack_44 = fStack_44 - UVar9.m_Height;
										fVar7 = 0.0;
										if (0.0 <= fStack_44) {
											fVar7 = fStack_44;
										}
										scroll.StopMovement();
										fVar6 = scroll.verticalNormalizedPosition;
										fVar6 = fVar6 - fVar5 / fVar7;
										fVar5 = 1.0;
										if (fVar6 <= 1.0) {
											fVar5 = fVar6;
										}
										scroll.verticalNormalizedPosition = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar5);
										pUVar3 = scroll.m_Content;
										if (pUVar3 != null) {
											pUVar4 = pUVar3.gameObject;
											if ((typeof(GisketchScreenBuilder)._2). cctor_finished_or_no_cctor == 0) {
											}
											GisketchScreenBuilder.SettleLayout(pUVar4, 2);
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else {
			bVar2 = GisketchScrollFocus.CanScroll(pUVar3, null);
			if (!bVar2) {
				return;
			}
		}
	label_0539797a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x52A4710", Offset = "0x52A3710", VA = "0x52A4710")]
	public static void RevealAtCenter(GameObject focused)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c (Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$RevealAtCenter): clean
		RectTransform pUVar1;
		bool bVar2;
		RectTransform pUVar3;
		ScrollRect scroll;
		GameObject pUVar4;
		float fVar5;
		float fVar6;
		Rect UVar7;
		Rect UVar8;
		float fStack_74;
		float fStack_64;
		float fStack_54;
		Bounds UStack_30;

		pUVar3 = null;
		bVar2 = ((Object)focused != null);
		if (bVar2) {
			if (focused == null) goto label_053a4a14;
			pUVar3 = focused.GetComponent<RectTransform>();
		}
		bVar2 = ((Object)focused != null);
		if (!bVar2) {
			bVar2 = GisketchScrollFocus.CanScroll(pUVar3, null);
			if (!bVar2) {
				return;
			}
			goto label_053a4a14;
		}
		if (focused == null) goto label_053a4a14;
		scroll = focused.GetComponentInParent<ScrollRect>(false) ;
		bVar2 = GisketchScrollFocus.CanScroll(pUVar3, scroll);
		if (!bVar2) {
			return;
		}
		if ((scroll == null) ||(pUVar1 = scroll.m_Content, pUVar1 == null)) goto label_053a4a14;
		pUVar4 = pUVar1.gameObject;
		GisketchScreenBuilder.SettleLayout(pUVar4, 2);
		pUVar1 = scroll.m_Viewport;
		UStack_30 = RectTransformUtility.CalculateRelativeRectTransformBounds((Transform)pUVar1, (Transform)pUVar3) ;
		pUVar3 = scroll.m_Viewport;
		if (pUVar3 == null) goto label_053a4a14;
		UVar7 = pUVar3.rect;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542bd4 != false) goto label_053a48ce;
	label_053a4901: ;
			Il2CppMethodInitialized_07542bd4 = true;
			pUVar3 = scroll.m_Content;
		}
		else {
			if (Il2CppMethodInitialized_07542bd4 == false) goto label_053a4901;
	label_053a48ce: ;
			pUVar3 = scroll.m_Content;
		}
		if (pUVar3 != null) {
			UVar8 = pUVar3.rect;
			pUVar3 = scroll.m_Viewport;
			if (pUVar3 != null) {
				fStack_74 = UVar7.m_Height;
				fStack_54 = UVar7.m_YMin;
				UVar7 = pUVar3.rect;
				fStack_64 = UVar8.m_Height;
				fStack_64 = fStack_64 - UVar7.m_Height;
				fVar5 = 0.0;
				if (0.0 <= fStack_64) {
					fVar5 = fStack_64;
				}
				fVar6 = scroll.verticalNormalizedPosition;
				fVar6 = fVar6 - ((fStack_74 * 0.5 + fStack_54) - UStack_30.m_Center.y) / fVar5;
				fVar5 = 1.0;
				if (fVar6 <= 1.0) {
					fVar5 = fVar6;
				}
				scroll.StopMovement();
				scroll.verticalNormalizedPosition = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar5);
				pUVar3 = scroll.m_Content;
				if (pUVar3 != null) {
					pUVar4 = pUVar3.gameObject;
					GisketchScreenBuilder.SettleLayout(pUVar4, 2);
					return;
				}
			}
		}
	label_053a4a14: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x52A1D80", Offset = "0x52A0D80", VA = "0x52A1D80")]
	public static bool IsVisible(GameObject focused)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c (Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$IsVisible): clean
		RectTransform root;
		bool bVar1;
		RectTransform pUVar2;
		ScrollRect scroll;
		Rect UVar3;
		Bounds local_30;

		pUVar2 = null;
		bVar1 = ((Object)focused != null);
		if (bVar1) {
			if (focused == null) goto label_053a1fb3;
			pUVar2 = focused.GetComponent<RectTransform>();
		}
		bVar1 = ((Object)focused != null);
		if (bVar1) {
			if (focused != null) {
				scroll = focused.GetComponentInParent<ScrollRect>(false);
				bVar1 = GisketchScrollFocus.CanScroll(pUVar2, scroll);
				if (!bVar1) {
					return true;
				}
				if (scroll != null) {
					root = scroll.m_Viewport;
					local_30 = RectTransformUtility.CalculateRelativeRectTransformBounds((Transform)root, (Transform)pUVar2);
					pUVar2 = scroll.m_Viewport;
					if (pUVar2 != null) {
						UVar3 = pUVar2.rect;
						if (UVar3.m_YMin < local_30.m_Center.y + local_30.m_Extents.y) {
							if (((typeof(Rect))._2).cctor_finished_or_no_cctor == 0) {
							}
							return local_30.m_Center.y - local_30.m_Extents.y < UVar3.m_Height + UVar3.m_YMin;
						}
						return false;
					}
				}
			}
		}
		else {
			bVar1 = GisketchScrollFocus.CanScroll(pUVar2, null);
			if (!bVar1) {
				return true;
			}
		}
	label_053a1fb3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x52A4360", Offset = "0x52A3360", VA = "0x52A4360")]
	private static bool CanScroll(RectTransform target, ScrollRect scroll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c (Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$CanScroll): clean
		RectTransform pUVar1;
		bool bVar2;
		float fVar3;
		Rect UVar4;
		Rect UVar5;
		float fStack_34;

		bVar2 = ((Object)target != null);
		if (bVar2) {
			bVar2 = ((Object)scroll != null);
			if (bVar2) {
				if (scroll == null) {
	label_053a44c9: ;
					throw new NullReferenceException();
				}
				pUVar1 = scroll.m_Viewport;
				bVar2 = ((Object)pUVar1 != null);
				if (bVar2) {
					pUVar1 = scroll.m_Content;
					bVar2 = ((Object)pUVar1 != null);
					if (bVar2) {
						pUVar1 = scroll.m_Content;
						if (pUVar1 != null) {
							UVar4 = pUVar1.rect;
							pUVar1 = scroll.m_Viewport;
							if (pUVar1 != null) {
								UVar5 = pUVar1.rect;
								fStack_34 = UVar4.m_Height;
								fStack_34 = fStack_34 - UVar5.m_Height;
								if (0.0 <= fStack_34) {
								}
								return 0.01 < fVar3;
							}
						}
						goto label_053a44c9;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x52A44D0", Offset = "0x52A34D0", VA = "0x52A44D0")]
	private static float VisibilityOffset(RectTransform target, RectTransform viewport, float margin)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c (Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$VisibilityOffset): clean
		float fVar1;
		float fVar2;
		float fVar3;
		Rect UVar4;
		Bounds local_28;

		local_28 = RectTransformUtility.CalculateRelativeRectTransformBounds((Transform)viewport, (Transform)target);
		if (viewport == null) {
			throw new NullReferenceException();
		}
		UVar4 = viewport.rect;
		fVar3 = UVar4.m_YMin;
		fVar2 = (local_28.m_Center.y - local_28.m_Extents.y) - margin;
		if (fVar3 <= fVar2) {
			fVar2 = UVar4.m_Height + fVar3;
			fVar1 = local_28.m_Center.y + local_28.m_Extents.y + margin;
			fVar3 = 0.0;
			if (fVar2 < fVar1) {
				fVar3 = fVar2 - fVar1;
			}
		}
		else {
			fVar3 = fVar3 - fVar2;
		}
		return fVar3;
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x52A4680", Offset = "0x52A3680", VA = "0x52A4680")]
	private static float MaxScrollY(ScrollRect scroll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchScrollFocus.c (Gisketch.Aottg2UI.Actions.GisketchScrollFocus$$MaxScrollY): clean
		RectTransform pUVar1;
		float fVar2;
		Rect UVar3;
		Rect UVar4;
		float fStack_14;

		if ((scroll != null) &&(pUVar1 = scroll.m_Content, pUVar1 != null)) {
			UVar3 = pUVar1.rect;
			pUVar1 = scroll.m_Viewport;
			if (pUVar1 != null) {
				UVar4 = pUVar1.rect;
				fStack_14 = UVar3.m_Height;
				fStack_14 = fStack_14 - UVar4.m_Height;
				if (0.0 <= fStack_14) {
				}
				return fVar2;
			}
		}
		throw new NullReferenceException();
	}
}
