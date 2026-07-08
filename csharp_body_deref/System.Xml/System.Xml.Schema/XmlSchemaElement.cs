using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000225")]
public class XmlSchemaElement : XmlSchemaParticle
{
	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x74")]
	private bool isAbstract;

	[Token(Token = "0x4000B6A")]
	[FieldOffset(Offset = "0x75")]
	private bool hasAbstractAttribute;

	[Token(Token = "0x4000B6B")]
	[FieldOffset(Offset = "0x76")]
	private bool isNillable;

	[Token(Token = "0x4000B6C")]
	[FieldOffset(Offset = "0x77")]
	private bool hasNillableAttribute;

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x78")]
	private bool isLocalTypeDerivationChecked;

	[Token(Token = "0x4000B6E")]
	[FieldOffset(Offset = "0x7C")]
	private XmlSchemaDerivationMethod block;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaDerivationMethod final;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x84")]
	private XmlSchemaForm form;

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x88")]
	private string defaultValue;

	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x90")]
	private string fixedValue;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x98")]
	private string name;

	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0xA0")]
	private XmlQualifiedName refName;

	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0xA8")]
	private XmlQualifiedName substitutionGroup;

	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0xB0")]
	private XmlQualifiedName typeName;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0xB8")]
	private XmlSchemaType type;

	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0xC0")]
	private XmlQualifiedName qualifiedName;

	[Token(Token = "0x4000B79")]
	[FieldOffset(Offset = "0xC8")]
	private XmlSchemaType elementType;

	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0xD0")]
	private XmlSchemaDerivationMethod blockResolved;

	[Token(Token = "0x4000B7B")]
	[FieldOffset(Offset = "0xD4")]
	private XmlSchemaDerivationMethod finalResolved;

	[Token(Token = "0x4000B7C")]
	[FieldOffset(Offset = "0xD8")]
	private XmlSchemaObjectCollection constraints;

	[Token(Token = "0x4000B7D")]
	[FieldOffset(Offset = "0xE0")]
	private SchemaElementDecl elementDecl;

