// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000208")]
internal sealed class AottgHoverMarqueeTextRuntime : MonoBehaviour
{
	[Token(Token = "0x4000ACF")]
	private const float Gap = 32f;

	[Token(Token = "0x4000AD0")]
	private const float PixelsPerSecond = 34f;

	[Token(Token = "0x4000AD1")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x4000AD2")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000AD3")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _textRect;

	[Token(Token = "0x4000AD4")]
	[FieldOffset(Offset = "0x30")]
	private Color _normalColor;

	[Token(Token = "0x4000AD5")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x4000AD6")]
	[FieldOffset(Offset = "0x50")]
	private bool _active;

	[Token(Token = "0x4000AD7")]
	[FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x5D84130", Offset = "0x5D83130", VA = "0x5D84130")]
	public void Setup(string value, GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$Setup): clean
		TextMeshProUGUI pTVar1;

		this.CreateText(style, theme, activeColor);
		pTVar1 = this._text;
		if (value == null) {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.set_text(value);
		this.RegisterParent();
		this.RefreshMarquee();
		return;
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x5D84CD0", Offset = "0x5D83CD0", VA = "0x5D84CD0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnDestroy): clean
		Tween t;

		t = this._tween;
		if (t == null) {
			return;
		}
		TweenExtensions.Kill(t, false);
		return;
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x5D84CF0", Offset = "0x5D83CF0", VA = "0x5D84CF0")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$OnRectTransformDimensionsChange): clean
		this.RefreshMarquee();
		return;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x5D84D00", Offset = "0x5D83D00", VA = "0x5D84D00")]
	public void SetActive(bool active)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$SetActive): clean


		this._active = active;
		this.RefreshMarquee();
		return;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x5D841A0", Offset = "0x5D831A0", VA = "0x5D841A0")]
	private void CreateText(GisketchStyleDefinition style, GisketchTheme theme, string activeColor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$CreateText): 23 lines keep C-only constructs
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
		float fVar4;
		Color UVar5;
		Color fallback;
		Color fallback_00;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject("AoTTG Hover Marquee Text", components);
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
													(*targetAddress_00).alignment = 0x1001;
													pTVar3 = *targetAddress_00;
													if (style == null) {
														if (pTVar3 == null) goto label_05e8461b;
														family = null;
														pTVar3.fontSize = 20.0;
														pTVar3 = *targetAddress_00;
														weight = 400;
													}
													else {
														if (style.fontSize.value <= 0.0) {
															fVar4 = 20.0;
														}
														else {
															fVar4 = (style.fontSize).Value;
														}
														if ((style == null) ||(pTVar3 == null)) goto label_05e8461b;
														pTVar3.fontSize = fVar4;
														pTVar3 = *targetAddress_00;
														family = style.fontFamily;
														weight = (style.fontWeight).GetValueOrDefault(400);
													}
													value = GisketchTypography.Resolve(family, weight, null);
													if (pTVar3 != null) {
														pTVar3.font = value;
														if (style == null) {
															this._normalColor.r = 1.0;
															this._normalColor.g = 1.0;
															this._normalColor.b = 1.0;
															this._normalColor.a = 1.0;
															if (theme == null) goto label_05e8461b;
															fVar4 = (float)g_data_01005870;
															fallback.g = g_data_01005870._4_4_;
															fallback._8_8_ = g_data_01005870;
														}
														else {
															if (theme == null) goto label_05e8461b;
															fallback.b = 1.0;
															fallback.a = 1.0;
															fallback.r = 1.0;
															fallback.g = 1.0;
															UVar5 = (Color)theme.GetColor(style.textColor, fallback);
															fallback._8_8_ = UVar5._8_8_;
															fVar4 = UVar5.r;
															fallback.g = UVar5.g;
															this._normalColor = UVar5;
														}
														fallback_00.g = fallback.g;
														fallback_00.r = fVar4;
														fallback_00.b = (float)(int)fallback._8_8_;
														fallback_00.a = (float)(int)((ulong)fallback._8_8_ >> 0x20);
														UVar5 = (Color)theme.GetColor(activeColor, fallback_00);
														this._activeColor = UVar5;
														pTVar3 = this._text;
														if (pTVar3 != null) {
															pTVar3.set_color((Color)this._normalColor);
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
	label_05e8461b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x5D84640", Offset = "0x5D83640", VA = "0x5D84640")]
	private void RegisterParent()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RegisterParent): clean
		bool bVar1;
		Transform pUVar2;
		AottgHoverMarqueeParentRuntime __this_00;
		GameObject __this_01;

		pUVar2 = this.transform;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.parent;
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
				return;
			}
			if (pUVar2 != null) {
				__this_00 = pUVar2.GetComponent<AottgHoverMarqueeParentRuntime>();
				bVar1 = ((Object)__this_00 == null);
				if (bVar1) {
					__this_01 = pUVar2.gameObject ;
					if (__this_01 == null) goto label_05e8474f;
					__this_00 = __this_01.AddComponent<AottgHoverMarqueeParentRuntime>();
				}
				if (__this_00 != null) {
					__this_00.Register(this);
					return;
				}
			}
		}
	label_05e8474f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x5D84760", Offset = "0x5D83760", VA = "0x5D84760")]
	private void RefreshMarquee()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$RefreshMarquee): 10 lines keep C-only constructs
		Tween* targetAddress;
		Color pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		TextMeshProUGUI pTVar6;
		Vector2 UVar7;
		bool bVar8;
		ulong uVar9;
		RectTransform pUVar10;
		String text;
		Sequence pDVar11;
		DOGetter<Vector2> __this_00;
		DOSetter<Vector2> __this_01;
		DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o t;
		Tween pDVar12;
		TweenCallback __this_02;
		RectTransform pUVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		Color UVar17;
		Rect UVar18;
		float local_58;
		float local_48;

		pTVar6 = this._text;
		bVar8 = ((Object)pTVar6 == null);
		if (!bVar8) {
			pUVar13 = this._textRect;
			bVar8 = ((Object)pUVar13 == null);
			if (!bVar8) {
				targetAddress = &this._tween;
				pDVar12 = this._tween;
				if (pDVar12 != null) {
					TweenExtensions.Kill(pDVar12, false);
				}
				this._tween = null;
				pUVar13 = this._textRect;
				if (pUVar13 != null) {
					pUVar13.anchoredPosition = (Vector2)(Vector2.zeroVector) ;
					pTVar6 = this._text;
					if (pTVar6 != null) {
						uVar9 = (ulong)this._active;
						pUVar1 = &this._normalColor + (uVar9 != 0);
						uVar2 = pUVar1.r;
						uVar4 = pUVar1.g;
						UVar17.g = (float)uVar4;
						UVar17.r = (float)uVar2;
						pUVar1 = &this._normalColor + uVar9;
						uVar3 = pUVar1.b;
						uVar5 = pUVar1.a;
						UVar17.a = (float)uVar5;
						UVar17.b = (float)uVar3;
						pTVar6.set_color(UVar17);
						pUVar10 = (RectTransform)this.transform;
						pUVar13 = null;
						if ((pUVar10 != null) &&(pUVar13 = null, pUVar10.klass == typeof(RectTransform))) {
							pUVar13 = pUVar10;
						}
						bVar8 = ((Object)pUVar13 != null);
						local_58 = 0.0;
						if (bVar8) {
							if (pUVar13 == null) goto label_05e84cc7;
							UVar18 = pUVar13.rect;
							local_58 = UVar18.m_Width;
						}
						bVar8 = ((Object)pUVar13 != null);
						fVar16 = 0.0;
						if (bVar8) {
							if (pUVar13 == null) goto label_05e84cc7;
							UVar18 = pUVar13.rect;
							fVar16 = UVar18.m_Height;
						}
						pTVar6 = this._text;
						if (pTVar6 != null) {
							text = pTVar6.get_text();
							UVar7 = pTVar6.GetPreferredValues(text);
							pUVar13 = this._textRect;
							if (pUVar13 != null) {
								fVar14 = local_58;
								if (local_58 <= 1.0) {
									fVar14 = 1.0;
								}
								pUVar13.SetSizeWithCurrentAnchors(0, fVar14);
								pUVar13 = this._textRect;
								if (pUVar13 != null) {
									pUVar13.SetSizeWithCurrentAnchors(1, fVar16);
									pTVar6 = this._text;
									if (pTVar6 != null) {
										pTVar6.overflowMode = 1;
										if (this._active == false) {
											return;
										}
										bVar8 = Application.isPlaying;
										if (!bVar8) {
											return;
										}
										if (local_58 <= 1.0) {
											return;
										}
										local_48 = UVar7.x;
										if (local_48 <= local_58) {
											return;
										}
										pTVar6 = this._text;
										if (pTVar6 != null) {
											pTVar6.overflowMode = 0;
											pUVar13 = this._textRect;
											if (pUVar13 != null) {
												pUVar13.SetSizeWithCurrentAnchors(0, local_48);
												fVar14 = (local_48 - local_58) + 32.0;
												fVar15 = fVar14 / 34.0;
												fVar16 = 1.0;
												if (1.0 <= fVar15) {
													fVar16 = fVar15;
												}
												pDVar11 = DOTween.Sequence();
												pDVar11 = TweenSettingsExtensions.AppendInterval(pDVar11, 0.45);
												__this_00 = new DOGetter<Vector2>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_0);
												__this_01 = new DOSetter<Vector2>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_1);
												UVar7.y = 0.0;
												UVar7.x = -fVar14;
												t = DOTween.To(__this_00, __this_01, UVar7, fVar16);
												pDVar12 = (Tween)TweenSettingsExtensions.SetEase<TweenerCore<Vector2, Vector2, VectorOptions>>((object)t, 1);
												pDVar11 = TweenSettingsExtensions.Append(pDVar11, pDVar12) ;
												pDVar11 = TweenSettingsExtensions.AppendInterval(pDVar11, 0.45);
												__this_02 = il2cpp_codegen_object_new(typeof(TweenCallback)) ;
												__this_02 = new TweenCallback((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_RefreshMarquee_b__15_2);
												pDVar11 = TweenSettingsExtensions.AppendCallback(pDVar11, __this_02);
												pDVar11 = TweenSettingsExtensions.SetLoops<Sequence>((object)pDVar11, -1);
												pDVar11 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar11, true);
												this._tween = (Tween)pDVar11;
												return;
											}
										}
									}
								}
							}
						}
					}
				}
	label_05e84cc7: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x5D84E40", Offset = "0x5D83E40", VA = "0x5D84E40")]
	public AottgHoverMarqueeTextRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeTextRuntime.c.

	// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_0: clean
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

	// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_1: clean
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

	// Gisketch.Aottg2UI.Game.AottgHoverMarqueeTextRuntime$$<RefreshMarquee>b__15_2: clean
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
