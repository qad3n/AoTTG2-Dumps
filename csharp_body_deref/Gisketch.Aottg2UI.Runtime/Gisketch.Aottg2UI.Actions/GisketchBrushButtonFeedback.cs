// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonFeedback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x529D380", Offset = "0x529C380", VA = "0x529D380")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x529D400", Offset = "0x529C400", VA = "0x529D400")]
	public void SetPanelFaded(bool faded)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x529D590", Offset = "0x529C590", VA = "0x529D590")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x529D5A0", Offset = "0x529C5A0", VA = "0x529D5A0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x529D5B0", Offset = "0x529C5B0", VA = "0x529D5B0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x529D5C0", Offset = "0x529C5C0", VA = "0x529D5C0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x529D5D0", Offset = "0x529C5D0", VA = "0x529D5D0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x529D5E0", Offset = "0x529C5E0", VA = "0x529D5E0", Slot = "8")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x529D7D0", Offset = "0x529C7D0", VA = "0x529D7D0", Slot = "9")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x529D9B0", Offset = "0x529C9B0", VA = "0x529D9B0", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x529D410", Offset = "0x529C410", VA = "0x529D410")]
	private void Refresh()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x529D190", Offset = "0x529C190", VA = "0x529D190")]
	private static GisketchDropShadow AddHardShadow(Graphic graphic)
	{
		return null;
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x529CE40", Offset = "0x529BE40", VA = "0x529CE40")]
	private static Material CreateLabelShadowMaterial(TextMeshProUGUI label)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x529D260", Offset = "0x529C260", VA = "0x529D260")]
	private void EnableShadows(bool enabled)
	{
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x529D9D0", Offset = "0x529C9D0", VA = "0x529D9D0")]
	private void SetBrush(bool active)
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x529D5F0", Offset = "0x529C5F0", VA = "0x529D5F0")]
	private void PushText()
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x529D7E0", Offset = "0x529C7E0", VA = "0x529D7E0")]
	private void ReleaseText(float delay = 0f)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x529DE20", Offset = "0x529CE20", VA = "0x529DE20")]
	public GisketchBrushButtonFeedback()
	{
	}
}
