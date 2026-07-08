using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005E0")]
public class ChatScrollRect : ScrollRect
{
	[Token(Token = "0x4001C73")]
	[FieldOffset(Offset = "0x130")]
	private bool isMouseOver;

	[Token(Token = "0x4001C74")]
	[FieldOffset(Offset = "0x131")]
	private bool isDragging;

	[Token(Token = "0x4001C75")]
	[FieldOffset(Offset = "0x138")]
	private Image handleImage;

	[Token(Token = "0x4001C76")]
	[FieldOffset(Offset = "0x140")]
	private ChatPanel _chatPanel;

	[Token(Token = "0x4001C77")]
	[FieldOffset(Offset = "0x148")]
	private float lastScrollTime;

	[Token(Token = "0x4001C78")]
	private const float SCROLL_INTERACTION_TIMEOUT = 1f;

	[Token(Token = "0x6003BC4")]
	[Address(RVA = "0x3FA79C0", Offset = "0x3FA79C0", VA = "0x3FA79C0", Slot = "6")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003BC5")]
	[Address(RVA = "0x3FA7BB0", Offset = "0x3FA7BB0", VA = "0x3FA7BB0")]
	private void OnScrollbarValueChanged(float value)
	{
	}

	[Token(Token = "0x6003BC6")]
	[Address(RVA = "0x3FA7C10", Offset = "0x3FA7C10", VA = "0x3FA7C10", Slot = "48")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003BC7")]
	[Address(RVA = "0x3FA7280", Offset = "0x3FA7280", VA = "0x3FA7280")]
	public void OnMouseEnter()
	{
	}

	[Token(Token = "0x6003BC8")]
	[Address(RVA = "0x3FA73C0", Offset = "0x3FA73C0", VA = "0x3FA73C0")]
	public void OnMouseExit()
	{
	}

	[Token(Token = "0x6003BC9")]
	[Address(RVA = "0x3FA7D40", Offset = "0x3FA7D40", VA = "0x3FA7D40")]
	private void UpdateHandleVisibility()
	{
	}

	[Token(Token = "0x6003BCA")]
	[Address(RVA = "0x3FA7DE0", Offset = "0x3FA7DE0", VA = "0x3FA7DE0", Slot = "44")]
	public override void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003BCB")]
	[Address(RVA = "0x3FA7DF0", Offset = "0x3FA7DF0", VA = "0x3FA7DF0", Slot = "45")]
	public override void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003BCC")]
	[Address(RVA = "0x3FA7E90", Offset = "0x3FA7E90", VA = "0x3FA7E90", Slot = "46")]
	public override void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003BCD")]
	[Address(RVA = "0x3FA7F30", Offset = "0x3FA7F30", VA = "0x3FA7F30", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x6003BCE")]
	[Address(RVA = "0x3FA8040", Offset = "0x3FA8040", VA = "0x3FA8040")]
	public ChatScrollRect()
	{
	}
}
