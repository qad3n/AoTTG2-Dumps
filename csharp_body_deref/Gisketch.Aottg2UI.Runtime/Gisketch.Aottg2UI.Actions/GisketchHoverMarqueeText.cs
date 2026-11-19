// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x52A05C0", Offset = "0x529F5C0", VA = "0x52A05C0")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x52A0AC0", Offset = "0x529FAC0", VA = "0x52A0AC0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x52A0AE0", Offset = "0x529FAE0", VA = "0x52A0AE0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x52A0B00", Offset = "0x529FB00", VA = "0x52A0B00", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x52A0B20", Offset = "0x529FB20", VA = "0x52A0B20", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x52A0600", Offset = "0x529F600", VA = "0x52A0600")]
	private void Configure(TextMeshProUGUI label, bool selfActivate)
	{
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x52A0B40", Offset = "0x529FB40", VA = "0x52A0B40")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x52A0C90", Offset = "0x529FC90", VA = "0x52A0C90")]
	private void Update()
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x52A0800", Offset = "0x529F800", VA = "0x52A0800")]
	private void Refresh(bool active)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x52A0B60", Offset = "0x529FB60", VA = "0x52A0B60")]
	private void Restore()
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x52A0E00", Offset = "0x529FE00", VA = "0x52A0E00")]
	public GisketchHoverMarqueeText()
	{
	}
}
