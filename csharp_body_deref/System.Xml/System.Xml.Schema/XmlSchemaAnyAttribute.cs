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
		[Address(RVA = "0x471E870", Offset = "0x471E870", VA = "0x471E870")]
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
		[Address(RVA = "0x471E880", Offset = "0x471E880", VA = "0x471E880")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
		[Token(Token = "0x6001537")]
		[Address(RVA = "0x471E890", Offset = "0x471E890", VA = "0x471E890")]
		set
		{
		}
	}

	[Token(Token = "0x170005A5")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x6001538")]
		[Address(RVA = "0x471E8A0", Offset = "0x471E8A0", VA = "0x471E8A0")]
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
		[Address(RVA = "0x471E8B0", Offset = "0x471E8B0", VA = "0x471E8B0")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x471E8C0", Offset = "0x471E8C0", VA = "0x471E8C0")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x471E940", Offset = "0x471E940", VA = "0x471E940")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x471E9E0", Offset = "0x471E9E0", VA = "0x471E9E0")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x471EA10", Offset = "0x471EA10", VA = "0x471EA10")]
	internal static bool IsSubset(XmlSchemaAnyAttribute sub, XmlSchemaAnyAttribute super)
	{
		return default(bool);
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x471EA30", Offset = "0x471EA30", VA = "0x471EA30")]
	internal static XmlSchemaAnyAttribute Intersection(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x471EB00", Offset = "0x471EB00", VA = "0x471EB00")]
	internal static XmlSchemaAnyAttribute Union(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x471EAF0", Offset = "0x471EAF0", VA = "0x471EAF0")]
	public XmlSchemaAnyAttribute()
	{
	}
}
