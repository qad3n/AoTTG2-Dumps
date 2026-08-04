// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNodeChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B0")]
public class XmlNodeChangedEventArgs : EventArgs
{
	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x10")]
	private XmlNodeChangedAction action;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x18")]
	private XmlNode node;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x20")]
	private XmlNode oldParent;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x28")]
	private XmlNode newParent;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0x30")]
	private string oldValue;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x38")]
	private string newValue;

	[Token(Token = "0x17000290")]
	public XmlNodeChangedAction Action
	{
		[Token(Token = "0x60009AF")]
		[Address(RVA = "0x47DF1F0", Offset = "0x47DF1F0", VA = "0x47DF1F0")]
		get
		{
			return default(XmlNodeChangedAction);
		}
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x47DF120", Offset = "0x47DF120", VA = "0x47DF120")]
	public XmlNodeChangedEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
	}
}
