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
		[Address(RVA = "0x6029540", Offset = "0x6028540", VA = "0x6029540")]
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
		[Address(RVA = "0x60295B0", Offset = "0x60285B0", VA = "0x60295B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal static ContentValidator AnyTypeContentValidator
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x60294B0", Offset = "0x60284B0", VA = "0x60294B0")]
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
		[Address(RVA = "0x6029620", Offset = "0x6028620", VA = "0x6029620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x6029630", Offset = "0x6028630", VA = "0x6029630")]
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
		[Address(RVA = "0x6029650", Offset = "0x6028650", VA = "0x6029650")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60015BC")]
		[Address(RVA = "0x6029660", Offset = "0x6028660", VA = "0x6029660")]
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
		[Address(RVA = "0x6029670", Offset = "0x6028670", VA = "0x6029670", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x6029680", Offset = "0x6028680", VA = "0x6029680", Slot = "15")]
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
		[Address(RVA = "0x60296A0", Offset = "0x60286A0", VA = "0x60296A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x60296B0", Offset = "0x60286B0", VA = "0x60296B0")]
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
		[Address(RVA = "0x60296D0", Offset = "0x60286D0", VA = "0x60296D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x60296E0", Offset = "0x60286E0", VA = "0x60296E0")]
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
		[Address(RVA = "0x6029700", Offset = "0x6028700", VA = "0x6029700")]
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
		[Address(RVA = "0x6029780", Offset = "0x6028780", VA = "0x6029780")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C5")]
		[Address(RVA = "0x6029790", Offset = "0x6028790", VA = "0x6029790")]
		set
		{
		}
	}

	[Token(Token = "0x170005E7")]
	[XmlIgnore]
	public XmlSchemaContentType ContentType
	{
		[Token(Token = "0x60015C6")]
		[Address(RVA = "0x60297B0", Offset = "0x60287B0", VA = "0x60297B0")]
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
		[Address(RVA = "0x60297C0", Offset = "0x60287C0", VA = "0x60297C0")]
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
		[Address(RVA = "0x60297D0", Offset = "0x60287D0", VA = "0x60297D0")]
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
		[Address(RVA = "0x60297E0", Offset = "0x60287E0", VA = "0x60297E0")]
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
		[Address(RVA = "0x6029860", Offset = "0x6028860", VA = "0x6029860")]
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
		[Address(RVA = "0x6029870", Offset = "0x6028870", VA = "0x6029870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005ED")]
	internal bool HasWildCard
	{
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x6029940", Offset = "0x6028940", VA = "0x6029940")]
		set
		{
		}
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x6028C40", Offset = "0x6027C40", VA = "0x6028C40")]
	static XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x6028F80", Offset = "0x6027F80", VA = "0x6028F80")]
	private static XmlSchemaComplexType CreateAnyType(XmlSchemaContentProcessing processContents)
	{
		return null;
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x6029430", Offset = "0x6028430", VA = "0x6029430")]
	public XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x60298F0", Offset = "0x60288F0", VA = "0x60298F0")]
	internal void SetContentTypeParticle(XmlSchemaParticle value)
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x6029910", Offset = "0x6028910", VA = "0x6029910")]
	internal void SetBlockResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x6029920", Offset = "0x6028920", VA = "0x6029920")]
	internal void SetAttributeWildcard(XmlSchemaAnyAttribute value)
	{
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x6029960", Offset = "0x6028960", VA = "0x6029960")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x6029980", Offset = "0x6028980", VA = "0x6029980")]
	internal bool ContainsIdAttribute(bool findAll)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x6029F80", Offset = "0x6028F80", VA = "0x6029F80", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x6024EB0", Offset = "0x6023EB0", VA = "0x6024EB0")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x602A4E0", Offset = "0x60294E0", VA = "0x602A4E0")]
	private void ClearCompiledState()
	{
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x60275E0", Offset = "0x60265E0", VA = "0x60275E0")]
	internal static XmlSchemaObjectCollection CloneAttributes(XmlSchemaObjectCollection attributes)
	{
		return null;
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x602A620", Offset = "0x6029620", VA = "0x602A620")]
	private static XmlSchemaObjectCollection CloneGroupBaseParticles(XmlSchemaObjectCollection groupBaseParticles, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x602A240", Offset = "0x6029240", VA = "0x602A240")]
	internal static XmlSchemaParticle CloneParticle(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x602A830", Offset = "0x6029830", VA = "0x602A830")]
	private static XmlSchemaForm GetResolvedElementForm(XmlSchema parentSchema, XmlSchemaElement element)
	{
		return default(XmlSchemaForm);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x6029F90", Offset = "0x6028F90", VA = "0x6029F90")]
	internal static bool HasParticleRef(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x6027490", Offset = "0x6026490", VA = "0x6027490")]
	internal static bool HasAttributeQNameRef(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}
}
