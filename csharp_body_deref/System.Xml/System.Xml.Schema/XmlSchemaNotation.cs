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
		[Address(RVA = "0x602D7C0", Offset = "0x602C7C0", VA = "0x602D7C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x602D7D0", Offset = "0x602C7D0", VA = "0x602D7D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000645")]
	[XmlAttribute("public")]
	public string Public
	{
		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x602D7E0", Offset = "0x602C7E0", VA = "0x602D7E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x602D7F0", Offset = "0x602C7F0", VA = "0x602D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000646")]
	[XmlAttribute("system")]
	public string System
	{
		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x602D800", Offset = "0x602C800", VA = "0x602D800")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x602D810", Offset = "0x602C810", VA = "0x602D810")]
		set
		{
		}
	}

	[Token(Token = "0x17000647")]
	[XmlIgnore]
	internal XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x602D820", Offset = "0x602C820", VA = "0x602D820")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BD")]
		[Address(RVA = "0x602D830", Offset = "0x602C830", VA = "0x602D830")]
		set
		{
		}
	}

	[Token(Token = "0x17000648")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x602D840", Offset = "0x602C840", VA = "0x602D840", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x602D850", Offset = "0x602C850", VA = "0x602D850", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x602D860", Offset = "0x602C860", VA = "0x602D860")]
	public XmlSchemaNotation()
	{
	}
}
