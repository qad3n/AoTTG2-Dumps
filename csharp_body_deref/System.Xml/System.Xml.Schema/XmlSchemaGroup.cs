using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000238")]
public class XmlSchemaGroup : XmlSchemaAnnotated
{
	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x50")]
	private string name;

	[Token(Token = "0x4000BA1")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaGroupBase particle;

	[Token(Token = "0x4000BA2")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaParticle canonicalParticle;

	[Token(Token = "0x4000BA3")]
	[FieldOffset(Offset = "0x68")]
	private XmlQualifiedName qname;

	[Token(Token = "0x4000BA4")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaGroup redefined;

	[Token(Token = "0x4000BA5")]
	[FieldOffset(Offset = "0x78")]
	private int selfReferenceCount;

	[Token(Token = "0x17000625")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x600166C")]
		[Address(RVA = "0x43E7640", Offset = "0x43E7640", VA = "0x43E7640")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166D")]
		[Address(RVA = "0x43E7650", Offset = "0x43E7650", VA = "0x43E7650")]
		set
		{
		}
	}

	[Token(Token = "0x17000626")]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	[XmlElement("all", typeof(XmlSchemaAll))]
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	public XmlSchemaGroupBase Particle
	{
		[Token(Token = "0x600166E")]
		[Address(RVA = "0x43E7660", Offset = "0x43E7660", VA = "0x43E7660")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166F")]
		[Address(RVA = "0x43E7670", Offset = "0x43E7670", VA = "0x43E7670")]
		set
		{
		}
	}

	[Token(Token = "0x17000627")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001670")]
		[Address(RVA = "0x43E7680", Offset = "0x43E7680", VA = "0x43E7680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000628")]
	[XmlIgnore]
	internal XmlSchemaParticle CanonicalParticle
	{
		[Token(Token = "0x6001671")]
		[Address(RVA = "0x43E7690", Offset = "0x43E7690", VA = "0x43E7690")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x43E76A0", Offset = "0x43E76A0", VA = "0x43E76A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000629")]
	[XmlIgnore]
	internal XmlSchemaGroup Redefined
	{
		[Token(Token = "0x6001673")]
		[Address(RVA = "0x43E76B0", Offset = "0x43E76B0", VA = "0x43E76B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001674")]
		[Address(RVA = "0x43E76C0", Offset = "0x43E76C0", VA = "0x43E76C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700062A")]
	[XmlIgnore]
	internal int SelfReferenceCount
	{
		[Token(Token = "0x6001675")]
		[Address(RVA = "0x43E76D0", Offset = "0x43E76D0", VA = "0x43E76D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001676")]
		[Address(RVA = "0x43E76E0", Offset = "0x43E76E0", VA = "0x43E76E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700062B")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x6001677")]
		[Address(RVA = "0x43E76F0", Offset = "0x43E76F0", VA = "0x43E76F0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001678")]
		[Address(RVA = "0x43E7700", Offset = "0x43E7700", VA = "0x43E7700", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x43E7710", Offset = "0x43E7710", VA = "0x43E7710")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x43E7720", Offset = "0x43E7720", VA = "0x43E7720", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x43DFF90", Offset = "0x43DFF90", VA = "0x43DFF90")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x43E7730", Offset = "0x43E7730", VA = "0x43E7730")]
	public XmlSchemaGroup()
	{
	}
}
