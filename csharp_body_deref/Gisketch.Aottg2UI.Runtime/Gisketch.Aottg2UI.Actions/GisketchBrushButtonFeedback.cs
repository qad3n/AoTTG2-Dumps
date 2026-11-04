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

[Token(Token = "0x20000CD")]
public sealed class GisketchBrushButtonFeedback : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler, IPointerDownHandler, IPointerUpHandler, ISubmitHandler
{
	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x20")]
	private Image _brush;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x28")]
	private Image _icon;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _content;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _contentOrigin;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x48")]
	private Color _hiddenBrush;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x58")]
	private Color _shownBrush;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x68")]
	private Color _normalText;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x78")]
	private Color _activeText;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x88")]
	private Color _fadedText;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x98")]
	private Material _brushMaterial;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0xA0")]
	private Material _labelNormalMaterial;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0xA8")]
	private Material _labelShadowMaterial;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0xB0")]
	private GisketchDropShadow _iconShadow;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0xB8")]
	private Tween _revealTween;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0xC0")]
	private Tween _pressTween;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0xC8")]
	private bool _hovered;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0xC9")]
	private bool _selected;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0xCA")]
	private bool _forced;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0xCB")]
	private bool _panelFaded;

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x18FC190", Offset = "0x18FA790", VA = "0x1818FC190")]
	public void Setup(Image brush, TextMeshProUGUI label, Image icon, RectTransform content, GisketchTheme theme)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x18FB6D0", Offset = "0x18F9CD0", VA = "0x1818FB6D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x18FC180", Offset = "0x18FA780", VA = "0x1818FC180")]
	public void SetPanelFaded(bool faded)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x18FC170", Offset = "0x18FA770", VA = "0x1818FC170")]
	public void SetForcedActive(bool active)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x18FB770", Offset = "0x18F9D70", VA = "0x1818FB770", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x18FB780", Offset = "0x18F9D80", VA = "0x1818FB780", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x18FB7A0", Offset = "0x18F9DA0", VA = "0x1818FB7A0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x18FB6C0", Offset = "0x18F9CC0", VA = "0x1818FB6C0", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x18FB760", Offset = "0x18F9D60", VA = "0x1818FB760", Slot = "8")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x18FB790", Offset = "0x18F9D90", VA = "0x1818FB790", Slot = "9")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x18FB7B0", Offset = "0x18F9DB0", VA = "0x1818FB7B0", Slot = "10")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x18FB9C0", Offset = "0x18F9FC0", VA = "0x1818FB9C0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x18FB0B0", Offset = "0x18F96B0", VA = "0x1818FB0B0")]
	private static GisketchDropShadow AddHardShadow(Graphic graphic)
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x18FB1B0", Offset = "0x18F97B0", VA = "0x1818FB1B0")]
	private static Material CreateLabelShadowMaterial(TextMeshProUGUI label)
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x18FB590", Offset = "0x18F9B90", VA = "0x1818FB590")]
	private void EnableShadows(bool enabled)
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x18FBD00", Offset = "0x18FA300", VA = "0x1818FBD00")]
	private void SetBrush(bool active)
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x18FB7E0", Offset = "0x18F9DE0", VA = "0x1818FB7E0")]
	private void PushText()
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x18FBB20", Offset = "0x18FA120", VA = "0x1818FBB20")]
	private void ReleaseText(float delay = 0f)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchBrushButtonFeedback()
	{
	}
}
