using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001E4")]
internal class RedefineEntry
{
	[Token(Token = "0x40008C9")]
	[FieldOffset(Offset = "0x10")]
	internal XmlSchemaRedefine redefine;

	[Token(Token = "0x40008CA")]
	[FieldOffset(Offset = "0x18")]
	internal XmlSchema schemaToUpdate;

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x437F8D0", Offset = "0x437F8D0", VA = "0x437F8D0")]
	public RedefineEntry(XmlSchemaRedefine external, XmlSchema schema)
	{
	}
}
