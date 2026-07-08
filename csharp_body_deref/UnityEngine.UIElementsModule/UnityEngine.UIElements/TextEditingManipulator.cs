using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003EA")]
internal class TextEditingManipulator
{
	[Token(Token = "0x4000BCC")]
	[FieldOffset(Offset = "0x10")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000BCD")]
	[FieldOffset(Offset = "0x18")]
	internal TextEditorEventHandler editingEventHandler;

	[Token(Token = "0x4000BCE")]
	[FieldOffset(Offset = "0x20")]
	internal UnityEngine.TextEditingUtilities editingUtilities;

	[Token(Token = "0x4000BCF")]
	[FieldOffset(Offset = "0x28")]
	private bool m_TouchScreenTextFieldInitialized;

	[Token(Token = "0x4000BD0")]
	[FieldOffset(Offset = "0x30")]
	private IVisualElementScheduledItem m_HardwareKeyboardPoller;

	[Token(Token = "0x17000696")]
	private bool touchScreenTextFieldChanged
	{
		[Token(Token = "0x60018AD")]
		[Address(RVA = "0x4C28AD0", Offset = "0x4C28AD0", VA = "0x4C28AD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x4C28B70", Offset = "0x4C28B70", VA = "0x4C28B70")]
	public TextEditingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x4C28D10", Offset = "0x4C28D10", VA = "0x4C28D10")]
	private void InitTextEditorEventHandler()
	{
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x4C28DE0", Offset = "0x4C28DE0", VA = "0x4C28DE0")]
	internal void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x4C290D0", Offset = "0x4C290D0", VA = "0x4C290D0")]
	private void OnFocusInEvent(FocusInEvent _)
	{
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x4C293E0", Offset = "0x4C293E0", VA = "0x4C293E0")]
	private void OnFocusOutEvent(FocusOutEvent _)
	{
	}
}
