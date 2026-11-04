// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaNotation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B7")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000645")]
	[XmlAttribute("public")]
	public string Public
	{
		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x17000646")]
	[XmlAttribute("system")]
	public string System
	{
		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000647")]
	[XmlIgnore]
	internal XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BD")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		set
		{
		}
	}

	[Token(Token = "0x17000648")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BF")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x266CD40", Offset = "0x266B340", VA = "0x18266CD40")]
	public XmlSchemaNotation()
	{
	}
}
