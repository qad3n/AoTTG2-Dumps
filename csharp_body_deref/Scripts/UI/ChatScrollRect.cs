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

[Token(Token = "0x2000629")]
public class ChatScrollRect : ScrollRect
{
	[Token(Token = "0x4001DA9")]
	[FieldOffset(Offset = "0x130")]
	private bool isMouseOver;

	[Token(Token = "0x4001DAA")]
	[FieldOffset(Offset = "0x131")]
	private bool isDragging;

	[Token(Token = "0x4001DAB")]
	[FieldOffset(Offset = "0x138")]
	private Image handleImage;

	[Token(Token = "0x4001DAC")]
	[FieldOffset(Offset = "0x140")]
	private ChatPanel _chatPanel;

	[Token(Token = "0x4001DAD")]
	[FieldOffset(Offset = "0x148")]
	private float lastScrollTime;

	[Token(Token = "0x4001DAE")]
	private const float SCROLL_INTERACTION_TIMEOUT = 1f;

	[Token(Token = "0x6003DFF")]
	[Address(RVA = "0x42B91C0", Offset = "0x42B91C0", VA = "0x42B91C0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003E00")]
	[Address(RVA = "0x42B93B0", Offset = "0x42B93B0", VA = "0x42B93B0")]
	private void OnScrollbarValueChanged(float value)
	{
	}

	[Token(Token = "0x6003E01")]
	[Address(RVA = "0x42B9410", Offset = "0x42B9410", VA = "0x42B9410", Slot = "48")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003E02")]
	[Address(RVA = "0x42B7F10", Offset = "0x42B7F10", VA = "0x42B7F10")]
	public void OnMouseEnter()
	{
	}

	[Token(Token = "0x6003E03")]
	[Address(RVA = "0x42B8050", Offset = "0x42B8050", VA = "0x42B8050")]
	public void OnMouseExit()
	{
	}

	[Token(Token = "0x6003E04")]
	[Address(RVA = "0x42B9540", Offset = "0x42B9540", VA = "0x42B9540")]
	private void UpdateHandleVisibility()
	{
	}

	[Token(Token = "0x6003E05")]
	[Address(RVA = "0x42B95E0", Offset = "0x42B95E0", VA = "0x42B95E0", Slot = "44")]
	public override void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003E06")]
	[Address(RVA = "0x42B95F0", Offset = "0x42B95F0", VA = "0x42B95F0", Slot = "45")]
	public override void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003E07")]
	[Address(RVA = "0x42B9690", Offset = "0x42B9690", VA = "0x42B9690", Slot = "46")]
	public override void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003E08")]
	[Address(RVA = "0x42B9730", Offset = "0x42B9730", VA = "0x42B9730", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x6003E09")]
	[Address(RVA = "0x42B9840", Offset = "0x42B9840", VA = "0x42B9840")]
	public ChatScrollRect()
	{
	}
}
