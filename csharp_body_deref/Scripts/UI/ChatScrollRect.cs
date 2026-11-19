// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatScrollRect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ChatScrollRect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200082F")]
public class ChatScrollRect : ScrollRect
{
	[Token(Token = "0x40028CF")]
	[FieldOffset(Offset = "0x130")]
	private bool isMouseOver;

	[Token(Token = "0x40028D0")]
	[FieldOffset(Offset = "0x131")]
	private bool isDragging;

	[Token(Token = "0x40028D1")]
	[FieldOffset(Offset = "0x138")]
	private Image handleImage;

	[Token(Token = "0x40028D2")]
	[FieldOffset(Offset = "0x140")]
	private ChatPanel _chatPanel;

	[Token(Token = "0x40028D3")]
	[FieldOffset(Offset = "0x148")]
	private float lastScrollTime;

	[Token(Token = "0x40028D4")]
	private const float SCROLL_INTERACTION_TIMEOUT = 1f;

	[Token(Token = "0x6004E12")]
	[Address(RVA = "0x5C1AB90", Offset = "0x5C19B90", VA = "0x5C1AB90", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6004E13")]
	[Address(RVA = "0x5C1AD80", Offset = "0x5C19D80", VA = "0x5C1AD80")]
	private void OnScrollbarValueChanged(float value)
	{
	}

	[Token(Token = "0x6004E14")]
	[Address(RVA = "0x5C1ADE0", Offset = "0x5C19DE0", VA = "0x5C1ADE0", Slot = "48")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004E15")]
	[Address(RVA = "0x5C199E0", Offset = "0x5C189E0", VA = "0x5C199E0")]
	public void OnMouseEnter()
	{
	}

	[Token(Token = "0x6004E16")]
	[Address(RVA = "0x5C19B20", Offset = "0x5C18B20", VA = "0x5C19B20")]
	public void OnMouseExit()
	{
	}

	[Token(Token = "0x6004E17")]
	[Address(RVA = "0x5C1AF70", Offset = "0x5C19F70", VA = "0x5C1AF70")]
	private void UpdateHandleVisibility()
	{
	}

	[Token(Token = "0x6004E18")]
	[Address(RVA = "0x5C1B010", Offset = "0x5C1A010", VA = "0x5C1B010", Slot = "44")]
	public override void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004E19")]
	[Address(RVA = "0x5C1B020", Offset = "0x5C1A020", VA = "0x5C1B020", Slot = "45")]
	public override void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004E1A")]
	[Address(RVA = "0x5C1B0C0", Offset = "0x5C1A0C0", VA = "0x5C1B0C0", Slot = "46")]
	public override void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004E1B")]
	[Address(RVA = "0x5C1B160", Offset = "0x5C1A160", VA = "0x5C1B160", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x6004E1C")]
	[Address(RVA = "0x5C1B270", Offset = "0x5C1A270", VA = "0x5C1B270")]
	public ChatScrollRect()
	{
	}
}
