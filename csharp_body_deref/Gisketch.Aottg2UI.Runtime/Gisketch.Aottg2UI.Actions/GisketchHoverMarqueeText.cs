// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchHoverMarqueeText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B9")]
internal sealed class GisketchHoverMarqueeText : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40003BB")]
	private const float PixelsPerSecond = 42f;

	[Token(Token = "0x40003BC")]
	private const float Gap = 24f;

	[Token(Token = "0x40003BD")]
	private const float PauseSeconds = 0.45f;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x20")]
	private TextMeshProUGUI _label;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _viewport;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _textRect;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x38")]
	private TextAlignmentOptions _normalAlignment;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x3C")]
	private Vector2 _normalAnchorMin;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x44")]
	private Vector2 _normalAnchorMax;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x4C")]
	private Vector2 _normalPivot;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x54")]
	private Vector2 _normalSizeDelta;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x5C")]
	private Vector2 _normalAnchoredPosition;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x64")]
	private bool _selfActivate;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x65")]
	private bool _hovered;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x66")]
	private bool _selected;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x67")]
	private bool _marqueeActive;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x68")]
	private float _elapsed;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x6C")]
	private float _travel;

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x3A94850", Offset = "0x3A94850", VA = "0x3A94850")]
	public static GisketchHoverMarqueeText Setup(GameObject viewport, TextMeshProUGUI label, bool selfActivate)
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x3A94D30", Offset = "0x3A94D30", VA = "0x3A94D30")]
	public void SetActive(bool active)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x3A95220", Offset = "0x3A95220", VA = "0x3A95220", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x3A95240", Offset = "0x3A95240", VA = "0x3A95240", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x3A95260", Offset = "0x3A95260", VA = "0x3A95260", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x3A95280", Offset = "0x3A95280", VA = "0x3A95280", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x3A94D80", Offset = "0x3A94D80", VA = "0x3A94D80")]
	private void Configure(TextMeshProUGUI label, bool selfActivate)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x3A952A0", Offset = "0x3A952A0", VA = "0x3A952A0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x3A953F0", Offset = "0x3A953F0", VA = "0x3A953F0")]
	private void Update()
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x3A94F80", Offset = "0x3A94F80", VA = "0x3A94F80")]
	private void Refresh(bool active)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x3A952C0", Offset = "0x3A952C0", VA = "0x3A952C0")]
	private void Restore()
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x3A95560", Offset = "0x3A95560", VA = "0x3A95560")]
	public GisketchHoverMarqueeText()
	{
	}
}
