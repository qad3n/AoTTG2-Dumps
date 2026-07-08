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
		[Address(RVA = "0x4384050", Offset = "0x4384050", VA = "0x4384050")]
		set
		{
		}
	}

	[Token(Token = "0x1700050A")]
	internal XmlReaderSettings ReaderSettings
	{
		[Token(Token = "0x60012A5")]
		[Address(RVA = "0x4384070", Offset = "0x4384070", VA = "0x4384070")]
		set
		{
		}
	}

	[Token(Token = "0x1700050B")]
	internal Hashtable SchemaLocations
	{
		[Token(Token = "0x60012A6")]
		[Address(RVA = "0x4384090", Offset = "0x4384090", VA = "0x4384090")]
		set
		{
		}
	}

	[Token(Token = "0x1700050C")]
	internal Hashtable ChameleonSchemas
	{
		[Token(Token = "0x60012A7")]
		[Address(RVA = "0x43840A0", Offset = "0x43840A0", VA = "0x43840A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700050D")]
	internal XmlSchema RootSchema
	{
		[Token(Token = "0x60012A8")]
		[Address(RVA = "0x43840B0", Offset = "0x43840B0", VA = "0x43840B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x437F910", Offset = "0x437F910", VA = "0x437F910")]
	public Preprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x437FA10", Offset = "0x437FA10", VA = "0x437FA10")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x4383830", Offset = "0x4383830", VA = "0x4383830")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x4383FC0", Offset = "0x4383FC0", VA = "0x4383FC0")]
	private void CleanupRedefine(XmlSchemaExternal include)
	{
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x43811F0", Offset = "0x43811F0", VA = "0x43811F0")]
	private void BuildSchemaList(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x4380170", Offset = "0x4380170", VA = "0x4380170")]
	private void LoadExternals(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x4383920", Offset = "0x4383920", VA = "0x4383920")]
	internal static XmlSchema GetBuildInSchema()
	{
		return null;
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x4384140", Offset = "0x4384140", VA = "0x4384140")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x43843B0", Offset = "0x43843B0", VA = "0x43843B0")]
	private void ParseUri(string uri, string code, XmlSchemaObject sourceSchemaObject)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x4381380", Offset = "0x4381380", VA = "0x4381380")]
	private void Preprocess(XmlSchema schema, string targetNamespace, ArrayList imports)
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x4384A10", Offset = "0x4384A10", VA = "0x4384A10")]
	private void CopyIncludedComponents(XmlSchema includedSchema, XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x4382870", Offset = "0x4382870", VA = "0x4382870")]
	private void PreprocessRedefine(RedefineEntry redefineEntry)
	{
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x4388580", Offset = "0x4388580", VA = "0x4388580")]
	private void GetIncludedSet(XmlSchema schema, ArrayList includesList)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x4388510", Offset = "0x4388510", VA = "0x4388510")]
	internal static XmlSchema GetParentSchema(XmlSchemaObject currentSchemaObject)
	{
		return null;
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x4384920", Offset = "0x4384920", VA = "0x4384920")]
	private void SetSchemaDefaults(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x4388CB0", Offset = "0x4388CB0", VA = "0x4388CB0")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name, XmlSchemaGroup redefined)
	{
		return default(int);
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x43886C0", Offset = "0x43886C0", VA = "0x43886C0")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x4388750", Offset = "0x4388750", VA = "0x4388750")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x4388BC0", Offset = "0x4388BC0", VA = "0x4388BC0")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x43888A0", Offset = "0x43888A0", VA = "0x43888A0")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x4386910", Offset = "0x4386910", VA = "0x4386910")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x4389540", Offset = "0x4389540", VA = "0x4389540")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x43892B0", Offset = "0x43892B0", VA = "0x43892B0")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x4386A80", Offset = "0x4386A80", VA = "0x4386A80")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x4387D10", Offset = "0x4387D10", VA = "0x4387D10")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x438A280", Offset = "0x438A280", VA = "0x438A280")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x4389E90", Offset = "0x4389E90", VA = "0x4389E90")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x438A6C0", Offset = "0x438A6C0", VA = "0x438A6C0")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x4387680", Offset = "0x4387680", VA = "0x4387680")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x4386BE0", Offset = "0x4386BE0", VA = "0x4386BE0")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x4387F80", Offset = "0x4387F80", VA = "0x4387F80")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x43881B0", Offset = "0x43881B0", VA = "0x43881B0")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x438AAD0", Offset = "0x438AAD0", VA = "0x438AAD0")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x4389A10", Offset = "0x4389A10", VA = "0x4389A10")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x43845C0", Offset = "0x43845C0", VA = "0x43845C0")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C8")]
	[Address(RVA = "0x4388FF0", Offset = "0x4388FF0", VA = "0x4388FF0")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x60012C9")]
	[Address(RVA = "0x4389790", Offset = "0x4389790", VA = "0x4389790")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x60012CA")]
	[Address(RVA = "0x43840C0", Offset = "0x43840C0", VA = "0x43840C0")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x4384110", Offset = "0x4384110", VA = "0x4384110")]
	private object GetSchemaEntity(Uri ruri)
	{
		return null;
	}

	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x4380030", Offset = "0x4380030", VA = "0x4380030")]
	private XmlSchema GetChameleonSchema(string targetNamespace, XmlSchema schema)
	{
		return null;
	}

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x4384510", Offset = "0x4384510", VA = "0x4384510")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x4384530", Offset = "0x4384530", VA = "0x4384530")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x4388490", Offset = "0x4388490", VA = "0x4388490")]
	private void PreprocessAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
