// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Tweening.GisketchMotion
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Tweening;

[Token(Token = "0x2000016")]
public static class GisketchMotion
{
	[Token(Token = "0x4000072")]
	private const float BrushSidePanelContentBlurPixels = 52f;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x4")]
	public static float DurationScale;

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x5226340", Offset = "0x5225340", VA = "0x5226340")]
	public static Tween PlayMainMenuPanel(GameObject go, bool enter, float duration)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayMainMenuPanel): 1 lines keep C-only constructs
		bool bVar1;
		RectTransform rect;
		Tween pDVar2;

		pDVar2 = null;
		bVar1 = ((Object)go != null);
		if (bVar1) {
			if (go == null) {
				throw new NullReferenceException();
			}
			rect = go.GetComponent<RectTransform>();
			pDVar2 = GisketchMotion.MainMenuPanel(rect, duration, enter, false);
		}
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		pDVar2 = GisketchMotionDriver.Track(pDVar2, false);
		return pDVar2;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x5226960", Offset = "0x5225960", VA = "0x5226960")]
	private static Tween MainMenuTween(GameObject go, string preset, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuTween): 1 lines keep C-only constructs
		bool bVar1;
		RectTransform pUVar2;
		Tween pDVar3;
		uint uVar5;

		if (preset != null) {
			bVar1 = preset.Contains("mainmenupanel");
			if (bVar1) {
				if (go != null) {
					pUVar2 = go.GetComponent<RectTransform>();
					if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(GisketchMotion)) ;
					}
					pDVar3 = GisketchMotion.MainMenuPanel(pUVar2, duration, enter, true);
					return pDVar3;
				}
			}
			else {
				bVar1 = preset.Contains("mainmenulogotext");
				if (bVar1) {
					if (go != null) {
						pUVar2 = go.GetComponent<RectTransform>();
						if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
						}
						uVar5 = 0x43700000;
	label_05326b29: ;
						pDVar3 = GisketchMotion.MainMenuLogo(pUVar2, duration, enter, (Vector2)((ulong)uVar5 << 0x20));
						return pDVar3;
					}
				}
				else {
					bVar1 = preset.Contains("mainmenulogoblades");
					if (bVar1) {
						if (go != null) {
							pUVar2 = go.GetComponent<RectTransform>();
							if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
							}
							uVar5 = 0xc3820000;
							goto label_05326b29;
						}
					}
					else {
						bVar1 = preset.Contains("mainmenulogoimpact");
						if (bVar1) {
							if (go != null) {
								pUVar2 = go.GetComponent<RectTransform>();
								pDVar3 = GisketchMotion.LogoImpact(pUVar2, duration);
								return pDVar3;
							}
						}
						else {
							bVar1 = preset.Contains("mainmenufootericonintro");
							if (bVar1) {
								if (go != null) {
									pUVar2 = go.GetComponent<RectTransform>();
									if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
									}
									pDVar3 = GisketchMotion.FooterIconIntro(pUVar2, duration, enter);
									return pDVar3;
								}
							}
							else {
								bVar1 = preset.Contains("mainmenutippanel");
								if (!bVar1) {
									bVar1 = preset.Contains("brushsidepanelcontentintro");
									if (bVar1) {
										if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0 ) {
										}
										pDVar3 = GisketchMotion.BrushSidePanelContentIntro(go, duration, enter);
										return pDVar3;
									}
									bVar1 = preset.Contains("mainmenubrushintro");
									if (bVar1) {
										if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0 ) {
										}
										pDVar3 = GisketchMotion.BrushIntro(go, duration, enter);
										return pDVar3;
									}
									return null;
								}
								if (go != null) {
									pUVar2 = go.GetComponent<RectTransform>();
									if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
									}
									pDVar3 = GisketchMotion.TipPanel(pUVar2, duration, enter);
									return pDVar3;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x5226440", Offset = "0x5225440", VA = "0x5226440")]
	private static Tween MainMenuPanel(RectTransform rect, float duration, bool enter, bool resetEnterStart = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuPanel): 3 lines keep C-only constructs
		Vector2 UVar1;
		bool bVar2;
		GisketchMotion.c__DisplayClass3_0 __this;
		GisketchLayoutOffset pGVar3;
		TweenCallback<float> __this_00;
		Tweener pDVar4;
		TweenCallback __this_01;
		GisketchMotion.c__DisplayClass3_0 targetAddress;
		Vector2 offset;
		float fVar5;
		float fVar6;
		Rect UVar7;
		float local_48;

		__this = new GisketchMotion.c__DisplayClass3_0();
		bVar2 = ((Object)rect == null);
		if (bVar2) {
			return null;
		}
		if (rect != null) {
			UVar7 = rect.rect;
			pGVar3 = GisketchLayoutOffset.For(rect);
			if (__this != null) {
				targetAddress = &__this.fields;
				__this.layoutOffset = pGVar3;
				pGVar3 = __this.layoutOffset;
				bVar2 = ((Object)pGVar3 == null);
				if (bVar2) {
					return null;
				}
				local_48 = UVar7.m_Width;
				fVar5 = 1.0;
				if (1.0 <= local_48) {
					fVar5 = local_48;
				}
				fVar5 = fVar5 * 1.08;
				if ((enter) && (resetEnterStart)) {
					pGVar3 = targetAddress.layoutOffset;
					if (pGVar3 == null) goto label_05326778;
					UVar1 = (Vector2.leftVector);
					offset.x = fVar5 * UVar1.x;
					offset.y = fVar5 * UVar1.y;
					pGVar3.SetMotionOffset(offset);
				}
				if (targetAddress.layoutOffset != null) {
					__this.start = targetAddress.layoutOffset._motionOffset;
					if (enter) {
						UVar1 = (Vector2.zeroVector);
						fVar6 = UVar1.x;
						fVar5 = UVar1.y;
					}
					else {
						UVar1 = (Vector2.leftVector);
						fVar6 = fVar5 * UVar1.x;
						fVar5 = fVar5 * UVar1.y;
					}
					UVar1.y = fVar5;
					UVar1.x = fVar6;
					__this.target = UVar1;
					__this_00 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__0);
					pDVar4 = DOVirtual.Float(0.0, 1.0, duration, __this_00);
					__this_01 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass3_0_MainMenuPanel_b__1);
					pDVar4 = TweenSettingsExtensions.OnComplete<Tweener>((object)pDVar4, __this_01);
					pDVar4 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar4, true);
					return (Tween)pDVar4;
				}
			}
		}
	label_05326778: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x5226D20", Offset = "0x5225D20", VA = "0x5226D20")]
	private static Tween MainMenuLogo(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$MainMenuLogo): 11 lines keep C-only constructs
		CanvasGroup* targetAddress;
		bool bVar1;
		GisketchMotion.c__DisplayClass4_0 __this;
		GisketchLayoutOffset pGVar2;
		GameObject go;
		CanvasGroup pUVar3;
		GisketchLogoMotionBlur pGVar4;
		Sequence pDVar5;
		TweenCallback<float> __this_00;
		Tweener t;
		TweenCallback __this_01;
		GisketchLogoMotionBlur* targetAddress_00;
		float fVar7;
		float fStack_44;

		__this = new GisketchMotion.c__DisplayClass4_0();
		bVar1 = ((Object)rect == null);
		if (bVar1) {
			return null;
		}
		pGVar2 = GisketchLayoutOffset.For(rect);
		if (__this != null) {
			__this.layoutOffset = pGVar2;
			pGVar2 = __this.layoutOffset;
			bVar1 = ((Object)pGVar2 == null);
			if (bVar1) {
				return null;
			}
			if (rect != null) {
				go = rect.gameObject;
				pUVar3 = GisketchMotion.EnsureCanvasGroup(go);
				targetAddress = &__this.group;
				__this.group = pUVar3;
				pGVar4 = rect.GetComponent<GisketchLogoMotionBlur>();
				targetAddress_00 = &__this.blur;
				__this.blur = pGVar4;
				pGVar2 = __this.layoutOffset;
				if (enter) {
					if (pGVar2 == null) goto label_0532710a;
					pGVar2.SetMotionOffset(offset);
					pUVar3 = *targetAddress;
					if (pUVar3 == null) goto label_0532710a;
					pUVar3.alpha = 0.0;
					if (*targetAddress_00 != null) {
						fStack_44 = offset.y;
						(*targetAddress_00).SetBlur(ABS(fStack_44) * 0.18);
					}
					pGVar2 = __this.layoutOffset;
					if (pGVar2 == null) goto label_0532710a;
					__this.start = pGVar2._motionOffset;
					offset = (Vector2.zeroVector);
				}
				else {
					if (pGVar2 == null) goto label_0532710a;
					__this.start = pGVar2._motionOffset;
				}
				__this.target = offset;
				pUVar3 = __this.group;
				if (pUVar3 != null) {
					fVar7 = pUVar3.alpha;
					__this.startAlpha = fVar7;
					if (enter) {
						fVar7 = 1.0;
					}
					else {
						fVar7 = 0.0;
					}
					__this.endAlpha = fVar7;
					pGVar4 = __this.blur;
					bVar1 = ((Object)pGVar4 != null);
					fVar7 = 0.0;
					if (bVar1) {
						if (*targetAddress_00 == null) goto label_0532710a;
						fVar7 = (*targetAddress_00).Blur;
					}
					__this.startBlur = fVar7;
					pDVar5 = DOTween.Sequence();
					__this_00 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__0);
					t = DOVirtual.Float(0.0, 1.0, duration, __this_00);
					pDVar5 = TweenSettingsExtensions.Join(pDVar5, (Tween)t);
					__this_01 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass4_0_MainMenuLogo_b__1);
					pDVar5 = TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar5, __this_01);
					pDVar5 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar5, true);
					return (Tween)pDVar5;
				}
			}
		}
	label_0532710a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x5227110", Offset = "0x5226110", VA = "0x5227110")]
	private static Tween LogoImpact(RectTransform rect, float duration)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$LogoImpact): 5 lines keep C-only constructs
		RectTransform* targetAddress;
		uint uVar1;
		float fVar2;
		uint uVar3;
		float fVar4;
		RectTransform pUVar5;
		bool bVar6;
		GisketchMotion.c__DisplayClass5_0 __this;
		GisketchLayoutOffset pGVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		Sequence pDVar9;
		TweenCallback<float> __this_00;
		Tweener t;
		TweenCallback __this_01;
		float fVar10;
		Vector3 UVar11;

		__this = new GisketchMotion.c__DisplayClass5_0();
		if (__this == null) goto label_0532742b;
		targetAddress = &__this.rect;
		__this.rect = rect;
		pUVar5 = __this.rect;
		bVar6 = ((Object)pUVar5 == null);
		if (!bVar6) {
			pGVar7 = GisketchLayoutOffset.For(__this.rect);
			__this.layoutOffset = pGVar7;
			pGVar7 = __this.layoutOffset;
			bVar6 = ((Object)pGVar7 == null);
			if (!bVar6) {
				pGVar7 = __this.layoutOffset;
				if (pGVar7 != null) {
					__this.origin = pGVar7._motionOffset;
					pUVar5 = __this.rect;
					if (pUVar5 != null) {
						UVar11 = pUVar5.localScale;
						pUVar8 = typeof(Vector3).static_fields;
						uVar1 = (pUVar8.zeroVector).x;
						uVar3 = (pUVar8.zeroVector).y;
						fVar10 = UVar11.y - (float)uVar3;
						fVar2 = UVar11.z - (pUVar8.zeroVector).z;
						fVar4 = UVar11.x - (float)uVar1;
						if (9.9999994e-11 <= fVar10 * fVar10 + fVar4 * fVar4 + fVar2 * fVar2) {
							pUVar5 = *targetAddress;
							if (pUVar5 == null) goto label_0532742b;
							UVar11 = pUVar5.localScale;
							fVar10 = UVar11.z;
							fVar2 = UVar11.x;
							fVar4 = UVar11.y;
						}
						else {
							if (Il2CppMethodInitialized_0753e4b7 == false) {
								Il2CppMethodInitialized_0753e4b7 = true;
								pUVar8 = typeof(Vector3).static_fields;
							}
							fVar2 = (pUVar8.oneVector).x;
							fVar4 = (pUVar8.oneVector).y;
							fVar10 = (pUVar8.oneVector).z;
						}
						__this.scale.x = fVar2;
						__this.scale.y = fVar4;
						__this.scale.z = fVar10;
						pDVar9 = DOTween.Sequence();
						__this_00 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__0);
						t = DOVirtual.Float(0.0, 1.0, duration, __this_00);
						pDVar9 = TweenSettingsExtensions.Join(pDVar9, (Tween)t);
						__this_01 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass5_0_LogoImpact_b__1);
						pDVar9 = TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar9, __this_01);
						pDVar9 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar9, true);
						return (Tween)pDVar9;
					}
				}
	label_0532742b: ;
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x5227AD0", Offset = "0x5226AD0", VA = "0x5227AD0")]
	private static Tween BrushIntro(GameObject go, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushIntro): clean
		uint uVar1;
		Vector2 offset;
		bool bVar2;
		RectTransform __this;
		Tween t;
		GisketchBrushButtonIntroReveal __this_00;
		Tween t_00;
		Sequence pDVar3;
		float fVar4;
		Rect UVar5;

		__this = null;
		bVar2 = ((Object)go != null);
		if (bVar2) {
			if (go == null) goto label_05327cfa;
			__this = go.GetComponent<RectTransform>() ;
		}
		bVar2 = ((Object)__this == null);
		if (bVar2) {
			return null;
		}
		if (__this == null) {
	label_05327cfa: ;
			throw new NullReferenceException();
		}
		UVar5 = __this.rect;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
		}
		fVar4 = 64.0;
		if (64.0 <= UVar5.m_Width) {
			fVar4 = UVar5.m_Width;
		}
		if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
		}
		offset.y = 0.0;
		offset.x = -fVar4;
		t = GisketchMotion.SlideNoFadeWithOffset(__this, duration, enter, offset) ;
		if (enter) {
			if (go == null) goto label_05327cfa;
			__this_00 = go.GetComponent<GisketchBrushButtonIntroReveal>();
			if (__this_00 != null) {
				t_00 = __this_00.Play(duration);
				uVar1 = (typeof(DOTween)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05327ca0;
			}
		}
		t_00 = null;
		uVar1 = (typeof(DOTween)._2).cctor_finished_or_no_cctor;
	joined_r0x05327ca0: ;
		if (uVar1 == 0) {
		}
		pDVar3 = DOTween.Sequence();
		pDVar3 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar3, true) ;
		if (t != null) {
			TweenSettingsExtensions.Join(pDVar3, t);
		}
		if (t_00 != null) {
			TweenSettingsExtensions.Join(pDVar3, t_00);
		}
		return (Tween)pDVar3;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x5227890", Offset = "0x5226890", VA = "0x5227890")]
	private static Tween BrushSidePanelContentIntro(GameObject go, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$BrushSidePanelContentIntro): clean
		Vector2 offset;
		bool bVar1;
		RectTransform __this;
		Tween t;
		CanvasGroup group;
		Tween t_00;
		Image image;
		Tween t_01;
		Sequence pDVar2;
		float fVar4;
		Rect UVar5;

		__this = null;
		bVar1 = ((Object)go != null);
		if (bVar1) {
			if (go == null) goto label_05327aca;
			__this = go.GetComponent<RectTransform>() ;
		}
		bVar1 = ((Object)__this == null);
		if (bVar1) {
			return null;
		}
		if (__this != null) {
			UVar5 = __this.rect;
			if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar4 = 64.0;
			if (64.0 <= UVar5.m_Width) {
				fVar4 = UVar5.m_Width;
			}
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
			}
			offset.y = 0.0;
			offset.x = fVar4;
			t = GisketchMotion.SlideNoFadeWithOffset(__this, duration, enter, offset);
			group = GisketchMotion.EnsureCanvasGroup(go);
			t_00 = GisketchMotion.Fade(group, duration, enter);
			if (go != null) {
				image = go.GetComponent<Image>();
				t_01 = GisketchMotion.HorizontalSurfaceBlur(image, duration, 52.0);
				pDVar2 = DOTween.Sequence();
				pDVar2 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar2, true);
				if (t != null) {
					TweenSettingsExtensions.Join(pDVar2, t);
				}
				if (t_00 != null) {
					TweenSettingsExtensions.Join(pDVar2, t_00);
				}
				if (t_01 == null) {
					return (Tween)pDVar2;
				}
				TweenSettingsExtensions.Join(pDVar2, t_01);
				return (Tween)pDVar2;
			}
		}
	label_05327aca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x5228350", Offset = "0x5227350", VA = "0x5228350")]
	private static Tween HorizontalSurfaceBlur(Image image, float duration, float blurPixels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$HorizontalSurfaceBlur): 5 lines keep C-only constructs
		bool bVar1;
		GisketchMotion.c__DisplayClass8_0 __this;
		Material pUVar2;
		TweenCallback<float> __this_00;
		Tweener pDVar3;
		TweenCallback pDVar4;
		GisketchMotion.c__DisplayClass8_0 targetAddress;

		if (Il2CppMethodInitialized_07542813 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnKill_Tweener) ;
			Il2CppMethodInitialized_07542813 = true;
		}
		__this = new GisketchMotion.c__DisplayClass8_0();
		pUVar2 = null;
		bVar1 = ((Object)image != null);
		if (bVar1) {
			if (image == null) goto label_0532861b;
			pUVar2 = image.get_material();
		}
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.material = pUVar2;
			pUVar2 = __this.material;
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
				return null;
			}
			pUVar2 = targetAddress.material;
			if (pUVar2 != null) {
				bVar1 = pUVar2.HasProperty(GisketchSurfaceMaterial. HorizontalBlurId);
				if (!bVar1) {
					return null;
				}
				pUVar2 = targetAddress.material;
				if (pUVar2 != null) {
					pUVar2.SetFloat(GisketchSurfaceMaterial. HorizontalBlurId, blurPixels);
					__this_00 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__0);
					pDVar3 = DOVirtual.Float(blurPixels, 0.0, duration, __this_00);
					pDVar4 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__1);
					pDVar3 = TweenSettingsExtensions.OnComplete<Tweener>((object)pDVar3, pDVar4);
					pDVar4 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass8_0_HorizontalSurfaceBlur_b__2);
					pDVar3 = TweenSettingsExtensions.OnKill<Tweener>((object)pDVar3, pDVar4);
					pDVar3 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar3, true);
					return (Tween)pDVar3;
				}
			}
		}
	label_0532861b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x5227430", Offset = "0x5226430", VA = "0x5227430")]
	private static Tween FooterIconIntro(RectTransform rect, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$FooterIconIntro): 4 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		uint uVar3;
		float fVar4;
		Vector3 endValue;
		bool bVar5;
		UnityEngine_Vector3_StaticFields pUVar6;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o pDVar7;
		Sequence pDVar8;
		MethodInfo* ppMVar9;
		Tween pDVar10;
		float fVar11;
		Vector3 UVar12;
		Vector3 value;
		Vector3 endValue_00;
		Vector3 endValue_01;

		bVar5 = ((Object)rect == null);
		if (bVar5) {
			return null;
		}
		if (rect == null) {
			throw new NullReferenceException();
		}
		UVar12 = rect.localScale;
		pUVar6 = typeof(Vector3).static_fields;
		uVar1 = (pUVar6.zeroVector).x;
		uVar3 = (pUVar6.zeroVector).y;
		fVar11 = UVar12.y - (float)uVar3;
		fVar2 = UVar12.z - (pUVar6.zeroVector).z;
		fVar4 = UVar12.x - (float)uVar1;
		if (9.9999994e-11 <= fVar11 * fVar11 + fVar4 * fVar4 + fVar2 * fVar2) {
			UVar12 = rect.localScale;
			fVar11 = UVar12.z;
			fVar2 = UVar12.x;
			fVar4 = UVar12.y;
		}
		else {
			if (Il2CppMethodInitialized_0753e4b7 == false) {
				Il2CppMethodInitialized_0753e4b7 = true;
				pUVar6 = typeof(Vector3).static_fields;
			}
			fVar2 = (pUVar6.oneVector).x;
			fVar4 = (pUVar6.oneVector).y;
			fVar11 = (pUVar6.oneVector).z;
		}
		if (enter) {
			UVar12.x = fVar2 * 1.35;
			UVar12.y = fVar4 * 1.35;
			UVar12.z = fVar11 * 1.35;
			rect.localScale = UVar12;
			pDVar8 = DOTween.Sequence();
			endValue_00.x = fVar2 * 0.88;
			endValue_00.y = fVar4 * 0.88;
			endValue_00.z = fVar11 * 0.88;
			pDVar7 = ShortcutExtensions.DOScale((Transform)rect, endValue_00, duration * 0.55);
			pDVar10 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar7, 9);
			pDVar8 = TweenSettingsExtensions.Append(pDVar8, pDVar10);
			endValue_01.z = fVar11;
			endValue_01.x = fVar2;
			endValue_01.y = fVar4;
			pDVar7 = ShortcutExtensions.DOScale((Transform)rect, endValue_01, duration * 0.45);
			pDVar10 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar7, 0x1b, 1.35);
			pDVar8 = TweenSettingsExtensions.Append(pDVar8, pDVar10);
			ppMVar9 = &MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence;
		}
		else {
			endValue = (Vector3.zeroVector);
			value.y = fVar4;
			value.x = fVar2;
			value.z = fVar11;
			rect.localScale = value;
			pDVar7 = ShortcutExtensions.DOScale((Transform)rect, (Vector3)endValue, duration);
			pDVar8 = (Sequence)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar7, 8);
			ppMVar9 = & MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_Vector3_Vector3_VectorOptions ;
		}
		pDVar10 = (Tween)TweenSettingsExtensions.SetUpdate<object>((object)pDVar8, true);
		return pDVar10;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x5227770", Offset = "0x5226770", VA = "0x5227770")]
	private static Tween TipPanel(RectTransform rect, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$TipPanel): clean
		Vector2 offset;
		bool bVar1;
		Tween pDVar2;
		float fVar3;
		float fVar4;
		Rect UVar5;

		bVar1 = ((Object)rect == null);
		if (bVar1) {
			return null;
		}
		if (rect == null) {
			throw new NullReferenceException();
		}
		UVar5 = rect.rect;
		fVar4 = UVar5.m_Width;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			fVar3 = 64.0;
			if (64.0 <= fVar4) {
				fVar3 = fVar4;
			}
		}
		else {
			fVar3 = 64.0;
			if (64.0 <= fVar4) {
				fVar3 = fVar4;
			}
		}
		if (!enter) {
			fVar3 = fVar3 * 1.5;
		}
		if (((typeof(GisketchMotion))._2).cctor_finished_or_no_cctor == 0) {
		}
		offset.y = 0.0;
		offset.x = fVar3;
		pDVar2 = GisketchMotion.SlideNoFadeWithOffset(rect, duration, enter, offset);
		return pDVar2;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x5227F50", Offset = "0x5226F50", VA = "0x5227F50")]
	private static Tween SlideNoFadeWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideNoFadeWithOffset): 3 lines keep C-only constructs
		bool bVar1;
		GisketchMotion.c__DisplayClass11_0 __this;
		GisketchLayoutOffset pGVar2;
		TweenCallback<float> __this_00;
		Tweener pDVar3;
		TweenCallback __this_01;
		GisketchMotion.c__DisplayClass11_0 targetAddress;

		__this = new GisketchMotion.c__DisplayClass11_0();
		bVar1 = ((Object)rect == null);
		if (bVar1) {
			return null;
		}
		pGVar2 = GisketchLayoutOffset.For(rect);
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.layoutOffset = pGVar2;
			pGVar2 = __this.layoutOffset;
			bVar1 = ((Object)pGVar2 == null);
			if (bVar1) {
				return null;
			}
			pGVar2 = targetAddress.layoutOffset;
			if (enter) {
				if (pGVar2 != null) {
					pGVar2.SetMotionOffset(offset);
					if (targetAddress.layoutOffset != null) {
						__this.start = targetAddress.layoutOffset._motionOffset;
						offset = (Vector2.zeroVector);
						goto label_0532810c;
					}
				}
			}
			else if (pGVar2 != null) {
				__this.start = pGVar2._motionOffset;
	label_0532810c: ;
				__this.target = offset;
				__this_00 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__0);
				pDVar3 = DOVirtual.Float(0.0, 1.0, duration, __this_00);
				pDVar3 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar3, 9);
				__this_01 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass11_0_SlideNoFadeWithOffset_b__1);
				pDVar3 = TweenSettingsExtensions.OnComplete<Tweener>((object)pDVar3, __this_01);
				pDVar3 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar3, true);
				return (Tween)pDVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x5228640", Offset = "0x5227640", VA = "0x5228640")]
	private static float OutCubic(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$OutCubic): 2 lines keep C-only constructs
		MethodInfo in_RSI;
		float fVar1;

		fVar1 = powf((CustomLogicMathBuiltin)method, 1.0 - value, 3.0, in_RSI);
		return 1.0 - fVar1;
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5228670", Offset = "0x5227670", VA = "0x5228670")]
	public static Tween PlayViewEnter(GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewEnter): clean
		uint uVar1;
		Tween pDVar2;

		if (Il2CppMethodInitialized_07542817 == false) {
			Il2CppMethodInitialized_07542817 = true;
			uVar1 = (typeof(GisketchMotion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchMotion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pDVar2 = GisketchMotion.PlayTargets(view, true);
			return pDVar2;
		}
		pDVar2 = GisketchMotion.PlayTargets(view, true);
		return pDVar2;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5228BC0", Offset = "0x5227BC0", VA = "0x5228BC0")]
	public static Tween PlayViewExit(GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayViewExit): clean
		uint uVar1;
		Tween pDVar2;

		if (Il2CppMethodInitialized_07542818 == false) {
			Il2CppMethodInitialized_07542818 = true;
			uVar1 = (typeof(GisketchMotion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchMotion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pDVar2 = GisketchMotion.PlayTargets(view, false);
			return pDVar2;
		}
		pDVar2 = GisketchMotion.PlayTargets(view, false);
		return pDVar2;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x5228C30", Offset = "0x5227C30", VA = "0x5228C30")]
	public static void ResetViewToRest(GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetViewToRest): clean
		GisketchMotionTarget target;
		int index;
		List<GisketchMotionTarget> __this;
		GisketchMotionTarget local_50;

		if (view == null) {
			return;
		}
		__this = view._MotionTargets_k__BackingField;
		if (__this != null) {
			if (__this._size == 0) {
				return;
			}
			index = 0;
			do {
				if (__this._size <= index) {
					return;
				}
				local_50 = __this.get_Item(index);
				target.Enter = local_50.Enter;
				target.GameObject = local_50.GameObject;
				target.Exit = local_50.Exit;
				target.RestScale.x = local_50.RestScale.x;
				target.RestScale.y = local_50.RestScale.y;
				target.RestScale.z = local_50.RestScale.z;
				target.RestAlpha = local_50.RestAlpha;
				GisketchMotion.ResetTargetToRest(target);
				index = index + 1;
				__this = view._MotionTargets_k__BackingField;
			} while (__this != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x5228EE0", Offset = "0x5227EE0", VA = "0x5228EE0")]
	public static Tween PlayNode(GameObject go, GisketchMotionDefinition motion, bool enter, bool blocksInput = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayNode): 3 lines keep C-only constructs
		Tween pDVar1;
		undefined3 in_register_00000009;
		uint uVar2;

		uVar2 = CONCAT31(in_register_00000009, blocksInput);
		pDVar1 = GisketchMotion.CreateTween(go, motion, enter);
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		pDVar1 = GisketchMotionDriver.Track(pDVar1, blocksInput);
		return pDVar1;
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x52286E0", Offset = "0x52276E0", VA = "0x52286E0")]
	private static Tween PlayTargets(GisketchView view, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$PlayTargets): 18 lines keep C-only constructs
		bool bVar1;
		GameObject pUVar2;
		GisketchMotionDefinition pGVar3;
		GisketchMotionDefinition pGVar4;
		bool bVar5;
		bool enter_00;
		int iVar6;
		GisketchMotion.c__DisplayClass19_0 __this;
		Sequence pDVar7;
		List<GisketchMotionTarget> pSVar8;
		Comparison<T> comparison;
		Dictionary<string, int> __this_00;
		Tween pDVar9;
		MethodInfo pMVar10;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		GisketchMotionDefinition motion;
		float fVar11;
		float fVar12;
		System_Collections_Generic_List_Enumerator_T__o local_a8;
		uint uStack_90;
		uint uStack_8c;
		GisketchMotionDefinition local_88;
		byte[] local_68 = new byte[16];
		uint local_58;
		uint uStack_54;
		uint uStack_50;
		uint uStack_4c;
		GisketchMotionDefinition local_48;

		if (Il2CppMethodInitialized_0754281b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<GisketchMotionTarget>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetDelay_Tween) ;
			Il2CppMethodInitialized_0754281b = true;
		}
		__this = new GisketchMotion.c__DisplayClass19_0();
		if (__this != null) {
			__this.enter = enter;
			if (view == null) {
				return null;
			}
			pSVar8 = view._MotionTargets_k__BackingField;
			if (pSVar8 != null) {
				if (pSVar8._size == 0) {
					return null;
				}
				bVar5 = Application.isPlaying;
				if (!bVar5) {
					return null;
				}
				if (view._LayoutDirty_k__BackingField != false) {
					pUVar2 = view._Root_k__BackingField;
					GisketchScreenBuilder.SettleLayout(pUVar2, 2);
					view.MarkLayoutSettled();
				}
				bVar5 = false;
				pDVar7 = DOTween.Sequence();
				pDVar7 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar7, true);
				pMVar10 = (MethodInfo)view._MotionTargets_k__BackingField;
				pSVar8 = new List<GisketchMotionTarget>((IEnumerable<T>)pMVar10);
				if (__this.enter == false) {
					if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(GisketchMotion)) ;
					}
					bVar5 = GisketchMotion.HasExplicitExit(pSVar8);
				}
				__this.explicitExitOnly = bVar5;
				pMVar10 = null;
				comparison = new Comparison<GisketchMotionTarget>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass19_0_PlayTargets_b__0);
				if (pSVar8 != null) {
					pSVar8.Sort(comparison) ;
					__this_00 = new Dictionary<string, int>();
					local_68.GetEnumerator(pSVar8);
					local_88 = local_48;
					local_a8._current._0_4_ = local_58;
					local_a8._current._4_4_ = uStack_54;
					uStack_90 = uStack_50;
					uStack_8c = uStack_4c;
					local_a8._list = (List<T>)local_68._0_8_;
					local_a8._index = local_68._8_4_;
					local_a8._version = local_68._12_4_;
					local_68._0_8_ = null;
					local_68._8_8_ = &local_a8;
					while (true) {
						bVar5 = local_a8.MoveNext();
						pGVar4 = local_88;
						if (!(bVar5)) break;
						pUVar2 = (GameObject)CONCAT44(local_a8._current._4_4_, local_a8._current._0_4_);
						pGVar3 = (GisketchMotionDefinition)CONCAT44(uStack_8c, uStack_90);
						bVar5 = __this.enter;
						bVar1 = __this.explicitExitOnly;
						enter_00 = bVar5;
						if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
							enter_00 = __this.enter;
						}
						motion = pGVar3;
						if (bVar1 != false) {
							motion = pGVar4;
						}
						if (pGVar4 != null) {
							motion = pGVar4;
						}
						if (bVar5 != false) {
							motion = pGVar3;
						}
						pDVar9 = GisketchMotion.CreateTween(pUVar2, motion, enter_00);
						if (pDVar9 != null) {
							if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
							}
							iVar6 = GisketchMotion.NextGroupIndex(__this_00, motion);
							if (motion == null) {
								fVar11 = 0.0;
							}
							else {
								fVar11 = motion.stagger;
								fVar12 = 0.0;
								if (0.0 <= fVar11) {
									fVar12 = fVar11;
								}
								fVar11 = (float)iVar6 * fVar12 + motion.delay;
							}
							TweenSettingsExtensions.SetDelay<Tween>((object)pDVar9, fVar11);
							TweenSettingsExtensions.Join(pDVar7, pDVar9);
						}
					}
					local_a8.Dispose();
					pMVar10 = extraout_RDX_01;
					if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
						pMVar10 = extraout_RDX_02;
					}
					pDVar9 = GisketchMotionDriver.Track((Tween)pDVar7, true);
					return pDVar9;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x5228F80", Offset = "0x5227F80", VA = "0x5228F80")]
	private static Tween CreateTween(GameObject go, GisketchMotionDefinition motion, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$CreateTween): clean
		Vector2 offset;
		bool bVar1;
		Gisketch_Aottg2UI_Tweening_GisketchMotion_StaticFields pGVar2;
		String pSVar3;
		Tween pDVar4;
		RectTransform pUVar5;
		CanvasGroup pUVar6;
		Transform target;
		MethodInfo pMVar7;
		uint uVar8;
		float fVar9;
		float fVar10;
		float local_2c;

		bVar1 = ((Object)go == null);
		if (motion == null) {
			return null;
		}
		if (bVar1) {
			return null;
		}
		bVar1 = String.IsNullOrEmpty(motion.preset);
		if (bVar1) {
			return null;
		}
		if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = typeof(GisketchMotion).static_fields;
			if (pGVar2.Enabled != false) goto label_053290a9;
	label_05329129: ;
			local_2c = 0.01;
			pSVar3 = motion.preset;
		}
		else {
			pGVar2 = typeof(GisketchMotion).static_fields;
			if (pGVar2.Enabled == false) goto label_05329129;
	label_053290a9: ;
			fVar10 = motion.duration;
			uVar8 = -(uint)(0.0 < fVar10);
			fVar10 = (float)(~uVar8 & 0x3e23d70a | (uint)fVar10 & uVar8);
			local_2c = 0.01;
			if (0.01 <= fVar10) {
				local_2c = fVar10;
			}
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(GisketchMotion).static_fields;
			}
			local_2c = local_2c * pGVar2.DurationScale;
			pSVar3 = motion.preset;
		}
		if (pSVar3 != null) {
			pSVar3 = pSVar3.ToLowerInvariant();
			pDVar4 = GisketchMotion.MainMenuTween(go, pSVar3, local_2c, enter);
			if (pDVar4 != null) {
				return pDVar4;
			}
			if (pSVar3 != null) {
				bVar1 = pSVar3.Contains("slideleftsmall");
				if (bVar1) {
					if (go != null) {
						pUVar5 = go.GetComponent<RectTransform>();
						if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
						}
						fVar10 = 16.0;
						fVar9 = 0.0;
	label_05329339: ;
						offset.y = fVar9;
						offset.x = fVar10;
						pDVar4 = GisketchMotion.SlideWithOffset(pUVar5, local_2c, enter, offset);
						return pDVar4;
					}
				}
				else {
					bVar1 = pSVar3.Contains("sliderightsmall");
					if (bVar1) {
						if (go != null) {
							pUVar5 = go.GetComponent<RectTransform>();
							if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
							}
							fVar10 = -16.0;
							fVar9 = 0.0;
							goto label_05329339;
						}
					}
					else {
						bVar1 = pSVar3.Contains("slideleft");
						if (bVar1) {
							if (go != null) {
								pUVar5 = go.GetComponent<RectTransform>();
								if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
								}
								fVar10 = 48.0;
								fVar9 = 0.0;
								goto label_05329339;
							}
						}
						else {
							bVar1 = pSVar3.Contains("slideright");
							if (bVar1) {
								if (go != null) {
									pUVar5 = go.GetComponent<RectTransform>();
									if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
									}
									fVar10 = -48.0;
									fVar9 = 0.0;
									goto label_05329339;
								}
							}
							else {
								bVar1 = pSVar3.Contains("slidedown");
								if (bVar1) {
									if (go != null) {
										pUVar5 = go.GetComponent<RectTransform>();
										if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0 ) {
										}
										fVar10 = 0.0;
										fVar9 = 20.0;
										goto label_05329339;
									}
								}
								else {
									bVar1 = pSVar3.Contains("slide");
									if (bVar1) {
										if (go != null) {
											pUVar5 = go.GetComponent<RectTransform>();
											if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
											}
											pDVar4 = GisketchMotion.Slide(pUVar5, local_2c, enter);
											return pDVar4;
										}
									}
									else {
										pMVar7 = (MethodInfo *)"fade";
										bVar1 = pSVar3.Contains("fade");
										if (bVar1) {
											pUVar6 = GisketchMotion.EnsureCanvasGroup(go);
											pDVar4 = GisketchMotion.Fade(pUVar6, local_2c, enter);
											return pDVar4;
										}
										bVar1 = pSVar3.Contains("balloon");
										if (bVar1) {
											if (go != null) {
												pUVar5 = go.GetComponent<RectTransform>();
												if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
												}
												pDVar4 = GisketchMotion.Balloon(pUVar5, local_2c, enter);
												return pDVar4;
											}
										}
										else {
											pSVar3.Contains("pop");
											if (go != null) {
												target = go.transform;
												pUVar6 = GisketchMotion.EnsureCanvasGroup(go);
												pDVar4 = GisketchMotion.Pop(target, pUVar6, local_2c, enter);
												return pDVar4;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x52299E0", Offset = "0x52289E0", VA = "0x52299E0")]
	private static Tween Balloon(RectTransform rect, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$Balloon): 10 lines keep C-only constructs
		uint uVar1;
		uint uVar3;
		ulong uVar2;
		ulong uVar4;
		bool bVar5;
		GameObject go;
		CanvasGroup __this;
		UnityEngine_Vector3_StaticFields pUVar6;
		Sequence pDVar7;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o pDVar8;
		Tween pDVar9;
		float fVar11;
		Vector3 UVar12;
		Vector3 endValue;
		Vector3 endValue_00;
		float local_38;
		float fStack_34;

		bVar5 = ((Object)rect == null);
		if (bVar5) {
			return null;
		}
		if (rect == null) {
	label_05329d45: ;
			throw new NullReferenceException();
		}
		go = rect.gameObject;
		__this = GisketchMotion.EnsureCanvasGroup(go);
		UVar12 = rect.localScale;
		pUVar6 = typeof(Vector3).static_fields;
		uVar1 = (pUVar6.zeroVector).x;
		uVar3 = (pUVar6.zeroVector).y;
		fVar11 = UVar12.y - (float)uVar3;
		uVar2._0_4_ = UVar12.z - (pUVar6.zeroVector).z;
		uVar2._4_4_ = UVar12.x - (float)uVar1;
		if (9.9999994e-11 <= fVar11 * fVar11 + uVar2._4_4_ * uVar2._4_4_ + (float)uVar2 * (float)uVar2) {
			UVar12 = rect.localScale;
			fVar11 = UVar12.z;
			uVar2._0_4_ = UVar12.x;
			uVar2._4_4_ = UVar12.y;
			uVar4 = UVar12._0_8_;
		}
		else {
			if (Il2CppMethodInitialized_0753e4b7 == false) {
				Il2CppMethodInitialized_0753e4b7 = true;
				pUVar6 = typeof(Vector3).static_fields;
			}
			uVar2._0_4_ = (pUVar6.oneVector).x;
			uVar2._4_4_ = (pUVar6.oneVector).y;
			fVar11 = (pUVar6.oneVector).z;
			uVar4 = uVar2;
		}
		if (enter) {
			UVar12.x = (float)uVar2 * (float)0x3f570a3d;
			UVar12.y = uVar2._4_4_ * (float)0x3f570a3d;
			UVar12.z = fVar11 * 0.84;
			rect.localScale = UVar12;
			if (__this == null) goto label_05329d45;
			__this.alpha = 0.0;
			pDVar7 = DOTween.Sequence();
			endValue_00.z = fVar11;
			endValue_00.x = (float)(int)uVar4;
			endValue_00.y = (float)(int)((ulong)uVar4 >> 0x20);
			pDVar8 = ShortcutExtensions.DOScale((Transform)rect, endValue_00, duration);
			pDVar9 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar8, 0x1b, 1.04);
			pDVar7 = TweenSettingsExtensions.Join(pDVar7, pDVar9);
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar11 = duration * 0.8;
			bVar5 = true;
		}
		else {
			if (((typeof(DOTween))._2).cctor_finished_or_no_cctor == 0) {
			}
			pDVar7 = DOTween.Sequence();
			local_38 = (float)uVar4;
			fStack_34 = (float)((ulong)uVar4 >> 0x20);
			endValue.x = local_38 * (float)0x3f666666;
			endValue.y = fStack_34 * (float)0x3f666666;
			endValue.z = fVar11 * 0.9;
			pDVar8 = ShortcutExtensions.DOScale((Transform)rect, endValue, duration);
			pDVar9 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar8, 8);
			pDVar7 = TweenSettingsExtensions.Join(pDVar7, pDVar9);
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar11 = duration * 0.75;
			bVar5 = false;
		}
		pDVar9 = GisketchMotion.Fade(__this, fVar11, bVar5);
		pDVar7 = TweenSettingsExtensions.Join(pDVar7, pDVar9);
		pDVar7 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar7, true) ;
		return (Tween)pDVar7;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x5229D50", Offset = "0x5228D50", VA = "0x5229D50")]
	private static Tween Pop(Transform target, CanvasGroup group, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$Pop): 10 lines keep C-only constructs
		uint uVar1;
		uint uVar3;
		ulong uVar2;
		ulong uVar4;
		UnityEngine_Vector3_StaticFields pUVar5;
		Sequence pDVar6;
		DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o pDVar7;
		Tween pDVar8;
		bool enter_00;
		float fVar9;
		Vector3 UVar10;
		Vector3 endValue;
		Vector3 endValue_00;
		float fStack_38;
		float fStack_34;

		if (target == null) {
	label_0532a04c: ;
			throw new NullReferenceException();
		}
		UVar10 = target.localScale;
		pUVar5 = typeof(Vector3).static_fields;
		uVar1 = (pUVar5.zeroVector).x;
		uVar3 = (pUVar5.zeroVector).y;
		fVar9 = UVar10.y - (float)uVar3;
		uVar2._0_4_ = UVar10.z - (pUVar5.zeroVector).z;
		uVar2._4_4_ = UVar10.x - (float)uVar1;
		if (9.9999994e-11 <= fVar9 * fVar9 + uVar2._4_4_ * uVar2._4_4_ + (float)uVar2 * (float)uVar2) {
			UVar10 = target.localScale;
			fVar9 = UVar10.z;
			uVar2._0_4_ = UVar10.x;
			uVar2._4_4_ = UVar10.y;
			uVar4 = UVar10._0_8_;
		}
		else {
			if (Il2CppMethodInitialized_0753e4b7 == false) {
				Il2CppMethodInitialized_0753e4b7 = true;
				pUVar5 = typeof(Vector3).static_fields;
			}
			uVar2._0_4_ = (pUVar5.oneVector).x;
			uVar2._4_4_ = (pUVar5.oneVector).y;
			fVar9 = (pUVar5.oneVector).z;
			uVar4 = uVar2;
		}
		if (enter) {
			UVar10.x = (float)uVar2 * 0.86;
			UVar10.y = uVar2._4_4_ * 0.86;
			UVar10.z = fVar9 * 0.86;
			target.localScale = UVar10;
			if (group == null) goto label_0532a04c;
			group.alpha = 0.0;
			pDVar6 = DOTween.Sequence();
			endValue_00.z = fVar9;
			endValue_00.x = (float)(int)uVar4;
			endValue_00.y = (float)(int)((ulong)uVar4 >> 0x20);
			pDVar7 = ShortcutExtensions.DOScale(target, endValue_00, duration);
			pDVar8 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar7, 0x1b, 1.12);
			pDVar6 = TweenSettingsExtensions.Join(pDVar6, pDVar8);
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
			}
			enter_00 = true;
		}
		else {
			if (((typeof(DOTween))._2).cctor_finished_or_no_cctor == 0) {
			}
			pDVar6 = DOTween.Sequence();
			fStack_38 = (float)uVar4;
			fStack_34 = (float)((ulong)uVar4 >> 0x20);
			endValue.x = fStack_38 * 0.96;
			endValue.y = fStack_34 * 0.96;
			endValue.z = fVar9 * 0.96;
			pDVar7 = ShortcutExtensions.DOScale(target, endValue, duration);
			pDVar8 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Vector3, VectorOptions>>((object)pDVar7, 8);
			pDVar6 = TweenSettingsExtensions.Join(pDVar6, pDVar8);
			if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
			}
			enter_00 = false;
		}
		pDVar8 = GisketchMotion.Fade(group, duration * 0.75, enter_00);
		pDVar6 = TweenSettingsExtensions.Join(pDVar6, pDVar8);
		pDVar6 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar6, true) ;
		return (Tween)pDVar6;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x52281E0", Offset = "0x52271E0", VA = "0x52281E0")]
	private static Tween Fade(CanvasGroup group, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$Fade): 1 lines keep C-only constructs
		CanvasGroup pUVar1;
		GisketchMotion.c__DisplayClass23_0 __this;
		TweenCallback<float> __this_00;
		Tweener pDVar2;
		float fVar3;
		float to;

		__this = new GisketchMotion.c__DisplayClass23_0();
		if (__this != null) {
			__this.group = group;
			pUVar1 = __this.group;
			if (enter) {
				fVar3 = 0.0;
				if (pUVar1 == null) goto label_05328341;
			}
			else {
				if (pUVar1 == null) goto label_05328341;
				fVar3 = pUVar1.alpha;
			}
			pUVar1.alpha = fVar3;
			pUVar1 = __this.group;
			if (pUVar1 != null) {
				fVar3 = pUVar1.alpha;
				if (enter) {
					to = 1.0;
				}
				else {
					to = 0.0;
				}
				__this_00 = new TweenCallback<float>((object)__this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass23_0_Fade_b__0);
				pDVar2 = DOVirtual.Float(fVar3, to, duration, __this_00);
				pDVar2 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar2, true);
				return (Tween)pDVar2;
			}
		}
	label_05328341: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5229940", Offset = "0x5228940", VA = "0x5229940")]
	private static Tween Slide(RectTransform rect, float duration, bool enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$Slide): clean
		bool bVar1;
		Tween pDVar2;

		bVar1 = ((Object)rect == null);
		if (bVar1) {
			return null;
		}
		if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
		}
		pDVar2 = GisketchMotion.SlideWithOffset(rect, duration, enter, (Vector2)0xc1a0000000000000);
		return pDVar2;
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x52296E0", Offset = "0x52286E0", VA = "0x52296E0")]
	private static Tween SlideWithOffset(RectTransform rect, float duration, bool enter, Vector2 offset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$SlideWithOffset): clean
		Vector2 start;
		uint uVar1;
		bool bVar2;
		GameObject go;
		CanvasGroup __this;
		GisketchLayoutOffset __this_00;
		Sequence pDVar3;
		Tween pDVar4;
		int ease;

		bVar2 = ((Object)rect == null);
		if (!bVar2) {
			if (rect == null) goto label_05329930;
			go = rect.gameObject;
			__this = GisketchMotion.EnsureCanvasGroup(go);
			__this_00 = GisketchLayoutOffset.For(rect);
			bVar2 = ((Object)__this_00 == null);
			if (!bVar2) {
				if (enter) {
					if ((__this_00 == null) ||(__this_00.SetMotionOffset(offset), __this == null)) {
	label_05329930: ;
						throw new NullReferenceException();
					}
					__this.alpha = 0.0;
					start = __this_00._motionOffset;
					offset = (Vector2.zeroVector);
					ease = 9;
					uVar1 = (typeof(DOTween)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (__this_00 == null) goto label_05329930;
					start = __this_00._motionOffset;
					ease = 8;
					uVar1 = (typeof(DOTween)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				pDVar3 = DOTween.Sequence();
				if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
				}
				pDVar4 = GisketchMotion.MotionOffsetTween(__this_00, (Vector2)start, offset, duration, ease);
				pDVar3 = TweenSettingsExtensions.Join(pDVar3, pDVar4);
				pDVar4 = GisketchMotion.Fade(__this, duration, enter);
				pDVar3 = TweenSettingsExtensions.Join(pDVar3, pDVar4);
				pDVar3 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar3, true);
				return (Tween)pDVar3;
			}
		}
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x522A070", Offset = "0x5229070", VA = "0x522A070")]
	private static Tween MotionOffsetTween(GisketchLayoutOffset layoutOffset, Vector2 start, Vector2 target, float duration, Ease ease)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOffsetTween): 2 lines keep C-only constructs
		GisketchMotion.c__DisplayClass26_0 __this;
		TweenCallback<float> __this_00;
		Tweener pDVar1;
		TweenCallback __this_01;
		float local_38;
		float fStack_34;

		__this = new GisketchMotion.c__DisplayClass26_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.layoutOffset = layoutOffset;
		local_38 = start.x;
		fStack_34 = start.y;
		__this.start.x = local_38;
		__this.start.y = fStack_34;
		__this.target.x = target.x;
		__this.target.y = target.y;
		__this_00 = new TweenCallback<float>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__0);
		pDVar1 = DOVirtual.Float(0.0, 1.0, duration, __this_00);
		pDVar1 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar1, ease);
		__this_01 = new TweenCallback((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion_c__DisplayClass26_0_MotionOffsetTween_b__1);
		pDVar1 = TweenSettingsExtensions.OnComplete<Tweener>((object)pDVar1, __this_01) ;
		pDVar1 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar1, true);
		return (Tween)pDVar1;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x5227D20", Offset = "0x5226D20", VA = "0x5227D20")]
	private static CanvasGroup EnsureCanvasGroup(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$EnsureCanvasGroup): clean
		bool bVar1;
		CanvasGroup pUVar2;

		if (go == null) {
			throw new NullReferenceException();
		}
		pUVar2 = go.GetComponent<CanvasGroup>();
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			return pUVar2;
		}
		pUVar2 = go.AddComponent<CanvasGroup>();
		return pUVar2;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x5228D10", Offset = "0x5227D10", VA = "0x5228D10")]
	private static void ResetTargetToRest(GisketchMotionTarget target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$ResetTargetToRest): clean
		bool bVar1;
		RectTransform x;
		GisketchLayoutOffset __this;
		CanvasGroup __this_00;
		Transform __this_01;

		bVar1 = ((Object)target.GameObject == null);
		if (bVar1) {
			return;
		}
		if (target.GameObject != null) {
			x = target.GameObject.GetComponent<RectTransform>();
			__this = null;
			bVar1 = ((Object)x != null);
			if (bVar1) {
				if (x == null) goto label_05328ed9;
				__this = x.GetComponent<GisketchLayoutOffset>();
			}
			bVar1 = ((Object)__this != null);
			if (bVar1) {
				if (__this == null) goto label_05328ed9;
				__this.SetMotionOffset((Vector2)(Vector2.zeroVector));
			}
			__this_00 = target.GameObject.GetComponent<CanvasGroup>();
			bVar1 = ((Object)__this_00 != null);
			if (bVar1) {
				if (__this_00 == null) goto label_05328ed9;
				__this_00.alpha = target.RestAlpha;
			}
			__this_01 = target.GameObject.transform;
			if (__this_01 != null) {
				__this_01.localScale = target.RestScale;
				return;
			}
		}
	label_05328ed9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x52296C0", Offset = "0x52286C0", VA = "0x52296C0")]
	private static float Delay(GisketchMotionDefinition motion, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$Delay): clean
		float fVar1;
		float fVar2;

		if (motion == null) {
			return 0.0;
		}
		fVar1 = motion.stagger;
		fVar2 = 0.0;
		if (0.0 <= fVar1) {
			fVar2 = fVar1;
		}
		return (float)index * fVar2 + motion.delay;
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x5229600", Offset = "0x5228600", VA = "0x5229600")]
	private static int NextGroupIndex(Dictionary<string, int> groupIndexes, GisketchMotionDefinition motion)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$NextGroupIndex): 8 lines keep C-only constructs
		String key;
		bool bVar1;
		uint in_EAX;
		String* ppSVar2;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		if ((motion == null) ||(bVar1 = String.IsNullOrEmpty(motion.group))) {
			ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			ppSVar2 = &motion.group;
		}
		if (groupIndexes == null) {
			throw new NullReferenceException();
		}
		key = *ppSVar2;
		groupIndexes.TryGetValue((object)key, (int)((long)&uStack_18 + 4));
		groupIndexes.set_Item((object)key, uStack_18._4_4_ + 1);
		return uStack_18._4_4_;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x52295E0", Offset = "0x52285E0", VA = "0x52295E0")]
	private static GisketchMotionDefinition MotionFor(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionFor): 2 lines keep C-only constructs
		undefined3 in_register_00000039;

		if ((CONCAT31(in_register_00000039, enter) != 0) ||((target.Exit == null && (!explicitExitOnly))) ) {
			target.Exit = target.Enter;
		}
		return target.Exit;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x52294F0", Offset = "0x52284F0", VA = "0x52294F0")]
	private static bool HasExplicitExit(List<GisketchMotionTarget> targets)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasExplicitExit): 1 lines keep C-only constructs
		GisketchMotionDefinition pGVar1;
		bool bVar2;
		int index;
		GisketchMotionTarget GStack_58;

		if (targets == null) {
			throw new NullReferenceException();
		}
		index = 0;
		if (0 < targets._size) {
			do {
				GStack_58 = targets.get_Item(index);
				pGVar1 = GStack_58.Exit;
				if ((pGVar1 != null) &&(bVar2 = String.IsNullOrEmpty(pGVar1.preset), !bVar2)) {
					index = 1;
					goto label_053295bf;
				}
				index = index + 1;
			} while (index < targets._size);
			index = 0;
		}
	label_053295bf: ;
		return SUB41(index, 0);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x522A220", Offset = "0x5229220", VA = "0x522A220")]
	private static bool HasMotion(GisketchMotionDefinition motion)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$HasMotion): clean
		bool bVar1;

		if (motion == null) {
			return false;
		}
		bVar1 = String.IsNullOrEmpty(motion.preset);
		return !bVar1;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x522A240", Offset = "0x5229240", VA = "0x522A240")]
	private static int MotionOrder(GisketchMotionTarget target, bool enter, bool explicitExitOnly)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c (Gisketch.Aottg2UI.Tweening.GisketchMotion$$MotionOrder): clean
		int iVar1;
		GisketchMotionDefinition pGVar2;

		pGVar2 = target.Enter;
		if (explicitExitOnly) {
			pGVar2 = target.Exit;
		}
		if (target.Exit != null) {
			pGVar2 = target.Exit;
		}
		if (enter) {
			pGVar2 = target.Enter;
		}
		if (pGVar2 == null) {
		}
		else {
		}
		return iVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotion.c.

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$.ctor: clean
	private void c__DisplayClass3_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$.ctor: clean
	private void c__DisplayClass8_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$.ctor: clean
	private void c__DisplayClass19_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$.ctor: clean
	private void c__DisplayClass26_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion$$.cctor: clean
	static GisketchMotion()
	{

		GisketchMotion.Enabled = true;
		GisketchMotion.DurationScale = 1.0;
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__0: clean
	private void c__DisplayClass11_0__SlideNoFadeWithOffset_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchLayoutOffset __this_00;
		Vector2 offset;
		float fVar3;
		float fVar4;

		__this_00 = this.layoutOffset;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = this.start;
		UVar2 = this.target;
		fVar3 = UVar1.x;
		fVar4 = UVar1.y;
		offset.y = value * (UVar2.y - fVar4) + fVar4;
		offset.x = value * (UVar2.x - fVar3) + fVar3;
		__this_00.SetMotionOffset(offset);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass11_0$$<SlideNoFadeWithOffset>b__1: clean
	private void c__DisplayClass11_0__SlideNoFadeWithOffset_b__1()
	{
		GisketchLayoutOffset __this_00;

		__this_00 = this.layoutOffset;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetMotionOffset((Vector2)this.target);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass19_0$$<PlayTargets>b__0: clean
	private int c__DisplayClass19_0__PlayTargets_b__0(GisketchMotionTarget a, GisketchMotionTarget b)
	{
		bool bVar1;
		bool bVar2;
		uint uVar3;
		int iVar4;
		GisketchMotionDefinition pGVar5;
		int iStack_34;

		if (Il2CppMethodInitialized_07542827 == false) {
			Il2CppMethodInitialized_07542827 = true;
			uVar3 = (typeof(GisketchMotion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = ((typeof(GisketchMotion))._2). cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar1 = this.enter;
		bVar2 = this.explicitExitOnly;
		pGVar5 = b.Enter;
		if (bVar2 != false) {
			pGVar5 = b.Exit;
		}
		if (b.Exit != null) {
			pGVar5 = b.Exit;
		}
		if (bVar1 != false) {
			pGVar5 = b.Enter;
		}
		if (pGVar5 == null) {
			iVar4 = 0;
		}
		else {
			iVar4 = pGVar5.order;
		}
		iVar4 = iStack_34.CompareTo(iVar4);
		return iVar4;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass23_0$$<Fade>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass23_0__Fade_b__0(float value)
	{
		CanvasGroup obj;
		long lVar1;

		obj = this.group;
		if (obj == null) {
			throw new NullReferenceException();
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		lVar1 = obj.m_CachedPtr;
		if (lVar1 == 0) {
			ThrowHelper.ThrowNullReferenceException((object)obj);
		}
		if (g_data_075548c0 == null) {
			g_data_075548c0 = il2cpp_codegen_resolve_icall("UnityEngine.CanvasGroup::set_alpha_Injected(System.IntPtr,System.Single)");
		}
		(*g_data_075548c0)(value,lVar1);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__0: clean
	private void c__DisplayClass26_0__MotionOffsetTween_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchLayoutOffset __this_00;
		Vector2 offset;
		float fVar3;
		float fVar4;

		__this_00 = this.layoutOffset;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = this.start;
		UVar2 = this.target;
		fVar3 = UVar1.x;
		fVar4 = UVar1.y;
		offset.y = value * (UVar2.y - fVar4) + fVar4;
		offset.x = value * (UVar2.x - fVar3) + fVar3;
		__this_00.SetMotionOffset(offset);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass26_0$$<MotionOffsetTween>b__1: clean
	private void c__DisplayClass26_0__MotionOffsetTween_b__1()
	{
		GisketchLayoutOffset __this_00;

		__this_00 = this.layoutOffset;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetMotionOffset((Vector2)this.target);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__0: clean
	private void c__DisplayClass3_0__MainMenuPanel_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchLayoutOffset __this_00;
		Vector2 offset;
		GisketchMotion __this_01;
		float fVar3;
		float fVar4;
		float fVar5;

		__this_01 = typeof(GisketchMotion);
		fVar3 = powf((CustomLogicMathBuiltin)__this_01, 1.0 - value, 3.0, method);
		__this_00 = this.layoutOffset;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = this.start;
		UVar2 = this.target;
		fVar4 = UVar1.x;
		fVar5 = UVar1.y;
		offset.y = (1.0 - fVar3) * (UVar2.y - fVar5) + fVar5;
		offset.x = (1.0 - fVar3) * (UVar2.x - fVar4) + fVar4;
		__this_00.SetMotionOffset(offset);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass3_0$$<MainMenuPanel>b__1: clean
	private void c__DisplayClass3_0__MainMenuPanel_b__1()
	{
		GisketchLayoutOffset __this_00;

		__this_00 = this.layoutOffset;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetMotionOffset((Vector2)this.target);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__0: clean
	private void c__DisplayClass4_0__MainMenuLogo_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchLayoutOffset __this_00;
		CanvasGroup __this_01;
		GisketchLogoMotionBlur __this_02;
		Vector2 offset;
		GisketchMotion __this_03;
		float fVar3;
		float fVar4;
		float fVar5;

		__this_03 = typeof(GisketchMotion);
		fVar3 = powf((CustomLogicMathBuiltin)__this_03, 1.0 - value, 3.0, method);
		__this_00 = this.layoutOffset;
		if (__this_00 != null) {
			UVar1 = this.start;
			UVar2 = this.target;
			fVar3 = 1.0 - fVar3;
			fVar5 = UVar1.x;
			fVar4 = UVar1.y;
			offset.y = fVar3 * (UVar2.y - fVar4) + fVar4;
			offset.x = fVar3 * (UVar2.x - fVar5) + fVar5;
			__this_00.SetMotionOffset(offset);
			__this_01 = this.group;
			if (__this_01 != null) {
				fVar5 = 1.0;
				if (fVar3 <= 1.0) {
					fVar5 = fVar3;
				}
				fVar5 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar5);
				fVar3 = this.startAlpha;
				__this_01.alpha = (this.endAlpha - fVar3) * fVar5 + fVar3;
				__this_02 = this.blur;
				if (__this_02 == null) {
					return;
				}
				fVar3 = this.startBlur;
				__this_02.SetBlur(fVar5 * (0.0 - fVar3) + fVar3);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass4_0$$<MainMenuLogo>b__1: clean
	private void c__DisplayClass4_0__MainMenuLogo_b__1()
	{
		GisketchLayoutOffset __this_00;
		GisketchLogoMotionBlur __this_01;

		__this_00 = this.layoutOffset;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetMotionOffset((Vector2)this.target);
		__this_01 = this.blur;
		if (__this_01 == null) {
			return;
		}
		__this_01.SetBlur(0.0);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__0: clean
	private void c__DisplayClass5_0__LogoImpact_b__0(float value)
	{
		uint uVar1;
		Vector2 UVar2;
		uint uVar3;
		GisketchLayoutOffset __this_00;
		RectTransform __this_01;
		Vector2 offset;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Vector3 value_00;

		fVar6 = value * 3.1415927;
		fVar4 = sinf(fVar6 * 18.0);
		fVar5 = cosf(fVar6 * 14.0);
		__this_00 = this.layoutOffset;
		if (__this_00 != null) {
			UVar2 = this.origin;
			fVar7 = 1.0 - value;
			offset.y = fVar5 * fVar7 * 4.5 + UVar2.y;
			offset.x = fVar4 * fVar7 * 10.0 + UVar2.x;
			__this_00.SetMotionOffset(offset);
			__this_01 = this.rect;
			uVar1 = this.scale.x;
			uVar3 = this.scale.y;
			fVar4 = this.scale.z;
			fVar5 = sinf(fVar6 * 8.0);
			if (__this_01 != null) {
				fVar5 = fVar7 * fVar5 * 0.025 + 1.0;
				value_00.z = fVar4 * fVar5;
				value_00.x = (float)uVar1 * fVar5;
				value_00.y = (float)uVar3 * fVar5;
				__this_01.localScale = value_00;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass5_0$$<LogoImpact>b__1: clean
	private void c__DisplayClass5_0__LogoImpact_b__1()
	{
		GisketchLayoutOffset __this_00;
		RectTransform __this_01;

		__this_00 = this.layoutOffset;
		if (__this_00 != null) {
			__this_00.SetMotionOffset((Vector2)this.origin);
			__this_01 = this.rect;
			if (__this_01 != null) {
				__this_01.localScale = (Vector3)this.scale;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__0: clean
	private void c__DisplayClass8_0__HorizontalSurfaceBlur_b__0(float value)
	{
		Material __this_00;

		__this_00 = this.material;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetFloat(GisketchSurfaceMaterial.HorizontalBlurId, value);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__1: clean
	private void c__DisplayClass8_0__HorizontalSurfaceBlur_b__1()
	{
		Material __this_00;

		__this_00 = this.material;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetFloat(GisketchSurfaceMaterial.HorizontalBlurId, 0.0);
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotion.<>c__DisplayClass8_0$$<HorizontalSurfaceBlur>b__2: clean
	private void c__DisplayClass8_0__HorizontalSurfaceBlur_b__2()
	{
		Material __this_00;

		__this_00 = this.material;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetFloat(GisketchSurfaceMaterial.HorizontalBlurId, 0.0);
		return;
	}
}
