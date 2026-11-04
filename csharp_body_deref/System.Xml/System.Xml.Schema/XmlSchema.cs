// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchema
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020B")]
[XmlRoot("schema", Namespace = "http://www.w3.org/2001/XMLSchema")]
public class XmlSchema : XmlSchemaObject
{
	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x38")]
	private XmlSchemaForm attributeFormDefault;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x3C")]
	private XmlSchemaForm elementFormDefault;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0x40")]
	private XmlSchemaDerivationMethod blockDefault;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x44")]
	private XmlSchemaDerivationMethod finalDefault;

	[Token(Token = "0x4000AEE")]
	[FieldOffset(Offset = "0x48")]
	private string targetNs;

	[Token(Token = "0x4000AEF")]
	[FieldOffset(Offset = "0x50")]
	private string version;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaObjectCollection includes;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x68")]
	private string id;

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x70")]
	private XmlAttribute[] moreAttributes;

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x78")]
	private bool isCompiled;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x79")]
	private bool isCompiledBySet;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x7A")]
	private bool isPreprocessed;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x7B")]
	private bool isRedefined;

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0x7C")]
	private int errorCount;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaObjectTable attributes;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaObjectTable attributeGroups;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x90")]
	private XmlSchemaObjectTable elements;

	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x98")]
	private XmlSchemaObjectTable types;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaObjectTable groups;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0xA8")]
	private XmlSchemaObjectTable notations;

	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0xB0")]
	private XmlSchemaObjectTable identityConstraints;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x0")]
	private static int globalIdCounter;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0xB8")]
	private ArrayList importedSchemas;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0xC0")]
	private ArrayList importedNamespaces;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0xC8")]
	private int schemaId;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0xD0")]
	private Uri baseUri;

	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0xD8")]
	private bool isChameleon;

	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0xE0")]
	private Hashtable ids;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0xE8")]
	private XmlDocument document;

	[Token(Token = "0x17000578")]
	[XmlAttribute("attributeFormDefault")]
	[DefaultValue(XmlSchemaForm.None)]
	public XmlSchemaForm AttributeFormDefault
	{
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x60014E4")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		set
		{
		}
	}

