// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlNodeEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4809790", Offset = "0x4809790", VA = "0x4809790")]
	internal XmlNodeEventArgs(XmlNode xmlNode, int lineNumber, int linePosition, object o)
	{
	}
}
