// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlAttributeEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x48093F0", Offset = "0x48093F0", VA = "0x48093F0")]
	internal XmlAttributeEventArgs(XmlAttribute attr, int lineNumber, int linePosition, object o, string qnames)
	{
	}
}
