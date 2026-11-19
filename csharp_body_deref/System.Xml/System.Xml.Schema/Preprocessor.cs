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
		[Address(RVA = "0x5FD1F50", Offset = "0x5FD0F50", VA = "0x5FD1F50")]
		set
		{
		}
	}

	[Token(Token = "0x1700050A")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0x5FD1F70", Offset = "0x5FD0F70", VA = "0x5FD1F70")]
		set
		{
		}
	}

	[Token(Token = "0x1700050B")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x60012A6")]
		[Address(RVA = "0x5FD1F90", Offset = "0x5FD0F90", VA = "0x5FD1F90")]
		set
		{
		}
	}

	[Token(Token = "0x1700050C")]
	internal Hashtable ChameleonSchemas
	{
		[Token(Token = "0x60012A7")]
		[Address(RVA = "0x5FD1FA0", Offset = "0x5FD0FA0", VA = "0x5FD1FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700050D")]
	internal XmlSchema RootSchema
	{
		[Token(Token = "0x60012A8")]
		[Address(RVA = "0x5FD1FB0", Offset = "0x5FD0FB0", VA = "0x5FD1FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x5FCDB90", Offset = "0x5FCCB90", VA = "0x5FCDB90")]
	public Preprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x5FCDC90", Offset = "0x5FCCC90", VA = "0x5FCDC90")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x5FD1730", Offset = "0x5FD0730", VA = "0x5FD1730")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x5FD1EC0", Offset = "0x5FD0EC0", VA = "0x5FD1EC0")]
	private void CleanupRedefine(XmlSchemaExternal include)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x5FCF280", Offset = "0x5FCE280", VA = "0x5FCF280")]
	private void BuildSchemaList(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x5FCE360", Offset = "0x5FCD360", VA = "0x5FCE360")]
	private void LoadExternals(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x5FD1820", Offset = "0x5FD0820", VA = "0x5FD1820")]
	internal static XmlSchema GetBuildInSchema()
	{
		return null;
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x5FD2040", Offset = "0x5FD1040", VA = "0x5FD2040")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x5FD22A0", Offset = "0x5FD12A0", VA = "0x5FD22A0")]
	private void ParseUri(string uri, string code, XmlSchemaObject sourceSchemaObject)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x5FCF400", Offset = "0x5FCE400", VA = "0x5FCF400")]
	private void Preprocess(XmlSchema schema, string targetNamespace, ArrayList imports)
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x5FD28A0", Offset = "0x5FD18A0", VA = "0x5FD28A0")]
	private void CopyIncludedComponents(XmlSchema includedSchema, XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x5FD0840", Offset = "0x5FCF840", VA = "0x5FD0840")]
	private void PreprocessRedefine(RedefineEntry redefineEntry)
	{
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x5FD5910", Offset = "0x5FD4910", VA = "0x5FD5910")]
	private void GetIncludedSet(XmlSchema schema, ArrayList includesList)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x5FD58A0", Offset = "0x5FD48A0", VA = "0x5FD58A0")]
	internal static XmlSchema GetParentSchema(XmlSchemaObject currentSchemaObject)
	{
		return null;
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x5FD27B0", Offset = "0x5FD17B0", VA = "0x5FD27B0")]
	private void SetSchemaDefaults(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x5FD6040", Offset = "0x5FD5040", VA = "0x5FD6040")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name, XmlSchemaGroup redefined)
	{
		return default(int);
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x5FD5A40", Offset = "0x5FD4A40", VA = "0x5FD5A40")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x5FD5AD0", Offset = "0x5FD4AD0", VA = "0x5FD5AD0")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x5FD5F50", Offset = "0x5FD4F50", VA = "0x5FD5F50")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x5FD5C20", Offset = "0x5FD4C20", VA = "0x5FD5C20")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x5FD3C60", Offset = "0x5FD2C60", VA = "0x5FD3C60")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x5FD68B0", Offset = "0x5FD58B0", VA = "0x5FD68B0")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x5FD6620", Offset = "0x5FD5620", VA = "0x5FD6620")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x5FD3DD0", Offset = "0x5FD2DD0", VA = "0x5FD3DD0")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x5FD50C0", Offset = "0x5FD40C0", VA = "0x5FD50C0")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x5FD7540", Offset = "0x5FD6540", VA = "0x5FD7540")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x5FD7150", Offset = "0x5FD6150", VA = "0x5FD7150")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x5FD7940", Offset = "0x5FD6940", VA = "0x5FD7940")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x5FD4A10", Offset = "0x5FD3A10", VA = "0x5FD4A10")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x5FD3F30", Offset = "0x5FD2F30", VA = "0x5FD3F30")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x5FD5330", Offset = "0x5FD4330", VA = "0x5FD5330")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x5FD5560", Offset = "0x5FD4560", VA = "0x5FD5560")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x5FD7D40", Offset = "0x5FD6D40", VA = "0x5FD7D40")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x5FD6CF0", Offset = "0x5FD5CF0", VA = "0x5FD6CF0")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x5FD2490", Offset = "0x5FD1490", VA = "0x5FD2490")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x5FD6360", Offset = "0x5FD5360", VA = "0x5FD6360")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x5FD6AD0", Offset = "0x5FD5AD0", VA = "0x5FD6AD0")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x5FD1FC0", Offset = "0x5FD0FC0", VA = "0x5FD1FC0")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x5FD2010", Offset = "0x5FD1010", VA = "0x5FD2010")]
	private object GetSchemaEntity(Uri ruri)
	{
		return null;
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x5FCE220", Offset = "0x5FCD220", VA = "0x5FCE220")]
	private XmlSchema GetChameleonSchema(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x5FD23E0", Offset = "0x5FD13E0", VA = "0x5FD23E0")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x5FD2400", Offset = "0x5FD1400", VA = "0x5FD2400")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x5FD5820", Offset = "0x5FD4820", VA = "0x5FD5820")]
	private void PreprocessAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
