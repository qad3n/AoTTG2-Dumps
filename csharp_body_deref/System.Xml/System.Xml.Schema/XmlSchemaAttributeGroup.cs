// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAttributeGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x471F070", Offset = "0x471F070", VA = "0x471F070")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001561")]
		[Address(RVA = "0x471F080", Offset = "0x471F080", VA = "0x471F080")]
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
		[Address(RVA = "0x471F090", Offset = "0x471F090", VA = "0x471F090")]
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
		[Address(RVA = "0x471F0A0", Offset = "0x471F0A0", VA = "0x471F0A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001564")]
		[Address(RVA = "0x471F0B0", Offset = "0x471F0B0", VA = "0x471F0B0")]
		set
		{
		}
	}

	[Token(Token = "0x170005B9")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001565")]
		[Address(RVA = "0x471F0C0", Offset = "0x471F0C0", VA = "0x471F0C0")]
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
		[Address(RVA = "0x471F0D0", Offset = "0x471F0D0", VA = "0x471F0D0")]
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
		[Address(RVA = "0x471F150", Offset = "0x471F150", VA = "0x471F150")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001568")]
		[Address(RVA = "0x471F160", Offset = "0x471F160", VA = "0x471F160")]
		set
		{
		}
	}

	[Token(Token = "0x170005BC")]
	[XmlIgnore]
	public XmlSchemaAttributeGroup RedefinedAttributeGroup
	{
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x471F170", Offset = "0x471F170", VA = "0x471F170")]
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
		[Address(RVA = "0x471F180", Offset = "0x471F180", VA = "0x471F180")]
		get
		{
			return null;
		}
		[Token(Token = "0x600156B")]
		[Address(RVA = "0x471F190", Offset = "0x471F190", VA = "0x471F190")]
		set
		{
		}
	}

	[Token(Token = "0x170005BE")]
	[XmlIgnore]
	internal int SelfReferenceCount
	{
		[Token(Token = "0x600156C")]
		[Address(RVA = "0x471F1A0", Offset = "0x471F1A0", VA = "0x471F1A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600156D")]
		[Address(RVA = "0x471F1B0", Offset = "0x471F1B0", VA = "0x471F1B0")]
		set
		{
		}
	}

	[Token(Token = "0x170005BF")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600156E")]
		[Address(RVA = "0x471F1C0", Offset = "0x471F1C0", VA = "0x471F1C0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600156F")]
		[Address(RVA = "0x471F1D0", Offset = "0x471F1D0", VA = "0x471F1D0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001570")]
	[Address(RVA = "0x471F1E0", Offset = "0x471F1E0", VA = "0x471F1E0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x471F1F0", Offset = "0x471F1F0", VA = "0x471F1F0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001572")]
	[Address(RVA = "0x471F740", Offset = "0x471F740", VA = "0x471F740")]
	public XmlSchemaAttributeGroup()
	{
	}
}
