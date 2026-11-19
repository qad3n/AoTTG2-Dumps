// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D3")]
public sealed class GisketchBrushButtonFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x20")]
	private Image _brush;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _content;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _contentOrigin;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x48")]
	private Color _hiddenBrush;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x58")]
	private Color _shownBrush;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x68")]
	private Color _normalText;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x78")]
	private Color _activeText;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x88")]
	private Color _fadedText;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x98")]
	private Material _brushMaterial;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0xA0")]
	private Material _labelNormalMaterial;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0xA8")]
	private Material _labelShadowMaterial;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0xB0")]
	private GisketchDropShadow _iconShadow;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0xB8")]
	private Tween _revealTween;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0xC0")]
	private Tween _pressTween;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0xCB")]
	private bool _panelFaded;

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x529C9A0", Offset = "0x529B9A0", VA = "0x529C9A0")]
	public void Setup(Image brush, TextMeshProUGUI label, Image icon, RectTransform content, GisketchTheme theme)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Setup): 29 lines keep C-only constructs
		Image* targetAddress;
		TextMeshProUGUI* targetAddress_00;
		Image* targetAddress_01;
		Material* targetAddress_02;
		Vector2 UVar1;
		Image pUVar2;
		TextMeshProUGUI pTVar3;
		Vector2 UVar4;
		float fVar5;
		bool bVar6;
		Material pUVar7;
		MethodInfo pMVar8;
		GisketchDropShadow pGVar9;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		float fVar10;
		float fVar11;
		Color UVar12;
		Color UVar13;

		targetAddress = &this._brush;
		this._brush = brush;
		targetAddress_00 = &this._label;
		this._label = label;
		targetAddress_01 = &this._icon;
		this._icon = icon;
		this._content = content;
		bVar6 = ((Object)content != null);
		if (bVar6) {
			if (content == null) goto label_0539ce38;
			UVar4 = content.anchoredPosition;
			fVar10 = UVar4.x;
			fVar11 = UVar4.y;
		}
		else {
			UVar1 = (Vector2.zeroVector);
			fVar10 = UVar1.x;
			fVar11 = UVar1.y;
		}
		UVar1.y = fVar11;
		UVar1.x = fVar10;
		this._contentOrigin = UVar1;
		bVar6 = ((Object)brush != null);
		fVar10 = (float)g_data_01005870;
		fVar11 = g_data_01005870._4_4_;
		UVar12._8_8_ = g_data_01005870;
		if (bVar6) {
			if (brush == null) goto label_0539ce38;
			UVar12 = brush.get_color();
			UVar12._8_8_ = UVar12._8_8_;
			fVar10 = UVar12.r;
			fVar11 = UVar12.g;
		}
		this._shownBrush.r = fVar10;
		this._shownBrush.g = fVar11;
		this._shownBrush.b = (float)UVar12._8_8_;
		this._shownBrush.a = (float)((ulong)UVar12._8_8_ >> 0x20);
		fVar10 = this._shownBrush.g;
		fVar11 = this._shownBrush.b;
		fVar5 = this._shownBrush.a;
		this._hiddenBrush.r = this._shownBrush.r;
		this._hiddenBrush.g = fVar10;
		this._hiddenBrush.b = fVar11;
		this._hiddenBrush.a = fVar5;
		this._hiddenBrush.a = 0.0;
		bVar6 = ((Object)label != null);
		if (bVar6) {
			if (label == null) goto label_0539ce38;
			UVar12 = label.get_color();
			UVar12._8_8_ = UVar12._8_8_;
			fVar10 = UVar12.r;
			fVar11 = UVar12.g;
		}
		else {
			UVar12._8_8_ = 0x3f80000000000000;
			fVar10 = 0.0;
			fVar11 = 0.0;
		}
		this._normalText.r = fVar10;
		this._normalText.g = fVar11;
		this._normalText.b = (float)UVar12._8_8_;
		this._normalText.a = (float)((ulong)UVar12._8_8_ >> 0x20);
		if (theme == null) {
	label_0539ce38: ;
			throw new NullReferenceException();
		}
		UVar12.b = 1.0;
		UVar12.a = 1.0;
		UVar12.r = 1.0;
		UVar12.g = 1.0;
		UVar13 = (Color)theme.GetColor("buttonText", UVar12);
		this._activeText = UVar13;
		fVar10 = this._activeText.g;
		fVar11 = this._activeText.b;
		fVar5 = this._activeText.a;
		this._fadedText.r = this._activeText.r;
		this._fadedText.g = fVar10;
		this._fadedText.b = fVar11;
		this._fadedText.a = fVar5;
		pUVar7 = null;
		bVar6 = ((Object)brush != null);
		if (bVar6) {
			if (brush == null) goto label_0539ce38;
			pUVar7 = brush.get_material();
		}
		targetAddress_02 = &this._brushMaterial;
		this._brushMaterial = pUVar7;
		pMVar8 = null;
		bVar6 = ((Object)label != null);
		if (bVar6) {
			if (label == null) goto label_0539ce38;
			pMVar8 = (MethodInfo)label.fontMaterial;
		}
		this._labelNormalMaterial = (Material)pMVar8;
		pMVar8 = (MethodInfo)GisketchBrushButtonFeedback.CreateLabelShadowMaterial(label);
		this._labelShadowMaterial = (Material)pMVar8;
		pGVar9 = GisketchBrushButtonFeedback.AddHardShadow((Graphic)icon);
		this._iconShadow = pGVar9;
		pUVar2 = this._brush;
		bVar6 = ((Object)pUVar2 != null);
		if (bVar6) {
			pUVar2 = *targetAddress;
			if (pUVar2 == null) goto label_0539ce38;
			pUVar2.set_color((Color)this._hiddenBrush);
		}
		pUVar7 = *targetAddress_02;
		bVar6 = ((Object)pUVar7 != null);
		if (bVar6) {
			pUVar7 = *targetAddress_02;
			if (pUVar7 == null) goto label_0539ce38;
			bVar6 = pUVar7.HasProperty(GisketchSurfaceMaterial. BrushRevealId);
			if (bVar6) {
				pUVar7 = *targetAddress_02;
				if (pUVar7 == null) goto label_0539ce38;
				pUVar7.SetFloat(GisketchSurfaceMaterial. BrushRevealId, 0.0);
			}
		}
		pTVar3 = *targetAddress_00;
		bVar6 = ((Object)pTVar3 != null);
		if (bVar6) {
			pTVar3 = *targetAddress_00;
			if (pTVar3 == null) goto label_0539ce38;
			pTVar3.set_color((Color)this._normalText);
		}
		pUVar2 = *targetAddress_01;
		bVar6 = ((Object)pUVar2 != null);
		pMVar8 = extraout_RDX;
		if (bVar6) {
			pUVar2 = *targetAddress_01;
			if (pUVar2 == null) goto label_0539ce38;
			pUVar2.set_color((Color)this._normalText);
			pMVar8 = extraout_RDX_00;
		}
		this.EnableShadows(false);
		return;
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x529D380", Offset = "0x529C380", VA = "0x529D380")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDestroy): clean
		Material pUVar1;
		bool bVar2;

		pUVar1 = this._labelShadowMaterial;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._labelShadowMaterial;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x529D400", Offset = "0x529C400", VA = "0x529D400")]
	public void SetPanelFaded(bool faded)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetPanelFaded): clean


		this._panelFaded = faded;
		this.Refresh();
		return;
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x529D590", Offset = "0x529C590", VA = "0x529D590")]
	public void SetForcedActive(bool active)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetForcedActive): clean


		this._forced = active;
		this.Refresh();
		return;
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x529D5A0", Offset = "0x529C5A0", VA = "0x529D5A0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerEnter): clean
		this._hovered = true;
		this.Refresh();
		return;
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x529D5B0", Offset = "0x529C5B0", VA = "0x529D5B0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerExit): clean
		this._hovered = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x529D5C0", Offset = "0x529C5C0", VA = "0x529D5C0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSelect): clean
		this._selected = true;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x529D5D0", Offset = "0x529C5D0", VA = "0x529D5D0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDeselect): clean
		this._selected = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x529D5E0", Offset = "0x529C5E0", VA = "0x529D5E0", Slot = "8")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerDown): clean
		this.PushText();
		return;
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x529D7D0", Offset = "0x529C7D0", VA = "0x529D7D0", Slot = "9")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerUp): clean
		this.ReleaseText(0.0);
		return;
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x529D9B0", Offset = "0x529C9B0", VA = "0x529D9B0", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSubmit): clean
		this.PushText();
		this.ReleaseText(0.03);
		return;
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x529D410", Offset = "0x529C410", VA = "0x529D410")]
	private void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Refresh): 13 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		TextMeshProUGUI pTVar5;
		Image pUVar6;
		Color pUVar7;
		bool bVar8;
		Color pUVar9;
		ulong in_RDX;
		MethodInfo pMVar10;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		bool enabled;
		bool bVar11;
		Color UVar12;
		Color UVar13;

		if ((this._hovered == false) && (this._selected == false)) {
			bVar8 = this._forced;
			bVar11 = this._panelFaded != false;
			enabled = bVar11 && bVar8 == false;
			if (bVar8 != false) goto label_0539d456;
			bVar11 = !bVar11;
			if (bVar11) {
				pUVar9 = &this._normalText;
				pUVar7 = &this._normalText;
			}
			else {
				pUVar9 = &this._fadedText;
				pUVar7 = &this._fadedText;
			}
			enabled = !bVar11;
			pMVar10 = null;
		}
		else {
			enabled = false;
	label_0539d456: ;
			pUVar9 = &this._activeText;
			pUVar7 = &this._activeText;
			pMVar10 = (MethodInfo)CONCAT71((int7)((ulong)in_RDX >> 8), 1);
		}
		uVar1 = pUVar7.b;
		uVar3 = pUVar7.a;
		UVar13.a = (float)uVar3;
		UVar13.b = (float)uVar1;
		uVar2 = pUVar9.r;
		uVar4 = pUVar9.g;
		UVar13.g = (float)uVar4;
		UVar13.r = (float)uVar2;
		this.SetBrush(SUB81(pMVar10, 0));
		pTVar5 = this._label;
		bVar8 = ((Object)pTVar5 != null);
		if (bVar8) {
			pTVar5 = this._label;
			if (pTVar5 == null) goto label_0539d580;
			UVar12.b = (float)uVar1;
			UVar12.a = (float)uVar3;
			UVar12.r = (float)uVar2;
			UVar12.g = (float)uVar4;
			pTVar5.set_color(UVar12);
		}
		pUVar6 = this._icon;
		bVar8 = ((Object)pUVar6 != null);
		pMVar10 = extraout_RDX_00;
		if (bVar8) {
			pUVar6 = this._icon;
			if (pUVar6 == null) {
	label_0539d580: ;
				throw new NullReferenceException();
			}
			pUVar6.set_color(UVar13);
			pMVar10 = extraout_RDX_01;
		}
		this.EnableShadows(enabled);
		return;
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x529D190", Offset = "0x529C190", VA = "0x529D190")]
	private static GisketchDropShadow AddHardShadow(Graphic graphic)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$AddHardShadow): 1 lines keep C-only constructs
		bool bVar1;
		GameObject __this;
		GisketchDropShadow __this_00;

		bVar1 = ((Object)graphic == null);
		if (bVar1) {
			return null;
		}
		if (((graphic == null) ||(__this = graphic.gameObject, __this == null)) ||(__this_00 = __this.AddComponent<GisketchDropShadow>(), __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Setup((Color)(ZEXT816(0x3f80000000000000) << 0x40), (Vector2)0xc0800000c0800000, 1, 0.0, true);
		__this_00.enabled = false;
		return __this_00;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x529CE40", Offset = "0x529BE40", VA = "0x529CE40")]
	private static Material CreateLabelShadowMaterial(TextMeshProUGUI label)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$CreateLabelShadowMaterial): 1 lines keep C-only constructs
		bool bVar1;
		Material pUVar2;
		Material __this;
		String pSVar3;

		bVar1 = ((Object)label == null);
		if (bVar1) {
			return null;
		}
		if (label != null) {
			pUVar2 = label.fontMaterial;
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
				return null;
			}
			pUVar2 = label.fontMaterial;
			__this = new Material(pUVar2);
			pUVar2 = label.fontMaterial;
			if (pUVar2 != null) {
				pSVar3 = pUVar2.name;
				pSVar3 = String.Concat(pSVar3, " Brush Hard Shadow");
				if (__this != null) {
					__this.name = pSVar3;
					__this.EnableKeyword(ShaderUtilities.Keyword_Underlay);
					bVar1 = __this.HasProperty(ShaderUtilities.ID_UnderlayColor);
					if (bVar1) {
						__this.SetColor(ShaderUtilities.ID_UnderlayColor, (Color)(ZEXT816(0x3f80000000000000) << 0x40));
					}
					bVar1 = __this.HasProperty(ShaderUtilities.ID_UnderlayOffsetX);
					if (bVar1) {
						__this.SetFloat(ShaderUtilities.ID_UnderlayOffsetX, -0.4);
					}
					bVar1 = __this.HasProperty(ShaderUtilities.ID_UnderlayOffsetY);
					if (bVar1) {
						__this.SetFloat(ShaderUtilities.ID_UnderlayOffsetY, -0.4);
					}
					bVar1 = __this.HasProperty(ShaderUtilities.ID_UnderlayDilate);
					if (bVar1) {
						__this.SetFloat(ShaderUtilities.ID_UnderlayDilate, 0.12);
					}
					bVar1 = __this.HasProperty(ShaderUtilities.ID_UnderlaySoftness);
					if (bVar1) {
						__this.SetFloat(ShaderUtilities.ID_UnderlaySoftness, 0.0);
					}
					ShaderUtilities.UpdateShaderRatios(__this);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x529D260", Offset = "0x529C260", VA = "0x529D260")]
	private void EnableShadows(bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$EnableShadows): 4 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		Material x;
		GisketchDropShadow pGVar2;
		bool bVar3;
		Material* ppUVar4;

		pTVar1 = this._label;
		bVar3 = ((Object)pTVar1 != null);
		if (bVar3) {
			pTVar1 = this._label;
			if (enabled) {
				x = this._labelShadowMaterial;
				bVar3 = ((Object)x != null);
				if (!bVar3) goto label_0539d2f2;
				ppUVar4 = &this._labelShadowMaterial;
			}
			else {
	label_0539d2f2: ;
				ppUVar4 = &this._labelNormalMaterial;
			}
			if (pTVar1 == null) goto label_0539d375;
			pTVar1.fontMaterial = *ppUVar4;
			pTVar1 = this._label;
			if (pTVar1 == null) goto label_0539d375;
			pTVar1.SetMaterialDirty();
		}
		pGVar2 = this._iconShadow;
		bVar3 = ((Object)pGVar2 != null);
		if (!bVar3) {
			return;
		}
		pGVar2 = this._iconShadow;
		if (pGVar2 != null) {
			pGVar2.enabled = enabled;
			return;
		}
	label_0539d375: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x529D9D0", Offset = "0x529C9D0", VA = "0x529D9D0")]
	private void SetBrush(bool active)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetBrush): 9 lines keep C-only constructs
		Color pUVar1;
		float duration;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		Image pUVar7;
		Tween pDVar8;
		Material pUVar9;
		bool bVar10;
		GisketchBrushButtonFeedback.c__DisplayClass35_0 __this_00;
		TweenCallback<float> __this_01;
		Tweener pDVar11;
		TweenCallback __this_02;
		ulong uVar12;
		Tween* targetAddress;
		float fVar13;
		Color UVar14;
		float local_28;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchBrushButtonFeedback.c__DisplayClass35_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_0539de06;
		__this_00.__4__this = this;
		__this_00.active = active;
		pUVar7 = this._brush;
		bVar10 = ((Object)pUVar7 == null);
		if (bVar10) {
			return;
		}
		pDVar8 = this._revealTween;
		if (pDVar8 != null) {
			TweenExtensions.Kill(pDVar8, false);
		}
		if (__this_00.active != false) {
			pUVar7 = this._brush;
			if (pUVar7 == null) goto label_0539de06;
			pUVar7.set_color((Color)this._shownBrush);
		}
		pUVar9 = this._brushMaterial;
		bVar10 = ((Object)pUVar9 == null);
		if (!bVar10) {
			pUVar9 = this._brushMaterial;
			if (pUVar9 == null) goto label_0539de06;
			bVar10 = pUVar9.HasProperty(GisketchSurfaceMaterial. BrushRevealId);
			if (bVar10) {
				bVar10 = Application.isPlaying;
				pUVar9 = this._brushMaterial;
				uVar6 = (typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor;
				if (bVar10) {
					if (uVar6 == 0) {
					}
					if (pUVar9 != null) {
						fVar13 = pUVar9.GetFloat(typeof(GisketchSurfaceMaterial).static_fields .BrushRevealId);
						local_28 = 0.0;
						if (__this_00.active != false) {
							local_28 = 1.0;
						}
						pUVar9 = this._brushMaterial;
						if ((typeof(GisketchSurfaceMaterial)._2).cctor_finished_or_no_cctor == 0 ) {
						}
						if (pUVar9 != null) {
							targetAddress = &this._revealTween;
							pUVar9.SetFloat(GisketchSurfaceMaterial. BrushRevealId, fVar13);
							duration = *(float)(&g_data_0100ade0 + (ulong)(__this_00.active == false) * 4);
							__this_01 = new TweenCallback<float>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__0);
							pDVar11 = DOVirtual.Float(fVar13, local_28, duration, __this_01);
							pDVar11 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar11, (uint)__this_00.active << 2 | 8);
							pDVar11 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar11, true);
							__this_02 = new TweenCallback((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__1);
							pDVar11 = TweenSettingsExtensions.OnComplete<Tweener>((object)pDVar11, __this_02);
							*targetAddress = (Tween)pDVar11;
							pDVar8 = *targetAddress;
							if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							GisketchMotionDriver.Track(pDVar8, false);
							return;
						}
					}
					goto label_0539de06;
				}
				if (uVar6 == 0) {
				}
				if (pUVar9 == null) goto label_0539de06;
				fVar13 = 0.0;
				if (__this_00.active != false) {
					fVar13 = 1.0;
				}
				pUVar9.SetFloat(GisketchSurfaceMaterial. BrushRevealId, fVar13);
			}
		}
		pUVar7 = this._brush;
		if (pUVar7 != null) {
			uVar12 = (ulong)__this_00.active;
			pUVar1 = &this._hiddenBrush + (uVar12 != 0);
			uVar2 = pUVar1.r;
			uVar4 = pUVar1.g;
			UVar14.g = (float)uVar4;
			UVar14.r = (float)uVar2;
			pUVar1 = &this._hiddenBrush + uVar12;
			uVar3 = pUVar1.b;
			uVar5 = pUVar1.a;
			UVar14.a = (float)uVar5;
			UVar14.b = (float)uVar3;
			pUVar7.set_color(UVar14);
			return;
		}
	label_0539de06: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x529D5F0", Offset = "0x529C5F0", VA = "0x529D5F0")]
	private void PushText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$PushText): 2 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		RectTransform pUVar3;
		Tween pDVar4;
		Vector2 from;
		bool bVar5;
		TweenCallback<Vector2> __this_00;
		Tweener pDVar6;
		Vector2 local_38;

		pUVar3 = this._content;
		bVar5 = ((Object)pUVar3 == null);
		if (bVar5) {
			return;
		}
		pDVar4 = this._pressTween;
		if (pDVar4 != null) {
			TweenExtensions.Kill(pDVar4, false);
		}
		pUVar3 = this._content;
		if (pUVar3 == null) {
			throw new NullReferenceException();
		}
		from = pUVar3.anchoredPosition;
		UVar1 = this._contentOrigin;
		UVar2 = (Vector2.leftVector);
		local_38.y = UVar1.y + UVar2.y * 8.0;
		local_38.x = UVar1.x + UVar2.x * 8.0;
		__this_00 = new TweenCallback<Vector2>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_PushText_b__36_0);
		pDVar6 = DOVirtual.Vector2(from, local_38, 0.045, __this_00);
		pDVar6 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar6, 9);
		pDVar6 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar6, true);
		this._pressTween = (Tween)pDVar6;
		pDVar4 = this._pressTween;
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		GisketchMotionDriver.Track(pDVar4, false);
		return;
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x529D7E0", Offset = "0x529C7E0", VA = "0x529D7E0")]
	private void ReleaseText(float delay = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$ReleaseText): 2 lines keep C-only constructs
		Vector2 to;
		RectTransform pUVar1;
		Tween pDVar2;
		Vector2 from;
		bool bVar3;
		TweenCallback<Vector2> __this_00;
		Tweener pDVar4;

		pUVar1 = this._content;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		pDVar2 = this._pressTween;
		if (pDVar2 != null) {
			TweenExtensions.Kill(pDVar2, false);
		}
		pUVar1 = this._content;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		from = pUVar1.anchoredPosition;
		to = this._contentOrigin;
		__this_00 = new TweenCallback<Vector2>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_ReleaseText_b__37_0);
		pDVar4 = DOVirtual.Vector2(from, (Vector2)to, 0.12, __this_00);
		pDVar4 = TweenSettingsExtensions.SetDelay<Tweener>((object)pDVar4, delay);
		pDVar4 = TweenSettingsExtensions.SetEase<Tweener>((object)pDVar4, 0x1b);
		pDVar4 = TweenSettingsExtensions.SetUpdate<Tweener>((object)pDVar4, true);
		this._pressTween = (Tween)pDVar4;
		pDVar2 = this._pressTween;
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		GisketchMotionDriver.Track(pDVar2, false);
		return;
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x529DE20", Offset = "0x529CE20", VA = "0x529DE20")]
	public GisketchBrushButtonFeedback()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c (Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c.

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$.ctor: clean
	private void c__DisplayClass35_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<PushText>b__36_0: clean
	private void PushText_b__36_0(Vector2 value)
	{
		RectTransform __this_00;

		__this_00 = this._content;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.anchoredPosition = value;
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<ReleaseText>b__37_0: clean
	private void ReleaseText_b__37_0(Vector2 value)
	{
		RectTransform __this_00;

		__this_00 = this._content;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.anchoredPosition = value;
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__0: clean
	private void c__DisplayClass35_0__SetBrush_b__0(float value)
	{
		GisketchBrushButtonFeedback pGVar1;
		Material __this_00;

		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			__this_00 = pGVar1._brushMaterial;
			if (__this_00 != null) {
				__this_00.SetFloat(GisketchSurfaceMaterial.BrushRevealId, value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__1: clean
	private void c__DisplayClass35_0__SetBrush_b__1()
	{
		GisketchBrushButtonFeedback pGVar1;
		Image pUVar2;

		if (this.active != false) {
			return;
		}
		pGVar1 = this.__4__this;
		if ((pGVar1 == null) ||(pUVar2 = pGVar1._brush, pUVar2 == null)) {
			throw new NullReferenceException();
		}
		pUVar2.set_color((Color)pGVar1._hiddenBrush);
		return;
	}
}
