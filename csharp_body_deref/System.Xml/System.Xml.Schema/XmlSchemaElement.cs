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
		[Address(RVA = "0x4723790", Offset = "0x4723790", VA = "0x4723790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x47237A0", Offset = "0x47237A0", VA = "0x47237A0")]
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
		[Address(RVA = "0x47237B0", Offset = "0x47237B0", VA = "0x47237B0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001605")]
		[Address(RVA = "0x47237C0", Offset = "0x47237C0", VA = "0x47237C0")]
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
		[Address(RVA = "0x47237D0", Offset = "0x47237D0", VA = "0x47237D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001607")]
		[Address(RVA = "0x47237E0", Offset = "0x47237E0", VA = "0x47237E0")]
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
		[Address(RVA = "0x4723800", Offset = "0x4723800", VA = "0x4723800")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x6001609")]
		[Address(RVA = "0x4723810", Offset = "0x4723810", VA = "0x4723810")]
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
		[Address(RVA = "0x4723820", Offset = "0x4723820", VA = "0x4723820")]
		get
		{
			return null;
		}
		[Token(Token = "0x600160B")]
		[Address(RVA = "0x4723830", Offset = "0x4723830", VA = "0x4723830")]
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
		[Address(RVA = "0x4723850", Offset = "0x4723850", VA = "0x4723850")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x600160D")]
		[Address(RVA = "0x4723860", Offset = "0x4723860", VA = "0x4723860")]
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
		[Address(RVA = "0x4723870", Offset = "0x4723870", VA = "0x4723870")]
		get
		{
			return null;
		}
		[Token(Token = "0x600160F")]
		[Address(RVA = "0x4723880", Offset = "0x4723880", VA = "0x4723880")]
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
		[Address(RVA = "0x47238A0", Offset = "0x47238A0", VA = "0x47238A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001611")]
		[Address(RVA = "0x47238B0", Offset = "0x47238B0", VA = "0x47238B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000605")]
	[XmlIgnore]
	internal bool HasNillableAttribute
	{
		[Token(Token = "0x6001612")]
		[Address(RVA = "0x47238C0", Offset = "0x47238C0", VA = "0x47238C0")]
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
		[Address(RVA = "0x47238D0", Offset = "0x47238D0", VA = "0x47238D0")]
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
		[Address(RVA = "0x47238E0", Offset = "0x47238E0", VA = "0x47238E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001615")]
		[Address(RVA = "0x47238F0", Offset = "0x47238F0", VA = "0x47238F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000608")]
	[XmlAttribute("substitutionGroup")]
	public XmlQualifiedName SubstitutionGroup
	{
		[Token(Token = "0x6001616")]
		[Address(RVA = "0x4723990", Offset = "0x4723990", VA = "0x4723990")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001617")]
		[Address(RVA = "0x47239A0", Offset = "0x47239A0", VA = "0x47239A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000609")]
	[XmlAttribute("type")]
	public XmlQualifiedName SchemaTypeName
	{
		[Token(Token = "0x6001618")]
		[Address(RVA = "0x4723A40", Offset = "0x4723A40", VA = "0x4723A40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001619")]
		[Address(RVA = "0x4723A50", Offset = "0x4723A50", VA = "0x4723A50")]
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
		[Address(RVA = "0x4723AF0", Offset = "0x4723AF0", VA = "0x4723AF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600161B")]
		[Address(RVA = "0x4723B00", Offset = "0x4723B00", VA = "0x4723B00")]
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
		[Address(RVA = "0x4723B20", Offset = "0x4723B20", VA = "0x4723B20")]
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
		[Address(RVA = "0x4723BA0", Offset = "0x4723BA0", VA = "0x4723BA0")]
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
		[Address(RVA = "0x4723BB0", Offset = "0x4723BB0", VA = "0x4723BB0")]
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
		[Address(RVA = "0x4723BC0", Offset = "0x4723BC0", VA = "0x4723BC0")]
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
		[Address(RVA = "0x4723BD0", Offset = "0x4723BD0", VA = "0x4723BD0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
	}

	[Token(Token = "0x17000610")]
	internal bool HasConstraints
	{
		[Token(Token = "0x6001625")]
		[Address(RVA = "0x4723C40", Offset = "0x4723C40", VA = "0x4723C40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000611")]
	internal bool IsLocalTypeDerivationChecked
	{
		[Token(Token = "0x6001626")]
		[Address(RVA = "0x4723C60", Offset = "0x4723C60", VA = "0x4723C60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001627")]
		[Address(RVA = "0x4723C70", Offset = "0x4723C70", VA = "0x4723C70")]
		set
		{
		}
	}

	[Token(Token = "0x17000612")]
	internal SchemaElementDecl ElementDecl
	{
		[Token(Token = "0x6001628")]
		[Address(RVA = "0x4723C80", Offset = "0x4723C80", VA = "0x4723C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001629")]
		[Address(RVA = "0x4723C90", Offset = "0x4723C90", VA = "0x4723C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000613")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x4723CB0", Offset = "0x4723CB0", VA = "0x4723CB0", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x600162B")]
		[Address(RVA = "0x4723CC0", Offset = "0x4723CC0", VA = "0x4723CC0", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x17000614")]
	[XmlIgnore]
	internal override string NameString
	{
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x4723CE0", Offset = "0x4723CE0", VA = "0x4723CE0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001621")]
	[Address(RVA = "0x4723BE0", Offset = "0x4723BE0", VA = "0x4723BE0")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x4723C00", Offset = "0x4723C00", VA = "0x4723C00")]
	internal void SetElementType(XmlSchemaType value)
	{
	}

	[Token(Token = "0x6001623")]
	[Address(RVA = "0x4723C20", Offset = "0x4723C20", VA = "0x4723C20")]
	internal void SetBlockResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x6001624")]
	[Address(RVA = "0x4723C30", Offset = "0x4723C30", VA = "0x4723C30")]
	internal void SetFinalResolved(XmlSchemaDerivationMethod value)
	{
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x4723D10", Offset = "0x4723D10", VA = "0x4723D10", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x600162E")]
	[Address(RVA = "0x471D490", Offset = "0x471D490", VA = "0x471D490")]
	internal XmlSchemaObject Clone(XmlSchema parentSchema)
	{
		return null;
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x4723D20", Offset = "0x4723D20", VA = "0x4723D20")]
	public XmlSchemaElement()
	{
	}
}
