using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200000A")]
internal class XmlTextWriterBase64Encoder : Base64Encoder
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x28")]
	private XmlTextEncoder xmlTextEncoder;

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4346960", Offset = "0x4346960", VA = "0x4346960")]
	internal XmlTextWriterBase64Encoder(XmlTextEncoder xmlTextEncoder)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x43469D0", Offset = "0x43469D0", VA = "0x43469D0", Slot = "4")]
	internal override void WriteChars(char[] chars, int index, int count)
	{
	}
}
