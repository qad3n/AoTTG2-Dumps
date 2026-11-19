// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x603B990", Offset = "0x603A990", VA = "0x603B990")]
		set
		{
		}
	}

	[Token(Token = "0x1700069E")]
	public IXmlLineInfo LineInfoProvider
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x603B9B0", Offset = "0x603A9B0", VA = "0x603B9B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700069F")]
	public Uri SourceUri
	{
		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x603B9F0", Offset = "0x603A9F0", VA = "0x603B9F0")]
		set
		{
		}
	}

	[Token(Token = "0x170006A0")]
	public object ValidationEventSender
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x603BA50", Offset = "0x603AA50", VA = "0x603BA50")]
		set
		{
		}
	}

	[Token(Token = "0x170006A1")]
	internal XmlSchemaSet SchemaSet
	{
		[Token(Token = "0x60017C8")]
		[Address(RVA = "0x6042280", Offset = "0x6041280", VA = "0x6042280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A2")]
	internal XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x6042290", Offset = "0x6041290", VA = "0x6042290")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
	}

	[Token(Token = "0x170006A3")]
	internal XmlSchemaContentType CurrentContentType
	{
		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x60422A0", Offset = "0x60412A0", VA = "0x60422A0")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x170006A4")]
	private bool StrictlyAssessed
	{
		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x60422F0", Offset = "0x60412F0", VA = "0x60422F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A5")]
	private bool HasSchema
	{
		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x6042330", Offset = "0x6041330", VA = "0x6042330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A6")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x603F840", Offset = "0x603E840", VA = "0x603F840")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A7")]
	internal bool ProcessIdentityConstraints
	{
		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x6045680", Offset = "0x6044680", VA = "0x6045680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A8")]
	internal bool ReportValidationWarnings
	{
		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x6046850", Offset = "0x6045850", VA = "0x6046850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A9")]
	internal bool ProcessSchemaHints
	{
		[Token(Token = "0x60017EC")]
		[Address(RVA = "0x603B980", Offset = "0x603A980", VA = "0x603B980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x603BA70", Offset = "0x603AA70", VA = "0x603BA70")]
		add
		{
		}
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x603BAF0", Offset = "0x603AAF0", VA = "0x603BAF0")]
		remove
		{
		}
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x603B010", Offset = "0x603A010", VA = "0x603B010")]
	public XmlSchemaValidator(XmlNameTable nameTable, XmlSchemaSet schemas, IXmlNamespaceResolver namespaceResolver, XmlSchemaValidationFlags validationFlags)
	{
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x603B250", Offset = "0x603A250", VA = "0x603B250")]
	private void Init()
	{
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x603B810", Offset = "0x603A810", VA = "0x603B810")]
	private void Reset()
	{
	}

	[Token(Token = "0x60017B9")]
	[Address(RVA = "0x603BB70", Offset = "0x603AB70", VA = "0x603BB70")]
	public void AddSchema(XmlSchema schema)
	{
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x603C3C0", Offset = "0x603B3C0", VA = "0x603C3C0")]
	public void Initialize()
	{
	}

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x603C500", Offset = "0x603B500", VA = "0x603C500")]
	public void Initialize(XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x603C780", Offset = "0x603B780", VA = "0x603C780")]
	public void ValidateElement(string localName, string namespaceUri, XmlSchemaInfo schemaInfo, string xsiType, string xsiNil, string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x603E510", Offset = "0x603D510", VA = "0x603E510")]
	public object ValidateAttribute(string localName, string namespaceUri, XmlValueGetter attributeValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x603E580", Offset = "0x603D580", VA = "0x603E580")]
	private object ValidateAttribute(string lName, string ns, XmlValueGetter attributeValueGetter, string attributeStringValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x603FB50", Offset = "0x603EB50", VA = "0x603FB50")]
	public void ValidateEndOfAttributes(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x603FE30", Offset = "0x603EE30", VA = "0x603FE30")]
	public void ValidateText(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x603FE90", Offset = "0x603EE90", VA = "0x603FE90")]
	private void ValidateText(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x60408B0", Offset = "0x603F8B0", VA = "0x60408B0")]
	public void ValidateWhitespace(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x6040910", Offset = "0x603F910", VA = "0x6040910")]
	private void ValidateWhitespace(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x6040B90", Offset = "0x603FB90", VA = "0x6040B90")]
	public object ValidateEndElement(XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x6041130", Offset = "0x6040130", VA = "0x6041130")]
	public void SkipToEndElement(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x6041470", Offset = "0x6040470", VA = "0x6041470")]
	public void EndValidation()
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x60416F0", Offset = "0x60406F0", VA = "0x60416F0")]
	internal void GetUnspecifiedDefaultAttributes(ArrayList defaultAttributes, bool createNodeData)
	{
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x60422D0", Offset = "0x60412D0", VA = "0x60422D0")]
	internal void SetDtdSchemaInfo(IDtdInfo dtdSchemaInfo)
	{
	}

	[Token(Token = "0x60017CE")]
	[Address(RVA = "0x6042370", Offset = "0x6041370", VA = "0x6042370")]
	internal string GetConcatenatedValue()
	{
		return null;
	}

	[Token(Token = "0x60017CF")]
	[Address(RVA = "0x6040BA0", Offset = "0x603FBA0", VA = "0x6040BA0")]
	private object InternalValidateEndElement(XmlSchemaInfo schemaInfo, object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x603D5A0", Offset = "0x603C5A0", VA = "0x603D5A0")]
	private void ProcessSchemaLocations(string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x603CDC0", Offset = "0x603BDC0", VA = "0x603CDC0")]
	private object ValidateElementContext(XmlQualifiedName elementName, out bool invalidElementInContext)
	{
		return null;
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x6044420", Offset = "0x6043420", VA = "0x6044420")]
	private XmlSchemaElement GetSubstitutionGroupHead(XmlQualifiedName member)
	{
		return null;
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x60423A0", Offset = "0x60413A0", VA = "0x60423A0")]
	private object ValidateAtomicValue(string stringValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x60426A0", Offset = "0x60416A0", VA = "0x60426A0")]
	private object ValidateAtomicValue(object parsedValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x60455F0", Offset = "0x60445F0", VA = "0x60455F0")]
	private string GetTypeName(SchemaDeclBase decl)
	{
		return null;
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x60402D0", Offset = "0x603F2D0", VA = "0x60402D0")]
	private void SaveTextValue(object value)
	{
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x603B690", Offset = "0x603A690", VA = "0x603B690")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x6041340", Offset = "0x6040340", VA = "0x6041340")]
	private void Pop()
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x603D320", Offset = "0x603C320", VA = "0x603D320")]
	private SchemaElementDecl FastGetElementDecl(XmlQualifiedName elementName, object particle)
	{
		return null;
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x603D8D0", Offset = "0x603C8D0", VA = "0x603D8D0")]
	private SchemaElementDecl CheckXsiTypeAndNil(SchemaElementDecl elementDecl, string xsiType, string xsiNil, ref bool declFound)
	{
		return null;
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x603E050", Offset = "0x603D050", VA = "0x603E050")]
	private void ThrowDeclNotFoundWarningOrError(bool declFound)
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x603E280", Offset = "0x603D280", VA = "0x603E280")]
	private void CheckElementProperties()
	{
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x603E370", Offset = "0x603D370", VA = "0x603E370")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x603F1F0", Offset = "0x603E1F0", VA = "0x603F1F0")]
	private SchemaAttDef CheckIsXmlAttribute(XmlQualifiedName attQName)
	{
		return null;
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x6045FF0", Offset = "0x6044FF0", VA = "0x6045FF0")]
	private void AddXmlNamespaceSchema()
	{
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x6042A70", Offset = "0x6041A70", VA = "0x6042A70")]
	internal object CheckMixedValueConstraint(string elementValue)
	{
		return null;
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x6043F40", Offset = "0x6042F40", VA = "0x6043F40")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x603B8B0", Offset = "0x603A8B0", VA = "0x603B8B0")]
	internal void RecompileSchemaSet()
	{
	}

	[Token(Token = "0x60017E3")]
	[Address(RVA = "0x6046280", Offset = "0x6045280", VA = "0x6046280")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name, bool attrValue)
	{
	}

	[Token(Token = "0x60017E4")]
	[Address(RVA = "0x603F470", Offset = "0x603E470", VA = "0x603F470")]
	private object CheckAttributeValue(object value, SchemaAttDef attdef)
	{
		return null;
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x6045300", Offset = "0x6044300", VA = "0x6045300")]
	private object CheckElementValue(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x603F6D0", Offset = "0x603E6D0", VA = "0x603F6D0")]
	private void CheckTokenizedTypes(XmlSchemaDatatype dtype, object typedValue, bool attrValue)
	{
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x6046590", Offset = "0x6045590", VA = "0x6046590")]
	private object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x6041560", Offset = "0x6040560", VA = "0x6041560")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x603CB60", Offset = "0x603BB60", VA = "0x603CB60")]
	private void CheckStateTransition(ValidatorState toState, string methodName)
	{
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x603CD70", Offset = "0x603BD70", VA = "0x603CD70")]
	private void ClearPSVI()
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x603FC30", Offset = "0x603EC30", VA = "0x603FC30")]
	private void CheckRequiredAttributes(SchemaElementDecl currentElementDecl)
	{
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x603E3C0", Offset = "0x603D3C0", VA = "0x603E3C0")]
	private XmlSchemaElement GetSchemaElement()
	{
		return null;
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x6041EA0", Offset = "0x6040EA0", VA = "0x6041EA0")]
	internal string GetDefaultAttributePrefix(string attributeNS)
	{
		return null;
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x6045690", Offset = "0x6044690", VA = "0x6045690")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x6045BD0", Offset = "0x6044BD0", VA = "0x6045BD0")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x603F860", Offset = "0x603E860", VA = "0x603F860")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x6043120", Offset = "0x6042120", VA = "0x6043120")]
	private void EndElementIdentityConstraints(object typedValue, string stringValue, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x60448B0", Offset = "0x60438B0", VA = "0x60448B0")]
	internal static void ElementValidationError(XmlQualifiedName name, ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x6042B30", Offset = "0x6041B30", VA = "0x6042B30")]
	internal static void CompleteValidationError(ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x6040470", Offset = "0x603F470", VA = "0x6040470")]
	internal static string PrintExpectedElements(ArrayList expected, bool getParticles)
	{
		return null;
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x6046E70", Offset = "0x6045E70", VA = "0x6046E70")]
	private static string PrintNames(ArrayList expected)
	{
		return null;
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x6046910", Offset = "0x6045910", VA = "0x6046910")]
	private static void PrintNamesWithNS(ArrayList expected, StringBuilder builder)
	{
	}

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x6047000", Offset = "0x6046000", VA = "0x6047000")]
	private static void EnumerateAny(StringBuilder builder, string namespaces)
	{
	}

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x6040270", Offset = "0x603F270", VA = "0x6040270")]
	internal static string QNameString(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x6044640", Offset = "0x6043640", VA = "0x6044640")]
	internal static string BuildElementName(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x6040310", Offset = "0x603F310", VA = "0x6040310")]
	internal static string BuildElementName(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x60465B0", Offset = "0x60455B0", VA = "0x60465B0")]
	private void ProcessEntity(string name)
	{
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x6045660", Offset = "0x6044660", VA = "0x6045660")]
	private void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x603F2C0", Offset = "0x603E2C0", VA = "0x603F2C0")]
	private void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6001802")]
	[Address(RVA = "0x603EFD0", Offset = "0x603DFD0", VA = "0x603EFD0")]
	private void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x60446A0", Offset = "0x60436A0", VA = "0x60446A0")]
	private void SendValidationEvent(string code, string arg1, string arg2)
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x60460B0", Offset = "0x60450B0", VA = "0x60460B0")]
	private void SendValidationEvent(string code, string[] args, Exception innerException, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x603C200", Offset = "0x603B200", VA = "0x603C200")]
	private void SendValidationEvent(string code, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x6046860", Offset = "0x6045860", VA = "0x6046860")]
	private void SendValidationEvent(XmlSchemaValidationException e)
	{
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x6044370", Offset = "0x6043370", VA = "0x6044370")]
	private void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x603BFC0", Offset = "0x603AFC0", VA = "0x603BFC0")]
	private void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x6046750", Offset = "0x6045750", VA = "0x6046750")]
	private void SendValidationEvent(XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x6046870", Offset = "0x6045870", VA = "0x6046870")]
	internal static void SendValidationEvent(ValidationEventHandler eventHandler, object sender, XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}
}
