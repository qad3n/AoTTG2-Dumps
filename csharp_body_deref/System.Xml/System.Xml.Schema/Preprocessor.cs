// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Preprocessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001E5")]
internal sealed class Preprocessor : BaseProcessor
{
	[Token(Token = "0x40008CB")]
	[FieldOffset(Offset = "0x40")]
	private string Xmlns;

	[Token(Token = "0x40008CC")]
	[FieldOffset(Offset = "0x48")]
	private string NsXsi;

	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x50")]
	private string targetNamespace;

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchema rootSchema;

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchema currentSchema;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchemaForm elementFormDefault;

	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x6C")]
	private XmlSchemaForm attributeFormDefault;

	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaDerivationMethod blockDefault;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x74")]
	private XmlSchemaDerivationMethod finalDefault;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x78")]
	private Hashtable schemaLocations;

	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x80")]
	private Hashtable chameleonSchemas;

	[Token(Token = "0x40008D6")]
	[FieldOffset(Offset = "0x88")]
	private Hashtable referenceNamespaces;

	[Token(Token = "0x40008D7")]
	[FieldOffset(Offset = "0x90")]
	private Hashtable processedExternals;

	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x98")]
	private SortedList lockList;

	[Token(Token = "0x40008D9")]
	[FieldOffset(Offset = "0xA0")]
	private XmlReaderSettings readerSettings;

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0xA8")]
	private XmlSchema rootSchemaForRedefine;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0xB0")]
	private ArrayList redefinedList;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x0")]
	private static XmlSchema builtInSchemaForXmlNS;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0xB8")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x17000509")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x60012A4")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		set
		{
		}
	}

	[Token(Token = "0x1700050A")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		set
		{
		}
	}

	[Token(Token = "0x1700050B")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x60012A6")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		set
		{
		}
	}

	[Token(Token = "0x1700050C")]
	internal Hashtable ChameleonSchemas
	{
		[Token(Token = "0x60012A7")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x1700050D")]
	internal XmlSchema RootSchema
	{
		[Token(Token = "0x60012A8")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x2611A30", Offset = "0x2610030", VA = "0x182611A30")]
	public Preprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x2609490", Offset = "0x2607A90", VA = "0x182609490")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x2608210", Offset = "0x2606810", VA = "0x182608210")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x2608170", Offset = "0x2606770", VA = "0x182608170")]
	private void CleanupRedefine(XmlSchemaExternal include)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x2607870", Offset = "0x2605E70", VA = "0x182607870")]
	private void BuildSchemaList(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x260A4B0", Offset = "0x2608AB0", VA = "0x18260A4B0")]
	private void LoadExternals(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x2609AC0", Offset = "0x26080C0", VA = "0x182609AC0")]
	internal static XmlSchema GetBuildInSchema()
	{
		return null;
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x26075E0", Offset = "0x2605BE0", VA = "0x1826075E0")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x260B290", Offset = "0x2609890", VA = "0x18260B290")]
	private void ParseUri(string uri, string code, XmlSchemaObject sourceSchemaObject)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x260FBB0", Offset = "0x260E1B0", VA = "0x18260FBB0")]
	private void Preprocess(XmlSchema schema, string targetNamespace, ArrayList imports)
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x2608310", Offset = "0x2606910", VA = "0x182608310")]
	private void CopyIncludedComponents(XmlSchema includedSchema, XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x260E4F0", Offset = "0x260CAF0", VA = "0x18260E4F0")]
	private void PreprocessRedefine(RedefineEntry redefineEntry)
	{
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x260A290", Offset = "0x2608890", VA = "0x18260A290")]
	private void GetIncludedSet(XmlSchema schema, ArrayList includesList)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x260A3F0", Offset = "0x26089F0", VA = "0x18260A3F0")]
	internal static XmlSchema GetParentSchema(XmlSchemaObject currentSchemaObject)
	{
		return null;
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x26111F0", Offset = "0x260F7F0", VA = "0x1826111F0")]
	private void SetSchemaDefaults(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x2609180", Offset = "0x2607780", VA = "0x182609180")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name, XmlSchemaGroup redefined)
	{
		return default(int);
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x2607F90", Offset = "0x2606590", VA = "0x182607F90")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x2607A10", Offset = "0x2606010", VA = "0x182607A10")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x2608030", Offset = "0x2606630", VA = "0x182608030")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x2607B70", Offset = "0x2606170", VA = "0x182607B70")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x260B880", Offset = "0x2609E80", VA = "0x18260B880")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x260D2D0", Offset = "0x260B8D0", VA = "0x18260D2D0")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x260B530", Offset = "0x2609B30", VA = "0x18260B530")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x260B750", Offset = "0x2609D50", VA = "0x18260B750")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x260CAE0", Offset = "0x260B0E0", VA = "0x18260CAE0")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x260D490", Offset = "0x260BA90", VA = "0x18260D490")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x260C720", Offset = "0x260AD20", VA = "0x18260C720")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x260CF30", Offset = "0x260B530", VA = "0x18260CF30")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x260F4F0", Offset = "0x260DAF0", VA = "0x18260F4F0")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x260BD30", Offset = "0x260A330", VA = "0x18260BD30")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x260CD50", Offset = "0x260B350", VA = "0x18260CD50")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x260D860", Offset = "0x260BE60", VA = "0x18260D860")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x260DA90", Offset = "0x260C090", VA = "0x18260DA90")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x260BA10", Offset = "0x260A010", VA = "0x18260BA10")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x26112F0", Offset = "0x260F8F0", VA = "0x1826112F0")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x2611570", Offset = "0x260FB70", VA = "0x182611570")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x2611870", Offset = "0x260FE70", VA = "0x182611870")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x2611170", Offset = "0x260F770", VA = "0x182611170")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x260A470", Offset = "0x2608A70", VA = "0x18260A470")]
	private object GetSchemaEntity(Uri ruri)
	{
		return null;
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x260A140", Offset = "0x2608740", VA = "0x18260A140")]
	private XmlSchema GetChameleonSchema(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x26111C0", Offset = "0x260F7C0", VA = "0x1826111C0")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x260B360", Offset = "0x2609960", VA = "0x18260B360")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x260B4A0", Offset = "0x2609AA0", VA = "0x18260B4A0")]
	private void PreprocessAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
