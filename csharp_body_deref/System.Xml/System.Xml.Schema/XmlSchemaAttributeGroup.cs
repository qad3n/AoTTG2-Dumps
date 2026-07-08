using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000213")]
public class XmlSchemaAttributeGroup : XmlSchemaAnnotated
{
	[Token(Token = "0x4000B22")]
	[FieldOffset(Offset = "0x50")]
	private string name;

	[Token(Token = "0x4000B23")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaObjectCollection attributes;

	[Token(Token = "0x4000B24")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x4000B25")]
	[FieldOffset(Offset = "0x68")]
	private XmlQualifiedName qname;

	[Token(Token = "0x4000B26")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaAttributeGroup redefined;

	[Token(Token = "0x4000B27")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaObjectTable attributeUses;

	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaAnyAttribute attributeWildcard;

	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x88")]
	private int selfReferenceCount;

	[Token(Token = "0x170005B6")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x6001560")]
		[Address(RVA = "0x43E1910", Offset = "0x43E1910", VA = "0x43E1910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001561")]
		[Address(RVA = "0x43E1920", Offset = "0x43E1920", VA = "0x43E1920")]
		set
		{
		}
	}

	[Token(Token = "0x170005B7")]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	public XmlSchemaObjectCollection Attributes
	{
		[Token(Token = "0x6001562")]
		[Address(RVA = "0x43E1930", Offset = "0x43E1930", VA = "0x43E1930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B8")]
	[XmlElement("anyAttribute")]
	public XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x6001563")]
		[Address(RVA = "0x43E1940", Offset = "0x43E1940", VA = "0x43E1940")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001564")]
		[Address(RVA = "0x43E1950", Offset = "0x43E1950", VA = "0x43E1950")]
		set
		{
		}
	}

	[Token(Token = "0x170005B9")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001565")]
		[Address(RVA = "0x43E1960", Offset = "0x43E1960", VA = "0x43E1960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BA")]
	[XmlIgnore]
	internal XmlSchemaObjectTable AttributeUses
	{
		[Token(Token = "0x6001566")]
		[Address(RVA = "0x43E1970", Offset = "0x43E1970", VA = "0x43E1970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BB")]
	[XmlIgnore]
	internal XmlSchemaAnyAttribute AttributeWildcard
	{
		[Token(Token = "0x6001567")]
		[Address(RVA = "0x43E19F0", Offset = "0x43E19F0", VA = "0x43E19F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001568")]
		[Address(RVA = "0x43E1A00", Offset = "0x43E1A00", VA = "0x43E1A00")]
		set
		{
		}
	}

	[Token(Token = "0x170005BC")]
	[XmlIgnore]
	public XmlSchemaAttributeGroup RedefinedAttributeGroup
	{
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x43E1A10", Offset = "0x43E1A10", VA = "0x43E1A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BD")]
	[XmlIgnore]
	internal XmlSchemaAttributeGroup Redefined
	{
		[Token(Token = "0x600156A")]
		[Address(RVA = "0x43E1A20", Offset = "0x43E1A20", VA = "0x43E1A20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600156B")]
		[Address(RVA = "0x43E1A30", Offset = "0x43E1A30", VA = "0x43E1A30")]
		set
		{
		}
	}

	[Token(Token = "0x170005BE")]
	[XmlIgnore]
	internal int SelfReferenceCount
	{
		[Token(Token = "0x600156C")]
		[Address(RVA = "0x43E1A40", Offset = "0x43E1A40", VA = "0x43E1A40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600156D")]
		[Address(RVA = "0x43E1A50", Offset = "0x43E1A50", VA = "0x43E1A50")]
		set
		{
		}
	}

	[Token(Token = "0x170005BF")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x43E1A60", Offset = "0x43E1A60", VA = "0x43E1A60", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600156F")]
		[Address(RVA = "0x43E1A70", Offset = "0x43E1A70", VA = "0x43E1A70", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001570")]
	[Address(RVA = "0x43E1A80", Offset = "0x43E1A80", VA = "0x43E1A80")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x43E1A90", Offset = "0x43E1A90", VA = "0x43E1A90", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001572")]
	[Address(RVA = "0x43E1FE0", Offset = "0x43E1FE0", VA = "0x43E1FE0")]
	public XmlSchemaAttributeGroup()
	{
	}
}
