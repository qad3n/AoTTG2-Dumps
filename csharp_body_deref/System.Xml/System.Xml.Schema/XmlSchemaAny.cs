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
		[Address(RVA = "0x6026200", Offset = "0x6025200", VA = "0x6026200")]
		get
		{
			return null;
		}
		[Token(Token = "0x600152B")]
		[Address(RVA = "0x6026210", Offset = "0x6025210", VA = "0x6026210")]
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
		[Address(RVA = "0x6026220", Offset = "0x6025220", VA = "0x6026220")]
		set
		{
		}
	}

	[Token(Token = "0x1700059F")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x600152D")]
		[Address(RVA = "0x6026230", Offset = "0x6025230", VA = "0x6026230")]
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
		[Address(RVA = "0x6026240", Offset = "0x6025240", VA = "0x6026240")]
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
		[Address(RVA = "0x6026290", Offset = "0x6025290", VA = "0x6026290")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x170005A2")]
	internal override string NameString
	{
		[Token(Token = "0x6001530")]
		[Address(RVA = "0x60262B0", Offset = "0x60252B0", VA = "0x60262B0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x60267E0", Offset = "0x60257E0", VA = "0x60267E0")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x6001532")]
	[Address(RVA = "0x6026870", Offset = "0x6025870", VA = "0x6026870")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x6026930", Offset = "0x6025930", VA = "0x6026930")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x6026960", Offset = "0x6025960", VA = "0x6026960")]
	public XmlSchemaAny()
	{
	}
}
