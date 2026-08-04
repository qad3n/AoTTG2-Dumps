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
		[Address(RVA = "0x471DFC0", Offset = "0x471DFC0", VA = "0x471DFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600152B")]
		[Address(RVA = "0x471DFD0", Offset = "0x471DFD0", VA = "0x471DFD0")]
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
		[Address(RVA = "0x471DFE0", Offset = "0x471DFE0", VA = "0x471DFE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700059F")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x600152D")]
		[Address(RVA = "0x471DFF0", Offset = "0x471DFF0", VA = "0x471DFF0")]
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
		[Address(RVA = "0x471E000", Offset = "0x471E000", VA = "0x471E000")]
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
		[Address(RVA = "0x471E050", Offset = "0x471E050", VA = "0x471E050")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x170005A2")]
	internal override string NameString
	{
		[Token(Token = "0x6001530")]
		[Address(RVA = "0x471E070", Offset = "0x471E070", VA = "0x471E070", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x471E690", Offset = "0x471E690", VA = "0x471E690")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x471E720", Offset = "0x471E720", VA = "0x471E720")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x471E7D0", Offset = "0x471E7D0", VA = "0x471E7D0")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x471E800", Offset = "0x471E800", VA = "0x471E800")]
	public XmlSchemaAny()
	{
	}
}
