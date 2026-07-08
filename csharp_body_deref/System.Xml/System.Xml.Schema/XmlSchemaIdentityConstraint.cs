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
		[Address(RVA = "0x43E7890", Offset = "0x43E7890", VA = "0x43E7890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001688")]
		[Address(RVA = "0x43E78A0", Offset = "0x43E78A0", VA = "0x43E78A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000631")]
	[XmlElement("selector", typeof(XmlSchemaXPath))]
	public XmlSchemaXPath Selector
	{
		[Token(Token = "0x6001689")]
		[Address(RVA = "0x43E78B0", Offset = "0x43E78B0", VA = "0x43E78B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x43E78C0", Offset = "0x43E78C0", VA = "0x43E78C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000632")]
	[XmlElement("field", typeof(XmlSchemaXPath))]
	public XmlSchemaObjectCollection Fields
	{
		[Token(Token = "0x600168B")]
		[Address(RVA = "0x43E78D0", Offset = "0x43E78D0", VA = "0x43E78D0")]
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
		[Address(RVA = "0x43E78E0", Offset = "0x43E78E0", VA = "0x43E78E0")]
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
		[Address(RVA = "0x43E7900", Offset = "0x43E7900", VA = "0x43E7900")]
		get
		{
			return null;
		}
		[Token(Token = "0x600168F")]
		[Address(RVA = "0x43E7910", Offset = "0x43E7910", VA = "0x43E7910")]
		set
		{
		}
	}

	[Token(Token = "0x17000635")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x6001690")]
		[Address(RVA = "0x43E7920", Offset = "0x43E7920", VA = "0x43E7920", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001691")]
		[Address(RVA = "0x43E7930", Offset = "0x43E7930", VA = "0x43E7930", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x43E78F0", Offset = "0x43E78F0", VA = "0x43E78F0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x43E7940", Offset = "0x43E7940", VA = "0x43E7940")]
	public XmlSchemaIdentityConstraint()
	{
	}
}
