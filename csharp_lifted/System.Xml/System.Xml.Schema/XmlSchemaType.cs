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
		[Address(RVA = "0x603A790", Offset = "0x6039790", VA = "0x603A790")]
		get
		{
			return null;
		}
		[Token(Token = "0x600178B")]
		[Address(RVA = "0x603A7A0", Offset = "0x60397A0", VA = "0x603A7A0")]
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
		[Address(RVA = "0x603A7B0", Offset = "0x60397B0", VA = "0x603A7B0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x600178D")]
		[Address(RVA = "0x603A7C0", Offset = "0x60397C0", VA = "0x603A7C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000691")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x60393B0", Offset = "0x60383B0", VA = "0x60393B0")]
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
		[Address(RVA = "0x603A7D0", Offset = "0x60397D0", VA = "0x603A7D0")]
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
		[Address(RVA = "0x603A7E0", Offset = "0x60397E0", VA = "0x603A7E0")]
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
		[Address(RVA = "0x603A7F0", Offset = "0x60397F0", VA = "0x603A7F0")]
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
		[Address(RVA = "0x603A800", Offset = "0x6039800", VA = "0x603A800")]
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
		[Address(RVA = "0x603A810", Offset = "0x6039810", VA = "0x603A810", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001794")]
		[Address(RVA = "0x603A820", Offset = "0x6039820", VA = "0x603A820", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000697")]
	[XmlIgnore]
	public XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x603A830", Offset = "0x6039830", VA = "0x603A830")]
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
		[Address(RVA = "0x603A930", Offset = "0x6039930", VA = "0x603A930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000699")]
	internal XmlSchemaContentType SchemaContentType
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x603A9A0", Offset = "0x60399A0", VA = "0x603A9A0")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x1700069A")]
	internal SchemaElementDecl ElementDecl
	{
		[Token(Token = "0x600179D")]
		[Address(RVA = "0x603AA20", Offset = "0x6039A20", VA = "0x603AA20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600179E")]
		[Address(RVA = "0x603AA30", Offset = "0x6039A30", VA = "0x603AA30")]
		set
		{
		}
	}

	[Token(Token = "0x1700069B")]
	[XmlIgnore]
	internal XmlSchemaType Redefined
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0x603AA60", Offset = "0x6039A60", VA = "0x603AA60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x603AA70", Offset = "0x6039A70", VA = "0x603AA70")]
		set
		{
		}
	}

	[Token(Token = "0x1700069C")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x603ADA0", Offset = "0x6039DA0", VA = "0x603ADA0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x603ADB0", Offset = "0x6039DB0", VA = "0x603ADB0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x603A340", Offset = "0x6039340", VA = "0x603A340")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x603A410", Offset = "0x6039410", VA = "0x603A410")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x603A470", Offset = "0x6039470", VA = "0x603A470")]
	public static XmlSchemaComplexType GetBuiltInComplexType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x603A9B0", Offset = "0x60399B0", VA = "0x603A9B0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x603A9E0", Offset = "0x60399E0", VA = "0x603A9E0")]
	internal void SetFinalResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x603A9F0", Offset = "0x60399F0", VA = "0x603A9F0")]
	internal void SetBaseSchemaType(XmlSchemaType value)
	{
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x603AA00", Offset = "0x6039A00", VA = "0x603AA00")]
	internal void SetDerivedBy(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x603AA10", Offset = "0x6039A10", VA = "0x603AA10")]
	internal void SetDatatype(XmlSchemaDatatype value)
	{
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x603AA90", Offset = "0x6039A90", VA = "0x603AA90")]
	internal void SetContentType(XmlSchemaContentType value)
	{
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x603AAA0", Offset = "0x6039AA0", VA = "0x603AAA0")]
	public static bool IsDerivedFrom(XmlSchemaType derivedType, XmlSchemaType baseType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x603ACA0", Offset = "0x6039CA0", VA = "0x603ACA0")]
	internal static bool IsDerivedFromDatatype(XmlSchemaDatatype derivedDataType, XmlSchemaDatatype baseDataType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x60399D0", Offset = "0x60389D0", VA = "0x60399D0")]
	public XmlSchemaType()
	{
	}
}
