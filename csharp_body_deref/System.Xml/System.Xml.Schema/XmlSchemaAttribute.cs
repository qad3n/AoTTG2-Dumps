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
		[Address(RVA = "0x471EC00", Offset = "0x471EC00", VA = "0x471EC00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x471EC10", Offset = "0x471EC10", VA = "0x471EC10")]
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
		[Address(RVA = "0x471EC20", Offset = "0x471EC20", VA = "0x471EC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001548")]
		[Address(RVA = "0x471EC30", Offset = "0x471EC30", VA = "0x471EC30")]
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
		[Address(RVA = "0x471EC40", Offset = "0x471EC40", VA = "0x471EC40")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x600154A")]
		[Address(RVA = "0x471EC50", Offset = "0x471EC50", VA = "0x471EC50")]
		set
		{
		}
	}

	[Token(Token = "0x170005AC")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x600154B")]
		[Address(RVA = "0x471EC60", Offset = "0x471EC60", VA = "0x471EC60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x471EC70", Offset = "0x471EC70", VA = "0x471EC70")]
		set
		{
		}
	}

	[Token(Token = "0x170005AD")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x471EC80", Offset = "0x471EC80", VA = "0x471EC80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154E")]
		[Address(RVA = "0x471EC90", Offset = "0x471EC90", VA = "0x471EC90")]
		set
		{
		}
	}

	[Token(Token = "0x170005AE")]
	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		[Token(Token = "0x600154F")]
		[Address(RVA = "0x471ED20", Offset = "0x471ED20", VA = "0x471ED20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001550")]
		[Address(RVA = "0x471ED30", Offset = "0x471ED30", VA = "0x471ED30")]
		set
		{
		}
	}

	[Token(Token = "0x170005AF")]
	[XmlElement("simpleType")]
	public XmlSchemaSimpleType SchemaType
	{
		[Token(Token = "0x6001551")]
		[Address(RVA = "0x471EDC0", Offset = "0x471EDC0", VA = "0x471EDC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001552")]
		[Address(RVA = "0x471EDD0", Offset = "0x471EDD0", VA = "0x471EDD0")]
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
		[Address(RVA = "0x471EDF0", Offset = "0x471EDF0", VA = "0x471EDF0")]
		get
		{
			return default(XmlSchemaUse);
		}
		[Token(Token = "0x6001554")]
		[Address(RVA = "0x471EE00", Offset = "0x471EE00", VA = "0x471EE00")]
		set
		{
		}
	}

	[Token(Token = "0x170005B1")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001555")]
		[Address(RVA = "0x471EE10", Offset = "0x471EE10", VA = "0x471EE10")]
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
		[Address(RVA = "0x471EE20", Offset = "0x471EE20", VA = "0x471EE20")]
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
		[Address(RVA = "0x471EE30", Offset = "0x471EE30", VA = "0x471EE30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B4")]
	internal SchemaAttDef AttDef
	{
		[Token(Token = "0x600155A")]
		[Address(RVA = "0x471EE80", Offset = "0x471EE80", VA = "0x471EE80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155B")]
		[Address(RVA = "0x471EE90", Offset = "0x471EE90", VA = "0x471EE90")]
		set
		{
		}
	}

	[Token(Token = "0x170005B5")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600155C")]
		[Address(RVA = "0x471EEB0", Offset = "0x471EEB0", VA = "0x471EEB0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x471EEC0", Offset = "0x471EEC0", VA = "0x471EEC0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x471EE50", Offset = "0x471EE50", VA = "0x471EE50")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x471EE60", Offset = "0x471EE60", VA = "0x471EE60")]
	internal void SetAttributeType(XmlSchemaSimpleType value)
	{
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x471EED0", Offset = "0x471EED0", VA = "0x471EED0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x471EFC0", Offset = "0x471EFC0", VA = "0x471EFC0")]
	public XmlSchemaAttribute()
	{
	}
}
