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
		[Address(RVA = "0x4724DA0", Offset = "0x4724DA0", VA = "0x4724DA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166D")]
		[Address(RVA = "0x4724DB0", Offset = "0x4724DB0", VA = "0x4724DB0")]
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
		[Address(RVA = "0x4724DC0", Offset = "0x4724DC0", VA = "0x4724DC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600166F")]
		[Address(RVA = "0x4724DD0", Offset = "0x4724DD0", VA = "0x4724DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000627")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001670")]
		[Address(RVA = "0x4724DE0", Offset = "0x4724DE0", VA = "0x4724DE0")]
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
		[Address(RVA = "0x4724DF0", Offset = "0x4724DF0", VA = "0x4724DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x4724E00", Offset = "0x4724E00", VA = "0x4724E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000629")]
	[XmlIgnore]
	internal XmlSchemaGroup Redefined
	{
		[Token(Token = "0x6001673")]
		[Address(RVA = "0x4724E10", Offset = "0x4724E10", VA = "0x4724E10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001674")]
		[Address(RVA = "0x4724E20", Offset = "0x4724E20", VA = "0x4724E20")]
		set
		{
		}
	}

	[Token(Token = "0x1700062A")]
	[XmlIgnore]
	internal int SelfReferenceCount
	{
		[Token(Token = "0x6001675")]
		[Address(RVA = "0x4724E30", Offset = "0x4724E30", VA = "0x4724E30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001676")]
		[Address(RVA = "0x4724E40", Offset = "0x4724E40", VA = "0x4724E40")]
		set
		{
		}
	}

	[Token(Token = "0x1700062B")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x6001677")]
		[Address(RVA = "0x4724E50", Offset = "0x4724E50", VA = "0x4724E50", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001678")]
		[Address(RVA = "0x4724E60", Offset = "0x4724E60", VA = "0x4724E60", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x4724E70", Offset = "0x4724E70", VA = "0x4724E70")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x4724E80", Offset = "0x4724E80", VA = "0x4724E80", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x471D6F0", Offset = "0x471D6F0", VA = "0x471D6F0")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x4724E90", Offset = "0x4724E90", VA = "0x4724E90")]
	public XmlSchemaGroup()
	{
	}
}
