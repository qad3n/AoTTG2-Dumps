using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000103")]
public class XmlAttributeEventArgs : EventArgs
{
	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x10")]
	private object o;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x18")]
	private XmlAttribute attr;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x20")]
	private string qnames;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x28")]
	private int lineNumber;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x2C")]
	private int linePosition;

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x44CBC90", Offset = "0x44CBC90", VA = "0x44CBC90")]
	internal XmlAttributeEventArgs(XmlAttribute attr, int lineNumber, int linePosition, object o, string qnames)
	{
	}
}
