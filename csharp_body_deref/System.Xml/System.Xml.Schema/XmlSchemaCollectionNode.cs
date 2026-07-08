using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000217")]
internal sealed class XmlSchemaCollectionNode
{
	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x10")]
	private string namespaceUri;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x18")]
	private SchemaInfo schemaInfo;

	[Token(Token = "0x4000B36")]
	[FieldOffset(Offset = "0x20")]
	private XmlSchema schema;

	[Token(Token = "0x170005CB")]
	internal string NamespaceURI
	{
		[Token(Token = "0x600158C")]
		[Address(RVA = "0x43E2D40", Offset = "0x43E2D40", VA = "0x43E2D40")]
		set
		{
		}
	}

	[Token(Token = "0x170005CC")]
	internal SchemaInfo SchemaInfo
	{
		[Token(Token = "0x600158D")]
		[Address(RVA = "0x43E2D50", Offset = "0x43E2D50", VA = "0x43E2D50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600158E")]
		[Address(RVA = "0x43E2D60", Offset = "0x43E2D60", VA = "0x43E2D60")]
		set
		{
		}
	}

	[Token(Token = "0x170005CD")]
	internal XmlSchema Schema
	{
		[Token(Token = "0x600158F")]
		[Address(RVA = "0x43E2D70", Offset = "0x43E2D70", VA = "0x43E2D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001590")]
		[Address(RVA = "0x43E2D80", Offset = "0x43E2D80", VA = "0x43E2D80")]
		set
		{
		}
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x43E2BC0", Offset = "0x43E2BC0", VA = "0x43E2BC0")]
	public XmlSchemaCollectionNode()
	{
	}
}
