// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000DF")]
public sealed class GisketchDropdownItemFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000489")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x400048A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x400048B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x400048C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Color _normalBg;

	[Token(Token = "0x400048D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Color _normalIcon;

	[Token(Token = "0x400048E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Color _normalText;

	[Token(Token = "0x400048F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Color32 _normalFace;

	[Token(Token = "0x4000490")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private Color _disabledText;

	[Token(Token = "0x4000491")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private Color _hoverBg;

	[Token(Token = "0x4000492")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private Color _hoverText;

	[Token(Token = "0x4000493")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string _normalLabelText;

	[Token(Token = "0x4000494")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _activeLabelText;

	[Token(Token = "0x4000495")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _normalLabelOwnsColor;

	[Token(Token = "0x4000496")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private GisketchHoverMarqueeText _marquee;

	[Token(Token = "0x4000497")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Func<bool> _pointerHoverAllowed;

	[Token(Token = "0x4000498")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x4000499")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x400049A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x400049B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCB")]
	private bool _disabled;

	[Token(Token = "0x170000AD")]
	public Color NormalTextColor
	{
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x52A01C0", Offset = "0x529F1C0", VA = "0x52A01C0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$get_NormalTextColor): clean
			return (Color)this._normalText;
		}
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x529FC50", Offset = "0x529EC50", VA = "0x529FC50")]
	public void Setup(Image image, TextMeshProUGUI label, GisketchTheme theme, [Optional] Image icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Setup): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Color32 UVar3;
		int iVar4;
		String pSVar5;
		GameObject viewport;
		GisketchHoverMarqueeText pGVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Color UVar12;
		Color UVar13;
		Color fallback;
		Color fallback_00;

		this._image = image;
		this._icon = icon;
		this._label = label;
		bVar2 = ((Object)image != null);
		fVar7 = 0.0;
		fVar8 = 0.0;
		fVar9 = 0.0;
		fVar10 = 0.0;
		if (bVar2) {
			if (image == null) goto label_053a0041;
			UVar12 = image.get_color();
			fVar9 = UVar12.b;
			fVar10 = UVar12.a;
			fVar7 = UVar12.r;
			fVar8 = UVar12.g;
		}
		this._normalBg.r = fVar7;
		this._normalBg.g = fVar8;
		this._normalBg.b = fVar9;
		this._normalBg.a = fVar10;
		bVar2 = ((Object)icon != null);
		fVar7 = 1.0;
		fVar8 = 1.0;
		fVar9 = fVar7;
		fVar10 = fVar8;
		if (bVar2) {
			if (icon == null) goto label_053a0041;
			UVar12 = icon.get_color() ;
			fVar9 = UVar12.b;
			fVar10 = UVar12.a;
			fVar7 = UVar12.r;
			fVar8 = UVar12.g;
		}
		this._normalIcon.r = fVar7;
		this._normalIcon.g = fVar8;
		this._normalIcon.b = fVar9;
		this._normalIcon.a = fVar10;
		bVar2 = ((Object)label != null);
		fVar7 = 1.0;
		fVar8 = 1.0;
		fVar9 = fVar7;
		fVar10 = fVar8;
		if (bVar2) {
			if (label == null) goto label_053a0041;
			UVar12 = label.get_color();
			fVar9 = UVar12.b;
			fVar10 = UVar12.a;
			fVar7 = UVar12.r;
			fVar8 = UVar12.g;
		}
		this._normalText.r = fVar7;
		this._normalText.g = fVar8;
		this._normalText.b = fVar9;
		this._normalText.a = fVar10;
		bVar2 = ((Object)label != null);
		if (bVar2) {
			if (label == null) goto label_053a0041;
			UVar3 = label.faceColor;
			this._normalFace._overlap_0._at_rgba.rgba = (int32_t)UVar3._overlap_0;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			iVar4 = il2cpp_runtime_helper_05334d00(0x3f800000, 0x3f800000, 0);
			this._normalFace._overlap_0._at_rgba.rgba = iVar4;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)image != null);
		if (bVar2) {
			if (image == null) goto label_053a0041;
			UVar12 = image.get_color();
			fVar9 = UVar12.b;
			fVar7 = UVar12.r;
			fVar8 = UVar12.g;
		}
		else {
			if (theme == null) goto label_053a0041;
			UVar12.b = 1.0;
			UVar12.a = 1.0;
			UVar12.r = 1.0;
			UVar12.g = 1.0;
			UVar12 = theme.GetColor("surface", UVar12);
			fVar9 = UVar12.b;
			fVar7 = UVar12.r;
			fVar8 = UVar12.g;
		}
		fVar10 = 1.0;
		fVar11 = 1.0;
		if (0.5 <= fVar9 * 0.0722 + fVar8 * 0.7152 + fVar7 * 0.2126) {
			fVar11 = 0.0;
			fVar10 = 0.0;
		}
		this._disabledText.r = fVar10;
		this._disabledText.g = fVar11;
		this._disabledText.b = fVar10;
		this._disabledText.a = 0.5;
		if (theme != null) {
			fallback.b = 0.0;
			fallback.a = 1.0;
			fallback.r = 1.0;
			fallback.g = 0.0;
			UVar13 = (Color)theme.GetColor("primary", fallback);
			this._hoverBg = UVar13;
			fallback_00.b = 1.0;
			fallback_00.a = 1.0;
			fallback_00.r = 1.0;
			fallback_00.g = 1.0;
			UVar13 = (Color)theme.GetColor("buttonText", fallback_00);
			this._hoverText = UVar13;
			bVar2 = ((Object)label != null);
			if (bVar2) {
				if (label == null) goto label_053a0041;
				pSVar5 = label.get_text();
			}
			else {
				pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			this._normalLabelText = pSVar5;
			this._activeLabelText = this._normalLabelText;
			bVar2 = ((Object)label != null);
			if (!bVar2) {
				return;
			}
			if (label != null) {
				label.richText = true;
				viewport = this.gameObject;
				pGVar6 = GisketchHoverMarqueeText.Setup(viewport, label, false);
				this._marquee = pGVar6;
				return;
			}
		}
	label_053a0041: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x529A4F0", Offset = "0x52994F0", VA = "0x529A4F0")]
	public void SetActiveTextColor(Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetActiveTextColor): clean
		this._hoverText = color;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x5297010", Offset = "0x5296010", VA = "0x5297010")]
	public void SetDisabled(bool disabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetDisabled): clean


		this._disabled = disabled;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x52A04D0", Offset = "0x529F4D0", VA = "0x52A04D0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerEnter): clean
		Func<bool> pSVar1;
		sbyte cVar2;

		pSVar1 = this._pointerHoverAllowed;
		if (pSVar1 != null) {
			cVar2 = (*(code)pSVar1.invoke_impl)(pSVar1.method_code);
			if (cVar2 == false) {
				this._hovered = false;
				this.Refresh();
				return;
			}
		}
		this._hovered = true;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x52A0520", Offset = "0x529F520", VA = "0x52A0520", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerExit): clean
		this._hovered = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x52A0530", Offset = "0x529F530", VA = "0x52A0530", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnSelect): clean
		GameObject focused;

		this._selected = true;
		this.Refresh();
		if (GisketchFocusInputMode._Mode_k__BackingField == 1) {
			focused = this.gameObject;
			GisketchScrollFocus.Reveal(focused, 12.0);
			return;
		}
		return;
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x52A0590", Offset = "0x529F590", VA = "0x52A0590", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnDeselect): clean
		this._selected = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x5297020", Offset = "0x5296020", VA = "0x5297020")]
	public void SetForcedActive(bool active)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetForcedActive): clean


		this._forced = active;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x52A05A0", Offset = "0x529F5A0", VA = "0x52A05A0")]
	public void SetPointerHoverAllowed(Func<bool> allowed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetPointerHoverAllowed): clean
		this._pointerHoverAllowed = allowed;
		return;
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x5297AB0", Offset = "0x5296AB0", VA = "0x5297AB0")]
	public void ClearPointerHover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$ClearPointerHover): clean
		this._hovered = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x529A500", Offset = "0x5299500", VA = "0x529A500")]
	public void SetLabelText(string normal, string active, bool normalOwnsColor = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetLabelText): 3 lines keep C-only constructs
		String* targetAddress;

		if (normal == null) {
			normal = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		targetAddress = &this._normalLabelText;
		this._normalLabelText = normal;
		if (active == null) {
			active = *targetAddress;
		}
		this._activeLabelText = active;
		this._normalLabelOwnsColor = normalOwnsColor;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x52A01D0", Offset = "0x529F1D0", VA = "0x52A01D0")]
	private void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Refresh): 21 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		ulong uVar7;
		ulong uVar8;
		uint uVar13;
		uint uVar14;
		Image pUVar15;
		GisketchHoverMarqueeText pGVar16;
		Color pUVar17;
		Color pUVar18;
		bool bVar19;
		Color32 value;
		sbyte cVar20;
		TextMeshProUGUI pTVar21;
		Color UVar22;
		Color UVar23;
		Color UVar24;
		Color UVar25;

		cVar20 = false;
		if (((this._disabled == false) && (cVar20 = true, this._hovered == false)) &&(this._selected == false)) {
			cVar20 = this._forced;
		}
		pUVar15 = this._image;
		bVar19 = ((Object)pUVar15 != null);
		if (bVar19) {
			pUVar15 = this._image;
			if (pUVar15 == null) goto label_053a04c9;
			pUVar17 = &this._hoverBg;
			pUVar18 = &this._hoverBg;
			if (cVar20 == false) {
				pUVar17 = &this._normalBg;
				pUVar18 = &this._normalBg;
			}
			uVar1 = pUVar17.r;
			uVar9 = pUVar17.g;
			UVar22.g = (float)uVar9;
			UVar22.r = (float)uVar1;
			uVar2 = pUVar18.b;
			uVar10 = pUVar18.a;
			UVar22.a = (float)uVar10;
			UVar22.b = (float)uVar2;
			pUVar15.set_color(UVar22);
		}
		pUVar15 = this._icon;
		bVar19 = ((Object)pUVar15 != null);
		if (bVar19) {
			pUVar15 = this._icon;
			if (this._disabled == false) {
				if (cVar20 == false) {
					pUVar17 = &this._normalIcon;
					pUVar18 = &this._normalIcon;
				}
				else {
					pUVar17 = &this._hoverText;
					pUVar18 = &this._hoverText;
				}
			}
			else {
				pUVar17 = &this._disabledText;
				pUVar18 = &this._disabledText;
			}
			if (pUVar15 == null) goto label_053a04c9;
			uVar3 = pUVar17.r;
			uVar11 = pUVar17.g;
			UVar23.g = (float)uVar11;
			UVar23.r = (float)uVar3;
			uVar4 = pUVar18.b;
			uVar12 = pUVar18.a;
			UVar23.a = (float)uVar12;
			UVar23.b = (float)uVar4;
			pUVar15.set_color(UVar23);
		}
		pTVar21 = this._label;
		bVar19 = ((Object)pTVar21 != null);
		if (bVar19) {
			pTVar21 = this._label;
			if (pTVar21 == null) goto label_053a04c9;
			pTVar21.set_text(*(String*)(&this._normalFace + (ulong)(cVar20 != false) * 2 + 0xe));
			if (this._disabled == false) {
				pTVar21 = this._label;
				if (this._normalLabelOwnsColor != false) {
					if (pTVar21 == null) goto label_053a04c9;
					UVar24.b = 1.0;
					UVar24.a = 1.0;
					UVar24.r = 1.0;
					UVar24.g = 1.0;
					pTVar21.set_color(UVar24);
					pTVar21 = this._label;
					value._overlap_0 =(Color32)il2cpp_runtime_helper_05334d00(0x3f8000003f800000, 0x3f8000003f800000, 0);
					goto joined_r0x053a0415;
				}
				if (pTVar21 == null) goto label_053a04c9;
				pUVar17 = &this._hoverText;
				pUVar18 = &this._hoverText;
				if (cVar20 == false) {
					pUVar17 = &this._normalText;
					pUVar18 = &this._normalText;
				}
				uVar5 = pUVar17.r;
				uVar13 = pUVar17.g;
				UVar25.g = (float)uVar13;
				UVar25.r = (float)uVar5;
				uVar6 = pUVar18.b;
				uVar14 = pUVar18.a;
				UVar25.a = (float)uVar14;
				UVar25.b = (float)uVar6;
				pTVar21.set_color(UVar25);
				pTVar21 = this._label;
				if (pTVar21 == null) goto label_053a04c9;
				value._overlap_0 =(Color32)this._normalFace._overlap_0._at_rgba.rgba;
			}
			else {
				pTVar21 = this._label;
				if (pTVar21 == null) goto label_053a04c9;
				pTVar21.set_color((Color)this._disabledText);
				pTVar21 = this._label;
				uVar7._0_4_ = this._disabledText.r;
				uVar7._4_4_ = this._disabledText.g;
				uVar8._0_4_ = this._disabledText.b;
				uVar8._4_4_ = this._disabledText.a;
				value._overlap_0 = (Color32)il2cpp_runtime_helper_05334d00(uVar7, uVar8, 0);
	joined_r0x053a0415: ;
				if (pTVar21 == null) goto label_053a04c9;
			}
			pTVar21.faceColor = value;
		}
		pGVar16 = this._marquee;
		bVar19 = ((Object)pGVar16 != null);
		if (!bVar19) {
			return;
		}
		pGVar16 = this._marquee;
		if (pGVar16 != null) {
			pGVar16.Refresh(cVar20 != false);
			return;
		}
	label_053a04c9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x52A0050", Offset = "0x529F050", VA = "0x52A0050")]
	private static Color Muted(Color surface)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Muted): 1 lines keep C-only constructs
		Color UVar1;

		if (surface.b * 0.0722 + surface.g * 0.7152 + surface.r * 0.2126 < 0.5) {
			UVar1.b = 1.0;
			UVar1.a = 0.5;
			UVar1.r = 1.0;
			UVar1.g = 1.0;
			return (Color)UVar1;
		}
		return (Color)(ZEXT816(0x3f00000000000000) << 0x40);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x52A05D0", Offset = "0x529F5D0", VA = "0x52A05D0")]
	private static float Luminance(Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Luminance): clean
		return color.r * 0.2126 + color.g * 0.7152 + color.b * 0.0722;
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x52A05F0", Offset = "0x529F5F0", VA = "0x52A05F0")]
	public GisketchDropdownItemFeedback()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchDropdownItemFeedback.c (Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$.ctor): clean
		base();
		return;
	}
}
