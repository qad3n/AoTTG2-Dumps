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

[Token(Token = "0x20000DA")]
internal sealed class GisketchHoverMarqueeText : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000475")]
	private const float PixelsPerSecond = 42f;

	[Token(Token = "0x4000476")]
	private const float Gap = 24f;

	[Token(Token = "0x4000477")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _viewport;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _textRect;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x38")]
	private TextAlignmentOptions _normalAlignment;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x3C")]
	private Vector2 _normalAnchorMin;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x44")]
	private Vector2 _normalAnchorMax;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x4C")]
	private Vector2 _normalPivot;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x54")]
	private Vector2 _normalSizeDelta;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x5C")]
	private Vector2 _normalAnchoredPosition;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x64")]
	private bool _selfActivate;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x65")]
	private bool _hovered;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x66")]
	private bool _selected;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x67")]
	private bool _marqueeActive;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x68")]
	private float _elapsed;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x6C")]
	private float _travel;

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x1902C00", Offset = "0x1901200", VA = "0x181902C00")]
	public static GisketchHoverMarqueeText Setup(GameObject viewport, TextMeshProUGUI label, bool selfActivate)
	{
		return null;
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x1902BF0", Offset = "0x19011F0", VA = "0x181902BF0")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x1902740", Offset = "0x1900D40", VA = "0x181902740", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x1902760", Offset = "0x1900D60", VA = "0x181902760", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x1902780", Offset = "0x1900D80", VA = "0x181902780", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x1902700", Offset = "0x1900D00", VA = "0x181902700", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x19024A0", Offset = "0x1900AA0", VA = "0x1819024A0")]
	private void Configure(TextMeshProUGUI label, bool selfActivate)
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x1902720", Offset = "0x1900D20", VA = "0x181902720")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x1902D40", Offset = "0x1901340", VA = "0x181902D40")]
	private void Update()
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x19027A0", Offset = "0x1900DA0", VA = "0x1819027A0")]
	private void Refresh(bool active)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x1902A60", Offset = "0x1901060", VA = "0x181902A60")]
	private void Restore()
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchHoverMarqueeText()
	{
	}
}
