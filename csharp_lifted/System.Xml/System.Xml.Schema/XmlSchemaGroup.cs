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
		[Address(RVA = "0x602CEE0", Offset = "0x602BEE0", VA = "0x602CEE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166D")]
		[Address(RVA = "0x602CEF0", Offset = "0x602BEF0", VA = "0x602CEF0")]
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
		[Address(RVA = "0x602CF00", Offset = "0x602BF00", VA = "0x602CF00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166F")]
		[Address(RVA = "0x602CF10", Offset = "0x602BF10", VA = "0x602CF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000627")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001670")]
		[Address(RVA = "0x602CF20", Offset = "0x602BF20", VA = "0x602CF20")]
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
		[Address(RVA = "0x602CF30", Offset = "0x602BF30", VA = "0x602CF30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x602CF40", Offset = "0x602BF40", VA = "0x602CF40")]
		set
		{
		}
	}

	[Token(Token = "0x17000629")]
	[XmlIgnore]
	internal XmlSchemaGroup Redefined
	{
		[Token(Token = "0x6001673")]
		[Address(RVA = "0x602CF50", Offset = "0x602BF50", VA = "0x602CF50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001674")]
		[Address(RVA = "0x602CF60", Offset = "0x602BF60", VA = "0x602CF60")]
		set
		{
		}
	}

	[Token(Token = "0x1700062A")]
	[XmlIgnore]
	internal int SelfReferenceCount
	{
		[Token(Token = "0x6001675")]
		[Address(RVA = "0x602CF70", Offset = "0x602BF70", VA = "0x602CF70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001676")]
		[Address(RVA = "0x602CF80", Offset = "0x602BF80", VA = "0x602CF80")]
		set
		{
		}
	}

	[Token(Token = "0x1700062B")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x6001677")]
		[Address(RVA = "0x602CF90", Offset = "0x602BF90", VA = "0x602CF90", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001678")]
		[Address(RVA = "0x602CFA0", Offset = "0x602BFA0", VA = "0x602CFA0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x602CFB0", Offset = "0x602BFB0", VA = "0x602CFB0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x602CFC0", Offset = "0x602BFC0", VA = "0x602CFC0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x6025930", Offset = "0x6024930", VA = "0x6025930")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x602CFD0", Offset = "0x602BFD0", VA = "0x602CFD0")]
	public XmlSchemaGroup()
	{
	}
}
