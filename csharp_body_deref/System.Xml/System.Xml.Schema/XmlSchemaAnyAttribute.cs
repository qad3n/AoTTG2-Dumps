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
		[Address(RVA = "0x43E1110", Offset = "0x43E1110", VA = "0x43E1110")]
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
		[Address(RVA = "0x43E1120", Offset = "0x43E1120", VA = "0x43E1120")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
		[Token(Token = "0x6001537")]
		[Address(RVA = "0x43E1130", Offset = "0x43E1130", VA = "0x43E1130")]
		set
		{
		}
	}

	[Token(Token = "0x170005A5")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x6001538")]
		[Address(RVA = "0x43E1140", Offset = "0x43E1140", VA = "0x43E1140")]
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
		[Address(RVA = "0x43E1150", Offset = "0x43E1150", VA = "0x43E1150")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x43E1160", Offset = "0x43E1160", VA = "0x43E1160")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x43E11E0", Offset = "0x43E11E0", VA = "0x43E11E0")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x43E1280", Offset = "0x43E1280", VA = "0x43E1280")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x43E12B0", Offset = "0x43E12B0", VA = "0x43E12B0")]
	internal static bool IsSubset(XmlSchemaAnyAttribute sub, XmlSchemaAnyAttribute super)
	{
		return default(bool);
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x43E12D0", Offset = "0x43E12D0", VA = "0x43E12D0")]
	internal static XmlSchemaAnyAttribute Intersection(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x43E13A0", Offset = "0x43E13A0", VA = "0x43E13A0")]
	internal static XmlSchemaAnyAttribute Union(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x43E1390", Offset = "0x43E1390", VA = "0x43E1390")]
	public XmlSchemaAnyAttribute()
	{
	}
}
