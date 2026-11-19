// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonIntroReveal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D5")]
public sealed class GisketchBrushButtonIntroReveal : MonoBehaviour
{
	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _mask;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x30")]
	private Mask _maskComponent;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x38")]
	private Image _maskImage;

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x529DF40", Offset = "0x529CF40", VA = "0x529DF40")]
	public void Setup(RectTransform mask, RectTransform content, Sprite brushSprite)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonIntroReveal.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Setup): 15 lines keep C-only constructs
		Image* targetAddress;
		Mask* targetAddress_00;
		bool bVar1;
		Image pUVar2;
		Mask pUVar3;
		Color UVar4;

		this._mask = mask;
		this._content = content;
		pUVar2 = null;
		bVar1 = ((Object)mask != null);
		if (bVar1) {
			if (mask == null) goto label_0539e156;
			pUVar2 = mask.GetComponent<Image>();
		}
		targetAddress = &this._maskImage;
		this._maskImage = pUVar2;
		pUVar3 = null;
		bVar1 = ((Object)mask != null);
		if (bVar1) {
			if (mask == null) goto label_0539e156;
			pUVar3 = mask.GetComponent<Mask>();
		}
		targetAddress_00 = &this._maskComponent;
		this._maskComponent = pUVar3;
		pUVar2 = this._maskImage;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			if (*targetAddress == null) goto label_0539e156;
			(*targetAddress).sprite = brushSprite;
			if (*targetAddress == null) goto label_0539e156;
			(*targetAddress).type = 1;
			pUVar2 = *targetAddress;
			if (pUVar2 == null) goto label_0539e156;
			UVar4.b = 1.0;
			UVar4.a = 1.0;
			UVar4.r = 1.0;
			UVar4.g = 1.0;
			pUVar2.set_color(UVar4);
			pUVar2 = *targetAddress;
			if (pUVar2 == null) goto label_0539e156;
			pUVar2.set_raycastTarget(false);
			if (*targetAddress == null) goto label_0539e156;
			(*targetAddress).enabled = false;
		}
		pUVar3 = *targetAddress_00;
		bVar1 = ((Object)pUVar3 != null);
		if (!bVar1) {
			return;
		}
		if (*targetAddress_00 != null) {
			(*targetAddress_00).enabled = false;
			return;
		}
	label_0539e156: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x529E160", Offset = "0x529D160", VA = "0x529E160")]
	public Tween Play(float duration)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonIntroReveal.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$Play): 3 lines keep C-only constructs
		Vector2 UVar1;
		RectTransform pUVar2;
		Mask pUVar3;
		Image pUVar4;
		Vector2 value;
		Vector2 UVar5;
		bool bVar6;
		GisketchBrushButtonIntroReveal.c__DisplayClass5_0 __this_00;
		TweenCallback<float> __this_01;
		Tweener pDVar7;
		TweenCallback __this_02;
		float fVar8;
		Rect UVar9;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchBrushButtonIntroReveal.c__DisplayClass5_0)) ;
		__this_00 = new Object();
		if (__this_00 == null) goto label_0539e4be;
		__this_00.__4__this = this;
		pUVar2 = this._mask;
		bVar6 = ((Object)pUVar2 == null);
		if (!bVar6) {
			pUVar2 = this._content;
			bVar6 = ((Object)pUVar2 == null);
			if (!bVar6) {
				pUVar3 = this._maskComponent;
				bVar6 = ((Object)pUVar3 == null);
				if (!bVar6) {
					pUVar2 = this._mask;
					if (pUVar2 != null) {
						UVar5 = (Vector2)pUVar2.sizeDelta;
						__this_00.maskSize = UVar5;
						pUVar2 = this._content;
						if (pUVar2 != null) {
							UVar5 = (Vector2)pUVar2.anchoredPosition;
							__this_00.contentStart = UVar5;
							pUVar2 = this._mask;
							if (pUVar2 != null) {
								UVar9 = pUVar2.rect;
								fVar8 = 64.0;
								if (64.0 <= UVar9.m_Width) {
									fVar8 = UVar9.m_Width;
								}
								__this_00.width = fVar8;
								pUVar4 = this._maskImage;
								bVar6 = ((Object)pUVar4 != null) ;
								if (bVar6) {
									pUVar4 = this._maskImage;
									if (pUVar4 == null) goto label_0539e4be;
									pUVar4.enabled = true;
								}
								pUVar3 = this._maskComponent;
								if (pUVar3 != null) {
									pUVar3.enabled = true;
									pUVar2 = this._mask;
									if (pUVar2 != null) {
										pUVar2.SetSizeWithCurrentAnchors(0, 0.0);
										pUVar2 = this._content;
										UVar5 = __this_00.contentStart;
										if (pUVar2 != null) {
											UVar1 = (Vector2.leftVector);
											fVar8 = __this_00.width;
											value.y = UVar5.y + fVar8 * UVar1.y;
											value.x = UVar5.x + fVar8 * UVar1.x;
											pUVar2.anchoredPosition = value;
											fVar8 = 0.01;
											if (0.01 <= duration) {
												fVar8 = duration;
											}
											__this_01 = new TweenCallback<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__0);
											pDVar7 = DOVirtual.Float(0.0, 1.0, fVar8, __this_01);
											pDVar7 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar7, true);
											__this_02 = new TweenCallback((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_c__DisplayClass5_0_Play_b__1);
											pDVar7 = TweenSettingsExtensions.OnComplete<Tweener>((object)pDVar7, __this_02);
											return (Tween)pDVar7;
										}
									}
								}
							}
						}
					}
	label_0539e4be: ;
					throw new NullReferenceException();
				}
			}
		}
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x529E4E0", Offset = "0x529D4E0", VA = "0x529E4E0")]
	public GisketchBrushButtonIntroReveal()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonIntroReveal.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonIntroReveal.c.

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__0: clean
	private void c__DisplayClass5_0__Play_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 UVar3;
		GisketchBrushButtonIntroReveal pGVar4;
		RectTransform pUVar5;
		float fVar6;
		Vector2 value_00;
		float fVar7;
		float fVar8;

		fVar6 = powf((CustomLogicMathBuiltin)this, 1.0 - value, 3.0, method);
		pGVar4 = this.__4__this;
		if ((pGVar4 != null) &&(pUVar5 = pGVar4._mask, pUVar5 != null)) {
			fVar6 = 1.0 - fVar6;
			fVar8 = 1.0;
			if (fVar6 <= 1.0) {
				fVar8 = fVar6;
			}
			pUVar5.SetSizeWithCurrentAnchors(0, (float)(-(uint)(0.0 <= fVar6) & (uint)fVar8) * this.width + 0.0);
			pGVar4 = this.__4__this;
			if (pGVar4 != null) {
				pUVar5 = pGVar4._content;
				UVar1 = this.contentStart;
				if (pUVar5 != null) {
					UVar2 = (Vector2.leftVector);
					UVar3 = this.contentStart;
					fVar8 = this.width;
					fVar7 = UVar1.x + fVar8 * UVar2.x;
					fVar8 = UVar1.y + fVar8 * UVar2.y;
					value_00.x = fVar6 * (UVar3.x - fVar7) + fVar7;
					value_00.y = fVar6 * (UVar3.y - fVar8) + fVar8;
					pUVar5.anchoredPosition = value_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal.<>c__DisplayClass5_0$$<Play>b__1: clean
	private void c__DisplayClass5_0__Play_b__1()
	{
		GisketchBrushButtonIntroReveal pGVar1;
		RectTransform pUVar2;
		Mask __this_00;
		Image pUVar3;
		bool bVar4;

		pGVar1 = this.__4__this;
		if ((pGVar1 != null) &&(pUVar2 = pGVar1._mask, pUVar2 != null)) {
			pUVar2.sizeDelta = (Vector2)this.maskSize;
			pGVar1 = this.__4__this;
			if ((pGVar1 != null) &&(pUVar2 = pGVar1._content, pUVar2 != null)) {
				pUVar2.anchoredPosition = (Vector2)this.contentStart;
				pGVar1 = this.__4__this;
				if ((pGVar1 != null) &&(__this_00 = pGVar1._maskComponent, __this_00 != null)) {
					__this_00.enabled = false;
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						pUVar3 = pGVar1._maskImage;
						bVar4 = ((Object)pUVar3 != null);
						if (!bVar4) {
							return;
						}
						pGVar1 = this.__4__this;
						if ((pGVar1 != null) &&(pUVar3 = pGVar1._maskImage, pUVar3 != null)) {
							pUVar3.enabled = false;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
