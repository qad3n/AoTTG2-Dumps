// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextEditingManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F50400", Offset = "0x4F50400", VA = "0x4F50400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x4F504A0", Offset = "0x4F504A0", VA = "0x4F504A0")]
	public TextEditingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x4F50640", Offset = "0x4F50640", VA = "0x4F50640")]
	private void InitTextEditorEventHandler()
	{
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x4F50710", Offset = "0x4F50710", VA = "0x4F50710")]
	internal void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x4F50A00", Offset = "0x4F50A00", VA = "0x4F50A00")]
	private void OnFocusInEvent(FocusInEvent _)
	{
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x4F50D10", Offset = "0x4F50D10", VA = "0x4F50D10")]
	private void OnFocusOutEvent(FocusOutEvent _)
	{
	}
}
