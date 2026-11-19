// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlTextWriterBase64Encoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200000A")]
internal class XmlTextWriterBase64Encoder : Base64Encoder
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x28")]
	private XmlTextEncoder xmlTextEncoder;

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x5F8ADF0", Offset = "0x5F89DF0", VA = "0x5F8ADF0")]
	internal XmlTextWriterBase64Encoder(XmlTextEncoder xmlTextEncoder)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5F8AE60", Offset = "0x5F89E60", VA = "0x5F8AE60", Slot = "4")]
	internal override void WriteChars(char[] chars, int index, int count)
	{
	}
}
