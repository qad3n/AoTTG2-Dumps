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
		[Address(RVA = "0x1BD5220", Offset = "0x1BD3820", VA = "0x181BD5220")]
		set
		{
		}
	}

	[Token(Token = "0x1700069E")]
	public IXmlLineInfo LineInfoProvider
	{
		[Token(Token = "0x60017B4")]
		[Address(RVA = "0x268C980", Offset = "0x268AF80", VA = "0x18268C980")]
		set
		{
		}
	}

	[Token(Token = "0x1700069F")]
	public Uri SourceUri
	{
		[Token(Token = "0x60017B5")]
		[Address(RVA = "0x268C9B0", Offset = "0x268AFB0", VA = "0x18268C9B0")]
		set
		{
		}
	}

	[Token(Token = "0x170006A0")]
	public object ValidationEventSender
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		set
		{
		}
	}

	[Token(Token = "0x170006A1")]
	internal XmlSchemaSet SchemaSet
	{
		[Token(Token = "0x60017C8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A2")]
	internal XmlSchemaValidationFlags ValidationFlags
	{
		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(XmlSchemaValidationFlags);
		}
	}

	[Token(Token = "0x170006A3")]
	internal XmlSchemaContentType CurrentContentType
	{
		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x268C7A0", Offset = "0x268ADA0", VA = "0x18268C7A0")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x170006A4")]
	private bool StrictlyAssessed
	{
		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x268C890", Offset = "0x268AE90", VA = "0x18268C890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A5")]
	private bool HasSchema
	{
		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x268C800", Offset = "0x268AE00", VA = "0x18268C800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A6")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x268C7E0", Offset = "0x268ADE0", VA = "0x18268C7E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A7")]
	internal bool ProcessIdentityConstraints
	{
		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x268C850", Offset = "0x268AE50", VA = "0x18268C850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A8")]
	internal bool ReportValidationWarnings
	{
		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x268C880", Offset = "0x268AE80", VA = "0x18268C880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A9")]
	internal bool ProcessSchemaHints
	{
		[Token(Token = "0x60017EC")]
		[Address(RVA = "0x268C860", Offset = "0x268AE60", VA = "0x18268C860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000002")]
	public event ValidationEventHandler ValidationEventHandler
	{
		[Token(Token = "0x60017B7")]
		[Address(RVA = "0x268C6F0", Offset = "0x268ACF0", VA = "0x18268C6F0")]
		add
		{
		}
		[Token(Token = "0x60017B8")]
		[Address(RVA = "0x268C8D0", Offset = "0x268AED0", VA = "0x18268C8D0")]
		remove
		{
		}
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x268C320", Offset = "0x268A920", VA = "0x18268C320")]
	public XmlSchemaValidator(XmlNameTable nameTable, XmlSchemaSet schemas, IXmlNamespaceResolver namespaceResolver, XmlSchemaValidationFlags validationFlags)
	{
	}

	[Token(Token = "0x60017B1")]
	[Address(RVA = "0x2685DF0", Offset = "0x26843F0", VA = "0x182685DF0")]
	private void Init()
	{
	}

	[Token(Token = "0x60017B2")]
	[Address(RVA = "0x2688990", Offset = "0x2686F90", VA = "0x182688990")]
	private void Reset()
	{
	}

	[Token(Token = "0x60017B9")]
	[Address(RVA = "0x26805B0", Offset = "0x267EBB0", VA = "0x1826805B0")]
	public void AddSchema(XmlSchema schema)
	{
	}

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x2686220", Offset = "0x2684820", VA = "0x182686220")]
	public void Initialize()
	{
	}

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x2686380", Offset = "0x2684980", VA = "0x182686380")]
	public void Initialize(XmlSchemaObject partialValidationType)
	{
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x268B0E0", Offset = "0x26896E0", VA = "0x18268B0E0")]
	public void ValidateElement(string localName, string namespaceUri, XmlSchemaInfo schemaInfo, string xsiType, string xsiNil, string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x268AAF0", Offset = "0x26890F0", VA = "0x18268AAF0")]
	public object ValidateAttribute(string localName, string namespaceUri, XmlValueGetter attributeValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x268A090", Offset = "0x2688690", VA = "0x18268A090")]
	private object ValidateAttribute(string lName, string ns, XmlValueGetter attributeValueGetter, string attributeStringValue, XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x268B600", Offset = "0x2689C00", VA = "0x18268B600")]
	public void ValidateEndOfAttributes(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x268B730", Offset = "0x2689D30", VA = "0x18268B730")]
	public void ValidateText(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C1")]
	[Address(RVA = "0x268B7A0", Offset = "0x2689DA0", VA = "0x18268B7A0")]
	private void ValidateText(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x268BE60", Offset = "0x268A460", VA = "0x18268BE60")]
	public void ValidateWhitespace(XmlValueGetter elementValue)
	{
	}

	[Token(Token = "0x60017C3")]
	[Address(RVA = "0x268BBF0", Offset = "0x268A1F0", VA = "0x18268BBF0")]
	private void ValidateWhitespace(string elementStringValue, XmlValueGetter elementValueGetter)
	{
	}

	[Token(Token = "0x60017C4")]
	[Address(RVA = "0x268B5F0", Offset = "0x2689BF0", VA = "0x18268B5F0")]
	public object ValidateEndElement(XmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60017C5")]
	[Address(RVA = "0x26894F0", Offset = "0x2687AF0", VA = "0x1826894F0")]
	public void SkipToEndElement(XmlSchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60017C6")]
	[Address(RVA = "0x2684870", Offset = "0x2682E70", VA = "0x182684870")]
	public void EndValidation()
	{
	}

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x26856D0", Offset = "0x2683CD0", VA = "0x1826856D0")]
	internal void GetUnspecifiedDefaultAttributes(ArrayList defaultAttributes, bool createNodeData)
	{
	}

	[Token(Token = "0x60017CB")]
	[Address(RVA = "0x26894D0", Offset = "0x2687AD0", VA = "0x1826894D0")]
	internal void SetDtdSchemaInfo(IDtdInfo dtdSchemaInfo)
	{
	}

	[Token(Token = "0x60017CE")]
	[Address(RVA = "0x2684FF0", Offset = "0x26835F0", VA = "0x182684FF0")]
	internal string GetConcatenatedValue()
	{
		return null;
	}

	[Token(Token = "0x60017CF")]
	[Address(RVA = "0x2686660", Offset = "0x2684C60", VA = "0x182686660")]
	private object InternalValidateEndElement(XmlSchemaInfo schemaInfo, object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x2688080", Offset = "0x2686680", VA = "0x182688080")]
	private void ProcessSchemaLocations(string xsiSchemaLocation, string xsiNoNamespaceSchemaLocation)
	{
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x268AB70", Offset = "0x2689170", VA = "0x18268AB70")]
	private object ValidateElementContext(XmlQualifiedName elementName, out bool invalidElementInContext)
	{
		return null;
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x2685420", Offset = "0x2683A20", VA = "0x182685420")]
	private XmlSchemaElement GetSubstitutionGroupHead(XmlQualifiedName member)
	{
		return null;
	}

	[Token(Token = "0x60017D3")]
	[Address(RVA = "0x2689D80", Offset = "0x2688380", VA = "0x182689D80")]
	private object ValidateAtomicValue(string stringValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D4")]
	[Address(RVA = "0x2689970", Offset = "0x2687F70", VA = "0x182689970")]
	private object ValidateAtomicValue(object parsedValue, out XmlSchemaSimpleType memberType)
	{
		return null;
	}

	[Token(Token = "0x60017D5")]
	[Address(RVA = "0x2685660", Offset = "0x2683C60", VA = "0x182685660")]
	private string GetTypeName(SchemaDeclBase decl)
	{
		return null;
	}

	[Token(Token = "0x60017D6")]
	[Address(RVA = "0x2688A50", Offset = "0x2687050", VA = "0x182688A50")]
	private void SaveTextValue(object value)
	{
	}

	[Token(Token = "0x60017D7")]
	[Address(RVA = "0x26886A0", Offset = "0x2686CA0", VA = "0x1826886A0")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x26870F0", Offset = "0x26856F0", VA = "0x1826870F0")]
	private void Pop()
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x2684CD0", Offset = "0x26832D0", VA = "0x182684CD0")]
	private SchemaElementDecl FastGetElementDecl(XmlQualifiedName elementName, object particle)
	{
		return null;
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x2682010", Offset = "0x2680610", VA = "0x182682010")]
	private SchemaElementDecl CheckXsiTypeAndNil(SchemaElementDecl elementDecl, string xsiType, string xsiNil, ref bool declFound)
	{
		return null;
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x2689730", Offset = "0x2687D30", VA = "0x182689730")]
	private void ThrowDeclNotFoundWarningOrError(bool declFound)
	{
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x2681270", Offset = "0x267F870", VA = "0x182681270")]
	private void CheckElementProperties()
	{
	}

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x268B6D0", Offset = "0x2689CD0", VA = "0x18268B6D0")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017DE")]
	[Address(RVA = "0x26817A0", Offset = "0x267FDA0", VA = "0x1826817A0")]
	private SchemaAttDef CheckIsXmlAttribute(XmlQualifiedName attQName)
	{
		return null;
	}

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x26809D0", Offset = "0x267EFD0", VA = "0x1826809D0")]
	private void AddXmlNamespaceSchema()
	{
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x2681930", Offset = "0x267FF30", VA = "0x182681930")]
	internal object CheckMixedValueConstraint(string elementValue)
	{
		return null;
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x2686CB0", Offset = "0x26852B0", VA = "0x182686CB0")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x60017E2")]
	[Address(RVA = "0x2688920", Offset = "0x2686F20", VA = "0x182688920")]
	internal void RecompileSchemaSet()
	{
	}

	[Token(Token = "0x60017E3")]
	[Address(RVA = "0x2688380", Offset = "0x2686980", VA = "0x182688380")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name, bool attrValue)
	{
	}

	[Token(Token = "0x60017E4")]
	[Address(RVA = "0x2680FD0", Offset = "0x267F5D0", VA = "0x182680FD0")]
	private object CheckAttributeValue(object value, SchemaAttDef attdef)
	{
		return null;
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x2681360", Offset = "0x267F960", VA = "0x182681360")]
	private object CheckElementValue(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x2681EA0", Offset = "0x26804A0", VA = "0x182681EA0")]
	private void CheckTokenizedTypes(XmlSchemaDatatype dtype, object typedValue, bool attrValue)
	{
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x2684FD0", Offset = "0x26835D0", VA = "0x182684FD0")]
	private object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x2681670", Offset = "0x267FC70", VA = "0x182681670")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x2681C10", Offset = "0x2680210", VA = "0x182681C10")]
	private void CheckStateTransition(ValidatorState toState, string methodName)
	{
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x2682740", Offset = "0x2680D40", VA = "0x182682740")]
	private void ClearPSVI()
	{
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x2681A40", Offset = "0x2680040", VA = "0x182681A40")]
	private void CheckRequiredAttributes(SchemaElementDecl currentElementDecl)
	{
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x26852B0", Offset = "0x26838B0", VA = "0x1826852B0")]
	private XmlSchemaElement GetSchemaElement()
	{
		return null;
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x2685020", Offset = "0x2683620", VA = "0x182685020")]
	internal string GetDefaultAttributePrefix(string attributeNS)
	{
		return null;
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x26800A0", Offset = "0x267E6A0", VA = "0x1826800A0")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x2682DD0", Offset = "0x26813D0", VA = "0x182682DD0")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x2680AB0", Offset = "0x267F0B0", VA = "0x182680AB0")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x2683CA0", Offset = "0x26822A0", VA = "0x182683CA0")]
	private void EndElementIdentityConstraints(object typedValue, string stringValue, XmlSchemaDatatype datatype)
	{
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x2683170", Offset = "0x2681770", VA = "0x182683170")]
	internal static void ElementValidationError(XmlQualifiedName name, ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x26827A0", Offset = "0x2680DA0", VA = "0x1826827A0")]
	internal static void CompleteValidationError(ValidationState context, ValidationEventHandler eventHandler, object sender, string sourceUri, int lineNo, int linePos, XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x2687270", Offset = "0x2685870", VA = "0x182687270")]
	internal static string PrintExpectedElements(ArrayList expected, bool getParticles)
	{
		return null;
	}

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x2687DD0", Offset = "0x26863D0", VA = "0x182687DD0")]
	private static string PrintNames(ArrayList expected)
	{
		return null;
	}

	[Token(Token = "0x60017FA")]
	[Address(RVA = "0x26877D0", Offset = "0x2685DD0", VA = "0x1826877D0")]
	private static void PrintNamesWithNS(ArrayList expected, StringBuilder builder)
	{
	}

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x2684AA0", Offset = "0x26830A0", VA = "0x182684AA0")]
	private static void EnumerateAny(StringBuilder builder, string namespaces)
	{
	}

	[Token(Token = "0x60017FC")]
	[Address(RVA = "0x26888B0", Offset = "0x2686EB0", VA = "0x1826888B0")]
	internal static string QNameString(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x2680F60", Offset = "0x267F560", VA = "0x182680F60")]
	internal static string BuildElementName(XmlQualifiedName qname)
	{
		return null;
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x2680DD0", Offset = "0x267F3D0", VA = "0x182680DD0")]
	internal static string BuildElementName(string localName, string ns)
	{
		return null;
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x2687F50", Offset = "0x2686550", VA = "0x182687F50")]
	private void ProcessEntity(string name)
	{
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x2688F30", Offset = "0x2687530", VA = "0x182688F30")]
	private void SendValidationEvent(string code)
	{
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x2689050", Offset = "0x2687650", VA = "0x182689050")]
	private void SendValidationEvent(string code, string[] args)
	{
	}

	[Token(Token = "0x6001802")]
	[Address(RVA = "0x2688F50", Offset = "0x2687550", VA = "0x182688F50")]
	private void SendValidationEvent(string code, string arg)
	{
	}

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x2688BE0", Offset = "0x26871E0", VA = "0x182688BE0")]
	private void SendValidationEvent(string code, string arg1, string arg2)
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x2689260", Offset = "0x2687860", VA = "0x182689260")]
	private void SendValidationEvent(string code, string[] args, Exception innerException, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x2688AB0", Offset = "0x26870B0", VA = "0x182688AB0")]
	private void SendValidationEvent(string code, string[] args, Exception innerException)
	{
	}

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x2688AA0", Offset = "0x26870A0", VA = "0x182688AA0")]
	private void SendValidationEvent(XmlSchemaValidationException e)
	{
	}

	[Token(Token = "0x6001807")]
	[Address(RVA = "0x2689170", Offset = "0x2687770", VA = "0x182689170")]
	private void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x26893B0", Offset = "0x26879B0", VA = "0x1826893B0")]
	private void SendValidationEvent(string code, string msg, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x2688D50", Offset = "0x2687350", VA = "0x182688D50")]
	private void SendValidationEvent(XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x2688E90", Offset = "0x2687490", VA = "0x182688E90")]
	internal static void SendValidationEvent(ValidationEventHandler eventHandler, object sender, XmlSchemaValidationException e, XmlSeverityType severity)
	{
	}
}
