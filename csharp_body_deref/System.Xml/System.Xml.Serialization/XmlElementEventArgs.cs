using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000105")]
public class XmlElementEventArgs : EventArgs
{
	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x10")]
	private object o;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0x18")]
	private XmlElement elem;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0x20")]
	private string qnames;

	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x28")]
	private int lineNumber;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x2C")]
	private int linePosition;

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x44CBE60", Offset = "0x44CBE60", VA = "0x44CBE60")]
	internal XmlElementEventArgs(XmlElement elem, int lineNumber, int linePosition, object o, string qnames)
	{
	}
}
