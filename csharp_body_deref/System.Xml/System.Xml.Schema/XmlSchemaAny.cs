using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020F")]
public class XmlSchemaAny : XmlSchemaParticle
{
	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x78")]
	private string ns;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaContentProcessing processContents;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0x88")]
	private NamespaceList namespaceList;

	[Token(Token = "0x1700059D")]
	[XmlAttribute("namespace")]
	public string Namespace
	{
		[Token(Token = "0x600152A")]
		[Address(RVA = "0x43E0860", Offset = "0x43E0860", VA = "0x43E0860")]
		get
		{
			return null;
		}
		[Token(Token = "0x600152B")]
		[Address(RVA = "0x43E0870", Offset = "0x43E0870", VA = "0x43E0870")]
		set
		{
		}
	}

	[Token(Token = "0x1700059E")]
	[XmlAttribute("processContents")]
	[DefaultValue(XmlSchemaContentProcessing.None)]
	public XmlSchemaContentProcessing ProcessContents
	{
		[Token(Token = "0x600152C")]
		[Address(RVA = "0x43E0880", Offset = "0x43E0880", VA = "0x43E0880")]
		set
		{
		}
	}

	[Token(Token = "0x1700059F")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x600152D")]
		[Address(RVA = "0x43E0890", Offset = "0x43E0890", VA = "0x43E0890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A0")]
	[XmlIgnore]
	internal string ResolvedNamespace
	{
		[Token(Token = "0x600152E")]
		[Address(RVA = "0x43E08A0", Offset = "0x43E08A0", VA = "0x43E08A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A1")]
	[XmlIgnore]
	internal XmlSchemaContentProcessing ProcessContentsCorrect
	{
		[Token(Token = "0x600152F")]
		[Address(RVA = "0x43E08F0", Offset = "0x43E08F0", VA = "0x43E08F0")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x170005A2")]
	internal override string NameString
	{
		[Token(Token = "0x6001530")]
		[Address(RVA = "0x43E0910", Offset = "0x43E0910", VA = "0x43E0910", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x43E0F30", Offset = "0x43E0F30", VA = "0x43E0F30")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x43E0FC0", Offset = "0x43E0FC0", VA = "0x43E0FC0")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x43E1070", Offset = "0x43E1070", VA = "0x43E1070")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x43E10A0", Offset = "0x43E10A0", VA = "0x43E10A0")]
	public XmlSchemaAny()
	{
	}
}
