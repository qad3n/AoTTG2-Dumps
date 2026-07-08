using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000B6")]
internal class TouchScreenTextEditorEventHandler : TextEditorEventHandler
{
	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x20")]
	private IVisualElementScheduledItem m_TouchKeyboardPoller;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x28")]
	private bool m_TouchKeyboardAllowsInPlaceEditing;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x29")]
	private bool m_IsClicking;

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4C1E870", Offset = "0x4C1E870", VA = "0x4C1E870")]
	public TouchScreenTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4C1E8D0", Offset = "0x4C1E8D0", VA = "0x4C1E8D0")]
	private void PollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4C1EB50", Offset = "0x4C1EB50", VA = "0x4C1EB50")]
	private void DoPollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x4C1F480", Offset = "0x4C1F480", VA = "0x4C1F480")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x4C1F380", Offset = "0x4C1F380", VA = "0x4C1F380")]
	private void CloseTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4C1F740", Offset = "0x4C1F740", VA = "0x4C1F740")]
	private void OpenTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4C1FD00", Offset = "0x4C1FD00", VA = "0x4C1FD00", Slot = "4")]
	public override void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4C1FEC0", Offset = "0x4C1FEC0", VA = "0x4C1FEC0")]
	private void OnPointerDownEvent()
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4C200B0", Offset = "0x4C200B0", VA = "0x4C200B0")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4C200D0", Offset = "0x4C200D0", VA = "0x4C200D0")]
	private void OnFocusInEvent()
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4C20270", Offset = "0x4C20270", VA = "0x4C20270")]
	private void OnFocusOutEvent(FocusOutEvent evt)
	{
	}
}
