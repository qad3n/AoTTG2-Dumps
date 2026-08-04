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

[Token(Token = "0x20000AC")]
public sealed class GisketchBrushButtonFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x20")]
	private Image _brush;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _content;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _contentOrigin;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x48")]
	private Color _hiddenBrush;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x58")]
	private Color _shownBrush;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x68")]
	private Color _normalText;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x78")]
	private Color _activeText;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x88")]
	private Color _fadedText;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x98")]
	private Material _brushMaterial;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0xA0")]
	private Material _labelNormalMaterial;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0xA8")]
	private Material _labelShadowMaterial;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0xB0")]
	private GisketchDropShadow _iconShadow;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0xB8")]
	private Tween _revealTween;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0xC0")]
	private Tween _pressTween;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0xCB")]
	private bool _panelFaded;

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x3A91510", Offset = "0x3A91510", VA = "0x3A91510")]
	public void Setup(Image brush, TextMeshProUGUI label, Image icon, RectTransform content, GisketchTheme theme)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x3A91F10", Offset = "0x3A91F10", VA = "0x3A91F10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x3A91F90", Offset = "0x3A91F90", VA = "0x3A91F90")]
	public void SetPanelFaded(bool faded)
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x3A92120", Offset = "0x3A92120", VA = "0x3A92120")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x3A92130", Offset = "0x3A92130", VA = "0x3A92130", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x3A92140", Offset = "0x3A92140", VA = "0x3A92140", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x3A92150", Offset = "0x3A92150", VA = "0x3A92150", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x3A92160", Offset = "0x3A92160", VA = "0x3A92160", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x3A92170", Offset = "0x3A92170", VA = "0x3A92170", Slot = "8")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x3A92360", Offset = "0x3A92360", VA = "0x3A92360", Slot = "9")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x3A92540", Offset = "0x3A92540", VA = "0x3A92540", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x3A91FA0", Offset = "0x3A91FA0", VA = "0x3A91FA0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x3A91D10", Offset = "0x3A91D10", VA = "0x3A91D10")]
	private static GisketchDropShadow AddHardShadow(Graphic graphic)
	{
		return null;
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x3A919C0", Offset = "0x3A919C0", VA = "0x3A919C0")]
	private static Material CreateLabelShadowMaterial(TextMeshProUGUI label)
	{
		return null;
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x3A91DE0", Offset = "0x3A91DE0", VA = "0x3A91DE0")]
	private void EnableShadows(bool enabled)
	{
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x3A92560", Offset = "0x3A92560", VA = "0x3A92560")]
	private void SetBrush(bool active)
	{
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x3A92180", Offset = "0x3A92180", VA = "0x3A92180")]
	private void PushText()
	{
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x3A92370", Offset = "0x3A92370", VA = "0x3A92370")]
	private void ReleaseText(float delay = 0f)
	{
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x3A929D0", Offset = "0x3A929D0", VA = "0x3A929D0")]
	public GisketchBrushButtonFeedback()
	{
	}
}
