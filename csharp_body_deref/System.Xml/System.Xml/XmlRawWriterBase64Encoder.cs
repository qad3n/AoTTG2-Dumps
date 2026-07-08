using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000009")]
internal class XmlRawWriterBase64Encoder : Base64Encoder
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	private XmlRawWriter rawWriter;

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x43468C0", Offset = "0x43468C0", VA = "0x43468C0")]
	internal XmlRawWriterBase64Encoder(XmlRawWriter rawWriter)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4346930", Offset = "0x4346930", VA = "0x4346930", Slot = "4")]
	internal override void WriteChars(char[] chars, int index, int count)
	{
	}
}