	[Token(Token = "0x170005FD")]
	[DefaultValue(false)]
	[XmlAttribute("abstract")]
	public bool IsAbstract
	{
		[Token(Token = "0x6001602")]
		[Address(RVA = "0x43E6030", Offset = "0x43E6030", VA = "0x43E6030")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x43E6040", Offset = "0x43E6040", VA = "0x43E6040")]
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
		[Address(RVA = "0x43E6050", Offset = "0x43E6050", VA = "0x43E6050")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001605")]
		[Address(RVA = "0x43E6060", Offset = "0x43E6060", VA = "0x43E6060")]
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
		[Address(RVA = "0x43E6070", Offset = "0x43E6070", VA = "0x43E6070")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001607")]
		[Address(RVA = "0x43E6080", Offset = "0x43E6080", VA = "0x43E6080")]
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
		[Address(RVA = "0x43E60A0", Offset = "0x43E60A0", VA = "0x43E60A0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001609")]
		[Address(RVA = "0x43E60B0", Offset = "0x43E60B0", VA = "0x43E60B0")]
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
		[Address(RVA = "0x43E60C0", Offset = "0x43E60C0", VA = "0x43E60C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600160B")]
		[Address(RVA = "0x43E60D0", Offset = "0x43E60D0", VA = "0x43E60D0")]
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
		[Address(RVA = "0x43E60F0", Offset = "0x43E60F0", VA = "0x43E60F0")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x600160D")]
		[Address(RVA = "0x43E6100", Offset = "0x43E6100", VA = "0x43E6100")]
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
		[Address(RVA = "0x43E6110", Offset = "0x43E6110", VA = "0x43E6110")]
		get
		{
			return null;
		}
		[Token(Token = "0x600160F")]
		[Address(RVA = "0x43E6120", Offset = "0x43E6120", VA = "0x43E6120")]
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
		[Address(RVA = "0x43E6140", Offset = "0x43E6140", VA = "0x43E6140")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001611")]
		[Address(RVA = "0x43E6150", Offset = "0x43E6150", VA = "0x43E6150")]
		set
		{
		}
	}

	[Token(Token = "0x17000605")]
	[XmlIgnore]
	internal bool HasNillableAttribute
	{
		[Token(Token = "0x6001612")]
		[Address(RVA = "0x43E6160", Offset = "0x43E6160", VA = "0x43E6160")]
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
		[Address(RVA = "0x43E6170", Offset = "0x43E6170", VA = "0x43E6170")]
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
		[Address(RVA = "0x43E6180", Offset = "0x43E6180", VA = "0x43E6180")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001615")]
		[Address(RVA = "0x43E6190", Offset = "0x43E6190", VA = "0x43E6190")]
		set
		{
		}
	}

	[Token(Token = "0x17000608")]
	[XmlAttribute("substitutionGroup")]
	public XmlQualifiedName SubstitutionGroup
	{
		[Token(Token = "0x6001616")]
		[Address(RVA = "0x43E6230", Offset = "0x43E6230", VA = "0x43E6230")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001617")]
		[Address(RVA = "0x43E6240", Offset = "0x43E6240", VA = "0x43E6240")]
		set
		{
		}
	}

	[Token(Token = "0x17000609")]
	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		[Token(Token = "0x6001618")]
		[Address(RVA = "0x43E62E0", Offset = "0x43E62E0", VA = "0x43E62E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001619")]
		[Address(RVA = "0x43E62F0", Offset = "0x43E62F0", VA = "0x43E62F0")]
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
		[Address(RVA = "0x43E6390", Offset = "0x43E6390", VA = "0x43E6390")]
		get
		{
			return null;
		}
		[Token(Token = "0x600161B")]
		[Address(RVA = "0x43E63A0", Offset = "0x43E63A0", VA = "0x43E63A0")]
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
		[Address(RVA = "0x43E63C0", Offset = "0x43E63C0", VA = "0x43E63C0")]
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
		[Address(RVA = "0x43E6440", Offset = "0x43E6440", VA = "0x43E6440")]
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
		[Address(RVA = "0x43E6450", Offset = "0x43E6450", VA = "0x43E6450")]
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
		[Address(RVA = "0x43E6460", Offset = "0x43E6460", VA = "0x43E6460")]
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
		[Address(RVA = "0x43E6470", Offset = "0x43E6470", VA = "0x43E6470")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
	}

	[Token(Token = "0x17000610")]
	internal bool HasConstraints
	{
		[Token(Token = "0x6001625")]
		[Address(RVA = "0x43E64E0", Offset = "0x43E64E0", VA = "0x43E64E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000611")]
	internal bool IsLocalTypeDerivationChecked
	{
		[Token(Token = "0x6001626")]
		[Address(RVA = "0x43E6500", Offset = "0x43E6500", VA = "0x43E6500")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001627")]
		[Address(RVA = "0x43E6510", Offset = "0x43E6510", VA = "0x43E6510")]
		set
		{
		}
	}

	[Token(Token = "0x17000612")]
	internal SchemaElementDecl ElementDecl
	{
		[Token(Token = "0x6001628")]
		[Address(RVA = "0x43E6520", Offset = "0x43E6520", VA = "0x43E6520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001629")]
		[Address(RVA = "0x43E6530", Offset = "0x43E6530", VA = "0x43E6530")]
		set
		{
		}
	}

	[Token(Token = "0x17000613")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x43E6550", Offset = "0x43E6550", VA = "0x43E6550", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600162B")]
		[Address(RVA = "0x43E6560", Offset = "0x43E6560", VA = "0x43E6560", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000614")]
	[XmlIgnore]
	internal override string NameString
	{
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x43E6580", Offset = "0x43E6580", VA = "0x43E6580", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x43E6480", Offset = "0x43E6480", VA = "0x43E6480")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x43E64A0", Offset = "0x43E64A0", VA = "0x43E64A0")]
	internal void SetElementType(XmlSchemaType value)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x43E64C0", Offset = "0x43E64C0", VA = "0x43E64C0")]
	internal void SetBlockResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x6001624")]
	[Address(RVA = "0x43E64D0", Offset = "0x43E64D0", VA = "0x43E64D0")]
	internal void SetFinalResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x43E65B0", Offset = "0x43E65B0", VA = "0x43E65B0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600162E")]
	[Address(RVA = "0x43DFD30", Offset = "0x43DFD30", VA = "0x43DFD30")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x43E65C0", Offset = "0x43E65C0", VA = "0x43E65C0")]
	public XmlSchemaElement()
	{
	}
}
