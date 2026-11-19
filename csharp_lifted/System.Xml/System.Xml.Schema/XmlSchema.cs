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
	[FieldOffset(Offset = "0x34")]
	private XmlSchemaForm attributeFormDefault;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x38")]
	private XmlSchemaForm elementFormDefault;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0x3C")]
	private XmlSchemaDerivationMethod blockDefault;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x40")]
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
		[Address(RVA = "0x6024420", Offset = "0x6023420", VA = "0x6024420")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x60014E4")]
		[Address(RVA = "0x6024430", Offset = "0x6023430", VA = "0x6024430")]
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
		[Address(RVA = "0x6024440", Offset = "0x6023440", VA = "0x6024440")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60014E6")]
		[Address(RVA = "0x6024450", Offset = "0x6023450", VA = "0x6024450")]
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
		[Address(RVA = "0x6024460", Offset = "0x6023460", VA = "0x6024460")]
		get
		{
			return default(XmlSchemaDerivationMethod);
		}
		[Token(Token = "0x60014E8")]
		[Address(RVA = "0x6024470", Offset = "0x6023470", VA = "0x6024470")]
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
		[Address(RVA = "0x6024480", Offset = "0x6023480", VA = "0x6024480")]
		get
		{
			return default(XmlSchemaForm);
		}
		[Token(Token = "0x60014EA")]
		[Address(RVA = "0x6024490", Offset = "0x6023490", VA = "0x6024490")]
		set
		{
		}
	}

	[Token(Token = "0x1700057C")]
	[XmlAttribute("targetNamespace", DataType = "anyURI")]
	public string TargetNamespace
	{
		[Token(Token = "0x60014EB")]
		[Address(RVA = "0x60244A0", Offset = "0x60234A0", VA = "0x60244A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014EC")]
		[Address(RVA = "0x60244B0", Offset = "0x60234B0", VA = "0x60244B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700057D")]
	[XmlAttribute("version", DataType = "token")]
	public string Version
	{
		[Token(Token = "0x60014ED")]
		[Address(RVA = "0x60244C0", Offset = "0x60234C0", VA = "0x60244C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014EE")]
		[Address(RVA = "0x60244D0", Offset = "0x60234D0", VA = "0x60244D0")]
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
		[Address(RVA = "0x60244E0", Offset = "0x60234E0", VA = "0x60244E0")]
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
		[Address(RVA = "0x60244F0", Offset = "0x60234F0", VA = "0x60244F0")]
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
		[Address(RVA = "0x6024500", Offset = "0x6023500", VA = "0x6024500")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F2")]
		[Address(RVA = "0x6024510", Offset = "0x6023510", VA = "0x6024510")]
		set
		{
		}
	}

	[Token(Token = "0x17000581")]
	[XmlIgnore]
	internal bool IsPreprocessed
	{
		[Token(Token = "0x60014F3")]
		[Address(RVA = "0x6024520", Offset = "0x6023520", VA = "0x6024520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F4")]
		[Address(RVA = "0x6024530", Offset = "0x6023530", VA = "0x6024530")]
		set
		{
		}
	}

	[Token(Token = "0x17000582")]
	[XmlIgnore]
	internal bool IsRedefined
	{
		[Token(Token = "0x60014F5")]
		[Address(RVA = "0x6024540", Offset = "0x6023540", VA = "0x6024540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60014F6")]
		[Address(RVA = "0x6024550", Offset = "0x6023550", VA = "0x6024550")]
		set
		{
		}
	}

	[Token(Token = "0x17000583")]
	[XmlIgnore]
	public XmlSchemaObjectTable Attributes
	{
		[Token(Token = "0x60014F7")]
		[Address(RVA = "0x6024560", Offset = "0x6023560", VA = "0x6024560")]
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
		[Address(RVA = "0x60245E0", Offset = "0x60235E0", VA = "0x60245E0")]
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
		[Address(RVA = "0x6024660", Offset = "0x6023660", VA = "0x6024660")]
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
		[Address(RVA = "0x60246E0", Offset = "0x60236E0", VA = "0x60246E0")]
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
		[Address(RVA = "0x6024760", Offset = "0x6023760", VA = "0x6024760")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014FC")]
		[Address(RVA = "0x6024770", Offset = "0x6023770", VA = "0x6024770")]
		set
		{
		}
	}

	[Token(Token = "0x17000588")]
	[XmlIgnore]
	public XmlSchemaObjectTable Groups
	{
		[Token(Token = "0x60014FD")]
		[Address(RVA = "0x6024780", Offset = "0x6023780", VA = "0x6024780")]
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
		[Address(RVA = "0x6024790", Offset = "0x6023790", VA = "0x6024790")]
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
		[Address(RVA = "0x60247A0", Offset = "0x60237A0", VA = "0x60247A0")]
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
		[Address(RVA = "0x60247B0", Offset = "0x60237B0", VA = "0x60247B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001501")]
		[Address(RVA = "0x60247C0", Offset = "0x60237C0", VA = "0x60247C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700058C")]
	[XmlIgnore]
	internal int SchemaId
	{
		[Token(Token = "0x6001502")]
		[Address(RVA = "0x60247E0", Offset = "0x60237E0", VA = "0x60247E0")]
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
		[Address(RVA = "0x6024860", Offset = "0x6023860", VA = "0x6024860")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001504")]
		[Address(RVA = "0x6024870", Offset = "0x6023870", VA = "0x6024870")]
		set
		{
		}
	}

	[Token(Token = "0x1700058E")]
	[XmlIgnore]
	internal Hashtable Ids
	{
		[Token(Token = "0x6001505")]
		[Address(RVA = "0x6024880", Offset = "0x6023880", VA = "0x6024880")]
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
		[Address(RVA = "0x6024890", Offset = "0x6023890", VA = "0x6024890")]
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
		[Address(RVA = "0x6024910", Offset = "0x6023910", VA = "0x6024910")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001508")]
		[Address(RVA = "0x6024920", Offset = "0x6023920", VA = "0x6024920")]
		set
		{
		}
	}

	[Token(Token = "0x17000591")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x600150B")]
		[Address(RVA = "0x6025BA0", Offset = "0x6024BA0", VA = "0x6025BA0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600150C")]
		[Address(RVA = "0x6025BB0", Offset = "0x6024BB0", VA = "0x6025BB0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000592")]
	internal ArrayList ImportedSchemas
	{
		[Token(Token = "0x6001510")]
		[Address(RVA = "0x6025C00", Offset = "0x6024C00", VA = "0x6025C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000593")]
	internal ArrayList ImportedNamespaces
	{
		[Token(Token = "0x6001511")]
		[Address(RVA = "0x6025C80", Offset = "0x6024C80", VA = "0x6025C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x6023E20", Offset = "0x6022E20", VA = "0x6023E20")]
	public XmlSchema()
	{
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x6024030", Offset = "0x6023030", VA = "0x6024030")]
	public static XmlSchema Read(XmlReader reader, ValidationEventHandler validationEventHandler)
	{
		return null;
	}

	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x60241D0", Offset = "0x60231D0", VA = "0x60241D0")]
	internal bool CompileSchema(XmlSchemaCollection xsc, XmlResolver resolver, SchemaInfo schemaInfo, string ns, ValidationEventHandler validationEventHandler, XmlNameTable nameTable, bool CompileContentModel)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x6024390", Offset = "0x6023390", VA = "0x6024390")]
	internal void CompileSchemaInSet(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x6001509")]
	[Address(RVA = "0x6024930", Offset = "0x6023930", VA = "0x6024930")]
	internal new XmlSchema Clone()
	{
		return null;
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x6024AF0", Offset = "0x6023AF0", VA = "0x6024AF0")]
	internal XmlSchema DeepClone()
	{
		return null;
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x6025BC0", Offset = "0x6024BC0", VA = "0x6025BC0")]
	internal void SetIsCompiled(bool isCompiled)
	{
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x6025BD0", Offset = "0x6024BD0", VA = "0x6025BD0", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x6025BE0", Offset = "0x6024BE0", VA = "0x6025BE0", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x6025D00", Offset = "0x6024D00", VA = "0x6025D00")]
	internal void GetExternalSchemasList(IList extList, XmlSchema schema)
	{
	}
}
