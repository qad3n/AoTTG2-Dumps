// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAnyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000210")]
public class XmlSchemaAnyAttribute : XmlSchemaAnnotated
{
	[Token(Token = "0x4000B12")]
	[FieldOffset(Offset = "0x50")]
	private string ns;

	[Token(Token = "0x4000B13")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaContentProcessing processContents;

	[Token(Token = "0x4000B14")]
	[FieldOffset(Offset = "0x60")]
	private NamespaceList namespaceList;

	[Token(Token = "0x170005A3")]
	[XmlAttribute("namespace")]
	public string Namespace
	{
		[Token(Token = "0x6001535")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x170005A4")]
	[DefaultValue(XmlSchemaContentProcessing.None)]
	[XmlAttribute("processContents")]
	public XmlSchemaContentProcessing ProcessContents
	{
		[Token(Token = "0x6001536")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
		[Token(Token = "0x6001537")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x170005A5")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x6001538")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A6")]
	[XmlIgnore]
	internal XmlSchemaContentProcessing ProcessContentsCorrect
	{
		[Token(Token = "0x6001539")]
		[Address(RVA = "0x2665980", Offset = "0x2663F80", VA = "0x182665980")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x26656F0", Offset = "0x2663CF0", VA = "0x1826656F0")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x2665640", Offset = "0x2663C40", VA = "0x182665640")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x2665600", Offset = "0x2663C00", VA = "0x182665600")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x2665870", Offset = "0x2663E70", VA = "0x182665870")]
	internal static bool IsSubset(XmlSchemaAnyAttribute sub, XmlSchemaAnyAttribute super)
	{
		return default(bool);
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x2665790", Offset = "0x2663D90", VA = "0x182665790")]
	internal static XmlSchemaAnyAttribute Intersection(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x26658A0", Offset = "0x2663EA0", VA = "0x1826658A0")]
	internal static XmlSchemaAnyAttribute Union(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XmlSchemaAnyAttribute()
	{
	}
}
