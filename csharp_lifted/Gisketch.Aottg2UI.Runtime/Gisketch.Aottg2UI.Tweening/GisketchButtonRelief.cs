// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Tweening.GisketchButtonRelief
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Tweening;

[Token(Token = "0x2000014")]
public sealed class GisketchButtonRelief : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler, ISelectHandler, IDeselectHandler, ISubmitHandler
{
	[Token(Token = "0x4000061")]
	private const float DefaultPressDepth = 0.1f;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Material _material;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RectTransform _face;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectMask2D _pressMask;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Selectable _selectable;

	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private float _baseRelief;

	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private float _pressDepth;

	[Token(Token = "0x4000069")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private bool _ownsMaterial;

	[Token(Token = "0x400006A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x51")]
	private bool _hovered;

	[Token(Token = "0x400006B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x52")]
	private bool _pressed;

	[Token(Token = "0x400006C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Tween _tween;

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5224940", Offset = "0x5223940", VA = "0x5224940")]
	public void Setup(Image image, RectTransform face, float relief, [Optional] RectMask2D pressMask, [Optional] float? pressDepth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Setup): 5 lines keep C-only constructs
		RectMask2D* targetAddress;
		RectMask2D x;
		bool bVar1;
		Material pUVar2;
		Selectable pUVar3;
		float fVar4;
		Nullable<float> local_38;

		local_38 = pressDepth;
		this._image = image;
		pUVar2 = null;
		bVar1 = ((Object)image != null);
		if (bVar1) {
			if (image == null) goto label_05324ad7;
			pUVar2 = image.get_material();
		}
		this._material = pUVar2;
		this._face = face;
		targetAddress = &this._pressMask;
		this._pressMask = pressMask;
		pUVar3 = this.GetComponent<Selectable>();
		this._selectable = pUVar3;
		this._baseRelief = relief;
		fVar4 = local_38.GetValueOrDefault(0.1);
		this._pressDepth = fVar4;
		x = *targetAddress;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (*targetAddress == null) {
	label_05324ad7: ;
				throw new NullReferenceException();
			}
			(*targetAddress).enabled = false;
		}
		return;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5224B60", Offset = "0x5223B60", VA = "0x5224B60", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerEnter): clean
		float fVar1;
		Vector2 UVar2;
		Selectable pUVar3;
		Vector2 offsetTarget;
		bool bVar4;
		float fVar5;
		float fStack_28;
		float fStack_24;

		pUVar3 = this._selectable;
		bVar4 = ((Object)pUVar3 == null);
		if (!bVar4) {
			pUVar3 = this._selectable;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			bVar4 = pUVar3.IsInteractable();
			if (!bVar4) {
				return;
			}
		}
		this._hovered = true;
		if (this._pressed != false) {
			return;
		}
		fVar1 = this._baseRelief;
		UVar2 = (Vector2.upVector);
		fVar5 = this.ShadowSize();
		fStack_28 = UVar2.x;
		fStack_24 = UVar2.y;
		offsetTarget.y = fStack_24 * fVar5 * 0.5;
		offsetTarget.x = fStack_28 * fVar5 * 0.5;
		this.Animate(fVar1 * 1.35, offsetTarget, 0.08, 9);
		return;
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x5224D80", Offset = "0x5223D80", VA = "0x5224D80", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerExit): clean
		float reliefTarget;

		this._hovered = false;
		if (this._pressed != false) {
			return;
		}
		reliefTarget = this._baseRelief;
		this.Animate(reliefTarget, (Vector2)(Vector2.zeroVector), 0.08, 9);
		return;
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x5224E00", Offset = "0x5223E00", VA = "0x5224E00", Slot = "6")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerDown): clean
		Selectable pUVar1;
		RectMask2D pUVar2;
		bool bVar3;
		float reliefTarget;
		Vector2 offsetTarget;

		pUVar1 = this._selectable;
		bVar3 = ((Object)pUVar1 == null);
		if (!bVar3) {
			pUVar1 = this._selectable;
			if (pUVar1 == null) goto label_05324f28;
			bVar3 = pUVar1.IsInteractable();
			if (!bVar3) {
				return;
			}
		}
		this._pressed = true;
		pUVar2 = this._pressMask;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			pUVar2 = this._pressMask;
			if (pUVar2 == null) {
	label_05324f28: ;
				throw new NullReferenceException();
			}
			pUVar2.enabled = true;
		}
		reliefTarget = this._baseRelief;
		if (this._hovered != false) {
			reliefTarget = reliefTarget * 1.35;
		}
		offsetTarget = this.PressOffset();
		this.Animate(reliefTarget, offsetTarget, 0.045, 9);
		return;
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x52251B0", Offset = "0x52241B0", VA = "0x52251B0", Slot = "7")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnPointerUp): clean
		this._pressed = false;
		this.Release();
		return;
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x52253B0", Offset = "0x52243B0", VA = "0x52253B0", Slot = "8")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSelect): clean
		Selectable pUVar1;
		bool bVar2;
		float reliefTarget;
		float fVar3;
		Vector2 UVar4;
		float fStack_28;
		float fStack_24;

		pUVar1 = this._selectable;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			pUVar1 = this._selectable;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			bVar2 = pUVar1.IsInteractable();
			if (!bVar2) {
				return;
			}
		}
		if (this._pressed != false) {
			return;
		}
		reliefTarget = this._baseRelief;
		if (this._hovered == false) {
			UVar4 = (Vector2.zeroVector);
		}
		else {
			reliefTarget = reliefTarget * 1.35;
			UVar4 = (Vector2.upVector);
			fVar3 = this.ShadowSize();
			fStack_28 = UVar4.x;
			fStack_24 = UVar4.y;
			UVar4.x = fVar3 * fStack_28 * 0.5;
			UVar4.y = fVar3 * fStack_24 * 0.5;
		}
		this.Animate(reliefTarget, (Vector2)UVar4, 0.08, 9);
		return;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x52255B0", Offset = "0x52245B0", VA = "0x52255B0", Slot = "9")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDeselect): clean
		float reliefTarget;

