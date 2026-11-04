// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001546")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
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
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001548")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
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
		[Address(RVA = "0xA4D530", Offset = "0xA4BB30", VA = "0x180A4D530")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x600154A")]
		[Address(RVA = "0xA4D6E0", Offset = "0xA4BCE0", VA = "0x180A4D6E0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AC")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x600154B")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AD")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154E")]
		[Address(RVA = "0x26664F0", Offset = "0x2664AF0", VA = "0x1826664F0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AE")]
	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		[Token(Token = "0x600154F")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001550")]
		[Address(RVA = "0x26665A0", Offset = "0x2664BA0", VA = "0x1826665A0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AF")]
	[XmlElement("simpleType")]
	public XmlSchemaSimpleType SchemaType
	{
		[Token(Token = "0x6001551")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001552")]
		[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
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
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(XmlSchemaUse);
		}
		[Token(Token = "0x6001554")]
		[Address(RVA = "0xACB520", Offset = "0xAC9B20", VA = "0x180ACB520")]
		set
		{
		}
	}

	[Token(Token = "0x170005B1")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001555")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
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
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
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
		[Address(RVA = "0x26664D0", Offset = "0x2664AD0", VA = "0x1826664D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B4")]
	internal SchemaAttDef AttDef
	{
		[Token(Token = "0x600155A")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155B")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		set
		{
		}
	}

	[Token(Token = "0x170005B5")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600155C")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
	internal void SetAttributeType(XmlSchemaSimpleType value)
	{
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x2666320", Offset = "0x2664920", VA = "0x182666320", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x2666420", Offset = "0x2664A20", VA = "0x182666420")]
	public XmlSchemaAttribute()
	{
	}
}
