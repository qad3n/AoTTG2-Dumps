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
	[FieldOffset(Offset = "0x98")]
	private XmlSchemaDerivationMethod block;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaContentModel contentModel;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0xA8")]
	private XmlSchemaParticle particle;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0xB0")]
	private XmlSchemaObjectCollection attributes;

	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0xB8")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0xC0")]
	private XmlSchemaParticle contentTypeParticle;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0xC8")]
	private XmlSchemaDerivationMethod blockResolved;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0xD0")]
	private XmlSchemaObjectTable localElements;

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0xD8")]
	private XmlSchemaObjectTable attributeUses;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0xE0")]
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
	[FieldOffset(Offset = "0xE8")]
	private byte pvFlags;

	[Token(Token = "0x170005DD")]
	[XmlIgnore]
	internal static XmlSchemaComplexType AnyType
	{
		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x26699F0", Offset = "0x2667FF0", VA = "0x1826699F0")]
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
		[Address(RVA = "0x2669BE0", Offset = "0x26681E0", VA = "0x182669BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal static ContentValidator AnyTypeContentValidator
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x2669980", Offset = "0x2667F80", VA = "0x182669980")]
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
		[Address(RVA = "0x2669B40", Offset = "0x2668140", VA = "0x182669B40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x2669C60", Offset = "0x2668260", VA = "0x182669C60")]
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
		[Address(RVA = "0xB5B9F0", Offset = "0xB59FF0", VA = "0x180B5B9F0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60015BC")]
		[Address(RVA = "0xB5BE70", Offset = "0xB5A470", VA = "0x180B5BE70")]
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
		[Address(RVA = "0x2669B50", Offset = "0x2668150", VA = "0x182669B50", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x2669C90", Offset = "0x2668290", VA = "0x182669C90", Slot = "15")]
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
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
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
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
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
		[Address(RVA = "0x2669AC0", Offset = "0x26680C0", VA = "0x182669AC0")]
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
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015C5")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		set
		{
		}
	}

	[Token(Token = "0x170005E7")]
	[XmlIgnore]
	public XmlSchemaContentType ContentType
	{
		[Token(Token = "0x60015C6")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
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
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
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
		[Address(RVA = "0x1AAAE10", Offset = "0x1AA9410", VA = "0x181AAAE10")]
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
		[Address(RVA = "0x2669A40", Offset = "0x2668040", VA = "0x182669A40")]
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
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
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
		[Address(RVA = "0x2669B60", Offset = "0x2668160", VA = "0x182669B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005ED")]
	internal bool HasWildCard
	{
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x2669C30", Offset = "0x2668230", VA = "0x182669C30")]
		set
		{
		}
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x2669570", Offset = "0x2667B70", VA = "0x182669570")]
	static XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x2668C10", Offset = "0x2667210", VA = "0x182668C10")]
	private static XmlSchemaComplexType CreateAnyType(XmlSchemaContentProcessing processContents)
	{
		return null;
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x2669900", Offset = "0x2667F00", VA = "0x182669900")]
	public XmlSchemaComplexType()
	{
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
	internal void SetContentTypeParticle(XmlSchemaParticle value)
	{
	}

	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x2669560", Offset = "0x2667B60", VA = "0x182669560")]
	internal void SetBlockResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x1BD5200", Offset = "0x1BD3800", VA = "0x181BD5200")]
	internal void SetAttributeWildcard(XmlSchemaAnyAttribute value)
	{
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x2668970", Offset = "0x2666F70", VA = "0x182668970")]
	internal bool ContainsIdAttribute(bool findAll)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x2668960", Offset = "0x2666F60", VA = "0x182668960", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x2667FE0", Offset = "0x26665E0", VA = "0x182667FE0")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x26676E0", Offset = "0x2665CE0", VA = "0x1826676E0")]
	private void ClearCompiledState()
	{
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x26677A0", Offset = "0x2665DA0", VA = "0x1826677A0")]
	internal static XmlSchemaObjectCollection CloneAttributes(XmlSchemaObjectCollection attributes)
	{
		return null;
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x2667A10", Offset = "0x2666010", VA = "0x182667A10")]
	private static XmlSchemaObjectCollection CloneGroupBaseParticles(XmlSchemaObjectCollection groupBaseParticles, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x2667B50", Offset = "0x2666150", VA = "0x182667B50")]
	internal static XmlSchemaParticle CloneParticle(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x26690F0", Offset = "0x26676F0", VA = "0x1826690F0")]
	private static XmlSchemaForm GetResolvedElementForm(XmlSchema parentSchema, XmlSchemaElement element)
	{
		return default(XmlSchemaForm);
	}

	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x2669270", Offset = "0x2667870", VA = "0x182669270")]
	internal static bool HasParticleRef(XmlSchemaParticle particle, XmlSchema parentSchema)
	{
		return default(bool);
	}

	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x2669120", Offset = "0x2667720", VA = "0x182669120")]
	internal static bool HasAttributeQNameRef(XmlSchemaObjectCollection attributes)
	{
		return default(bool);
	}
}
