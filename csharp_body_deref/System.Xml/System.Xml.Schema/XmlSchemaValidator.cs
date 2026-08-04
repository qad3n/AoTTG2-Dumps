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
		[Address(RVA = "0x4734B80", Offset = "0x4734B80", VA = "0x4734B80")]
		set
		{
		}
	}

	[Token(Token = "0x1700069E")]
	public IXmlLineInfo LineInfoProvider
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x4734BA0", Offset = "0x4734BA0", VA = "0x4734BA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700069F")]
	public Uri SourceUri
	{
		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x4734BE0", Offset = "0x4734BE0", VA = "0x4734BE0")]
		set
		{
		}
	}

	[Token(Token = "0x170006A0")]
	public object ValidationEventSender
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x4734C40", Offset = "0x4734C40", VA = "0x4734C40")]
		set
		{
		}
	}

	[Token(Token = "0x170006A1")]
	internal XmlSchemaSet SchemaSet
	{
		[Token(Token = "0x60017C8")]
		[Address(RVA = "0x473B880", Offset = "0x473B880", VA = "0x473B880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A2")]
	internal XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x473B890", Offset = "0x473B890", VA = "0x473B890")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
	}

	[Token(Token = "0x170006A3")]
	internal XmlSchemaContentType CurrentContentType
	{
		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x473B8A0", Offset = "0x473B8A0", VA = "0x473B8A0")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x170006A4")]
	private bool StrictlyAssessed
	{
		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x473B8F0", Offset = "0x473B8F0", VA = "0x473B8F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A5")]
	private bool HasSchema
	{
		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x473B930", Offset = "0x473B930", VA = "0x473B930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A6")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x4738CC0", Offset = "0x4738CC0", VA = "0x4738CC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A7")]
	internal bool ProcessIdentityConstraints
	{
		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x473EDC0", Offset = "0x473EDC0", VA = "0x473EDC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A8")]
	internal bool ReportValidationWarnings
	{
		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x4740090", Offset = "0x4740090", VA = "0x4740090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A9")]
	internal bool ProcessSchemaHints
	{
		[Token(Token = "0x60017EC")]
		[Address(RVA = "0x4734B70", Offset = "0x4734B70", VA = "0x4734B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x4734C60", Offset = "0x4734C60", VA = "0x4734C60")]
		add
		{
		}
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x4734CE0", Offset = "0x4734CE0", VA = "0x4734CE0")]
		remove
		{
		}
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x4734170", Offset = "0x4734170", VA = "0x4734170")]
	public XmlSchemaValidator(XmlNameTable nameTable, XmlSchemaSet schemas, IXmlNamespaceResolver namespaceResolver, XmlSchemaValidationFlags validationFlags)
	{
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x47343B0", Offset = "0x47343B0", VA = "0x47343B0")]
	private void Init()
	{
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x4734960", Offset = "0x4734960", VA = "0x4734960")]
	private void Reset()
	{
	}

	[Token(Token = "0x60017B9")]
	[Address(RVA = "0x4734D60", Offset = "0x4734D60", VA = "0x4734D60")]
	public void AddSchema(XmlSchema schema)
	{
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x47355E0", Offset = "0x47355E0", VA = "0x47355E0")]
	public void Initialize()
	{
	}

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x4735720", Offset = "0x4735720", VA = "0x4735720")]
	public void Initialize(XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x47359B0", Offset = "0x47359B0", VA = "0x47359B0")]
	public void ValidateElement(string localName, string namespaceUri, XmlSchemaInfo schemaInfo, string xsiType, string xsiNil, string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x4737900", Offset = "0x4737900", VA = "0x4737900")]
	public object ValidateAttribute(string localName, string namespaceUri, XmlValueGetter attributeValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x4737970", Offset = "0x4737970", VA = "0x4737970")]
	private object ValidateAttribute(string lName, string ns, XmlValueGetter attributeValueGetter, string attributeStringValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x4739010", Offset = "0x4739010", VA = "0x4739010")]
	public void ValidateEndOfAttributes(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x4739340", Offset = "0x4739340", VA = "0x4739340")]
	public void ValidateText(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x47393A0", Offset = "0x47393A0", VA = "0x47393A0")]
	private void ValidateText(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x4739E20", Offset = "0x4739E20", VA = "0x4739E20")]
	public void ValidateWhitespace(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x4739E80", Offset = "0x4739E80", VA = "0x4739E80")]
	private void ValidateWhitespace(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x473A0F0", Offset = "0x473A0F0", VA = "0x473A0F0")]
	public object ValidateEndElement(XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x473A6C0", Offset = "0x473A6C0", VA = "0x473A6C0")]
	public void SkipToEndElement(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x473A9E0", Offset = "0x473A9E0", VA = "0x473A9E0")]
	public void EndValidation()
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x473AC60", Offset = "0x473AC60", VA = "0x473AC60")]
	internal void GetUnspecifiedDefaultAttributes(ArrayList defaultAttributes, bool createNodeData)
	{
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x473B8D0", Offset = "0x473B8D0", VA = "0x473B8D0")]
	internal void SetDtdSchemaInfo(IDtdInfo dtdSchemaInfo)
	{
	}

	[Token(Token = "0x60017CE")]
	[Address(RVA = "0x473B970", Offset = "0x473B970", VA = "0x473B970")]
	internal string GetConcatenatedValue()
	{
		return null;
	}

	[Token(Token = "0x60017CF")]
	[Address(RVA = "0x473A100", Offset = "0x473A100", VA = "0x473A100")]
	private object InternalValidateEndElement(XmlSchemaInfo schemaInfo, object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x4736890", Offset = "0x4736890", VA = "0x4736890")]
	private void ProcessSchemaLocations(string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x4736000", Offset = "0x4736000", VA = "0x4736000")]
	private object ValidateElementContext(XmlQualifiedName elementName, out bool invalidElementInContext)
	{
		return null;
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x473DB00", Offset = "0x473DB00", VA = "0x473DB00")]
	private XmlSchemaElement GetSubstitutionGroupHead(XmlQualifiedName member)
	{
		return null;
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x473B9A0", Offset = "0x473B9A0", VA = "0x473B9A0")]
	private object ValidateAtomicValue(string stringValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x473BCC0", Offset = "0x473BCC0", VA = "0x473BCC0")]
	private object ValidateAtomicValue(object parsedValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x473ED30", Offset = "0x473ED30", VA = "0x473ED30")]
	private string GetTypeName(SchemaDeclBase decl)
	{
		return null;
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x4739850", Offset = "0x4739850", VA = "0x4739850")]
	private void SaveTextValue(object value)
	{
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x47347F0", Offset = "0x47347F0", VA = "0x47347F0")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x473A8D0", Offset = "0x473A8D0", VA = "0x473A8D0")]
	private void Pop()
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x4736640", Offset = "0x4736640", VA = "0x4736640")]
	private SchemaElementDecl FastGetElementDecl(XmlQualifiedName elementName, object particle)
	{
		return null;
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x4736C80", Offset = "0x4736C80", VA = "0x4736C80")]
	private SchemaElementDecl CheckXsiTypeAndNil(SchemaElementDecl elementDecl, string xsiType, string xsiNil, ref bool declFound)
	{
		return null;
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x4737430", Offset = "0x4737430", VA = "0x4737430")]
	private void ThrowDeclNotFoundWarningOrError(bool declFound)
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x4737670", Offset = "0x4737670", VA = "0x4737670")]
	private void CheckElementProperties()
	{
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x4737760", Offset = "0x4737760", VA = "0x4737760")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x4738680", Offset = "0x4738680", VA = "0x4738680")]
	private SchemaAttDef CheckIsXmlAttribute(XmlQualifiedName attQName)
	{
		return null;
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x473F850", Offset = "0x473F850", VA = "0x473F850")]
	private void AddXmlNamespaceSchema()
	{
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x473C0A0", Offset = "0x473C0A0", VA = "0x473C0A0")]
	internal object CheckMixedValueConstraint(string elementValue)
	{
		return null;
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x473D590", Offset = "0x473D590", VA = "0x473D590")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x4734A00", Offset = "0x4734A00", VA = "0x4734A00")]
	internal void RecompileSchemaSet()
	{
	}

	[Token(Token = "0x60017E3")]
	[Address(RVA = "0x473FAE0", Offset = "0x473FAE0", VA = "0x473FAE0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name, bool attrValue)
	{
	}

	[Token(Token = "0x60017E4")]
	[Address(RVA = "0x4738900", Offset = "0x4738900", VA = "0x4738900")]
	private object CheckAttributeValue(object value, SchemaAttDef attdef)
	{
		return null;
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x473EA40", Offset = "0x473EA40", VA = "0x473EA40")]
	private object CheckElementValue(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x4738B50", Offset = "0x4738B50", VA = "0x4738B50")]
	private void CheckTokenizedTypes(XmlSchemaDatatype dtype, object typedValue, bool attrValue)
	{
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x473FDF0", Offset = "0x473FDF0", VA = "0x473FDF0")]
	private object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x473AAC0", Offset = "0x473AAC0", VA = "0x473AAC0")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x4735D90", Offset = "0x4735D90", VA = "0x4735D90")]
	private void CheckStateTransition(ValidatorState toState, string methodName)
	{
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x4735FB0", Offset = "0x4735FB0", VA = "0x4735FB0")]
	private void ClearPSVI()
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x4739100", Offset = "0x4739100", VA = "0x4739100")]
	private void CheckRequiredAttributes(SchemaElementDecl currentElementDecl)
	{
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x47377B0", Offset = "0x47377B0", VA = "0x47377B0")]
	private XmlSchemaElement GetSchemaElement()
	{
		return null;
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x473B400", Offset = "0x473B400", VA = "0x473B400")]
	internal string GetDefaultAttributePrefix(string attributeNS)
	{
		return null;
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x473EDD0", Offset = "0x473EDD0", VA = "0x473EDD0")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x473F320", Offset = "0x473F320", VA = "0x473F320")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x4738CE0", Offset = "0x4738CE0", VA = "0x4738CE0")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x473C740", Offset = "0x473C740", VA = "0x473C740")]
	private void EndElementIdentityConstraints(object typedValue, string stringValue, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x473DFA0", Offset = "0x473DFA0", VA = "0x473DFA0")]
	internal static void ElementValidationError(XmlQualifiedName name, ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x473C160", Offset = "0x473C160", VA = "0x473C160")]
	internal static void CompleteValidationError(ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x47399F0", Offset = "0x47399F0", VA = "0x47399F0")]
	internal static string PrintExpectedElements(ArrayList expected, bool getParticles)
	{
		return null;
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x47406C0", Offset = "0x47406C0", VA = "0x47406C0")]
	private static string PrintNames(ArrayList expected)
	{
		return null;
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x4740150", Offset = "0x4740150", VA = "0x4740150")]
	private static void PrintNamesWithNS(ArrayList expected, StringBuilder builder)
	{
	}

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x4740850", Offset = "0x4740850", VA = "0x4740850")]
	private static void EnumerateAny(StringBuilder builder, string namespaces)
	{
	}

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x47397F0", Offset = "0x47397F0", VA = "0x47397F0")]
	internal static string QNameString(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x473DD30", Offset = "0x473DD30", VA = "0x473DD30")]
	internal static string BuildElementName(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x4739890", Offset = "0x4739890", VA = "0x4739890")]
	internal static string BuildElementName(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x473FE10", Offset = "0x473FE10", VA = "0x473FE10")]
	private void ProcessEntity(string name)
	{
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x473EDA0", Offset = "0x473EDA0", VA = "0x473EDA0")]
	private void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x4738750", Offset = "0x4738750", VA = "0x4738750")]
	private void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6001802")]
	[Address(RVA = "0x4738460", Offset = "0x4738460", VA = "0x4738460")]
	private void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x473DD90", Offset = "0x473DD90", VA = "0x473DD90")]
	private void SendValidationEvent(string code, string arg1, string arg2)
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x473F910", Offset = "0x473F910", VA = "0x473F910")]
	private void SendValidationEvent(string code, string[] args, Exception innerException, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x4735420", Offset = "0x4735420", VA = "0x4735420")]
	private void SendValidationEvent(string code, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x47400A0", Offset = "0x47400A0", VA = "0x47400A0")]
	private void SendValidationEvent(XmlSchemaValidationException e)
	{
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x473DA50", Offset = "0x473DA50", VA = "0x473DA50")]
	private void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x47351E0", Offset = "0x47351E0", VA = "0x47351E0")]
	private void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x473FF90", Offset = "0x473FF90", VA = "0x473FF90")]
	private void SendValidationEvent(XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x47400B0", Offset = "0x47400B0", VA = "0x47400B0")]
	internal static void SendValidationEvent(ValidationEventHandler eventHandler, object sender, XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}
}
