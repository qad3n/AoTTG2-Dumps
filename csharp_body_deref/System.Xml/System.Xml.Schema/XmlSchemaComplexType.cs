using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200021D")]
public class XmlSchemaComplexType : XmlSchemaType
{
	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x94")]
	private XmlSchemaDerivationMethod block;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x98")]
	private XmlSchemaContentModel contentModel;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaParticle particle;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0xA8")]
	private XmlSchemaObjectCollection attributes;

	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0xB0")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0xB8")]
	private XmlSchemaParticle contentTypeParticle;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0xC0")]
	private XmlSchemaDerivationMethod blockResolved;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0xC8")]
	private XmlSchemaObjectTable localElements;

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0xD0")]
	private XmlSchemaObjectTable attributeUses;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0xD8")]
	private XmlSchemaAnyAttribute attributeWildcard;

	[Token(Token = "0x4000B4E")]
	[FieldOffset(Offset = "0x0")]
	private static XmlSchemaComplexType anyTypeLax;

	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0x8")]
	private static XmlSchemaComplexType anyTypeSkip;

	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x10")]
	private static XmlSchemaComplexType untypedAnyType;

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0xE0")]
	private byte pvFlags;

	[Token(Token = "0x170005DD")]
	[XmlIgnore]
	internal static XmlSchemaComplexType AnyType
	{
		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x43E3C90", Offset = "0x43E3C90", VA = "0x43E3C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DE")]
	[XmlIgnore]
	internal static XmlSchemaComplexType UntypedAnyType
	{
		[Token(Token = "0x60015B7")]
		[Address(RVA = "0x43E3D00", Offset = "0x43E3D00", VA = "0x43E3D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal static ContentValidator AnyTypeContentValidator
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x43E3C00", Offset = "0x43E3C00", VA = "0x43E3C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E0")]
	[XmlAttribute("abstract")]
	[DefaultValue(false)]
	public bool IsAbstract
	{
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x43E3D70", Offset = "0x43E3D70", VA = "0x43E3D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x43E3D80", Offset = "0x43E3D80", VA = "0x43E3D80")]
		set
		{
		}
	}

	[Token(Token = "0x170005E1")]
	[XmlAttribute("block")]
	[DefaultValue(XmlSchemaDerivationMethod.None)]
	public XmlSchemaDerivationMethod Block
	{
		[Token(Token = "0x60015BB")]
		[Address(RVA = "0x43E3DA0", Offset = "0x43E3DA0", VA = "0x43E3DA0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60015BC")]
		[Address(RVA = "0x43E3DB0", Offset = "0x43E3DB0", VA = "0x43E3DB0")]
		set
		{
		}
	}

	[Token(Token = "0x170005E2")]
	[XmlAttribute("mixed")]
	[DefaultValue(false)]
	public override bool IsMixed
	{
		[Token(Token = "0x60015BD")]
		[Address(RVA = "0x43E3DC0", Offset = "0x43E3DC0", VA = "0x43E3DC0", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x43E3DD0", Offset = "0x43E3DD0", VA = "0x43E3DD0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170005E3")]
	[XmlElement("simpleContent", typeof(XmlSchemaSimpleContent))]
	[XmlElement("complexContent", typeof(XmlSchemaComplexContent))]
	public XmlSchemaContentModel ContentModel
	{
		[Token(Token = "0x60015BF")]
		[Address(RVA = "0x43E3DF0", Offset = "0x43E3DF0", VA = "0x43E3DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x43E3E00", Offset = "0x43E3E00", VA = "0x43E3E00")]
		set
		{
		}
	}

	[Token(Token = "0x170005E4")]
	[XmlElement("all", typeof(XmlSchemaAll))]
	[XmlElement("group", typeof(XmlSchemaGroupRef))]
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	public XmlSchemaParticle Particle
	{
		[Token(Token = "0x60015C1")]
		[Address(RVA = "0x43E3E20", Offset = "0x43E3E20", VA = "0x43E3E20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x43E3E30", Offset = "0x43E3E30", VA = "0x43E3E30")]
		set
		{
		}
	}

	[Token(Token = "0x170005E5")]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	public XmlSchemaObjectCollection Attributes
	{
		[Token(Token = "0x60015C3")]
		[Address(RVA = "0x43E3E50", Offset = "0x43E3E50", VA = "0x43E3E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E6")]
	[XmlElement("anyAttribute")]
	public XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x60015C4")]
		[Address(RVA = "0x43E3ED0", Offset = "0x43E3ED0", VA = "0x43E3ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C5")]
		[Address(RVA = "0x43E3EE0", Offset = "0x43E3EE0", VA = "0x43E3EE0")]
		set
		{
		}
	}

	[Token(Token = "0x170005E7")]
	[XmlIgnore]
	public XmlSchemaContentType ContentType
	{
		[Token(Token = "0x60015C6")]
		[Address(RVA = "0x43E3F00", Offset = "0x43E3F00", VA = "0x43E3F00")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x170005E8")]
	[XmlIgnore]
	public XmlSchemaParticle ContentTypeParticle
	{
		[Token(Token = "0x60015C7")]
		[Address(RVA = "0x43E3F10", Offset = "0x43E3F10", VA = "0x43E3F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E9")]
	[XmlIgnore]
	public XmlSchemaDerivationMethod BlockResolved
	{
		[Token(Token = "0x60015C8")]
		[Address(RVA = "0x43E3F20", Offset = "0x43E3F20", VA = "0x43E3F20")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
	}

	[Token(Token = "0x170005EA")]
	[XmlIgnore]
	public XmlSchemaObjectTable AttributeUses
	{
		[Token(Token = "0x60015C9")]
		[Address(RVA = "0x43E3F30", Offset = "0x43E3F30", VA = "0x43E3F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EB")]
	[XmlIgnore]
	public XmlSchemaAnyAttribute AttributeWildcard
	{
		[Token(Token = "0x60015CA")]
		[Address(RVA = "0x43E3FB0", Offset = "0x43E3FB0", VA = "0x43E3FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EC")]
	[XmlIgnore]
	internal XmlSchemaObjectTable LocalElements
	{
		[Token(Token = "0x60015CB")]
		[Address(RVA = "0x43E3FC0", Offset = "0x43E3FC0", VA = "0x43E3FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005ED")]
	internal bool HasWildCard
	{
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x43E4090", Offset = "0x43E4090", VA = "0x43E4090")]
		set
		{
		}
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x43E3390", Offset = "0x43E3390", VA = "0x43E3390")]
	static XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x43E36D0", Offset = "0x43E36D0", VA = "0x43E36D0")]
	private static XmlSchemaComplexType CreateAnyType(XmlSchemaContentProcessing processContents)
	{
		return null;
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x43E3B80", Offset = "0x43E3B80", VA = "0x43E3B80")]
	public XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x43E4040", Offset = "0x43E4040", VA = "0x43E4040")]
	internal void SetContentTypeParticle(XmlSchemaParticle value)
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x43E4060", Offset = "0x43E4060", VA = "0x43E4060")]
	internal void SetBlockResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x43E4070", Offset = "0x43E4070", VA = "0x43E4070")]
	internal void SetAttributeWildcard(XmlSchemaAnyAttribute value)
	{
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x43E40B0", Offset = "0x43E40B0", VA = "0x43E40B0")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x43E40D0", Offset = "0x43E40D0", VA = "0x43E40D0")]
	internal bool ContainsIdAttribute(bool findAll)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x43E46E0", Offset = "0x43E46E0", VA = "0x43E46E0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x43DF550", Offset = "0x43DF550", VA = "0x43DF550")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x43E4C50", Offset = "0x43E4C50", VA = "0x43E4C50")]
	private void ClearCompiledState()
	{
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x43E1CF0", Offset = "0x43E1CF0", VA = "0x43E1CF0")]
	internal static XmlSchemaObjectCollection CloneAttributes(XmlSchemaObjectCollection attributes)
	{
		return null;
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x43E4D90", Offset = "0x43E4D90", VA = "0x43E4D90")]
	private static XmlSchemaObjectCollection CloneGroupBaseParticles(XmlSchemaObjectCollection groupBaseParticles, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x43E49A0", Offset = "0x43E49A0", VA = "0x43E49A0")]
	internal static XmlSchemaParticle CloneParticle(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x43E4FA0", Offset = "0x43E4FA0", VA = "0x43E4FA0")]
	private static XmlSchemaForm GetResolvedElementForm(XmlSchema parentSchema, XmlSchemaElement element)
	{
		return default(XmlSchemaForm);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x43E46F0", Offset = "0x43E46F0", VA = "0x43E46F0")]
	internal static bool HasParticleRef(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x43E1BB0", Offset = "0x43E1BB0", VA = "0x43E1BB0")]
	internal static bool HasAttributeQNameRef(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}
}
