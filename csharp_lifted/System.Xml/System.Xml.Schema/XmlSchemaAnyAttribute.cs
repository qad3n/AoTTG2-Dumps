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
		[Address(RVA = "0x60269D0", Offset = "0x60259D0", VA = "0x60269D0")]
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
		[Address(RVA = "0x60269E0", Offset = "0x60259E0", VA = "0x60269E0")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
		[Token(Token = "0x6001537")]
		[Address(RVA = "0x60269F0", Offset = "0x60259F0", VA = "0x60269F0")]
		set
		{
		}
	}

	[Token(Token = "0x170005A5")]
	[XmlIgnore]
	internal NamespaceList NamespaceList
	{
		[Token(Token = "0x6001538")]
		[Address(RVA = "0x6026A00", Offset = "0x6025A00", VA = "0x6026A00")]
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
		[Address(RVA = "0x6026A10", Offset = "0x6025A10", VA = "0x6026A10")]
		get
		{
			return default(XmlSchemaContentProcessing);
		}
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x6026A20", Offset = "0x6025A20", VA = "0x6026A20")]
	internal void BuildNamespaceList(string targetNamespace)
	{
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x6026AA0", Offset = "0x6025AA0", VA = "0x6026AA0")]
	internal void BuildNamespaceListV1Compat(string targetNamespace)
	{
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x6026B50", Offset = "0x6025B50", VA = "0x6026B50")]
	internal bool Allows(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x6026B80", Offset = "0x6025B80", VA = "0x6026B80")]
	internal static bool IsSubset(XmlSchemaAnyAttribute sub, XmlSchemaAnyAttribute super)
	{
		return default(bool);
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x6026BA0", Offset = "0x6025BA0", VA = "0x6026BA0")]
	internal static XmlSchemaAnyAttribute Intersection(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x6026C70", Offset = "0x6025C70", VA = "0x6026C70")]
	internal static XmlSchemaAnyAttribute Union(XmlSchemaAnyAttribute o1, XmlSchemaAnyAttribute o2, bool v1Compat)
	{
		return null;
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x6026C60", Offset = "0x6025C60", VA = "0x6026C60")]
	public XmlSchemaAnyAttribute()
	{
	}
}
