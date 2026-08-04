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
		[Address(RVA = "0x4725680", Offset = "0x4725680", VA = "0x4725680")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B7")]
		[Address(RVA = "0x4725690", Offset = "0x4725690", VA = "0x4725690")]
		set
		{
		}
	}

	[Token(Token = "0x17000645")]
	[XmlAttribute("public")]
	public string Public
	{
		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x47256A0", Offset = "0x47256A0", VA = "0x47256A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x47256B0", Offset = "0x47256B0", VA = "0x47256B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000646")]
	[XmlAttribute("system")]
	public string System
	{
		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x47256C0", Offset = "0x47256C0", VA = "0x47256C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BB")]
		[Address(RVA = "0x47256D0", Offset = "0x47256D0", VA = "0x47256D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000647")]
	[XmlIgnore]
	internal XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x47256E0", Offset = "0x47256E0", VA = "0x47256E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BD")]
		[Address(RVA = "0x47256F0", Offset = "0x47256F0", VA = "0x47256F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000648")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x4725700", Offset = "0x4725700", VA = "0x4725700", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x4725710", Offset = "0x4725710", VA = "0x4725710", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x4725720", Offset = "0x4725720", VA = "0x4725720")]
	public XmlSchemaNotation()
	{
	}
}
