// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000225")]
public class XmlSchemaElement : XmlSchemaParticle
{
	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x78")]
	private bool isAbstract;

	[Token(Token = "0x4000B6A")]
	[FieldOffset(Offset = "0x79")]
	private bool hasAbstractAttribute;

	[Token(Token = "0x4000B6B")]
	[FieldOffset(Offset = "0x7A")]
	private bool isNillable;

	[Token(Token = "0x4000B6C")]
	[FieldOffset(Offset = "0x7B")]
	private bool hasNillableAttribute;

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x7C")]
	private bool isLocalTypeDerivationChecked;

	[Token(Token = "0x4000B6E")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaDerivationMethod block;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x84")]
	private XmlSchemaDerivationMethod final;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaForm form;

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x90")]
	private string defaultValue;

	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x98")]
	private string fixedValue;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0xA0")]
	private string name;

	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0xA8")]
	private XmlQualifiedName refName;

	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0xB0")]
	private XmlQualifiedName substitutionGroup;

	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0xB8")]
	private XmlQualifiedName typeName;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0xC0")]
	private XmlSchemaType type;

	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0xC8")]
	private XmlQualifiedName qualifiedName;

	[Token(Token = "0x4000B79")]
	[FieldOffset(Offset = "0xD0")]
	private XmlSchemaType elementType;

	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0xD8")]
	private XmlSchemaDerivationMethod blockResolved;

	[Token(Token = "0x4000B7B")]
	[FieldOffset(Offset = "0xDC")]
	private XmlSchemaDerivationMethod finalResolved;

	[Token(Token = "0x4000B7C")]
	[FieldOffset(Offset = "0xE0")]
	private XmlSchemaObjectCollection constraints;

	[Token(Token = "0x4000B7D")]
	[FieldOffset(Offset = "0xE8")]
	private SchemaElementDecl elementDecl;

	[Token(Token = "0x170005FD")]
	[DefaultValue(false)]
	[XmlAttribute("abstract")]
	public bool IsAbstract
	{
		[Token(Token = "0x6001602")]
		[Address(RVA = "0x1D2B360", Offset = "0x1D29960", VA = "0x181D2B360")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x266B2B0", Offset = "0x26698B0", VA = "0x18266B2B0")]
		set
		{
		}
	}

	[Token(Token = "0x170005FE")]
	[DefaultValue(XmlSchemaDerivationMethod.None)]
	[XmlAttribute("block")]
	public XmlSchemaDerivationMethod Block
	{
		[Token(Token = "0x6001604")]
		[Address(RVA = "0xB5B9B0", Offset = "0xB59FB0", VA = "0x180B5B9B0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001605")]
		[Address(RVA = "0xB5BE20", Offset = "0xB5A420", VA = "0x180B5BE20")]
		set
		{
		}
	}

	[Token(Token = "0x170005FF")]
	[XmlAttribute("default")]
	[DefaultValue(null)]
	public string DefaultValue
	{
		[Token(Token = "0x6001606")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001607")]
		[Address(RVA = "0xA4D750", Offset = "0xA4BD50", VA = "0x180A4D750")]
		set
		{
		}
	}

	[Token(Token = "0x17000600")]
	[DefaultValue(XmlSchemaDerivationMethod.None)]
	[XmlAttribute("final")]
	public XmlSchemaDerivationMethod Final
	{
		[Token(Token = "0x6001608")]
		[Address(RVA = "0xA4D4C0", Offset = "0xA4BAC0", VA = "0x180A4D4C0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001609")]
		[Address(RVA = "0xA4D5B0", Offset = "0xA4BBB0", VA = "0x180A4D5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000601")]
	[DefaultValue(null)]
	[XmlAttribute("fixed")]
	public string FixedValue
	{
		[Token(Token = "0x600160A")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x600160B")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		set
		{
		}
	}

	[Token(Token = "0x17000602")]
	[DefaultValue(XmlSchemaForm.None)]
	[XmlAttribute("form")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x600160C")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x600160D")]
		[Address(RVA = "0xA4D5A0", Offset = "0xA4BBA0", VA = "0x180A4D5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000603")]
	[XmlAttribute("name")]
	[DefaultValue("")]
	public string Name
	{
		[Token(Token = "0x600160E")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600160F")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000604")]
	[XmlAttribute("nillable")]
	[DefaultValue(false)]
	public bool IsNillable
	{
		[Token(Token = "0x6001610")]
		[Address(RVA = "0x1D2B3E0", Offset = "0x1D299E0", VA = "0x181D2B3E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001611")]
		[Address(RVA = "0x266B2C0", Offset = "0x26698C0", VA = "0x18266B2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000605")]
	[XmlIgnore]
	internal bool HasNillableAttribute
	{
		[Token(Token = "0x6001612")]
		[Address(RVA = "0x1D2B3D0", Offset = "0x1D299D0", VA = "0x181D2B3D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000606")]
	[XmlIgnore]
	internal bool HasAbstractAttribute
	{
		[Token(Token = "0x6001613")]
		[Address(RVA = "0x1D2B3F0", Offset = "0x1D299F0", VA = "0x181D2B3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000607")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x6001614")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001615")]
		[Address(RVA = "0x266B2D0", Offset = "0x26698D0", VA = "0x18266B2D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000608")]
	[XmlAttribute("substitutionGroup")]
	public XmlQualifiedName SubstitutionGroup
	{
		[Token(Token = "0x6001616")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001617")]
		[Address(RVA = "0x266B430", Offset = "0x2669A30", VA = "0x18266B430")]
		set
		{
		}
	}

	[Token(Token = "0x17000609")]
	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		[Token(Token = "0x6001618")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001619")]
		[Address(RVA = "0x266B380", Offset = "0x2669980", VA = "0x18266B380")]
		set
		{
		}
	}

	[Token(Token = "0x1700060A")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	[XmlElement("complexType", typeof(XmlSchemaComplexType))]
	public XmlSchemaType SchemaType
	{
		[Token(Token = "0x600161A")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600161B")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700060B")]
	[XmlElement("key", typeof(XmlSchemaKey))]
	[XmlElement("keyref", typeof(XmlSchemaKeyref))]
	[XmlElement("unique", typeof(XmlSchemaUnique))]
	public XmlSchemaObjectCollection Constraints
	{
		[Token(Token = "0x600161C")]
		[Address(RVA = "0x266B1D0", Offset = "0x26697D0", VA = "0x18266B1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700060C")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x600161D")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700060D")]
	[XmlIgnore]
	public XmlSchemaType ElementSchemaType
	{
		[Token(Token = "0x600161E")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700060E")]
	[XmlIgnore]
	public XmlSchemaDerivationMethod BlockResolved
	{
		[Token(Token = "0x600161F")]
		[Address(RVA = "0x24C5570", Offset = "0x24C3B70", VA = "0x1824C5570")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
	}

	[Token(Token = "0x1700060F")]
	[XmlIgnore]
	public XmlSchemaDerivationMethod FinalResolved
	{
		[Token(Token = "0x6001620")]
		[Address(RVA = "0x210FB80", Offset = "0x210E180", VA = "0x18210FB80")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
	}

	[Token(Token = "0x17000610")]
	internal bool HasConstraints
	{
		[Token(Token = "0x6001625")]
		[Address(RVA = "0x266B250", Offset = "0x2669850", VA = "0x18266B250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000611")]
	internal bool IsLocalTypeDerivationChecked
	{
		[Token(Token = "0x6001626")]
		[Address(RVA = "0x1D2B370", Offset = "0x1D29970", VA = "0x181D2B370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001627")]
		[Address(RVA = "0x1D2B410", Offset = "0x1D29A10", VA = "0x181D2B410")]
		set
		{
		}
	}

	[Token(Token = "0x17000612")]
	internal SchemaElementDecl ElementDecl
	{
		[Token(Token = "0x6001628")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001629")]
		[Address(RVA = "0x1BD53E0", Offset = "0x1BD39E0", VA = "0x181BD53E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000613")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600162B")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000614")]
	[XmlIgnore]
	internal override string NameString
	{
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x266B280", Offset = "0x2669880", VA = "0x18266B280", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
	internal void SetElementType(XmlSchemaType value)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x266B090", Offset = "0x2669690", VA = "0x18266B090")]
	internal void SetBlockResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x6001624")]
	[Address(RVA = "0x266B0A0", Offset = "0x26696A0", VA = "0x18266B0A0")]
	internal void SetFinalResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x266B080", Offset = "0x2669680", VA = "0x18266B080", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600162E")]
	[Address(RVA = "0x266ADF0", Offset = "0x26693F0", VA = "0x18266ADF0")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x266B0B0", Offset = "0x26696B0", VA = "0x18266B0B0")]
	public XmlSchemaElement()
	{
	}
}
