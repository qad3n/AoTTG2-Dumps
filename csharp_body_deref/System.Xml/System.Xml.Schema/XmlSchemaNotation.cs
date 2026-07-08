using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000243")]
public class XmlSchemaNotation : XmlSchemaAnnotated
{
	[Token(Token = "0x4000BBB")]
	[FieldOffset(Offset = "0x50")]
	private string name;

	[Token(Token = "0x4000BBC")]
	[FieldOffset(Offset = "0x58")]
	private string publicId;

	[Token(Token = "0x4000BBD")]
	[FieldOffset(Offset = "0x60")]
	private string systemId;

	[Token(Token = "0x4000BBE")]
	[FieldOffset(Offset = "0x68")]
	private XmlQualifiedName qname;

	[Token(Token = "0x17000644")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x43E7F20", Offset = "0x43E7F20", VA = "0x43E7F20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x43E7F30", Offset = "0x43E7F30", VA = "0x43E7F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000645")]
	[XmlAttribute("public")]
	public string Public
	{
		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x43E7F40", Offset = "0x43E7F40", VA = "0x43E7F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x43E7F50", Offset = "0x43E7F50", VA = "0x43E7F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000646")]
	[XmlAttribute("system")]
	public string System
	{
		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x43E7F60", Offset = "0x43E7F60", VA = "0x43E7F60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x43E7F70", Offset = "0x43E7F70", VA = "0x43E7F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000647")]
	[XmlIgnore]
	internal XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x43E7F80", Offset = "0x43E7F80", VA = "0x43E7F80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BD")]
		[Address(RVA = "0x43E7F90", Offset = "0x43E7F90", VA = "0x43E7F90")]
		set
		{
		}
	}

	[Token(Token = "0x17000648")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x43E7FA0", Offset = "0x43E7FA0", VA = "0x43E7FA0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x43E7FB0", Offset = "0x43E7FB0", VA = "0x43E7FB0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x43E7FC0", Offset = "0x43E7FC0", VA = "0x43E7FC0")]
	public XmlSchemaNotation()
	{
	}
}
