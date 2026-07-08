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
		[Address(RVA = "0x43F6100", Offset = "0x43F6100", VA = "0x43F6100")]
		get
		{
			return null;
		}
		[Token(Token = "0x600178B")]
		[Address(RVA = "0x43F6110", Offset = "0x43F6110", VA = "0x43F6110")]
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
		[Address(RVA = "0x43F6120", Offset = "0x43F6120", VA = "0x43F6120")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x600178D")]
		[Address(RVA = "0x43F6130", Offset = "0x43F6130", VA = "0x43F6130")]
		set
		{
		}
	}

	[Token(Token = "0x17000691")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x43F4D60", Offset = "0x43F4D60", VA = "0x43F4D60")]
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
		[Address(RVA = "0x43F6140", Offset = "0x43F6140", VA = "0x43F6140")]
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
		[Address(RVA = "0x43F6150", Offset = "0x43F6150", VA = "0x43F6150")]
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
		[Address(RVA = "0x43F6160", Offset = "0x43F6160", VA = "0x43F6160")]
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
		[Address(RVA = "0x43F6170", Offset = "0x43F6170", VA = "0x43F6170")]
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
		[Address(RVA = "0x43F6180", Offset = "0x43F6180", VA = "0x43F6180", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001794")]
		[Address(RVA = "0x43F6190", Offset = "0x43F6190", VA = "0x43F6190", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000697")]
	[XmlIgnore]
	public XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x43F61A0", Offset = "0x43F61A0", VA = "0x43F61A0")]
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
		[Address(RVA = "0x43F62A0", Offset = "0x43F62A0", VA = "0x43F62A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000699")]
	internal XmlSchemaContentType SchemaContentType
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x43F6310", Offset = "0x43F6310", VA = "0x43F6310")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x1700069A")]
	internal SchemaElementDecl ElementDecl
	{
		[Token(Token = "0x600179D")]
		[Address(RVA = "0x43F6390", Offset = "0x43F6390", VA = "0x43F6390")]
		get
		{
			return null;
		}
		[Token(Token = "0x600179E")]
		[Address(RVA = "0x43F63A0", Offset = "0x43F63A0", VA = "0x43F63A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700069B")]
	[XmlIgnore]
	internal XmlSchemaType Redefined
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0x43F63D0", Offset = "0x43F63D0", VA = "0x43F63D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x43F63E0", Offset = "0x43F63E0", VA = "0x43F63E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700069C")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x43F67A0", Offset = "0x43F67A0", VA = "0x43F67A0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x43F67B0", Offset = "0x43F67B0", VA = "0x43F67B0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x43F5CC0", Offset = "0x43F5CC0", VA = "0x43F5CC0")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x43F5D90", Offset = "0x43F5D90", VA = "0x43F5D90")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x43F5DF0", Offset = "0x43F5DF0", VA = "0x43F5DF0")]
	public static XmlSchemaComplexType GetBuiltInComplexType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x43F6320", Offset = "0x43F6320", VA = "0x43F6320")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x43F6350", Offset = "0x43F6350", VA = "0x43F6350")]
	internal void SetFinalResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x43F6360", Offset = "0x43F6360", VA = "0x43F6360")]
	internal void SetBaseSchemaType(XmlSchemaType value)
	{
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x43F6370", Offset = "0x43F6370", VA = "0x43F6370")]
	internal void SetDerivedBy(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x43F6380", Offset = "0x43F6380", VA = "0x43F6380")]
	internal void SetDatatype(XmlSchemaDatatype value)
	{
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x43F6400", Offset = "0x43F6400", VA = "0x43F6400")]
	internal void SetContentType(XmlSchemaContentType value)
	{
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x43F6410", Offset = "0x43F6410", VA = "0x43F6410")]
	public static bool IsDerivedFrom(XmlSchemaType derivedType, XmlSchemaType baseType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x43F6680", Offset = "0x43F6680", VA = "0x43F6680")]
	internal static bool IsDerivedFromDatatype(XmlSchemaDatatype derivedDataType, XmlSchemaDatatype baseDataType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x43F5370", Offset = "0x43F5370", VA = "0x43F5370")]
	public XmlSchemaType()
	{
	}
}
