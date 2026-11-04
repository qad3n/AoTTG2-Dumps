// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166D")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
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
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166F")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x17000627")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001670")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
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
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000629")]
	[XmlIgnore]
	internal XmlSchemaGroup Redefined
	{
		[Token(Token = "0x6001673")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001674")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		set
		{
		}
	}

	[Token(Token = "0x1700062A")]
	[XmlIgnore]
	internal int SelfReferenceCount
	{
		[Token(Token = "0x6001675")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001676")]
		[Address(RVA = "0x58A990", Offset = "0x588F90", VA = "0x18058A990")]
		set
		{
		}
	}

	[Token(Token = "0x1700062B")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x6001677")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001678")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x266C660", Offset = "0x266AC60", VA = "0x18266C660", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x266C460", Offset = "0x266AA60", VA = "0x18266C460")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x266C670", Offset = "0x266AC70", VA = "0x18266C670")]
	public XmlSchemaGroup()
	{
	}
}
