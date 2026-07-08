using System.Collections;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000264")]
public sealed class XmlSchemaValidator
{
	[Token(Token = "0x4000C35")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaSet schemaSet;

	[Token(Token = "0x4000C36")]
	[FieldOffset(Offset = "0x18")]
	private XmlSchemaValidationFlags validationFlags;

	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0x1C")]
	private int startIDConstraint;

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0x20")]
	private bool isRoot;

	[Token(Token = "0x4000C39")]
	[FieldOffset(Offset = "0x21")]
	private bool rootHasSchema;

	[Token(Token = "0x4000C3A")]
	[FieldOffset(Offset = "0x22")]
	private bool attrValid;

	[Token(Token = "0x4000C3B")]
	[FieldOffset(Offset = "0x23")]
	private bool checkEntity;

	[Token(Token = "0x4000C3C")]
	[FieldOffset(Offset = "0x28")]
	private SchemaInfo compiledSchemaInfo;

	[Token(Token = "0x4000C3D")]
	[FieldOffset(Offset = "0x30")]
	private IDtdInfo dtdSchemaInfo;

	[Token(Token = "0x4000C3E")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable validatedNamespaces;

	[Token(Token = "0x4000C3F")]
	[FieldOffset(Offset = "0x40")]
	private HWStack validationStack;

	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0x48")]
	private ValidationState context;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0x50")]
	private ValidatorState currentState;

	[Token(Token = "0x4000C42")]
	[FieldOffset(Offset = "0x58")]
	private Hashtable attPresence;

	[Token(Token = "0x4000C43")]
	[FieldOffset(Offset = "0x60")]
	private SchemaAttDef wildID;

	[Token(Token = "0x4000C44")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable IDs;

	[Token(Token = "0x4000C45")]
	[FieldOffset(Offset = "0x70")]
	private IdRefNode idRefListHead;

	[Token(Token = "0x4000C46")]
	[FieldOffset(Offset = "0x78")]
	private XmlQualifiedName contextQName;

	[Token(Token = "0x4000C47")]
	[FieldOffset(Offset = "0x80")]
	private string NsXs;

	[Token(Token = "0x4000C48")]
	[FieldOffset(Offset = "0x88")]
	private string NsXsi;

	[Token(Token = "0x4000C49")]
	[FieldOffset(Offset = "0x90")]
	private string NsXmlNs;

	[Token(Token = "0x4000C4A")]
	[FieldOffset(Offset = "0x98")]
	private string NsXml;

	[Token(Token = "0x4000C4B")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaObject partialValidationType;

	[Token(Token = "0x4000C4C")]
	[FieldOffset(Offset = "0xA8")]
	private StringBuilder textValue;

	[Token(Token = "0x4000C4D")]
	[FieldOffset(Offset = "0xB0")]
	private ValidationEventHandler eventHandler;

	[Token(Token = "0x4000C4E")]
	[FieldOffset(Offset = "0xB8")]
	private object validationEventSender;

	[Token(Token = "0x4000C4F")]
	[FieldOffset(Offset = "0xC0")]
	private XmlNameTable nameTable;

	[Token(Token = "0x4000C50")]
	[FieldOffset(Offset = "0xC8")]
	private IXmlLineInfo positionInfo;

	[Token(Token = "0x4000C51")]
	[FieldOffset(Offset = "0xD0")]
	private IXmlLineInfo dummyPositionInfo;

	[Token(Token = "0x4000C52")]
	[FieldOffset(Offset = "0xD8")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x4000C53")]
	[FieldOffset(Offset = "0xE0")]
	private Uri sourceUri;

	[Token(Token = "0x4000C54")]
	[FieldOffset(Offset = "0xE8")]
	private string sourceUriString;

	[Token(Token = "0x4000C55")]
	[FieldOffset(Offset = "0xF0")]
	private IXmlNamespaceResolver nsResolver;

	[Token(Token = "0x4000C56")]
	[FieldOffset(Offset = "0xF8")]
	private XmlSchemaContentProcessing processContents;

	[Token(Token = "0x4000C57")]
	[FieldOffset(Offset = "0x100")]
	private string xsiTypeString;

	[Token(Token = "0x4000C58")]
	[FieldOffset(Offset = "0x108")]
	private string xsiNilString;

	[Token(Token = "0x4000C59")]
	[FieldOffset(Offset = "0x110")]
	private string xsiSchemaLocationString;

	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x118")]
	private string xsiNoNamespaceSchemaLocationString;

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly XmlSchemaDatatype dtQName;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly XmlSchemaDatatype dtCDATA;

	[Token(Token = "0x4000C5D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly XmlSchemaDatatype dtStringArray;

	[Token(Token = "0x4000C5E")]
	[FieldOffset(Offset = "0x18")]
	private static XmlSchemaParticle[] EmptyParticleArray;

	[Token(Token = "0x4000C5F")]
	[FieldOffset(Offset = "0x20")]
	private static XmlSchemaAttribute[] EmptyAttributeArray;

	[Token(Token = "0x4000C60")]
	[FieldOffset(Offset = "0x120")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x4000C61")]
	[FieldOffset(Offset = "0x28")]
	internal static bool[,] ValidStates;

	[Token(Token = "0x4000C62")]
	[FieldOffset(Offset = "0x30")]
	private static string[] MethodNames;

	[Token(Token = "0x1700069D")]
	public XmlResolver XmlResolver
	{
		[Token(Token = "0x60017B3")]
		[Address(RVA = "0x43F7420", Offset = "0x43F7420", VA = "0x43F7420")]
		set
		{
		}
	}

	[Token(Token = "0x1700069E")]
	public IXmlLineInfo LineInfoProvider
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x43F7440", Offset = "0x43F7440", VA = "0x43F7440")]
		set
		{
		}
	}

	[Token(Token = "0x1700069F")]
	public Uri SourceUri
	{
		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x43F7480", Offset = "0x43F7480", VA = "0x43F7480")]
		set
		{
		}
	}

	[Token(Token = "0x170006A0")]
	public object ValidationEventSender
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x43F74E0", Offset = "0x43F74E0", VA = "0x43F74E0")]
		set
		{
		}
	}

	[Token(Token = "0x170006A1")]
	internal XmlSchemaSet SchemaSet
	{
		[Token(Token = "0x60017C8")]
		[Address(RVA = "0x43FE120", Offset = "0x43FE120", VA = "0x43FE120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A2")]
	internal XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x43FE130", Offset = "0x43FE130", VA = "0x43FE130")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
	}

	[Token(Token = "0x170006A3")]
	internal XmlSchemaContentType CurrentContentType
	{
		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x43FE140", Offset = "0x43FE140", VA = "0x43FE140")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x170006A4")]
	private bool StrictlyAssessed
	{
		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x43FE190", Offset = "0x43FE190", VA = "0x43FE190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A5")]
	private bool HasSchema
	{
		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x43FE1D0", Offset = "0x43FE1D0", VA = "0x43FE1D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A6")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x43FB560", Offset = "0x43FB560", VA = "0x43FB560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A7")]
	internal bool ProcessIdentityConstraints
	{
		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x4401660", Offset = "0x4401660", VA = "0x4401660")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A8")]
	internal bool ReportValidationWarnings
	{
		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x4402930", Offset = "0x4402930", VA = "0x4402930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A9")]
	internal bool ProcessSchemaHints
	{
		[Token(Token = "0x60017EC")]
		[Address(RVA = "0x43F7410", Offset = "0x43F7410", VA = "0x43F7410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x43F7500", Offset = "0x43F7500", VA = "0x43F7500")]
		add
		{
		}
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x43F7580", Offset = "0x43F7580", VA = "0x43F7580")]
		remove
		{
		}
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x43F6A10", Offset = "0x43F6A10", VA = "0x43F6A10")]
	public XmlSchemaValidator(XmlNameTable nameTable, XmlSchemaSet schemas, IXmlNamespaceResolver namespaceResolver, XmlSchemaValidationFlags validationFlags)
	{
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x43F6C50", Offset = "0x43F6C50", VA = "0x43F6C50")]
	private void Init()
	{
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x43F7200", Offset = "0x43F7200", VA = "0x43F7200")]
	private void Reset()
	{
	}

	[Token(Token = "0x60017B9")]
	[Address(RVA = "0x43F7600", Offset = "0x43F7600", VA = "0x43F7600")]
	public void AddSchema(XmlSchema schema)
	{
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x43F7E80", Offset = "0x43F7E80", VA = "0x43F7E80")]
	public void Initialize()
	{
	}

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x43F7FC0", Offset = "0x43F7FC0", VA = "0x43F7FC0")]
	public void Initialize(XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x43F8250", Offset = "0x43F8250", VA = "0x43F8250")]
	public void ValidateElement(string localName, string namespaceUri, XmlSchemaInfo schemaInfo, string xsiType, string xsiNil, string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x43FA1A0", Offset = "0x43FA1A0", VA = "0x43FA1A0")]
	public object ValidateAttribute(string localName, string namespaceUri, XmlValueGetter attributeValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x43FA210", Offset = "0x43FA210", VA = "0x43FA210")]
	private object ValidateAttribute(string lName, string ns, XmlValueGetter attributeValueGetter, string attributeStringValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x43FB8B0", Offset = "0x43FB8B0", VA = "0x43FB8B0")]
	public void ValidateEndOfAttributes(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x43FBBE0", Offset = "0x43FBBE0", VA = "0x43FBBE0")]
	public void ValidateText(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x43FBC40", Offset = "0x43FBC40", VA = "0x43FBC40")]
	private void ValidateText(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x43FC6C0", Offset = "0x43FC6C0", VA = "0x43FC6C0")]
	public void ValidateWhitespace(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x43FC720", Offset = "0x43FC720", VA = "0x43FC720")]
	private void ValidateWhitespace(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x43FC990", Offset = "0x43FC990", VA = "0x43FC990")]
	public object ValidateEndElement(XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x43FCF60", Offset = "0x43FCF60", VA = "0x43FCF60")]
	public void SkipToEndElement(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x43FD280", Offset = "0x43FD280", VA = "0x43FD280")]
	public void EndValidation()
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x43FD500", Offset = "0x43FD500", VA = "0x43FD500")]
	internal void GetUnspecifiedDefaultAttributes(ArrayList defaultAttributes, bool createNodeData)
	{
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x43FE170", Offset = "0x43FE170", VA = "0x43FE170")]
	internal void SetDtdSchemaInfo(IDtdInfo dtdSchemaInfo)
	{
	}

	[Token(Token = "0x60017CE")]
	[Address(RVA = "0x43FE210", Offset = "0x43FE210", VA = "0x43FE210")]
	internal string GetConcatenatedValue()
	{
		return null;
	}

	[Token(Token = "0x60017CF")]
	[Address(RVA = "0x43FC9A0", Offset = "0x43FC9A0", VA = "0x43FC9A0")]
	private object InternalValidateEndElement(XmlSchemaInfo schemaInfo, object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x43F9130", Offset = "0x43F9130", VA = "0x43F9130")]
	private void ProcessSchemaLocations(string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x43F88A0", Offset = "0x43F88A0", VA = "0x43F88A0")]
	private object ValidateElementContext(XmlQualifiedName elementName, out bool invalidElementInContext)
	{
		return null;
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x44003A0", Offset = "0x44003A0", VA = "0x44003A0")]
	private XmlSchemaElement GetSubstitutionGroupHead(XmlQualifiedName member)
	{
		return null;
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x43FE240", Offset = "0x43FE240", VA = "0x43FE240")]
	private object ValidateAtomicValue(string stringValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x43FE560", Offset = "0x43FE560", VA = "0x43FE560")]
	private object ValidateAtomicValue(object parsedValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x44015D0", Offset = "0x44015D0", VA = "0x44015D0")]
	private string GetTypeName(SchemaDeclBase decl)
	{
		return null;
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x43FC0F0", Offset = "0x43FC0F0", VA = "0x43FC0F0")]
	private void SaveTextValue(object value)
	{
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x43F7090", Offset = "0x43F7090", VA = "0x43F7090")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x43FD170", Offset = "0x43FD170", VA = "0x43FD170")]
	private void Pop()
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x43F8EE0", Offset = "0x43F8EE0", VA = "0x43F8EE0")]
	private SchemaElementDecl FastGetElementDecl(XmlQualifiedName elementName, object particle)
	{
		return null;
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x43F9520", Offset = "0x43F9520", VA = "0x43F9520")]
	private SchemaElementDecl CheckXsiTypeAndNil(SchemaElementDecl elementDecl, string xsiType, string xsiNil, ref bool declFound)
	{
		return null;
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x43F9CD0", Offset = "0x43F9CD0", VA = "0x43F9CD0")]
	private void ThrowDeclNotFoundWarningOrError(bool declFound)
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x43F9F10", Offset = "0x43F9F10", VA = "0x43F9F10")]
	private void CheckElementProperties()
	{
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x43FA000", Offset = "0x43FA000", VA = "0x43FA000")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x43FAF20", Offset = "0x43FAF20", VA = "0x43FAF20")]
	private SchemaAttDef CheckIsXmlAttribute(XmlQualifiedName attQName)
	{
		return null;
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x44020F0", Offset = "0x44020F0", VA = "0x44020F0")]
	private void AddXmlNamespaceSchema()
	{
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x43FE940", Offset = "0x43FE940", VA = "0x43FE940")]
	internal object CheckMixedValueConstraint(string elementValue)
	{
		return null;
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x43FFE30", Offset = "0x43FFE30", VA = "0x43FFE30")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x43F72A0", Offset = "0x43F72A0", VA = "0x43F72A0")]
	internal void RecompileSchemaSet()
	{
	}

	[Token(Token = "0x60017E3")]
	[Address(RVA = "0x4402380", Offset = "0x4402380", VA = "0x4402380")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name, bool attrValue)
	{
	}

	[Token(Token = "0x60017E4")]
	[Address(RVA = "0x43FB1A0", Offset = "0x43FB1A0", VA = "0x43FB1A0")]
	private object CheckAttributeValue(object value, SchemaAttDef attdef)
	{
		return null;
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x44012E0", Offset = "0x44012E0", VA = "0x44012E0")]
	private object CheckElementValue(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x43FB3F0", Offset = "0x43FB3F0", VA = "0x43FB3F0")]
	private void CheckTokenizedTypes(XmlSchemaDatatype dtype, object typedValue, bool attrValue)
	{
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x4402690", Offset = "0x4402690", VA = "0x4402690")]
	private object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x43FD360", Offset = "0x43FD360", VA = "0x43FD360")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x43F8630", Offset = "0x43F8630", VA = "0x43F8630")]
	private void CheckStateTransition(ValidatorState toState, string methodName)
	{
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x43F8850", Offset = "0x43F8850", VA = "0x43F8850")]
	private void ClearPSVI()
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x43FB9A0", Offset = "0x43FB9A0", VA = "0x43FB9A0")]
	private void CheckRequiredAttributes(SchemaElementDecl currentElementDecl)
	{
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x43FA050", Offset = "0x43FA050", VA = "0x43FA050")]
	private XmlSchemaElement GetSchemaElement()
	{
		return null;
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x43FDCA0", Offset = "0x43FDCA0", VA = "0x43FDCA0")]
	internal string GetDefaultAttributePrefix(string attributeNS)
	{
		return null;
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x4401670", Offset = "0x4401670", VA = "0x4401670")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x4401BC0", Offset = "0x4401BC0", VA = "0x4401BC0")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x43FB580", Offset = "0x43FB580", VA = "0x43FB580")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x43FEFE0", Offset = "0x43FEFE0", VA = "0x43FEFE0")]
	private void EndElementIdentityConstraints(object typedValue, string stringValue, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x4400840", Offset = "0x4400840", VA = "0x4400840")]
	internal static void ElementValidationError(XmlQualifiedName name, ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x43FEA00", Offset = "0x43FEA00", VA = "0x43FEA00")]
	internal static void CompleteValidationError(ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x43FC290", Offset = "0x43FC290", VA = "0x43FC290")]
	internal static string PrintExpectedElements(ArrayList expected, bool getParticles)
	{
		return null;
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x4402F60", Offset = "0x4402F60", VA = "0x4402F60")]
	private static string PrintNames(ArrayList expected)
	{
		return null;
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x44029F0", Offset = "0x44029F0", VA = "0x44029F0")]
	private static void PrintNamesWithNS(ArrayList expected, StringBuilder builder)
	{
	}

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x44030F0", Offset = "0x44030F0", VA = "0x44030F0")]
	private static void EnumerateAny(StringBuilder builder, string namespaces)
	{
	}

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x43FC090", Offset = "0x43FC090", VA = "0x43FC090")]
	internal static string QNameString(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x44005D0", Offset = "0x44005D0", VA = "0x44005D0")]
	internal static string BuildElementName(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x43FC130", Offset = "0x43FC130", VA = "0x43FC130")]
	internal static string BuildElementName(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x44026B0", Offset = "0x44026B0", VA = "0x44026B0")]
	private void ProcessEntity(string name)
	{
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x4401640", Offset = "0x4401640", VA = "0x4401640")]
	private void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x43FAFF0", Offset = "0x43FAFF0", VA = "0x43FAFF0")]
	private void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6001802")]
	[Address(RVA = "0x43FAD00", Offset = "0x43FAD00", VA = "0x43FAD00")]
	private void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x4400630", Offset = "0x4400630", VA = "0x4400630")]
	private void SendValidationEvent(string code, string arg1, string arg2)
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x44021B0", Offset = "0x44021B0", VA = "0x44021B0")]
	private void SendValidationEvent(string code, string[] args, Exception innerException, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x43F7CC0", Offset = "0x43F7CC0", VA = "0x43F7CC0")]
	private void SendValidationEvent(string code, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x4402940", Offset = "0x4402940", VA = "0x4402940")]
	private void SendValidationEvent(XmlSchemaValidationException e)
	{
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x44002F0", Offset = "0x44002F0", VA = "0x44002F0")]
	private void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x43F7A80", Offset = "0x43F7A80", VA = "0x43F7A80")]
	private void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x4402830", Offset = "0x4402830", VA = "0x4402830")]
	private void SendValidationEvent(XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x4402950", Offset = "0x4402950", VA = "0x4402950")]
	internal static void SendValidationEvent(ValidationEventHandler eventHandler, object sender, XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}
}
