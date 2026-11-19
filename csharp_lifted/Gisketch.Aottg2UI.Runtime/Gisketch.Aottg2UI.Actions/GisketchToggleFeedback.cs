// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchToggleFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000FA")]
public sealed class GisketchToggleFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40004FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Toggle _toggle;

	[Token(Token = "0x40004FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40004FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Image _switchTrack;

	[Token(Token = "0x40004FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _switchThumb;

	[Token(Token = "0x40004FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GisketchTheme _theme;

	[Token(Token = "0x40004FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _switchTween;

	[Token(Token = "0x4000500")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FontWeight _normalWeight;

	[Token(Token = "0x4000501")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private bool _hovered;

	[Token(Token = "0x4000502")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	private bool _selected;

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x52A9E40", Offset = "0x52A8E40", VA = "0x52A9E40")]
	public void Setup(Toggle toggle, TextMeshProUGUI label, [Optional] Image switchTrack, [Optional] RectTransform switchThumb, [Optional] GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Setup): 6 lines keep C-only constructs
		Toggle* targetAddress;
		Toggle pUVar1;
		UnityEngine_Events_UnityEvent_bool__o __this_00;
		bool bVar2;
		UnityAction<T0> call;
		int iVar3;

		targetAddress = &this._toggle;
		this._toggle = toggle;
		this._label = label;
		this._switchTrack = switchTrack;
		this._switchThumb = switchThumb;
		this._theme = theme;
		bVar2 = ((Object)label != null);
		iVar3 = 400;
		if (bVar2) {
			if (label == null) goto label_053a9fc4;
			iVar3 = label.m_fontWeight;
		}
		this._normalWeight = iVar3;
		pUVar1 = this._toggle;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = *targetAddress;
			if (pUVar1 != null) {
				__this_00 = (UnityEngine_Events_UnityEvent_bool__o)pUVar1.onValueChanged;
				call = new UnityAction<bool>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_OnValueChanged);
				if (__this_00 != null) {
					__this_00.AddListener(call);
					goto label_053a9fac;
				}
			}
	label_053a9fc4: ;
			throw new NullReferenceException();
		}
	label_053a9fac: ;
		this.RefreshSwitch(false);
		return;
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x52AA3C0", Offset = "0x52A93C0", VA = "0x52AA3C0")]
	public void RefreshValue(bool animate = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshValue): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;
		int value;

		this.RefreshSwitch(animate);
		pTVar1 = this._label;
		bVar2 = ((Object)pTVar1 != null);
		if (!bVar2) {
			return;
		}
		pTVar1 = this._label;
		value = 700;
		if ((this._hovered == false) && (this._selected == false)) {
			value = this._normalWeight;
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.fontWeight = value;
		return;
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x52AA4E0", Offset = "0x52A94E0", VA = "0x52AA4E0")]
	private void OnValueChanged(bool _)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnValueChanged): 2 lines keep C-only constructs
		undefined7 in_register_00000031;
		MethodInfo method_01;

		method_01 = (MethodInfo)CONCAT71(in_register_00000031, __);
		GisketchUiSounds.Play(0);
		this.RefreshSwitch(true);
		return;
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x52AA6D0", Offset = "0x52A96D0", VA = "0x52AA6D0", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerEnter): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;
		int value;

		this._hovered = true;
		pTVar1 = this._label;
		bVar2 = ((Object)pTVar1 != null);
		if (!bVar2) {
			return;
		}
		pTVar1 = this._label;
		value = 700;
		if ((this._hovered == false) && (this._selected == false)) {
			value = this._normalWeight;
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.fontWeight = value;
		return;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x52AA760", Offset = "0x52A9760", VA = "0x52AA760", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerExit): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;
		int value;

		this._hovered = false;
		pTVar1 = this._label;
		bVar2 = ((Object)pTVar1 != null);
		if (!bVar2) {
			return;
		}
		pTVar1 = this._label;
		value = 700;
		if ((this._hovered == false) && (this._selected == false)) {
			value = this._normalWeight;
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.fontWeight = value;
		return;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x52AA7F0", Offset = "0x52A97F0", VA = "0x52AA7F0", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnSelect): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;
		int value;

		this._selected = true;
		pTVar1 = this._label;
		bVar2 = ((Object)pTVar1 != null);
		if (!bVar2) {
			return;
		}
		pTVar1 = this._label;
		value = 700;
		if ((this._hovered == false) && (this._selected == false)) {
			value = this._normalWeight;
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.fontWeight = value;
		return;
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x52AA880", Offset = "0x52A9880", VA = "0x52AA880", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDeselect): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;
		int value;

		this._selected = false;
		pTVar1 = this._label;
		bVar2 = ((Object)pTVar1 != null);
		if (!bVar2) {
			return;
		}
		pTVar1 = this._label;
		value = 700;
		if ((this._hovered == false) && (this._selected == false)) {
			value = this._normalWeight;
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.fontWeight = value;
		return;
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x52AA450", Offset = "0x52A9450", VA = "0x52AA450")]
	private void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Refresh): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;
		int value;

		pTVar1 = this._label;
		bVar2 = ((Object)pTVar1 != null);
		if (!bVar2) {
			return;
		}
		pTVar1 = this._label;
		value = 700;
		if ((this._hovered == false) && (this._selected == false)) {
			value = this._normalWeight;
		}
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.fontWeight = value;
		return;
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x52A9FD0", Offset = "0x52A8FD0", VA = "0x52A9FD0")]
	private void RefreshSwitch(bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshSwitch): 7 lines keep C-only constructs
		Image pUVar1;
		RectTransform pUVar2;
		Toggle pUVar3;
		GisketchTheme __this_00;
		Tween pDVar4;
		Vector2 UVar5;
		bool bVar6;
		GisketchToggleFeedback.c__DisplayClass17_0 __this_01;
		String* ppSVar7;
		Gisketch_Aottg2UI_Tweening_GisketchMotion_StaticFields pGVar8;
		TweenCallback<float> __this_02;
		Tweener pDVar9;
		Tween* targetAddress;
		float fVar10;
		Color UVar11;
		Color fallback;
		float local_2c;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchToggleFeedback.c__DisplayClass17_0));
		__this_01 = new Object();
		if (__this_01 == null) {
	label_053aa3ba: ;
			throw new NullReferenceException();
		}
		__this_01.__4__this = this;
		pUVar1 = this._switchTrack;
		bVar6 = ((Object)pUVar1 == null);
		if (!bVar6) {
			pUVar2 = this._switchThumb;
			bVar6 = ((Object)pUVar2 == null);
			if ((!bVar6) && (this._theme != null)) {
				pUVar3 = this._toggle;
				bVar6 = ((Object)pUVar3 == null);
				if (!bVar6) {
					pUVar3 = this._toggle;
					if ((pUVar3 != null) &&(__this_00 = this._theme, __this_00 != null )) {
						if (pUVar3.m_IsOn == false) {
							ppSVar7 = &"engravedBg";
						}
						else {
							ppSVar7 = &"primary";
						}
						fallback.b = 1.0;
						fallback.a = 1.0;
						fallback.r = 1.0;
						fallback.g = 1.0;
						UVar11 = (Color)__this_00.GetColor(*ppSVar7, fallback);
						__this_01.targetColor = UVar11;
						pUVar3 = this._toggle;
						if (pUVar3 != null) {
							UVar5 = (Vector2)this.SwitchThumbPosition(pUVar3.m_IsOn);
							__this_01.targetPosition = UVar5;
							bVar6 = Application.isPlaying;
							pDVar4 = this._switchTween;
							if ((!bVar6) || (!animate)) {
								if (pDVar4 != null) {
									TweenExtensions.Kill(pDVar4, false);
								}
								pUVar1 = this._switchTrack;
								if (pUVar1 != null) {
									pUVar1.set_color((Color)__this_01.targetColor);
									pUVar2 = this._switchThumb;
									if (pUVar2 != null) {
										pUVar2.anchoredPosition = (Vector2)__this_01.targetPosition;
										return;
									}
								}
							}
							else {
								if (pDVar4 != null) {
									TweenExtensions.Kill(pDVar4, false);
								}
								pUVar1 = this._switchTrack;
								if (pUVar1 != null) {
									UVar11 = (Color)pUVar1.get_color();
									__this_01.startColor = UVar11;
									pUVar2 = this._switchThumb;
									if (pUVar2 != null) {
										UVar5 = (Vector2)pUVar2.anchoredPosition;
										__this_01.startPosition = UVar5;
										if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0 ) {
										}
										targetAddress = &this._switchTween;
										pGVar8 = typeof(GisketchMotion).static_fields;
										if (pGVar8.Enabled == false) {
											local_2c = 0.01;
										}
										else {
											if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
												pGVar8 = typeof(GisketchMotion).static_fields;
											}
											fVar10 = pGVar8.DurationScale * 0.12;
											local_2c = 0.01;
											if (0.01 <= fVar10) {
												local_2c = fVar10;
											}
										}
										__this_02 = new TweenCallback<float>((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_c__DisplayClass17_0_RefreshSwitch_b__0);
										pDVar9 = DOVirtual.Float(0.0, 1.0, local_2c, __this_02);
										pDVar9 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar9, 9);
										pDVar9 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar9, true);
										*targetAddress = (Tween)pDVar9;
										pDVar4 = *targetAddress;
										if ((typeof(GisketchMotionDriver)._2). cctor_finished_or_no_cctor == 0) {
										}
										GisketchMotionDriver.Track(pDVar4, false);
										return;
									}
								}
							}
						}
					}
					goto label_053aa3ba;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x52AA920", Offset = "0x52A9920", VA = "0x52AA920")]
	private Vector2 SwitchThumbPosition(bool on)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$SwitchThumbPosition): clean
		Image pUVar1;
		Vector2 UVar2;
		Vector2 UVar3;
		RectTransform pUVar4;
		float fVar5;
		float fVar6;
		float fStack_34;
		float local_28;

		pUVar1 = this._switchTrack;
		if (pUVar1 != null) {
			pUVar4 = pUVar1.rectTransform;
			if (pUVar4 != null) {
				UVar2 = pUVar4.sizeDelta;
				pUVar4 = this._switchThumb;
				if (pUVar4 != null) {
					UVar3 = pUVar4.sizeDelta;
					fStack_34 = UVar2.y;
					fVar6 = (fStack_34 - UVar3.y) * 0.5;
					fVar5 = 0.0;
					if (0.0 <= fVar6) {
						fVar5 = fVar6;
					}
					if (!on) {
	label_053aa9cb: ;
						UVar2.y = 0.0;
						UVar2.x = fVar5;
						return (Vector2)UVar2;
					}
					pUVar1 = this._switchTrack;
					if (pUVar1 != null) {
						pUVar4 = pUVar1.rectTransform;
						if (pUVar4 != null) {
							UVar2 = pUVar4.sizeDelta;
							pUVar4 = this._switchThumb;
							if (pUVar4 != null) {
								UVar3 = pUVar4.sizeDelta;
								local_28 = UVar2.x;
								fVar5 = (local_28 - UVar3.x) - fVar5;
								goto label_053aa9cb;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x52AA9E0", Offset = "0x52A99E0", VA = "0x52AA9E0", Slot = "8")]
	protected override void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDestroy): clean
		Tween t;

		t = this._switchTween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		this.OnDestroy();
		return;
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x52AAA10", Offset = "0x52A9A10", VA = "0x52AAA10")]
	public GisketchToggleFeedback()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c (Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchToggleFeedback.c.

	// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass17_0$$<RefreshSwitch>b__0: clean
	private void c__DisplayClass17_0__RefreshSwitch_b__0(float value)
	{
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		Vector2 UVar5;
		Vector2 UVar6;
		GisketchToggleFeedback pGVar11;
		Image pUVar12;
		RectTransform __this_00;
		Vector2 value_00;
		float fVar13;
		float fVar14;
		Color UVar15;

		pGVar11 = this.__4__this;
		if ((pGVar11 != null) &&(pUVar12 = pGVar11._switchTrack, pUVar12 != null)) {
			uVar1 = this.startColor.r;
			uVar7 = this.startColor.g;
			uVar2 = this.startColor.b;
			uVar8 = this.startColor.a;
			uVar3 = this.targetColor.r;
			uVar9 = this.targetColor.g;
			uVar4 = this.targetColor.b;
			uVar10 = this.targetColor.a;
			UVar15.b = ((float)uVar4 - (float)uVar2) * value + (float)uVar2;
			UVar15.a = ((float)uVar10 - (float)uVar8) * value + (float)uVar8;
			UVar15.r = ((float)uVar3 - (float)uVar1) * value + (float)uVar1;
			UVar15.g = ((float)uVar9 - (float)uVar7) * value + (float)uVar7;
			pUVar12.set_color(UVar15);
			pGVar11 = this.__4__this;
			if ((pGVar11 != null) &&(__this_00 = pGVar11._switchThumb, __this_00 != null)) {
				UVar5 = this.startPosition;
				UVar6 = this.targetPosition;
				fVar13 = UVar5.x;
				fVar14 = UVar5.y;
				value_00.x = (UVar6.x - fVar13) * value + fVar13;
				value_00.y = (UVar6.y - fVar14) * value + fVar14;
				__this_00.anchoredPosition = value_00;
				return;
			}
		}
		throw new NullReferenceException();
	}
}
