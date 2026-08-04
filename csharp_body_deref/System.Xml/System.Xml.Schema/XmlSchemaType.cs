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
		[Address(RVA = "0x4733860", Offset = "0x4733860", VA = "0x4733860")]
		get
		{
			return null;
		}
		[Token(Token = "0x600178B")]
		[Address(RVA = "0x4733870", Offset = "0x4733870", VA = "0x4733870")]
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
		[Address(RVA = "0x4733880", Offset = "0x4733880", VA = "0x4733880")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x600178D")]
		[Address(RVA = "0x4733890", Offset = "0x4733890", VA = "0x4733890")]
		set
		{
		}
	}

	[Token(Token = "0x17000691")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x47324C0", Offset = "0x47324C0", VA = "0x47324C0")]
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
		[Address(RVA = "0x47338A0", Offset = "0x47338A0", VA = "0x47338A0")]
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
		[Address(RVA = "0x47338B0", Offset = "0x47338B0", VA = "0x47338B0")]
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
		[Address(RVA = "0x47338C0", Offset = "0x47338C0", VA = "0x47338C0")]
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
		[Address(RVA = "0x47338D0", Offset = "0x47338D0", VA = "0x47338D0")]
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
		[Address(RVA = "0x47338E0", Offset = "0x47338E0", VA = "0x47338E0", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001794")]
		[Address(RVA = "0x47338F0", Offset = "0x47338F0", VA = "0x47338F0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000697")]
	[XmlIgnore]
	public XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x4733900", Offset = "0x4733900", VA = "0x4733900")]
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
		[Address(RVA = "0x4733A00", Offset = "0x4733A00", VA = "0x4733A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000699")]
	internal XmlSchemaContentType SchemaContentType
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x4733A70", Offset = "0x4733A70", VA = "0x4733A70")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x1700069A")]
	internal SchemaElementDecl ElementDecl
	{
		[Token(Token = "0x600179D")]
		[Address(RVA = "0x4733AF0", Offset = "0x4733AF0", VA = "0x4733AF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600179E")]
		[Address(RVA = "0x4733B00", Offset = "0x4733B00", VA = "0x4733B00")]
		set
		{
		}
	}

	[Token(Token = "0x1700069B")]
	[XmlIgnore]
	internal XmlSchemaType Redefined
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0x4733B30", Offset = "0x4733B30", VA = "0x4733B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A0")]
		[Address(RVA = "0x4733B40", Offset = "0x4733B40", VA = "0x4733B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700069C")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x60017A4")]
		[Address(RVA = "0x4733F00", Offset = "0x4733F00", VA = "0x4733F00", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A5")]
		[Address(RVA = "0x4733F10", Offset = "0x4733F10", VA = "0x4733F10", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x4733420", Offset = "0x4733420", VA = "0x4733420")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x47334F0", Offset = "0x47334F0", VA = "0x47334F0")]
	public static XmlSchemaSimpleType GetBuiltInSimpleType(XmlTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x4733550", Offset = "0x4733550", VA = "0x4733550")]
	public static XmlSchemaComplexType GetBuiltInComplexType(XmlQualifiedName qualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x4733A80", Offset = "0x4733A80", VA = "0x4733A80")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x4733AB0", Offset = "0x4733AB0", VA = "0x4733AB0")]
	internal void SetFinalResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x4733AC0", Offset = "0x4733AC0", VA = "0x4733AC0")]
	internal void SetBaseSchemaType(XmlSchemaType value)
	{
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x4733AD0", Offset = "0x4733AD0", VA = "0x4733AD0")]
	internal void SetDerivedBy(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x4733AE0", Offset = "0x4733AE0", VA = "0x4733AE0")]
	internal void SetDatatype(XmlSchemaDatatype value)
	{
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x4733B60", Offset = "0x4733B60", VA = "0x4733B60")]
	internal void SetContentType(XmlSchemaContentType value)
	{
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x4733B70", Offset = "0x4733B70", VA = "0x4733B70")]
	public static bool IsDerivedFrom(XmlSchemaType derivedType, XmlSchemaType baseType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x4733DE0", Offset = "0x4733DE0", VA = "0x4733DE0")]
	internal static bool IsDerivedFromDatatype(XmlSchemaDatatype derivedDataType, XmlSchemaDatatype baseDataType, XmlSchemaDerivationMethod except)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x4732AD0", Offset = "0x4732AD0", VA = "0x4732AD0")]
	public XmlSchemaType()
	{
	}
}