	[Token(Token = "0x17000579")]
	[DefaultValue(XmlSchemaDerivationMethod.None)]
	[XmlAttribute("blockDefault")]
	public XmlSchemaDerivationMethod BlockDefault
	{
		[Token(Token = "0x60014E5")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60014E6")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		set
		{
		}
	}

	[Token(Token = "0x1700057A")]
	[XmlAttribute("finalDefault")]
	[DefaultValue(XmlSchemaDerivationMethod.None)]
	public XmlSchemaDerivationMethod FinalDefault
	{
		[Token(Token = "0x60014E7")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60014E8")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700057B")]
	[XmlAttribute("elementFormDefault")]
	[DefaultValue(XmlSchemaForm.None)]
	public XmlSchemaForm ElementFormDefault
	{
		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x60014EA")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		set
		{
		}
	}

	[Token(Token = "0x1700057C")]
	[XmlAttribute("targetNamespace", DataType = "anyURI")]
	public string TargetNamespace
	{
		[Token(Token = "0x60014EB")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014EC")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x1700057D")]
	[XmlAttribute("version", DataType = "token")]
	public string Version
	{
		[Token(Token = "0x60014ED")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014EE")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700057E")]
	[XmlElement("import", typeof(XmlSchemaImport))]
	[XmlElement("include", typeof(XmlSchemaInclude))]
	[XmlElement("redefine", typeof(XmlSchemaRedefine))]
	public XmlSchemaObjectCollection Includes
	{
		[Token(Token = "0x60014EF")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057F")]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroup))]
	[XmlElement("annotation", typeof(XmlSchemaAnnotation))]
	[XmlElement("notation", typeof(XmlSchemaNotation))]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	[XmlElement("group", typeof(XmlSchemaGroup))]
	[XmlElement("element", typeof(XmlSchemaElement))]
	[XmlElement("complexType", typeof(XmlSchemaComplexType))]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000580")]
	[XmlIgnore]
	internal bool IsCompiledBySet
	{
		[Token(Token = "0x60014F1")]
		[Address(RVA = "0x1D2B3F0", Offset = "0x1D299F0", VA = "0x181D2B3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F2")]
		[Address(RVA = "0x1D2B790", Offset = "0x1D29D90", VA = "0x181D2B790")]
		set
		{
		}
	}

	[Token(Token = "0x17000581")]
	[XmlIgnore]
	internal bool IsPreprocessed
	{
		[Token(Token = "0x60014F3")]
		[Address(RVA = "0x1D2B3E0", Offset = "0x1D299E0", VA = "0x181D2B3E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F4")]
		[Address(RVA = "0x1D2B780", Offset = "0x1D29D80", VA = "0x181D2B780")]
		set
		{
		}
	}

	[Token(Token = "0x17000582")]
	[XmlIgnore]
	internal bool IsRedefined
	{
		[Token(Token = "0x60014F5")]
		[Address(RVA = "0x1D2B3D0", Offset = "0x1D299D0", VA = "0x181D2B3D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F6")]
		[Address(RVA = "0x1D2B770", Offset = "0x1D29D70", VA = "0x181D2B770")]
		set
		{
		}
	}

	[Token(Token = "0x17000583")]
	[XmlIgnore]
	public XmlSchemaObjectTable Attributes
	{
		[Token(Token = "0x60014F7")]
		[Address(RVA = "0x266E260", Offset = "0x266C860", VA = "0x18266E260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000584")]
	[XmlIgnore]
	public XmlSchemaObjectTable AttributeGroups
	{
		[Token(Token = "0x60014F8")]
		[Address(RVA = "0x266E1E0", Offset = "0x266C7E0", VA = "0x18266E1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000585")]
	[XmlIgnore]
	public XmlSchemaObjectTable SchemaTypes
	{
		[Token(Token = "0x60014F9")]
		[Address(RVA = "0x266E560", Offset = "0x266CB60", VA = "0x18266E560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000586")]
	[XmlIgnore]
	public XmlSchemaObjectTable Elements
	{
		[Token(Token = "0x60014FA")]
		[Address(RVA = "0x266E360", Offset = "0x266C960", VA = "0x18266E360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000587")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x60014FB")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014FC")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		set
		{
		}
	}

	[Token(Token = "0x17000588")]
	[XmlIgnore]
	public XmlSchemaObjectTable Groups
	{
		[Token(Token = "0x60014FD")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000589")]
	[XmlIgnore]
	public XmlSchemaObjectTable Notations
	{
		[Token(Token = "0x60014FE")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058A")]
	[XmlIgnore]
	internal XmlSchemaObjectTable IdentityConstraints
	{
		[Token(Token = "0x60014FF")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058B")]
	[XmlIgnore]
	internal Uri BaseUri
	{
		[Token(Token = "0x6001500")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001501")]
		[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
		set
		{
		}
	}

	[Token(Token = "0x1700058C")]
	[XmlIgnore]
	internal int SchemaId
	{
		[Token(Token = "0x6001502")]
		[Address(RVA = "0x266E4F0", Offset = "0x266CAF0", VA = "0x18266E4F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700058D")]
	[XmlIgnore]
	internal bool IsChameleon
	{
		[Token(Token = "0x6001503")]
		[Address(RVA = "0x266E4E0", Offset = "0x266CAE0", VA = "0x18266E4E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001504")]
		[Address(RVA = "0x266E5F0", Offset = "0x266CBF0", VA = "0x18266E5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700058E")]
	[XmlIgnore]
	internal Hashtable Ids
	{
		[Token(Token = "0x6001505")]
		[Address(RVA = "0x187BC50", Offset = "0x187A250", VA = "0x18187BC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058F")]
	[XmlIgnore]
	internal XmlDocument Document
	{
		[Token(Token = "0x6001506")]
		[Address(RVA = "0x266E2E0", Offset = "0x266C8E0", VA = "0x18266E2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000590")]
	[XmlIgnore]
	internal int ErrorCount
	{
		[Token(Token = "0x6001507")]
		[Address(RVA = "0x1BF1B70", Offset = "0x1BF0170", VA = "0x181BF1B70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001508")]
		[Address(RVA = "0x266E5E0", Offset = "0x266CBE0", VA = "0x18266E5E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000591")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x600150B")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600150C")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000592")]
	internal ArrayList ImportedSchemas
	{
		[Token(Token = "0x6001510")]
		[Address(RVA = "0x266E460", Offset = "0x266CA60", VA = "0x18266E460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000593")]
	internal ArrayList ImportedNamespaces
	{
		[Token(Token = "0x6001511")]
		[Address(RVA = "0x266E3E0", Offset = "0x266C9E0", VA = "0x18266E3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x266DFD0", Offset = "0x266C5D0", VA = "0x18266DFD0")]
	public XmlSchema()
	{
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x266DE30", Offset = "0x266C430", VA = "0x18266DE30")]
	public static XmlSchema Read(XmlReader reader, ValidationEventHandler validationEventHandler)
	{
		return null;
	}

	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x266D640", Offset = "0x266BC40", VA = "0x18266D640")]
	internal bool CompileSchema(XmlSchemaCollection xsc, XmlResolver resolver, SchemaInfo schemaInfo, string ns, ValidationEventHandler validationEventHandler, XmlNameTable nameTable, bool CompileContentModel)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x266D5A0", Offset = "0x266BBA0", VA = "0x18266D5A0")]
	internal void CompileSchemaInSet(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x266D450", Offset = "0x266BA50", VA = "0x18266D450")]
	internal new XmlSchema Clone()
	{
		return null;
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x266D830", Offset = "0x266BE30", VA = "0x18266D830")]
	internal XmlSchema DeepClone()
	{
		return null;
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x1D2B400", Offset = "0x1D29A00", VA = "0x181D2B400")]
	internal void SetIsCompiled(bool isCompiled)
	{
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x266D3E0", Offset = "0x266B9E0", VA = "0x18266D3E0", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x266DC60", Offset = "0x266C260", VA = "0x18266DC60")]
	internal void GetExternalSchemasList(IList extList, XmlSchema schema)
	{
	}
}
