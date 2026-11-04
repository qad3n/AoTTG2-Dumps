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

[Token(Token = "0x2000784")]
public class ChatScrollRect : ScrollRect
{
	[Token(Token = "0x400255E")]
	[FieldOffset(Offset = "0x130")]
	private bool isMouseOver;

	[Token(Token = "0x400255F")]
	[FieldOffset(Offset = "0x131")]
	private bool isDragging;

	[Token(Token = "0x4002560")]
	[FieldOffset(Offset = "0x138")]
	private Image handleImage;

	[Token(Token = "0x4002561")]
	[FieldOffset(Offset = "0x140")]
	private ChatPanel _chatPanel;

	[Token(Token = "0x4002562")]
	[FieldOffset(Offset = "0x148")]
	private float lastScrollTime;

	[Token(Token = "0x4002563")]
	private const float SCROLL_INTERACTION_TIMEOUT = 1f;

	[Token(Token = "0x60048EC")]
	[Address(RVA = "0x223EFE0", Offset = "0x223D5E0", VA = "0x18223EFE0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60048ED")]
	[Address(RVA = "0x223EF80", Offset = "0x223D580", VA = "0x18223EF80")]
	private void OnScrollbarValueChanged(float value)
	{
	}

	[Token(Token = "0x60048EE")]
	[Address(RVA = "0x223EAC0", Offset = "0x223D0C0", VA = "0x18223EAC0", Slot = "48")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60048EF")]
	[Address(RVA = "0x223ED40", Offset = "0x223D340", VA = "0x18223ED40")]
	public void OnMouseEnter()
	{
	}

	[Token(Token = "0x60048F0")]
	[Address(RVA = "0x223EDE0", Offset = "0x223D3E0", VA = "0x18223EDE0")]
	public void OnMouseExit()
	{
	}

	[Token(Token = "0x60048F1")]
	[Address(RVA = "0x223F1D0", Offset = "0x223D7D0", VA = "0x18223F1D0")]
	private void UpdateHandleVisibility()
	{
	}

	[Token(Token = "0x60048F2")]
	[Address(RVA = "0x223EBE0", Offset = "0x223D1E0", VA = "0x18223EBE0", Slot = "44")]
	public override void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60048F3")]
	[Address(RVA = "0x223ECA0", Offset = "0x223D2A0", VA = "0x18223ECA0", Slot = "45")]
	public override void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60048F4")]
	[Address(RVA = "0x223EBF0", Offset = "0x223D1F0", VA = "0x18223EBF0", Slot = "46")]
	public override void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60048F5")]
	[Address(RVA = "0x223EE70", Offset = "0x223D470", VA = "0x18223EE70", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x60048F6")]
	[Address(RVA = "0x19050C0", Offset = "0x19036C0", VA = "0x1819050C0")]
	public ChatScrollRect()
	{
	}
}
