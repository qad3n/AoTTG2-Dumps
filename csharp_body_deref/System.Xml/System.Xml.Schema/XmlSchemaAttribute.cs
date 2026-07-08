using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000212")]
public class XmlSchemaAttribute : XmlSchemaAnnotated
{
	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0x50")]
	private string defaultValue;

	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0x58")]
	private string fixedValue;

	[Token(Token = "0x4000B19")]
	[FieldOffset(Offset = "0x60")]
	private string name;

	[Token(Token = "0x4000B1A")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchemaForm form;

	[Token(Token = "0x4000B1B")]
	[FieldOffset(Offset = "0x6C")]
	private XmlSchemaUse use;

	[Token(Token = "0x4000B1C")]
	[FieldOffset(Offset = "0x70")]
	private XmlQualifiedName refName;

	[Token(Token = "0x4000B1D")]
	[FieldOffset(Offset = "0x78")]
	private XmlQualifiedName typeName;

	[Token(Token = "0x4000B1E")]
	[FieldOffset(Offset = "0x80")]
	private XmlQualifiedName qualifiedName;

	[Token(Token = "0x4000B1F")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaSimpleType type;

	[Token(Token = "0x4000B20")]
	[FieldOffset(Offset = "0x90")]
	private XmlSchemaSimpleType attributeType;

	[Token(Token = "0x4000B21")]
	[FieldOffset(Offset = "0x98")]
	private SchemaAttDef attDef;

	[Token(Token = "0x170005A9")]
	[XmlAttribute("default")]
	[DefaultValue(null)]
	public string DefaultValue
	{
		[Token(Token = "0x6001545")]
		[Address(RVA = "0x43E14A0", Offset = "0x43E14A0", VA = "0x43E14A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x43E14B0", Offset = "0x43E14B0", VA = "0x43E14B0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AA")]
	[DefaultValue(null)]
	[XmlAttribute("fixed")]
	public string FixedValue
	{
		[Token(Token = "0x6001547")]
		[Address(RVA = "0x43E14C0", Offset = "0x43E14C0", VA = "0x43E14C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001548")]
		[Address(RVA = "0x43E14D0", Offset = "0x43E14D0", VA = "0x43E14D0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AB")]
	[DefaultValue(XmlSchemaForm.None)]
	[XmlAttribute("form")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6001549")]
		[Address(RVA = "0x43E14E0", Offset = "0x43E14E0", VA = "0x43E14E0")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x600154A")]
		[Address(RVA = "0x43E14F0", Offset = "0x43E14F0", VA = "0x43E14F0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AC")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x600154B")]
		[Address(RVA = "0x43E1500", Offset = "0x43E1500", VA = "0x43E1500")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x43E1510", Offset = "0x43E1510", VA = "0x43E1510")]
		set
		{
		}
	}

	[Token(Token = "0x170005AD")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x43E1520", Offset = "0x43E1520", VA = "0x43E1520")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154E")]
		[Address(RVA = "0x43E1530", Offset = "0x43E1530", VA = "0x43E1530")]
		set
		{
		}
	}

	[Token(Token = "0x170005AE")]
	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		[Token(Token = "0x600154F")]
		[Address(RVA = "0x43E15C0", Offset = "0x43E15C0", VA = "0x43E15C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001550")]
		[Address(RVA = "0x43E15D0", Offset = "0x43E15D0", VA = "0x43E15D0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AF")]
	[XmlElement("simpleType")]
	public XmlSchemaSimpleType SchemaType
	{
		[Token(Token = "0x6001551")]
		[Address(RVA = "0x43E1660", Offset = "0x43E1660", VA = "0x43E1660")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001552")]
		[Address(RVA = "0x43E1670", Offset = "0x43E1670", VA = "0x43E1670")]
		set
		{
		}
	}

	[Token(Token = "0x170005B0")]
	[DefaultValue(XmlSchemaUse.None)]
	[XmlAttribute("use")]
	public XmlSchemaUse Use
	{
		[Token(Token = "0x6001553")]
		[Address(RVA = "0x43E1690", Offset = "0x43E1690", VA = "0x43E1690")]
		get
		{
			return default(XmlSchemaUse);
		}
		[Token(Token = "0x6001554")]
		[Address(RVA = "0x43E16A0", Offset = "0x43E16A0", VA = "0x43E16A0")]
		set
		{
		}
	}

	[Token(Token = "0x170005B1")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001555")]
		[Address(RVA = "0x43E16B0", Offset = "0x43E16B0", VA = "0x43E16B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B2")]
	[XmlIgnore]
	public XmlSchemaSimpleType AttributeSchemaType
	{
		[Token(Token = "0x6001556")]
		[Address(RVA = "0x43E16C0", Offset = "0x43E16C0", VA = "0x43E16C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B3")]
	[XmlIgnore]
	internal XmlSchemaDatatype Datatype
	{
		[Token(Token = "0x6001557")]
		[Address(RVA = "0x43E16D0", Offset = "0x43E16D0", VA = "0x43E16D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B4")]
	internal SchemaAttDef AttDef
	{
		[Token(Token = "0x600155A")]
		[Address(RVA = "0x43E1720", Offset = "0x43E1720", VA = "0x43E1720")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155B")]
		[Address(RVA = "0x43E1730", Offset = "0x43E1730", VA = "0x43E1730")]
		set
		{
		}
	}

	[Token(Token = "0x170005B5")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600155C")]
		[Address(RVA = "0x43E1750", Offset = "0x43E1750", VA = "0x43E1750", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x43E1760", Offset = "0x43E1760", VA = "0x43E1760", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x43E16F0", Offset = "0x43E16F0", VA = "0x43E16F0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x43E1700", Offset = "0x43E1700", VA = "0x43E1700")]
	internal void SetAttributeType(XmlSchemaSimpleType value)
	{
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x43E1770", Offset = "0x43E1770", VA = "0x43E1770", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x43E1860", Offset = "0x43E1860", VA = "0x43E1860")]
	public XmlSchemaAttribute()
	{
	}
}
