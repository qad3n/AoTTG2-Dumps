using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000107")]
public class XmlNodeEventArgs : EventArgs
{
	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x10")]
	private object o;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x18")]
	private XmlNode xmlNode;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x20")]
	private int lineNumber;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x24")]
	private int linePosition;

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x44CC030", Offset = "0x44CC030", VA = "0x44CC030")]
	internal XmlNodeEventArgs(XmlNode xmlNode, int lineNumber, int linePosition, object o)
	{
	}
}
