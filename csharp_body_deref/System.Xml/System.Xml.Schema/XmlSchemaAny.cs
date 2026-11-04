// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAny
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600152B")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
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
		[Address(RVA = "0xB5BE20", Offset = "0xB5A420", VA = "0x180B5BE20")]
		set
		{
		}
	}

	[Token(Token = "0x1700059F")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x600152D")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
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
		[Address(RVA = "0x2665F70", Offset = "0x2664570", VA = "0x182665F70")]
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
		[Address(RVA = "0x2665F50", Offset = "0x2664550", VA = "0x182665F50")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x170005A2")]
	internal override string NameString
	{
		[Token(Token = "0x6001530")]
		[Address(RVA = "0x2665B70", Offset = "0x2664170", VA = "0x182665B70", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x2665A80", Offset = "0x2664080", VA = "0x182665A80")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x26659D0", Offset = "0x2663FD0", VA = "0x1826659D0")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x2665990", Offset = "0x2663F90", VA = "0x182665990")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x2665B20", Offset = "0x2664120", VA = "0x182665B20")]
	public XmlSchemaAny()
	{
	}
}
