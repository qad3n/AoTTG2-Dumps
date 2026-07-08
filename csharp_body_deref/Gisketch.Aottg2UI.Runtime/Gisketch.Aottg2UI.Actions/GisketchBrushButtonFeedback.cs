using DG.Tweening;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A9")]
public sealed class GisketchBrushButtonFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x20")]
	private Image _brush;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _content;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _contentOrigin;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x48")]
	private Color _hiddenBrush;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x58")]
	private Color _shownBrush;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x68")]
	private Color _normalText;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x78")]
	private Color _activeText;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x88")]
	private Color _fadedText;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x98")]
	private Material _brushMaterial;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0xA0")]
	private Material _labelNormalMaterial;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0xA8")]
	private Material _labelShadowMaterial;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0xB0")]
	private GisketchDropShadow _iconShadow;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0xB8")]
	private Tween _revealTween;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0xC0")]
	private Tween _pressTween;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0xCB")]
	private bool _panelFaded;

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x3A25400", Offset = "0x3A25400", VA = "0x3A25400")]
	public void Setup(Image brush, TextMeshProUGUI label, Image icon, RectTransform content, GisketchTheme theme)
	{
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x3A25E00", Offset = "0x3A25E00", VA = "0x3A25E00")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x3A25E80", Offset = "0x3A25E80", VA = "0x3A25E80")]
	public void SetPanelFaded(bool faded)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x3A26010", Offset = "0x3A26010", VA = "0x3A26010")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x3A26020", Offset = "0x3A26020", VA = "0x3A26020", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x3A26030", Offset = "0x3A26030", VA = "0x3A26030", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x3A26040", Offset = "0x3A26040", VA = "0x3A26040", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x3A26050", Offset = "0x3A26050", VA = "0x3A26050", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x3A26060", Offset = "0x3A26060", VA = "0x3A26060", Slot = "8")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x3A26250", Offset = "0x3A26250", VA = "0x3A26250", Slot = "9")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x3A26430", Offset = "0x3A26430", VA = "0x3A26430", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x3A25E90", Offset = "0x3A25E90", VA = "0x3A25E90")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x3A25C00", Offset = "0x3A25C00", VA = "0x3A25C00")]
	private static GisketchDropShadow AddHardShadow(Graphic graphic)
	{
		return null;
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x3A258B0", Offset = "0x3A258B0", VA = "0x3A258B0")]
	private static Material CreateLabelShadowMaterial(TextMeshProUGUI label)
	{
		return null;
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x3A25CD0", Offset = "0x3A25CD0", VA = "0x3A25CD0")]
	private void EnableShadows(bool enabled)
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x3A26450", Offset = "0x3A26450", VA = "0x3A26450")]
	private void SetBrush(bool active)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x3A26070", Offset = "0x3A26070", VA = "0x3A26070")]
	private void PushText()
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x3A26260", Offset = "0x3A26260", VA = "0x3A26260")]
	private void ReleaseText(float delay = 0f)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x3A268C0", Offset = "0x3A268C0", VA = "0x3A268C0")]
	public GisketchBrushButtonFeedback()
	{
	}
}
