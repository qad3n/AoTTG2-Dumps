// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaIdentityConstraint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200023B")]
public class XmlSchemaIdentityConstraint : XmlSchemaAnnotated
{
	[Token(Token = "0x4000BA9")]
	[FieldOffset(Offset = "0x50")]
	private string name;

	[Token(Token = "0x4000BAA")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaXPath selector;

	[Token(Token = "0x4000BAB")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaObjectCollection fields;

	[Token(Token = "0x4000BAC")]
	[FieldOffset(Offset = "0x68")]
	private XmlQualifiedName qualifiedName;

	[Token(Token = "0x4000BAD")]
	[FieldOffset(Offset = "0x70")]
	private CompiledIdentityConstraint compiledConstraint;

	[Token(Token = "0x17000630")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x6001687")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001688")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000631")]
	[XmlElement("selector", typeof(XmlSchemaXPath))]
	public XmlSchemaXPath Selector
	{
		[Token(Token = "0x6001689")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600168A")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x17000632")]
	[XmlElement("field", typeof(XmlSchemaXPath))]
	public XmlSchemaObjectCollection Fields
	{
		[Token(Token = "0x600168B")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000633")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x600168C")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000634")]
	[XmlIgnore]
	internal CompiledIdentityConstraint CompiledConstraint
	{
		[Token(Token = "0x600168E")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x600168F")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		set
		{
		}
	}

	[Token(Token = "0x17000635")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x6001690")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001691")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x266C6E0", Offset = "0x266ACE0", VA = "0x18266C6E0")]
	public XmlSchemaIdentityConstraint()
	{
	}
}
