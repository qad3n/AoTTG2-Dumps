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
		[Address(RVA = "0x6026D70", Offset = "0x6025D70", VA = "0x6026D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001546")]
		[Address(RVA = "0x6026D80", Offset = "0x6025D80", VA = "0x6026D80")]
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
		[Address(RVA = "0x6026D90", Offset = "0x6025D90", VA = "0x6026D90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001548")]
		[Address(RVA = "0x6026DA0", Offset = "0x6025DA0", VA = "0x6026DA0")]
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
		[Address(RVA = "0x6026DB0", Offset = "0x6025DB0", VA = "0x6026DB0")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x600154A")]
		[Address(RVA = "0x6026DC0", Offset = "0x6025DC0", VA = "0x6026DC0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AC")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x600154B")]
		[Address(RVA = "0x6026DD0", Offset = "0x6025DD0", VA = "0x6026DD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154C")]
		[Address(RVA = "0x6026DE0", Offset = "0x6025DE0", VA = "0x6026DE0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AD")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x600154D")]
		[Address(RVA = "0x6026DF0", Offset = "0x6025DF0", VA = "0x6026DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600154E")]
		[Address(RVA = "0x6026E00", Offset = "0x6025E00", VA = "0x6026E00")]
		set
		{
		}
	}

	[Token(Token = "0x170005AE")]
	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		[Token(Token = "0x600154F")]
		[Address(RVA = "0x6026E90", Offset = "0x6025E90", VA = "0x6026E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001550")]
		[Address(RVA = "0x6026EA0", Offset = "0x6025EA0", VA = "0x6026EA0")]
		set
		{
		}
	}

	[Token(Token = "0x170005AF")]
	[XmlElement("simpleType")]
	public XmlSchemaSimpleType SchemaType
	{
		[Token(Token = "0x6001551")]
		[Address(RVA = "0x6026F30", Offset = "0x6025F30", VA = "0x6026F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001552")]
		[Address(RVA = "0x6026F40", Offset = "0x6025F40", VA = "0x6026F40")]
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
		[Address(RVA = "0x6026F60", Offset = "0x6025F60", VA = "0x6026F60")]
		get
		{
			return default(XmlSchemaUse);
		}
		[Token(Token = "0x6001554")]
		[Address(RVA = "0x6026F70", Offset = "0x6025F70", VA = "0x6026F70")]
		set
		{
		}
	}

	[Token(Token = "0x170005B1")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x6001555")]
		[Address(RVA = "0x6026F80", Offset = "0x6025F80", VA = "0x6026F80")]
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
		[Address(RVA = "0x6026F90", Offset = "0x6025F90", VA = "0x6026F90")]
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
		[Address(RVA = "0x6026FA0", Offset = "0x6025FA0", VA = "0x6026FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005B4")]
	internal SchemaAttDef AttDef
	{
		[Token(Token = "0x600155A")]
		[Address(RVA = "0x6026FF0", Offset = "0x6025FF0", VA = "0x6026FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155B")]
		[Address(RVA = "0x6027000", Offset = "0x6026000", VA = "0x6027000")]
		set
		{
		}
	}

	[Token(Token = "0x170005B5")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600155C")]
		[Address(RVA = "0x6027020", Offset = "0x6026020", VA = "0x6027020", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x6027030", Offset = "0x6026030", VA = "0x6027030", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x6026FC0", Offset = "0x6025FC0", VA = "0x6026FC0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x6026FD0", Offset = "0x6025FD0", VA = "0x6026FD0")]
	internal void SetAttributeType(XmlSchemaSimpleType value)
	{
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x6027040", Offset = "0x6026040", VA = "0x6027040", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x6027140", Offset = "0x6026140", VA = "0x6027140")]
	public XmlSchemaAttribute()
	{
	}
}
