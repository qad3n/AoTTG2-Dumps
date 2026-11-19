// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000210")]
internal sealed class AottgMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x4000AEB")]
	private const float Gap = 32f;

	[Token(Token = "0x4000AEC")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x4000AED")]
	private const float PauseSeconds = 0.7f;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0x28")]
	private string _stateKey;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x30")]
	private string _fallback;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x38")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x40")]
	private RectTransform _textRect;

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x5D86B60", Offset = "0x5D85B60", VA = "0x5D86B60")]
	public void Setup(GisketchUIState state, string stateKey, string fallback, GisketchStyleDefinition style, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$Setup): 7 lines keep C-only constructs
		String* targetAddress;
		String* targetAddress_00;
		GisketchUIState pGVar1;
		Action<string> __this_00;
		String value;

		this._state = state;
		targetAddress = &this._stateKey;
		this._stateKey = stateKey;
		if (fallback == null) {
			fallback = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		targetAddress_00 = &this._fallback;
		this._fallback = fallback;
		this.CreateText(style, theme);
		pGVar1 = this._state;
		if (pGVar1 != null) {
			__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged);
			pGVar1.add_Changed(__this_00);
			pGVar1 = this._state;
			if (pGVar1 != null) {
				value = pGVar1.Get(*targetAddress, *targetAddress_00);
				goto label_05e86c67;
			}
		}
		value = *targetAddress_00;
	label_05e86c67: ;
		this.SetText(value);
		return;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x5D87170", Offset = "0x5D86170", VA = "0x5D87170")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnDestroy): 1 lines keep C-only constructs
		Tween t;
		GisketchUIState __this_00;
		Action<string> __this_01;

		t = this._tween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		__this_00 = this._state;
		if (__this_00 == null) {
			return;
		}
		__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged);
		__this_00.remove_Changed(__this_01);
		return;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x5D87200", Offset = "0x5D86200", VA = "0x5D87200")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnRectTransformDimensionsChange): clean
		this.RefreshMarquee();
		return;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x5D876C0", Offset = "0x5D866C0", VA = "0x5D876C0")]
	private void OnStateChanged(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$OnStateChanged): clean
		GisketchUIState __this_00;
		bool bVar1;
		String value;

		bVar1 = (key == this._stateKey);
		if (!bVar1) {
			return;
		}
		__this_00 = this._state;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		value = __this_00.Get(this._stateKey, (String)**(ulong*)(g_data_07556758 + 0xb8));
		this.SetText(value);
		return;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x5D86C80", Offset = "0x5D85C80", VA = "0x5D86C80")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$CreateText): 21 lines keep C-only constructs
		RectTransform* targetAddress;
		TextMeshProUGUI* targetAddress_00;
		Il2CppType handle;
		int weight;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		RectTransform pUVar2;
		TextMeshProUGUI pTVar3;
		TMP_FontAsset value;
		String family;
		float value_00;
		Color fallback;
		Color UVar4;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if ((obj != null) &&(pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar1 == null)) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject("AoTTG Marquee Text", components);
			if (__this_00 != null) {
				__this_01 = __this_00.transform;
				parent = this.transform;
				if (__this_01 != null) {
					__this_01.SetParent(parent, false);
					pUVar2 = __this_00.GetComponent<RectTransform>();
					targetAddress = &this._textRect;
					this._textRect = pUVar2;
					pUVar2 = this._textRect;
					if (pUVar2 != null) {
						pUVar2.anchorMin = (Vector2)0x0;
						if (*targetAddress != null) {
							(*targetAddress).anchorMax = (Vector2)0x3f80000000000000;
							if (*targetAddress != null) {
								(*targetAddress).pivot = (Vector2)0x3f00000000000000;
								pUVar2 = *targetAddress;
								if (pUVar2 != null) {
									pUVar2.offsetMin = (Vector2)(Vector2.zeroVector);
									pUVar2 = *targetAddress;
									if (pUVar2 != null) {
										pUVar2.offsetMax = (Vector2)(Vector2.zeroVector);
										pTVar3 = __this_00.AddComponent<TextMeshProUGUI>();
										targetAddress_00 = &this._text;
										this._text = pTVar3;
										pTVar3 = this._text;
										if (pTVar3 != null) {
											pTVar3.set_raycastTarget(false);
											if (*targetAddress_00 != null) {
												(*targetAddress_00).enableWordWrapping = false;
												if (*targetAddress_00 != null) {
													(*targetAddress_00).overflowMode = 0;
													if (*targetAddress_00 != null) {
														(*targetAddress_00).alignment = 0x1001;
														pTVar3 = *targetAddress_00;
														if (style == null) {
															if (pTVar3 == null) goto label_05e870a1;
															family = null;
															pTVar3.fontSize = 24.0;
															pTVar3 = *targetAddress_00;
															weight = 400;
														}
														else {
															if (style.fontSize.value <= 0.0) {
																value_00 = 24.0;
															}
															else {
																value_00 = (style.fontSize).Value;
															}
															if ((style == null) ||(pTVar3 == null)) goto label_05e870a1;
															pTVar3.fontSize = value_00;
															pTVar3 = *targetAddress_00;
															family = style.fontFamily;
															weight = (style.fontWeight).GetValueOrDefault(400);
														}
														value = GisketchTypography.Resolve(family, weight, null);
														if (pTVar3 != null) {
															pTVar3.font = value;
															pTVar3 = *targetAddress_00;
															if (style == null) {
																UVar4.b = 1.0;
																UVar4.a = 1.0;
																UVar4.r = 1.0;
																UVar4.g = 1.0;
															}
															else {
																if (theme == null) goto label_05e870a1;
																fallback.b = 1.0;
																fallback.a = 1.0;
																fallback.r = 1.0;
																fallback.g = 1.0;
																UVar4 = theme.GetColor(style.textColor, fallback);
															}
															if (pTVar3 != null) {
																pTVar3.set_color(UVar4);
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
						}
					}
				}
			}
		}
	label_05e870a1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x5D870C0", Offset = "0x5D860C0", VA = "0x5D870C0")]
	private void SetText(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$SetText): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;

		pTVar1 = this._text;
		bVar2 = ((Object)pTVar1 == null);
		if (bVar2) {
			return;
		}
		pTVar1 = this._text;
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.set_text(value);
		this.RefreshMarquee();
		return;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x5D87210", Offset = "0x5D86210", VA = "0x5D87210")]
	private void RefreshMarquee()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$RefreshMarquee): 9 lines keep C-only constructs
		Tween* targetAddress;
		TextMeshProUGUI pTVar1;
		Vector2 UVar2;
		bool bVar3;
		RectTransform pUVar4;
		String text;
		Sequence pDVar5;
		DOGetter<Vector2> __this_00;
		DOSetter<Vector2> __this_01;
		DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o t;
		Tween pDVar6;
		TweenCallback __this_02;
		RectTransform pUVar7;
		float size;
		float fVar8;
		float fVar9;
		float fVar10;
		Rect UVar11;

		pTVar1 = this._text;
		bVar3 = ((Object)pTVar1 == null);
		if (!bVar3) {
			pUVar7 = this._textRect;
			bVar3 = ((Object)pUVar7 == null);
			if (!bVar3) {
				targetAddress = &this._tween;
				pDVar6 = this._tween;
				if (pDVar6 != null) {
					TweenExtensions.Kill(pDVar6, false);
				}
				this._tween = null;
				pUVar7 = this._textRect;
				if (pUVar7 != null) {
					pUVar7.anchoredPosition = (Vector2)(Vector2.zeroVector);
					pUVar4 = (RectTransform)this.transform;
					pUVar7 = null;
					if ((pUVar4 != null) &&(pUVar7 = null, pUVar4.klass == typeof(RectTransform))) {
						pUVar7 = pUVar4;
					}
					bVar3 = ((Object)pUVar7 != null);
					fVar8 = 0.0;
					if (bVar3) {
						if (pUVar7 == null) goto label_05e876ad;
						UVar11 = pUVar7.rect;
						fVar8 = UVar11.m_Width;
					}
					bVar3 = ((Object)pUVar7 != null);
					fVar10 = 0.0;
					if (bVar3) {
						if (pUVar7 == null) goto label_05e876ad;
						UVar11 = pUVar7.rect;
						fVar10 = UVar11.m_Height;
					}
					pTVar1 = this._text;
					if (pTVar1 != null) {
						text = pTVar1.get_text();
						UVar2 = pTVar1.GetPreferredValues(text);
						fVar9 = UVar2.x;
						pUVar7 = this._textRect;
						if (pUVar7 != null) {
							size = fVar9;
							if (fVar9 <= fVar8) {
								size = fVar8;
							}
							pUVar7.SetSizeWithCurrentAnchors(0, size);
							pUVar7 = this._textRect;
							if (pUVar7 != null) {
								pUVar7.SetSizeWithCurrentAnchors(1, fVar10);
								bVar3 = Application.isPlaying;
								if (!bVar3) {
									return;
								}
								if (fVar8 <= 1.0) {
									return;
								}
								if (fVar9 <= fVar8) {
									return;
								}
								fVar9 = (fVar9 - fVar8) + 32.0;
								fVar10 = fVar9 / 34.0;
								fVar8 = 1.0;
								if (1.0 <= fVar10) {
									fVar8 = fVar10;
								}
								pDVar5 = DOTween.Sequence();
								pDVar5 = TweenSettingsExtensions.AppendInterval(pDVar5, 0.7);
								__this_00 = il2cpp_codegen_object_new(typeof(DOGetter<Vector2>)) ;
								__this_00 = new DOGetter<Vector2>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_0);
								__this_01 = il2cpp_codegen_object_new(typeof(DOSetter<Vector2>)) ;
								__this_01 = new DOSetter<Vector2>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_1);
								UVar2.y = 0.0;
								UVar2.x = -fVar9;
								t = DOTween.To(__this_00, __this_01, UVar2, fVar8);
								pDVar6 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector2, Vector2, VectorOptions>>((object)t, 1);
								pDVar5 = TweenSettingsExtensions.Append(pDVar5, pDVar6);
								pDVar5 = TweenSettingsExtensions.AppendInterval(pDVar5, 0.7);
								__this_02 = new TweenCallback((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_RefreshMarquee_b__15_2);
								pDVar5 = TweenSettingsExtensions.AppendCallback(pDVar5, __this_02) ;
								pDVar5 = TweenSettingsExtensions.SetLoops<Sequence>((object)pDVar5, -1);
								this._tween = (Tween)pDVar5;
								return;
							}
						}
					}
				}
	label_05e876ad: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x5D87720", Offset = "0x5D86720", VA = "0x5D87720")]
	public AottgMarqueeTextRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeTextRuntime.c.

	// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__15_0: clean
	private Vector2 RefreshMarquee_b__15_0()
	{
		RectTransform __this_00;
		Vector2 UVar1;

		__this_00 = this._textRect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = __this_00.anchoredPosition;
		return (Vector2)UVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__15_1: clean
	private void RefreshMarquee_b__15_1(Vector2 value)
	{
		RectTransform __this_00;

		__this_00 = this._textRect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.anchoredPosition = value;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMarqueeTextRuntime$$<RefreshMarquee>b__15_2: clean
	private void RefreshMarquee_b__15_2()
	{
		RectTransform __this_00;

		__this_00 = this._textRect;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.anchoredPosition = (Vector2)(Vector2.zeroVector);
		return;
	}
}
