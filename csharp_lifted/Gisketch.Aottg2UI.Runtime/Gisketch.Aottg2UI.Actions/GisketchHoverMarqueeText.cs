// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E0")]
internal sealed class GisketchHoverMarqueeText : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x400049C")]
	private const float PixelsPerSecond = 42f;

	[Token(Token = "0x400049D")]
	private const float Gap = 24f;

	[Token(Token = "0x400049E")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _viewport;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _textRect;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x38")]
	private TextAlignmentOptions _normalAlignment;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x3C")]
	private Vector2 _normalAnchorMin;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x44")]
	private Vector2 _normalAnchorMax;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x4C")]
	private Vector2 _normalPivot;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x54")]
	private Vector2 _normalSizeDelta;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x5C")]
	private Vector2 _normalAnchoredPosition;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x64")]
	private bool _selfActivate;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x65")]
	private bool _hovered;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x66")]
	private bool _selected;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x67")]
	private bool _marqueeActive;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x68")]
	private float _elapsed;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x6C")]
	private float _travel;

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x52A00B0", Offset = "0x529F0B0", VA = "0x52A00B0")]
	public static GisketchHoverMarqueeText Setup(GameObject viewport, TextMeshProUGUI label, bool selfActivate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Setup): clean
		bool bVar1;
		GisketchHoverMarqueeText __this;

		bVar1 = ((Object)viewport == null);
		if (!bVar1) {
			bVar1 = ((Object)label == null);
			if (!bVar1) {
				if (viewport != null) {
					__this = viewport.GetComponent<GisketchHoverMarqueeText>();
					bVar1 = ((Object)__this == null);
					if (bVar1) {
						__this = viewport.AddComponent<GisketchHoverMarqueeText>();
					}
					if (__this != null) {
						__this.Configure(label, selfActivate);
						return __this;
					}
				}
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x52A05C0", Offset = "0x529F5C0", VA = "0x52A05C0")]
	public void SetActive(bool active)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$SetActive): clean
		this.Refresh(active);
		return;
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x52A0AC0", Offset = "0x529FAC0", VA = "0x52A0AC0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerEnter): clean
		if (this._selfActivate == false) {
			return;
		}
		this._hovered = true;
		this.Refresh(true);
		return;
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x52A0AE0", Offset = "0x529FAE0", VA = "0x52A0AE0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerExit): clean
		if (this._selfActivate == false) {
			return;
		}
		this._hovered = false;
		this.Refresh(this._selected);
		return;
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x52A0B00", Offset = "0x529FB00", VA = "0x52A0B00", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnSelect): clean
		if (this._selfActivate == false) {
			return;
		}
		this._selected = true;
		this.Refresh(true);
		return;
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x52A0B20", Offset = "0x529FB20", VA = "0x52A0B20", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDeselect): clean
		if (this._selfActivate == false) {
			return;
		}
		this._selected = false;
		this.Refresh(this._hovered);
		return;
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x52A0600", Offset = "0x529F600", VA = "0x52A0600")]
	private void Configure(TextMeshProUGUI label, bool selfActivate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Configure): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		RectTransform pUVar3;
		GameObject pUVar4;
		RectMask2D x;
		RectTransform pUVar5;
		Vector2 UVar6;

		this._label = label;
		if (label != null) {
			pUVar3 = label.GetComponent<RectTransform>();
			this._textRect = pUVar3;
			pUVar3 = (RectTransform)this.transform;
			if (pUVar3 == null) {
				this._viewport = null;
			}
			else {
				pUVar5 = null;
				if (pUVar3.klass == typeof(RectTransform)) {
					pUVar5 = pUVar3;
				}
				this._viewport = pUVar5;
			}
			this._selfActivate = selfActivate;
			iVar2 = label.alignment;
			this._normalAlignment = iVar2;
			pUVar3 = this._textRect;
			if (pUVar3 != null) {
				UVar6 = (Vector2)pUVar3.anchorMin;
				this._normalAnchorMin = UVar6;
				pUVar3 = this._textRect;
				if (pUVar3 != null) {
					UVar6 = (Vector2)pUVar3.anchorMax ;
					this._normalAnchorMax = UVar6;
					pUVar3 = this._textRect;
					if (pUVar3 != null) {
						UVar6 = (Vector2)pUVar3.pivot;
						this._normalPivot = UVar6;
						pUVar3 = this._textRect;
						if (pUVar3 != null) {
							UVar6 = (Vector2)pUVar3.sizeDelta;
							this._normalSizeDelta = UVar6;
							pUVar3 = this._textRect;
							if (pUVar3 != null) {
								UVar6 = (Vector2)pUVar3.anchoredPosition;
								this._normalAnchoredPosition = UVar6;
								pUVar4 = this.gameObject;
								if (pUVar4 != null) {
									x = pUVar4.GetComponent<RectMask2D>();
									bVar1 = ((Object)x == null);
									if (bVar1) {
										pUVar4 = this.gameObject;
										if (pUVar4 == null) goto label_053a07f3;
										pUVar4.AddComponent<RectMask2D>();
									}
									label.enableWordWrapping = false;
									label.overflowMode = 1;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_053a07f3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x52A0B40", Offset = "0x529FB40", VA = "0x52A0B40")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDisable): clean
		this.Restore();
		this._hovered = false;
		this._selected = false;
		return;
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x52A0C90", Offset = "0x529FC90", VA = "0x52A0C90")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Update): clean
		RectTransform pUVar1;
		bool bVar2;
		float fVar3;
		Vector2 value;
		float fVar4;
		float fVar5;

		if (this._marqueeActive != false) {
			pUVar1 = this._textRect;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				fVar4 = this._elapsed;
				fVar3 = Time.unscaledDeltaTime;
				fVar3 = fVar3 + fVar4;
				this._elapsed = fVar3;
				if (0.45 <= fVar3) {
					pUVar1 = this._textRect;
					if (pUVar1 != null) {
						fVar4 = 0.0;
						if (0.0 <= fVar3 + -0.45) {
							fVar4 = fVar3 + -0.45;
						}
						fVar3 = this._travel;
						fVar5 = fVar4 * 42.0;
						if (fVar3 <= fVar4 * 42.0) {
							fVar5 = fVar3;
						}
						value.y = 0.0;
						value.x = -fVar5;
						pUVar1.anchoredPosition = value;
						fVar4 = this._travel;
						if (fVar5 < fVar4) {
							return;
						}
						if (this._elapsed < fVar4 / 42.0 + 0.45 + 0.45) {
							return;
						}
						this._elapsed = 0.0;
						pUVar1 = this._textRect;
						if (pUVar1 != null) {
							pUVar1.anchoredPosition = (Vector2)(Vector2.zeroVector);
							return;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x52A0800", Offset = "0x529F800", VA = "0x52A0800")]
	private void Refresh(bool active)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Refresh): clean
		TextMeshProUGUI pTVar1;
		RectTransform pUVar2;
		bool bVar3;
		MethodInfo method_00;
		float fVar4;
		Vector2 UVar5;
		Rect UVar6;
		float fStack_48;

		pTVar1 = this._label;
		bVar3 = ((Object)pTVar1 == null);
		if (!bVar3) {
			pUVar2 = this._textRect;
			bVar3 = ((Object)pUVar2 == null);
			if (!bVar3) {
				pUVar2 = this._viewport;
				bVar3 = ((Object)pUVar2 == null);
				if (!bVar3) {
					pUVar2 = this._viewport;
					if (pUVar2 != null) {
						UVar6 = pUVar2.rect;
						pTVar1 = this._label;
						if (pTVar1 != null) {
							method_00 = (MethodInfo)pTVar1.get_text();
							UVar5 = pTVar1.GetPreferredValues((String)method_00);
							fStack_48 = UVar6.m_Width;
							if (((1.0 < fStack_48) && (active)) && (fVar4 = UVar5.x, fStack_48 + 1.0 < fVar4)) {
								bVar3 = Application.isPlaying;
								if (bVar3) {
									this._marqueeActive = true;
									this._elapsed = 0.0;
									this._travel = (fVar4 - fStack_48) + 24.0;
									pTVar1 = this._label;
									if (pTVar1 != null) {
										pTVar1.overflowMode = 0;
										pTVar1 = this._label;
										if (pTVar1 != null) {
											pTVar1.alignment = 0x1001;
											pUVar2 = this._textRect;
											if (pUVar2 != null) {
												pUVar2.anchorMin = (Vector2)((ulong)(uint)this._normalAnchorMin.y << 0x20);
												pUVar2 = this._textRect;
												if (pUVar2 != null) {
													pUVar2.anchorMax = (Vector2)((ulong)(uint)this._normalAnchorMax.y << 0x20);
													pUVar2 = this._textRect;
													if (pUVar2 != null) {
														pUVar2.pivot = (Vector2)0x3f00000000000000;
														pUVar2 = this._textRect;
														if (pUVar2 != null) {
															pUVar2.SetSizeWithCurrentAnchors(0, fVar4 + 24.0);
															pUVar2 = this._textRect;
															if (pUVar2 != null) {
																pUVar2.anchoredPosition = (Vector2)(Vector2.zeroVector). fields;
																return;
															}
														}
													}
												}
											}
										}
									}
									goto label_053a0ab9;
								}
							}
							this.Restore();
							return;
						}
					}
	label_053a0ab9: ;
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x52A0B60", Offset = "0x529FB60", VA = "0x52A0B60")]
	private void Restore()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Restore): clean
		TextMeshProUGUI pTVar1;
		RectTransform pUVar2;
		bool bVar3;

		pTVar1 = this._label;
		bVar3 = ((Object)pTVar1 == null);
		if (!bVar3) {
			pUVar2 = this._textRect;
			bVar3 = ((Object)pUVar2 == null);
			if (!bVar3) {
				this._marqueeActive = false;
				this._elapsed = 0.0;
				pTVar1 = this._label;
				if (pTVar1 != null) {
					pTVar1.overflowMode = 1;
					pTVar1 = this._label;
					if (pTVar1 != null) {
						pTVar1.alignment = this._normalAlignment;
						pUVar2 = this._textRect;
						if (pUVar2 != null) {
							pUVar2.anchorMin = (Vector2)this._normalAnchorMin;
							pUVar2 = this._textRect;
							if (pUVar2 != null) {
								pUVar2.anchorMax = (Vector2)this._normalAnchorMax;
								pUVar2 = this._textRect;
								if (pUVar2 != null) {
									pUVar2.pivot = (Vector2)this._normalPivot;
									pUVar2 = this._textRect;
									if (pUVar2 != null) {
										pUVar2.sizeDelta = (Vector2)this._normalSizeDelta;
										pUVar2 = this._textRect;
										if (pUVar2 != null) {
											pUVar2.anchoredPosition = (Vector2)this._normalAnchoredPosition;
											return;
										}
									}
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x52A0E00", Offset = "0x529FE00", VA = "0x52A0E00")]
	public GisketchHoverMarqueeText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c (Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$.ctor): clean
		base();
		return;
	}
}
