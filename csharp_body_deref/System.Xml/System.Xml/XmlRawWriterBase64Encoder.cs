// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlRawWriterBase64Encoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000009")]
internal class XmlRawWriterBase64Encoder : Base64Encoder
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	private XmlRawWriter rawWriter;

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4678990", Offset = "0x4678990", VA = "0x4678990")]
	internal XmlRawWriterBase64Encoder(XmlRawWriter rawWriter)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4678A00", Offset = "0x4678A00", VA = "0x4678A00", Slot = "4")]
	internal override void WriteChars(char[] chars, int index, int count)
	{
	}
}
