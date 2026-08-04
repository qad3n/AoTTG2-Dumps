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
		[Address(RVA = "0x46C17B0", Offset = "0x46C17B0", VA = "0x46C17B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700050A")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0x46C17D0", Offset = "0x46C17D0", VA = "0x46C17D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700050B")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x60012A6")]
		[Address(RVA = "0x46C17F0", Offset = "0x46C17F0", VA = "0x46C17F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700050C")]
	internal Hashtable ChameleonSchemas
	{
		[Token(Token = "0x60012A7")]
		[Address(RVA = "0x46C1800", Offset = "0x46C1800", VA = "0x46C1800")]
		set
		{
		}
	}

	[Token(Token = "0x1700050D")]
	internal XmlSchema RootSchema
	{
		[Token(Token = "0x60012A8")]
		[Address(RVA = "0x46C1810", Offset = "0x46C1810", VA = "0x46C1810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x46BD070", Offset = "0x46BD070", VA = "0x46BD070")]
	public Preprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x46BD170", Offset = "0x46BD170", VA = "0x46BD170")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x46C0F90", Offset = "0x46C0F90", VA = "0x46C0F90")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x46C1720", Offset = "0x46C1720", VA = "0x46C1720")]
	private void CleanupRedefine(XmlSchemaExternal include)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x46BE950", Offset = "0x46BE950", VA = "0x46BE950")]
	private void BuildSchemaList(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x46BD8D0", Offset = "0x46BD8D0", VA = "0x46BD8D0")]
	private void LoadExternals(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x46C1080", Offset = "0x46C1080", VA = "0x46C1080")]
	internal static XmlSchema GetBuildInSchema()
	{
		return null;
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x46C18A0", Offset = "0x46C18A0", VA = "0x46C18A0")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x46C1B10", Offset = "0x46C1B10", VA = "0x46C1B10")]
	private void ParseUri(string uri, string code, XmlSchemaObject sourceSchemaObject)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x46BEAE0", Offset = "0x46BEAE0", VA = "0x46BEAE0")]
	private void Preprocess(XmlSchema schema, string targetNamespace, ArrayList imports)
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x46C2170", Offset = "0x46C2170", VA = "0x46C2170")]
	private void CopyIncludedComponents(XmlSchema includedSchema, XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x46BFFD0", Offset = "0x46BFFD0", VA = "0x46BFFD0")]
	private void PreprocessRedefine(RedefineEntry redefineEntry)
	{
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x46C5CE0", Offset = "0x46C5CE0", VA = "0x46C5CE0")]
	private void GetIncludedSet(XmlSchema schema, ArrayList includesList)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x46C5C70", Offset = "0x46C5C70", VA = "0x46C5C70")]
	internal static XmlSchema GetParentSchema(XmlSchemaObject currentSchemaObject)
	{
		return null;
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x46C2080", Offset = "0x46C2080", VA = "0x46C2080")]
	private void SetSchemaDefaults(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x46C6410", Offset = "0x46C6410", VA = "0x46C6410")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name, XmlSchemaGroup redefined)
	{
		return default(int);
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x46C5E20", Offset = "0x46C5E20", VA = "0x46C5E20")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x46C5EB0", Offset = "0x46C5EB0", VA = "0x46C5EB0")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x46C6320", Offset = "0x46C6320", VA = "0x46C6320")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x46C6000", Offset = "0x46C6000", VA = "0x46C6000")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x46C4070", Offset = "0x46C4070", VA = "0x46C4070")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x46C6CA0", Offset = "0x46C6CA0", VA = "0x46C6CA0")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x46C6A10", Offset = "0x46C6A10", VA = "0x46C6A10")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x46C41E0", Offset = "0x46C41E0", VA = "0x46C41E0")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x46C5470", Offset = "0x46C5470", VA = "0x46C5470")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x46C79E0", Offset = "0x46C79E0", VA = "0x46C79E0")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x46C75F0", Offset = "0x46C75F0", VA = "0x46C75F0")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x46C7E20", Offset = "0x46C7E20", VA = "0x46C7E20")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x46C4DE0", Offset = "0x46C4DE0", VA = "0x46C4DE0")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x46C4340", Offset = "0x46C4340", VA = "0x46C4340")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x46C56E0", Offset = "0x46C56E0", VA = "0x46C56E0")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x46C5910", Offset = "0x46C5910", VA = "0x46C5910")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x46C8230", Offset = "0x46C8230", VA = "0x46C8230")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x46C7170", Offset = "0x46C7170", VA = "0x46C7170")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x46C1D20", Offset = "0x46C1D20", VA = "0x46C1D20")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x46C6750", Offset = "0x46C6750", VA = "0x46C6750")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x46C6EF0", Offset = "0x46C6EF0", VA = "0x46C6EF0")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x46C1820", Offset = "0x46C1820", VA = "0x46C1820")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x46C1870", Offset = "0x46C1870", VA = "0x46C1870")]
	private object GetSchemaEntity(Uri ruri)
	{
		return null;
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x46BD790", Offset = "0x46BD790", VA = "0x46BD790")]
	private XmlSchema GetChameleonSchema(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x46C1C70", Offset = "0x46C1C70", VA = "0x46C1C70")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x46C1C90", Offset = "0x46C1C90", VA = "0x46C1C90")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x46C5BF0", Offset = "0x46C5BF0", VA = "0x46C5BF0")]
	private void PreprocessAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
