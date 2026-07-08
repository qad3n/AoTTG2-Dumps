using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000AE")]
internal class TextEditorEventHandler
{
	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x10")]
	protected TextElement textElement;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x18")]
	protected UnityEngine.TextEditingUtilities editingUtilities;

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4C1BDF0", Offset = "0x4C1BDF0", VA = "0x4C1BDF0")]
	protected TextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4C1C0B0", Offset = "0x4C1C0B0", VA = "0x4C1C0B0", Slot = "4")]
	public virtual void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}
}
