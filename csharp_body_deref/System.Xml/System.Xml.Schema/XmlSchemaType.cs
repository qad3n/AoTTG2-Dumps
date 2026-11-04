// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200025D")]
public class XmlSchemaType : XmlSchemaAnnotated
{
	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x50")]
	private string name;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaDerivationMethod final;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x5C")]
	private XmlSchemaDerivationMethod derivedBy;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaType baseSchemaType;

	[Token(Token = "0x4000C12")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchemaDatatype datatype;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaDerivationMethod finalResolved;

	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x78")]
	private SchemaElementDecl elementDecl;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x80")]
	private XmlQualifiedName qname;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaType redefined;

	[Token(Token = "0x4000C17")]
	[FieldOffset(Offset = "0x90")]
	private XmlSchemaContentType contentType;

	[Token(Token = "0x1700068F")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x600178A")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600178B")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000690")]
	[XmlAttribute("final")]
	[DefaultValue(XmlSchemaDerivationMethod.None)]
	public XmlSchemaDerivationMethod Final
	{
		[Token(Token = "0x600178C")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x600178D")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000691")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x267FE10", Offset = "0x267E410", VA = "0x18267FE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000692")]
	[XmlIgnore]
	public XmlSchemaDerivationMethod FinalResolved
	{
		[Token(Token = "0x600178F")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
	}

	[Token(Token = "0x17000693")]
	[XmlIgnore]
	public XmlSchemaType BaseXmlSchemaType
	{
		[Token(Token = "0x6001790")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000694")]
	[XmlIgnore]
	public XmlSchemaDerivationMethod DerivedBy
	{
		[Token(Token = "0x6001791")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
	}

	[Token(Token = "0x17000695")]
	[XmlIgnore]
	public XmlSchemaDatatype Datatype
	{
		[Token(Token = "0x6001792")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000696")]
	[XmlIgnore]
	public virtual bool IsMixed
	{
		[Token(Token = "0x6001793")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001794")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000697")]
	[XmlIgnore]
	public XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x267FE30", Offset = "0x267E430", VA = "0x18267FE30")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000698")]
	[XmlIgnore]
	internal XmlValueConverter ValueConverter
	{
		[Token(Token = "0x6001796")]
		[Address(RVA = "0x267FEF0", Offset = "0x267E4F0", VA = "0x18267FEF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000699")]
	internal XmlSchemaContentType SchemaContentType
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x1700069A")]
	internal SchemaElementDecl ElementDecl
	{
		[Token(Token = "0x600179D")]
		[Address(RVA = "0x267FDF0", Offset = "0x267E3F0", VA = "0x18267FDF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600179E")]
		[Address(RVA = "0x267FF70", Offset = "0x267E570", VA = "0x18267FF70")]
		set
		{
		}
	}

	[Token(Token = "0x1700069B")]
	[XmlIgnore]
	internal XmlSchemaType Redefined
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700069C")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x267FA40", Offset = "0x267E040", VA = "0x18267FA40")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x267FB10", Offset = "0x267E110", VA = "0x18267FB10")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x267F7E0", Offset = "0x267DDE0", VA = "0x18267F7E0")]
	public static XmlSchemaComplexType GetBuiltInComplexType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x267FDB0", Offset = "0x267E3B0", VA = "0x18267FDB0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x58A8F0", Offset = "0x588EF0", VA = "0x18058A8F0")]
	internal void SetFinalResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
	internal void SetBaseSchemaType(XmlSchemaType value)
	{
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
	internal void SetDerivedBy(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
	internal void SetDatatype(XmlSchemaDatatype value)
	{
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0xE92690", Offset = "0xE90C90", VA = "0x180E92690")]
	internal void SetContentType(XmlSchemaContentType value)
	{
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x267FC30", Offset = "0x267E230", VA = "0x18267FC30")]
	public static bool IsDerivedFrom(XmlSchemaType derivedType, XmlSchemaType baseType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x267FB60", Offset = "0x267E160", VA = "0x18267FB60")]
	internal static bool IsDerivedFromDatatype(XmlSchemaDatatype derivedDataType, XmlSchemaDatatype baseDataType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x267F5B0", Offset = "0x267DBB0", VA = "0x18267F5B0")]
	public XmlSchemaType()
	{
	}
}
