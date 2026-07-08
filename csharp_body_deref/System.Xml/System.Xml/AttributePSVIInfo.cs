using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000089")]
internal class AttributePSVIInfo
{
	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x10")]
	internal string localName;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x18")]
	internal string namespaceUri;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x20")]
	internal object typedAttributeValue;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x28")]
	internal XmlSchemaInfo attributeSchemaInfo;

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x447FF70", Offset = "0x447FF70", VA = "0x447FF70")]
	internal AttributePSVIInfo()
	{
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x447FFE0", Offset = "0x447FFE0", VA = "0x447FFE0")]
	internal void Reset()
	{
	}
}
