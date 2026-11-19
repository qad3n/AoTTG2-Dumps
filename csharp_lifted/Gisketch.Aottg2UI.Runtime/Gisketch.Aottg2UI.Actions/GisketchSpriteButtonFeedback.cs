// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000F7")]
public sealed class GisketchSpriteButtonFeedback : UIBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x40004EC")]
	private const float HoverLift = 10f;

	[Token(Token = "0x40004ED")]
	private const float PressDrop = -5f;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _origin;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x30")]
	private Tween _tween;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x38")]
	private bool _hovered;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x39")]
	private bool _selected;

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x52A9220", Offset = "0x52A8220", VA = "0x52A9220", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Awake): 3 lines keep C-only constructs
		RectTransform pUVar1;
		RectTransform extraout_RDX;
		RectTransform method_00;
		RectTransform target;

		this.Awake();
		pUVar1 = (RectTransform)this.transform;
		method_00 = extraout_RDX;
		target = null;
		if (pUVar1 != null) {
			method_00 = pUVar1.klass;
			target = null;
			if (method_00 == typeof(RectTransform)) {
				target = pUVar1;
			}
		}
		this.Setup(target);
		return;
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x52A9290", Offset = "0x52A8290", VA = "0x52A9290")]
	public void Setup(RectTransform target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Setup): clean
		bool bVar1;
		Vector2 UVar2;

		this._rect = target;
		bVar1 = ((Object)target != null);
		if (bVar1) {
			if (target == null) {
				throw new NullReferenceException();
			}
			UVar2 = (Vector2)target.anchoredPosition;
		}
		else {
			UVar2 = (Vector2.zeroVector);
		}
		this._origin = UVar2;
		return;
	}

	[Token(Token = "0x600079C")]
	[Address(RVA = "0x52A9350", Offset = "0x52A8350", VA = "0x52A9350", Slot = "17")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerEnter): clean
		Vector2 UVar1;
		Vector2 target;
		float fVar2;
		Vector2 UVar3;

		this._hovered = true;
		UVar1 = this._origin;
		if (Il2CppMethodInitialized_0754205f == false) {
			Il2CppMethodInitialized_0754205f = true;
			UVar3 = (Vector2.upVector);
			if ((this._hovered == false) && (this._selected == false)) {
				fVar2 = 0.0;
				goto label_053a93c5;
			}
		}
		else {
			UVar3 = (Vector2.upVector);
		}
		fVar2 = 10.0;
	label_053a93c5: ;
		target.y = UVar1.y + fVar2 * UVar3.y;
		target.x = UVar1.x + fVar2 * UVar3.x;
		this.MoveTo(target, 0.12);
		return;
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x52A9690", Offset = "0x52A8690", VA = "0x52A9690", Slot = "18")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerExit): clean
		Vector2 UVar1;
		Vector2 target;
		float fVar2;
		Vector2 UVar3;

		this._hovered = false;
		UVar1 = this._origin;
		if (Il2CppMethodInitialized_0754205f == false) {
			Il2CppMethodInitialized_0754205f = true;
			UVar3 = (Vector2.upVector);
			if (this._hovered == false) goto label_053a96c2;
		}
		else {
			UVar3 = (Vector2.upVector);
	label_053a96c2: ;
			if (this._selected == false) {
				fVar2 = 0.0;
				goto label_053a9708;
			}
		}
		fVar2 = 10.0;
	label_053a9708: ;
		target.y = UVar1.y + fVar2 * UVar3.y;
		target.x = UVar1.x + fVar2 * UVar3.x;
		this.MoveTo(target, 0.12);
		return;
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x52A9730", Offset = "0x52A8730", VA = "0x52A9730", Slot = "19")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSelect): clean
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 target;
		float fVar3;

		this._selected = true;
		UVar1 = this._origin;
		UVar2 = (Vector2.upVector);
		if ((this._hovered == false) && (this._selected == false)) {
			fVar3 = 0.0;
		}
		else {
			fVar3 = 10.0;
		}
		target.y = UVar1.y + UVar2.y * fVar3;
		target.x = UVar1.x + UVar2.x * fVar3;
		this.MoveTo(target, 0.12);
		return;
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x52A97C0", Offset = "0x52A87C0", VA = "0x52A97C0", Slot = "20")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDeselect): clean
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 target;
		float fVar3;

		this._selected = false;
		UVar1 = this._origin;
		UVar2 = (Vector2.upVector);
		if ((this._hovered == false) && (this._selected == false)) {
			fVar3 = 0.0;
		}
		else {
			fVar3 = 10.0;
		}
		target.y = UVar1.y + UVar2.y * fVar3;
		target.x = UVar1.x + UVar2.x * fVar3;
		this.MoveTo(target, 0.12);
		return;
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x52A9850", Offset = "0x52A8850", VA = "0x52A9850", Slot = "21")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerDown): clean
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 target;

		UVar1 = this._origin;
		UVar2 = (Vector2.upVector);
		target.y = UVar1.y + UVar2.y * -5.0;
		target.x = UVar1.x + UVar2.x * -5.0;
		this.MoveTo(target, 0.06);
		return;
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x52A98C0", Offset = "0x52A88C0", VA = "0x52A98C0", Slot = "22")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerUp): clean
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 target;
		float fVar3;

		UVar1 = this._origin;
		UVar2 = (Vector2.upVector);
		if ((this._hovered == false) && (this._selected == false)) {
			fVar3 = 0.0;
		}
		else {
			fVar3 = 10.0;
		}
		target.y = UVar1.y + UVar2.y * fVar3;
		target.x = UVar1.x + UVar2.x * fVar3;
		this.MoveTo(target, 0.1);
		return;
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x52A9940", Offset = "0x52A8940", VA = "0x52A9940", Slot = "23")]
	public void OnSubmit(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSubmit): 6 lines keep C-only constructs
		Vector2 UVar1;
		RectTransform pUVar2;
		Tween pDVar3;
		Vector2 UVar4;
		Vector2 value;
		Vector2 UVar5;
		Vector2 UVar6;
		Vector2 pUVar7;
		bool bVar8;
		GisketchSpriteButtonFeedback.c__DisplayClass15_0 __this_00;
		Sequence pDVar9;
		TweenCallback<float> pDVar10;
		Tweener pDVar11;
		Tween* targetAddress;
		float fVar12;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSpriteButtonFeedback.c__DisplayClass15_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_053a9d11;
		__this_00.__4__this = this;
		pUVar2 = this._rect;
		bVar8 = ((Object)pUVar2 == null);
		if (bVar8) {
			return;
		}
		pDVar3 = this._tween;
		if (pDVar3 != null) {
			TweenExtensions.Kill(pDVar3, false);
		}
		bVar8 = Application.isPlaying;
		pUVar2 = this._rect;
		if (bVar8) {
			if (pUVar2 != null) {
				UVar5 = (Vector2)pUVar2.anchoredPosition;
				__this_00.start = UVar5;
				UVar5 = this._origin;
				pUVar7 = typeof(Vector2);
				UVar1 = (Vector2.upVector);
				UVar6.y = UVar5.y + UVar1.y * -5.0;
				UVar6.x = UVar5.x + UVar1.x * -5.0;
				__this_00.press = UVar6;
				UVar5 = this._origin;
				UVar1 = (pUVar7.static_fields.upVector);
				if ((this._hovered == false) && (this._selected == false)) {
					fVar12 = 0.0;
				}
				else {
					fVar12 = 10.0;
				}
				targetAddress = &this._tween;
				UVar4.y = UVar5.y + UVar1.y * fVar12;
				UVar4.x = UVar5.x + UVar1.x * fVar12;
				__this_00.target = UVar4;
				pDVar9 = DOTween.Sequence();
				pDVar10 = new TweenCallback<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__0);
				pDVar11 = DOVirtual.Float(0.0, 1.0, 0.05, pDVar10);
				pDVar11 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar11, 9);
				pDVar9 = TweenSettingsExtensions.Append(pDVar9, (Tween)pDVar11);
				pDVar10 = new TweenCallback<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass15_0_OnSubmit_b__1);
				pDVar11 = DOVirtual.Float(0.0, 1.0, 0.1, pDVar10);
				pDVar11 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar11, 9);
				pDVar9 = TweenSettingsExtensions.Append(pDVar9, (Tween)pDVar11);
				pDVar9 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar9, true);
				*targetAddress = (Tween)pDVar9;
				pDVar3 = *targetAddress;
				GisketchMotionDriver.Track(pDVar3, false);
				return;
			}
			goto label_053a9d11;
		}
		UVar5 = this._origin;
		if (Il2CppMethodInitialized_0754205f == false) {
			Il2CppMethodInitialized_0754205f = true;
			if (this._hovered == false) goto label_053a9cb5;
	label_053a9cbc: ;
			fVar12 = 10.0;
		}
		else {
			if (this._hovered != false) goto label_053a9cbc;
	label_053a9cb5: ;
			if (this._selected != false) goto label_053a9cbc;
			fVar12 = 0.0;
		}
		if (pUVar2 != null) {
			UVar1 = (Vector2.upVector);
			value.y = UVar5.y + fVar12 * UVar1.y;
			value.x = UVar5.x + fVar12 * UVar1.x;
			pUVar2.anchoredPosition = value;
			return;
		}
	label_053a9d11: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x52A93F0", Offset = "0x52A83F0", VA = "0x52A93F0")]
	private Vector2 TargetPosition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$TargetPosition): clean
		Vector2 UVar1;
		Vector2 UVar2;
		Vector2 UVar3;
		float fVar4;

		UVar1 = this._origin;
		UVar2 = (Vector2.upVector);
		if ((this._hovered == false) && (this._selected == false)) {
			fVar4 = 0.0;
		}
		else {
			fVar4 = 10.0;
		}
		UVar3.x = UVar2.x * fVar4 + UVar1.x;
		UVar3.y = UVar2.y * fVar4 + UVar1.y;
		return (Vector2)UVar3;
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x52A9460", Offset = "0x52A8460", VA = "0x52A9460")]
	private void MoveTo(Vector2 target, float duration)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$MoveTo): 5 lines keep C-only constructs
		RectTransform pUVar1;
		Tween pDVar2;
		Vector2 UVar3;
		bool bVar4;
		GisketchSpriteButtonFeedback.c__DisplayClass17_0 __this_00;
		TweenCallback<float> __this_01;
		Tweener pDVar5;
		Tween* targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSpriteButtonFeedback.c__DisplayClass17_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.target = target;
			pUVar1 = this._rect;
			bVar4 = ((Object)pUVar1 == null);
			if (bVar4) {
				return;
			}
			pDVar2 = this._tween;
			if (pDVar2 != null) {
				TweenExtensions.Kill(pDVar2, false);
			}
			bVar4 = Application.isPlaying;
			pUVar1 = this._rect;
			if (bVar4) {
				if (pUVar1 != null) {
					targetAddress = &this._tween;
					UVar3 = (Vector2)pUVar1.anchoredPosition;
					__this_00.start = UVar3;
					__this_01 = new TweenCallback<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_c__DisplayClass17_0_MoveTo_b__0);
					pDVar5 = DOVirtual.Float(0.0, 1.0, duration, __this_01);
					pDVar5 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar5, 9);
					pDVar5 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar5, true);
					*targetAddress = (Tween)pDVar5;
					pDVar2 = *targetAddress;
					GisketchMotionDriver.Track(pDVar2, false);
					return;
				}
			}
			else if (pUVar1 != null) {
				pUVar1.anchoredPosition = (Vector2)__this_00.target;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x52A9D40", Offset = "0x52A8D40", VA = "0x52A9D40", Slot = "8")]
	protected override void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDestroy): clean
		Tween t;

		t = this._tween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		this.OnDestroy();
		return;
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x52A9D70", Offset = "0x52A8D70", VA = "0x52A9D70")]
	public GisketchSpriteButtonFeedback()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSpriteButtonFeedback.c.

	// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$.ctor: clean
	private void c__DisplayClass15_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__0: clean
	private void c__DisplayClass15_0__OnSubmit_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchSpriteButtonFeedback pGVar3;
		RectTransform __this_00;
		Vector2 value_00;
		float fVar4;
		float fVar5;

		pGVar3 = this.__4__this;
		if ((pGVar3 == null) ||(__this_00 = pGVar3._rect, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar1 = this.start;
		UVar2 = this.press;
		fVar4 = UVar1.x;
		fVar5 = UVar1.y;
		value_00.y = value * (UVar2.y - fVar5) + fVar5;
		value_00.x = value * (UVar2.x - fVar4) + fVar4;
		__this_00.anchoredPosition = value_00;
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__1: clean
	private void c__DisplayClass15_0__OnSubmit_b__1(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchSpriteButtonFeedback pGVar3;
		RectTransform __this_00;
		Vector2 value_00;
		float fVar4;
		float fVar5;

		pGVar3 = this.__4__this;
		if ((pGVar3 == null) ||(__this_00 = pGVar3._rect, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar1 = this.press;
		UVar2 = this.target;
		fVar4 = UVar1.x;
		fVar5 = UVar1.y;
		value_00.y = value * (UVar2.y - fVar5) + fVar5;
		value_00.x = value * (UVar2.x - fVar4) + fVar4;
		__this_00.anchoredPosition = value_00;
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$<MoveTo>b__0: clean
	private void c__DisplayClass17_0__MoveTo_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchSpriteButtonFeedback pGVar3;
		RectTransform __this_00;
		Vector2 value_00;
		float fVar4;
		float fVar5;

		pGVar3 = this.__4__this;
		if ((pGVar3 == null) ||(__this_00 = pGVar3._rect, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar1 = this.start;
		UVar2 = this.target;
		fVar4 = UVar1.x;
		fVar5 = UVar1.y;
		value_00.y = value * (UVar2.y - fVar5) + fVar5;
		value_00.x = value * (UVar2.x - fVar4) + fVar4;
		__this_00.anchoredPosition = value_00;
		return;
	}
}
