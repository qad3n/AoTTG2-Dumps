using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F4")]
internal class SchemaNamespaceManager : XmlNamespaceManager
{
	[Token(Token = "0x4000A4D")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObject node;

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x43B44C0", Offset = "0x43B44C0", VA = "0x43B44C0")]
	public SchemaNamespaceManager(XmlSchemaObject node)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x43B44F0", Offset = "0x43B44F0", VA = "0x43B44F0", Slot = "16")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x43B4620", Offset = "0x43B4620", VA = "0x43B4620", Slot = "17")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}
}