		if (this._pressed != false) {
			return;
		}
		reliefTarget = this._baseRelief;
		this.Animate(reliefTarget, (Vector2)(Vector2.zeroVector), 0.08, 9);
		return;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5225620", Offset = "0x5224620", VA = "0x5225620", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnSubmit): clean
		this.Press();
		return;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x5225630", Offset = "0x5224630", VA = "0x5225630")]
	public void Press()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Press): 1 lines keep C-only constructs
		Selectable pUVar1;
		Material x;
		RectMask2D pUVar2;
		Vector2 UVar3;
		Vector2 offsetEnd;
		bool bVar4;
		Sequence pDVar5;
		Tween pDVar6;
		TweenCallback __this_00;
		float reliefEnd;
		float fVar8;
		float fVar9;
		Vector2 UVar10;
		float fStack_38;
		float fStack_34;

		pUVar1 = this._selectable;
		bVar4 = ((Object)pUVar1 == null);
		if (!bVar4) {
			pUVar1 = this._selectable;
			if (pUVar1 == null) goto label_05325a00;
			bVar4 = pUVar1.IsInteractable();
			if (!bVar4) {
				return;
			}
		}
		x = this._material;
		bVar4 = ((Object)x == null);
		if (!bVar4) {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				bVar4 = Application.isPlaying;
			}
			else {
				bVar4 = Application.isPlaying;
			}
			if (bVar4) {
				this._pressed = true;
				pUVar2 = this._pressMask;
				bVar4 = ((Object)pUVar2 != null);
				if (bVar4) {
					pUVar2 = this._pressMask;
					if (pUVar2 == null) {
	label_05325a00: ;
						throw new NullReferenceException();
					}
					pUVar2.enabled = true;
				}
				pDVar6 = this._tween;
				if (pDVar6 != null) {
					TweenExtensions.Kill(pDVar6, false);
				}
				reliefEnd = this._baseRelief;
				if (this._hovered != false) {
					reliefEnd = reliefEnd * 1.35;
				}
				pDVar5 = DOTween.Sequence();
				fVar8 = this.CurrentRelief();
				UVar3 = this.FaceOffset();
				offsetEnd = this.PressOffset();
				pDVar6 = this.AnimateStep(fVar8, reliefEnd, UVar3, offsetEnd, 0.045, 9);
				pDVar5 = TweenSettingsExtensions.Append(pDVar5, pDVar6);
				fVar8 = this._baseRelief;
				if (this._hovered != false) {
					fVar8 = fVar8 * 1.35;
				}
				UVar3 = this.PressOffset();
				if (this._hovered == false) {
					UVar10 = (Vector2.zeroVector);
				}
				else {
					UVar10 = (Vector2.upVector);
					fVar9 = this.ShadowSize();
					fStack_38 = UVar10.x;
					fStack_34 = UVar10.y;
					UVar10.x = fVar9 * fStack_38 * 0.5;
					UVar10.y = fVar9 * fStack_34 * 0.5;
				}
				pDVar6 = this.AnimateStep(reliefEnd, fVar8, UVar3, (Vector2)UVar10, 0.09, 0x1b);
				pDVar5 = TweenSettingsExtensions.Append(pDVar5, pDVar6);
				__this_00 = new TweenCallback((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Press_b__20_0);
				pDVar5 = TweenSettingsExtensions.OnComplete<Sequence>((object)pDVar5, __this_00);
				pDVar5 = TweenSettingsExtensions.SetUpdate<Sequence>((object)pDVar5, true);
				this._tween = (Tween)pDVar5;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5224D70", Offset = "0x5223D70", VA = "0x5224D70")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate): clean
		Tween pDVar1;

		pDVar1 = this.Animate(reliefTarget, offsetTarget, duration, 9);
		return pDVar1;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x5225050", Offset = "0x5224050", VA = "0x5225050")]
	private Tween Animate(float reliefTarget, Vector2 offsetTarget, float duration, Ease ease)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Animate): clean
		Material x;
		RectTransform x_00;
		bool bVar1;
		Tween pDVar2;
		float reliefStart;
		Vector2 offsetStart;

		x = this._material;
		bVar1 = ((Object)x == null);
		if (bVar1) {
			x_00 = this._face;
			bVar1 = ((Object)x_00 == null);
			if (bVar1) {
				return null;
			}
		}
		pDVar2 = null;
		bVar1 = Application.isPlaying;
		if (bVar1) {
			pDVar2 = this._tween;
			if (pDVar2 != null) {
				TweenExtensions.Kill(pDVar2, false);
			}
			reliefStart = this.CurrentRelief();
			offsetStart = this.FaceOffset();
			pDVar2 = this.AnimateStep(reliefStart, reliefTarget, offsetStart, offsetTarget, duration, ease);
			pDVar2 = TweenSettingsExtensions.SetUpdate<Tween>((object)pDVar2, true);
			this._tween = pDVar2;
			pDVar2 = this._tween;
		}
		return pDVar2;
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x5225B70", Offset = "0x5224B70", VA = "0x5225B70")]
	private Tween AnimateStep(float reliefStart, float reliefEnd, Vector2 offsetStart, Vector2 offsetEnd, float duration, Ease ease)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$AnimateStep): 2 lines keep C-only constructs
		GisketchButtonRelief.c__DisplayClass23_0 __this_00;
		TweenCallback<float> __this_01;
		Tweener pDVar1;
		float local_38;
		float fStack_34;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchButtonRelief.c__DisplayClass23_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.reliefStart = reliefStart;
		__this_00.reliefEnd = reliefEnd;
		local_38 = offsetStart.x;
		fStack_34 = offsetStart.y;
		__this_00.offsetStart.x = local_38;
		__this_00.offsetStart.y = fStack_34;
		__this_00.offsetEnd.x = offsetEnd.x;
		__this_00.offsetEnd.y = offsetEnd.y;
		__this_01 = new TweenCallback<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_c__DisplayClass23_0_AnimateStep_b__0);
		pDVar1 = DOVirtual.Float(0.0, 1.0, duration, __this_01);
		pDVar1 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar1, ease);
		return (Tween)pDVar1;
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x5225A10", Offset = "0x5224A10", VA = "0x5225A10")]
	private float CurrentRelief()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CurrentRelief): clean
		Material pUVar1;
		bool bVar2;
		float fVar3;

		pUVar1 = this._material;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._material;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			fVar3 = pUVar1.GetFloat(GisketchSurfaceMaterial. ReliefId);
			return fVar3;
		}
		return 0.0;
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x5225CB0", Offset = "0x5224CB0", VA = "0x5225CB0")]
	private void SetRelief(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetRelief): 4 lines keep C-only constructs
		Material* targetAddress;
		Material pUVar1;
		Image pUVar2;
		bool bVar3;
		Material __this_00;

		pUVar1 = this._material;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		targetAddress = &this._material;
		if (this._ownsMaterial == false) {
			pUVar2 = this._image;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar1 = *targetAddress;
				__this_00 = new Material(pUVar1);
				if (__this_00 == null) goto label_05325e1c;
				__this_00.hideFlags = 0x34;
				this._material = __this_00;
				pUVar2 = this._image;
				if (pUVar2 == null) goto label_05325e1c;
				pUVar2.set_material(this._material);
				this._ownsMaterial = true;
			}
		}
		pUVar1 = *targetAddress;
		if (pUVar1 != null) {
			pUVar1.SetFloat(GisketchSurfaceMaterial.ReliefId, value);
			return;
		}
	label_05325e1c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5225AC0", Offset = "0x5224AC0", VA = "0x5225AC0")]
	private Vector2 FaceOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$FaceOffset): clean
		RectTransform pUVar1;
		bool bVar2;
		Vector2 UVar3;

		pUVar1 = this._face;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._face;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			UVar3 = pUVar1.anchoredPosition;
			return (Vector2)UVar3;
		}
		return (Vector2)(Vector2.zeroVector);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x5224D10", Offset = "0x5223D10", VA = "0x5224D10")]
	private Vector2 HoverOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$HoverOffset): clean
		Vector2 UVar1;
		Vector2 UVar2;
		float fVar3;
		float local_18;
		float fStack_14;

		UVar1 = (Vector2.upVector);
		fVar3 = this.ShadowSize();
		local_18 = UVar1.x;
		fStack_14 = UVar1.y;
		UVar2.y = fVar3 * fStack_14 * 0.5;
		UVar2.x = fVar3 * local_18 * 0.5;
		return (Vector2)UVar2;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x5224F50", Offset = "0x5223F50", VA = "0x5224F50")]
	private Vector2 PressOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$PressOffset): clean
		Vector2 UVar1;
		RectTransform pUVar2;
		Vector2 UVar3;
		bool bVar4;
		float fVar5;
		float fVar6;
		Rect UVar7;
		float local_28;
		float fStack_24;

		pUVar2 = this._face;
		bVar4 = ((Object)pUVar2 != null);
		fVar6 = 0.0;
		if (bVar4) {
			pUVar2 = this._face;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			UVar7 = pUVar2.rect;
			fVar6 = UVar7.m_Height;
		}
		UVar1 = (Vector2.downVector);
		fVar5 = this.ShadowSize();
		fVar6 = fVar6 * this._pressDepth;
		if (fVar5 <= fVar6) {
			fVar5 = fVar6;
		}
		local_28 = UVar1.x;
		fStack_24 = UVar1.y;
		UVar3.y = fVar5 * fStack_24;
		UVar3.x = fVar5 * local_28;
		return (Vector2)UVar3;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x5224F30", Offset = "0x5223F30", VA = "0x5224F30")]
	private float ReleaseRelief()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseRelief): clean
		float fVar1;

		fVar1 = this._baseRelief;
		if (this._hovered != false) {
			fVar1 = fVar1 * 1.35;
		}
		return fVar1;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x5225510", Offset = "0x5224510", VA = "0x5225510")]
	private Vector2 ReleaseOffset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ReleaseOffset): clean
		Vector2 UVar1;
		Vector2 UVar2;
		float fVar3;
		float local_18;
		float fStack_14;

		if (this._hovered == false) {
			return (Vector2)(Vector2.zeroVector);
		}
		UVar1 = (Vector2.upVector);
		fVar3 = this.ShadowSize();
		local_18 = UVar1.x;
		fStack_14 = UVar1.y;
		UVar2.y = fVar3 * fStack_14 * 0.5;
		UVar2.x = fVar3 * local_18 * 0.5;
		return (Vector2)UVar2;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x52251C0", Offset = "0x52241C0", VA = "0x52251C0")]
	private void Release()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$Release): 1 lines keep C-only constructs
		RectMask2D pUVar1;
		bool bVar2;
		Tween t;
		TweenCallback __this_00;
		bool bVar3;
		float fVar4;
		float reliefTarget;
		Vector2 UVar5;
		float fStack_28;
		float fStack_24;

		if (Il2CppMethodInitialized_07542805 == false) {
			Il2CppMethodInitialized_07542805 = true;
			bVar2 = this._hovered == false;
			reliefTarget = this._baseRelief;
			bVar3 = bVar2;
			if (!bVar2) goto label_0532528b;
	label_053251e6: ;
			if (bVar3) {
	label_05325299: ;
				UVar5 = (Vector2.zeroVector);
				goto label_053252d6;
			}
		}
		else {
			reliefTarget = this._baseRelief;
			bVar2 = false;
			bVar3 = true;
			if (this._hovered == false) goto label_053251e6;
	label_0532528b: ;
			reliefTarget = reliefTarget * 1.35;
			if (bVar2) goto label_05325299;
		}
		UVar5 = (Vector2.upVector);
		fVar4 = this.ShadowSize();
		fStack_28 = UVar5.x;
		fStack_24 = UVar5.y;
		UVar5.x = fVar4 * fStack_28 * 0.5;
		UVar5.y = fVar4 * fStack_24 * 0.5;
	label_053252d6: ;
		t = this.Animate(reliefTarget, (Vector2)UVar5, 0.09, 0x1b);
		if (t != null) {
			__this_00 = new TweenCallback((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_Release_b__31_0);
			TweenSettingsExtensions.OnComplete<Tween>((object)t, __this_00);
			return;
		}
		pUVar1 = this._pressMask;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._pressMask;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = false;
			return;
		}
		return;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x5225E30", Offset = "0x5224E30", VA = "0x5225E30")]
	private float ShadowSize()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ShadowSize): clean
		Material pUVar1;
		bool bVar2;
		float fVar3;
		float fVar4;

		pUVar1 = this._material;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._material;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			fVar3 = pUVar1.GetFloat(GisketchSurfaceMaterial. ReliefShadowSizeId);
			if (1.0 <= fVar3) {
			}
			return fVar4;
		}
		return 4.0;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x5224AE0", Offset = "0x5223AE0", VA = "0x5224AE0")]
	private void SetPressMask(bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$SetPressMask): clean
		RectMask2D pUVar1;
		bool bVar2;

		pUVar1 = this._pressMask;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._pressMask;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = enabled;
			return;
		}
		return;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x5224C80", Offset = "0x5223C80", VA = "0x5224C80")]
	private bool CanInteract()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$CanInteract): clean
		Selectable pUVar1;
		bool bVar2;

		pUVar1 = this._selectable;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return true;
		}
		pUVar1 = this._selectable;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		bVar2 = pUVar1.IsInteractable();
		return bVar2;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x5225EF0", Offset = "0x5224EF0", VA = "0x5225EF0")]
	private void ResetPressVisual()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$ResetPressVisual): 2 lines keep C-only constructs
		Tween* targetAddress;
		Tween t;
		RectMask2D pUVar1;
		RectTransform pUVar2;
		Material pUVar3;
		bool bVar4;

		this._hovered = false;
		this._pressed = false;
		targetAddress = &this._tween;
		t = this._tween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		*targetAddress = null;
		pUVar1 = this._pressMask;
		bVar4 = ((Object)pUVar1 != null);
		if (bVar4) {
			pUVar1 = this._pressMask;
			if (pUVar1 == null) goto label_053260a0;
			pUVar1.enabled = false;
		}
		pUVar2 = this._face;
		bVar4 = ((Object)pUVar2 != null);
		if (bVar4) {
			pUVar2 = this._face;
			if (pUVar2 == null) goto label_053260a0;
			pUVar2.anchoredPosition = (Vector2)(Vector2.zeroVector);
		}
		if (this._ownsMaterial != false) {
			pUVar3 = this._material;
			bVar4 = ((Object)pUVar3 != null);
			if (bVar4) {
				pUVar3 = this._material;
				if (pUVar3 != null) {
					pUVar3.SetFloat(GisketchSurfaceMaterial.ReliefId, this._baseRelief);
					return;
				}
	label_053260a0: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x52260B0", Offset = "0x52250B0", VA = "0x52260B0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDisable): clean
		this.ResetPressVisual();
		return;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x52260C0", Offset = "0x52250C0", VA = "0x52260C0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$OnDestroy): clean
		Tween t;
		Material pUVar1;
		bool bVar2;

		t = this._tween;
		if (t != null) {
			TweenExtensions.Kill(t, false);
		}
		if (this._ownsMaterial != false) {
			pUVar1 = this._material;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._material;
				Object.Destroy((Object)pUVar1);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x5226160", Offset = "0x5225160", VA = "0x5226160")]
	public GisketchButtonRelief()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c (Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$.ctor): clean
		this._pressDepth = 0.1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchButtonRelief.c.

	// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$.ctor: clean
	private void c__DisplayClass23_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Press>b__20_0: clean
	private void Press_b__20_0()
	{
		RectMask2D pUVar1;
		bool bVar2;

		this._pressed = false;
		pUVar1 = this._pressMask;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._pressMask;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = false;
			return;
		}
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief$$<Release>b__31_0: clean
	private void Release_b__31_0()
	{
		RectMask2D pUVar1;
		bool bVar2;

		pUVar1 = this._pressMask;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._pressMask;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.enabled = false;
			return;
		}
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchButtonRelief.<>c__DisplayClass23_0$$<AnimateStep>b__0: clean
	private void c__DisplayClass23_0__AnimateStep_b__0(float value)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		GisketchButtonRelief pGVar3;
		RectTransform pUVar4;
		Vector2 value_00;
		bool bVar5;
		float fVar6;
		float fVar7;

		pGVar3 = this.__4__this;
		if (pGVar3 != null) {
			fVar6 = this.reliefStart;
			pGVar3.SetRelief((this.reliefEnd - fVar6) * value + fVar6);
			pGVar3 = this.__4__this;
			if (pGVar3 != null) {
				pUVar4 = pGVar3._face;
				bVar5 = ((Object)pUVar4 != null);
				if (!bVar5) {
					return;
				}
				pGVar3 = this.__4__this;
				if ((pGVar3 != null) &&(pUVar4 = pGVar3._face, pUVar4 != null)) {
					UVar1 = this.offsetStart;
					UVar2 = this.offsetEnd;
					fVar6 = UVar1.x;
					fVar7 = UVar1.y;
					value_00.y = value * (UVar2.y - fVar7) + fVar7;
					value_00.x = value * (UVar2.x - fVar6) + fVar6;
					pUVar4.anchoredPosition = value_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
