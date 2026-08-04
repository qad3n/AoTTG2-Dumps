// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaComplexType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47213F0", Offset = "0x47213F0", VA = "0x47213F0")]
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
		[Address(RVA = "0x4721460", Offset = "0x4721460", VA = "0x4721460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal static ContentValidator AnyTypeContentValidator
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x4721360", Offset = "0x4721360", VA = "0x4721360")]
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
		[Address(RVA = "0x47214D0", Offset = "0x47214D0", VA = "0x47214D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x47214E0", Offset = "0x47214E0", VA = "0x47214E0")]
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
		[Address(RVA = "0x4721500", Offset = "0x4721500", VA = "0x4721500")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60015BC")]
		[Address(RVA = "0x4721510", Offset = "0x4721510", VA = "0x4721510")]
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
		[Address(RVA = "0x4721520", Offset = "0x4721520", VA = "0x4721520", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x4721530", Offset = "0x4721530", VA = "0x4721530", Slot = "15")]
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
		[Address(RVA = "0x4721550", Offset = "0x4721550", VA = "0x4721550")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x4721560", Offset = "0x4721560", VA = "0x4721560")]
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
		[Address(RVA = "0x4721580", Offset = "0x4721580", VA = "0x4721580")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x4721590", Offset = "0x4721590", VA = "0x4721590")]
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
		[Address(RVA = "0x47215B0", Offset = "0x47215B0", VA = "0x47215B0")]
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
		[Address(RVA = "0x4721630", Offset = "0x4721630", VA = "0x4721630")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C5")]
		[Address(RVA = "0x4721640", Offset = "0x4721640", VA = "0x4721640")]
		set
		{
		}
	}

	[Token(Token = "0x170005E7")]
	[XmlIgnore]
	public XmlSchemaContentType ContentType
	{
		[Token(Token = "0x60015C6")]
		[Address(RVA = "0x4721660", Offset = "0x4721660", VA = "0x4721660")]
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
		[Address(RVA = "0x4721670", Offset = "0x4721670", VA = "0x4721670")]
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
		[Address(RVA = "0x4721680", Offset = "0x4721680", VA = "0x4721680")]
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
		[Address(RVA = "0x4721690", Offset = "0x4721690", VA = "0x4721690")]
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
		[Address(RVA = "0x4721710", Offset = "0x4721710", VA = "0x4721710")]
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
		[Address(RVA = "0x4721720", Offset = "0x4721720", VA = "0x4721720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005ED")]
	internal bool HasWildCard
	{
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x47217F0", Offset = "0x47217F0", VA = "0x47217F0")]
		set
		{
		}
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x4720AF0", Offset = "0x4720AF0", VA = "0x4720AF0")]
	static XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x4720E30", Offset = "0x4720E30", VA = "0x4720E30")]
	private static XmlSchemaComplexType CreateAnyType(XmlSchemaContentProcessing processContents)
	{
		return null;
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x47212E0", Offset = "0x47212E0", VA = "0x47212E0")]
	public XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x47217A0", Offset = "0x47217A0", VA = "0x47217A0")]
	internal void SetContentTypeParticle(XmlSchemaParticle value)
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x47217C0", Offset = "0x47217C0", VA = "0x47217C0")]
	internal void SetBlockResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x47217D0", Offset = "0x47217D0", VA = "0x47217D0")]
	internal void SetAttributeWildcard(XmlSchemaAnyAttribute value)
	{
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x4721810", Offset = "0x4721810", VA = "0x4721810")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x4721830", Offset = "0x4721830", VA = "0x4721830")]
	internal bool ContainsIdAttribute(bool findAll)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x4721E40", Offset = "0x4721E40", VA = "0x4721E40", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x471CCB0", Offset = "0x471CCB0", VA = "0x471CCB0")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x47223B0", Offset = "0x47223B0", VA = "0x47223B0")]
	private void ClearCompiledState()
	{
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x471F450", Offset = "0x471F450", VA = "0x471F450")]
	internal static XmlSchemaObjectCollection CloneAttributes(XmlSchemaObjectCollection attributes)
	{
		return null;
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x47224F0", Offset = "0x47224F0", VA = "0x47224F0")]
	private static XmlSchemaObjectCollection CloneGroupBaseParticles(XmlSchemaObjectCollection groupBaseParticles, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x4722100", Offset = "0x4722100", VA = "0x4722100")]
	internal static XmlSchemaParticle CloneParticle(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x4722700", Offset = "0x4722700", VA = "0x4722700")]
	private static XmlSchemaForm GetResolvedElementForm(XmlSchema parentSchema, XmlSchemaElement element)
	{
		return default(XmlSchemaForm);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x4721E50", Offset = "0x4721E50", VA = "0x4721E50")]
	internal static bool HasParticleRef(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x471F310", Offset = "0x471F310", VA = "0x471F310")]
	internal static bool HasAttributeQNameRef(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}
}
