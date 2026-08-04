// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XsdBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000275")]
internal sealed class XsdBuilder : SchemaBuilder
{
	[Token(Token = "0x2000276")]
	private enum State
	{
		[Token(Token = "0x4000D3D")]
		Root,
		[Token(Token = "0x4000D3E")]
		Schema,
		[Token(Token = "0x4000D3F")]
		Annotation,
		[Token(Token = "0x4000D40")]
		Include,
		[Token(Token = "0x4000D41")]
		Import,
		[Token(Token = "0x4000D42")]
		Element,
		[Token(Token = "0x4000D43")]
		Attribute,
		[Token(Token = "0x4000D44")]
		AttributeGroup,
		[Token(Token = "0x4000D45")]
		AttributeGroupRef,
		[Token(Token = "0x4000D46")]
		AnyAttribute,
		[Token(Token = "0x4000D47")]
		Group,
		[Token(Token = "0x4000D48")]
		GroupRef,
		[Token(Token = "0x4000D49")]
		All,
		[Token(Token = "0x4000D4A")]
		Choice,
		[Token(Token = "0x4000D4B")]
		Sequence,
		[Token(Token = "0x4000D4C")]
		Any,
		[Token(Token = "0x4000D4D")]
		Notation,
		[Token(Token = "0x4000D4E")]
		SimpleType,
		[Token(Token = "0x4000D4F")]
		ComplexType,
		[Token(Token = "0x4000D50")]
		ComplexContent,
		[Token(Token = "0x4000D51")]
		ComplexContentRestriction,
		[Token(Token = "0x4000D52")]
		ComplexContentExtension,
		[Token(Token = "0x4000D53")]
		SimpleContent,
		[Token(Token = "0x4000D54")]
		SimpleContentExtension,
		[Token(Token = "0x4000D55")]
		SimpleContentRestriction,
		[Token(Token = "0x4000D56")]
		SimpleTypeUnion,
		[Token(Token = "0x4000D57")]
		SimpleTypeList,
		[Token(Token = "0x4000D58")]
		SimpleTypeRestriction,
		[Token(Token = "0x4000D59")]
		Unique,
		[Token(Token = "0x4000D5A")]
		Key,
		[Token(Token = "0x4000D5B")]
		KeyRef,
		[Token(Token = "0x4000D5C")]
		Selector,
		[Token(Token = "0x4000D5D")]
		Field,
		[Token(Token = "0x4000D5E")]
		MinExclusive,
		[Token(Token = "0x4000D5F")]
		MinInclusive,
		[Token(Token = "0x4000D60")]
		MaxExclusive,
		[Token(Token = "0x4000D61")]
		MaxInclusive,
		[Token(Token = "0x4000D62")]
		TotalDigits,
		[Token(Token = "0x4000D63")]
		FractionDigits,
		[Token(Token = "0x4000D64")]
		Length,
		[Token(Token = "0x4000D65")]
		MinLength,
		[Token(Token = "0x4000D66")]
		MaxLength,
		[Token(Token = "0x4000D67")]
		Enumeration,
		[Token(Token = "0x4000D68")]
		Pattern,
		[Token(Token = "0x4000D69")]
		WhiteSpace,
		[Token(Token = "0x4000D6A")]
		AppInfo,
		[Token(Token = "0x4000D6B")]
		Documentation,
		[Token(Token = "0x4000D6C")]
		Redefine
	}

	[Token(Token = "0x2000277")]
	private delegate void XsdBuildFunction(XsdBuilder builder, string value);

	[Token(Token = "0x2000278")]
	private delegate void XsdInitFunction(XsdBuilder builder, string value);

	[Token(Token = "0x2000279")]
	private delegate void XsdEndChildFunction(XsdBuilder builder);

	[Token(Token = "0x200027A")]
	private sealed class XsdAttributeEntry
	{
		[Token(Token = "0x4000D6D")]
		[FieldOffset(Offset = "0x10")]
		public SchemaNames.Token Attribute;

		[Token(Token = "0x4000D6E")]
		[FieldOffset(Offset = "0x18")]
		public XsdBuildFunction BuildFunc;

		[Token(Token = "0x60019E9")]
		[Address(RVA = "0x476A8D0", Offset = "0x476A8D0", VA = "0x476A8D0")]
		public XsdAttributeEntry(SchemaNames.Token a, XsdBuildFunction build)
		{
		}
	}

	[Token(Token = "0x200027B")]
	private sealed class XsdEntry
	{
		[Token(Token = "0x4000D6F")]
		[FieldOffset(Offset = "0x10")]
		public SchemaNames.Token Name;

		[Token(Token = "0x4000D70")]
		[FieldOffset(Offset = "0x14")]
		public State CurrentState;

		[Token(Token = "0x4000D71")]
		[FieldOffset(Offset = "0x18")]
		public State[] NextStates;

		[Token(Token = "0x4000D72")]
		[FieldOffset(Offset = "0x20")]
		public XsdAttributeEntry[] Attributes;

		[Token(Token = "0x4000D73")]
		[FieldOffset(Offset = "0x28")]
		public XsdInitFunction InitFunc;

		[Token(Token = "0x4000D74")]
		[FieldOffset(Offset = "0x30")]
		public XsdEndChildFunction EndChildFunc;

		[Token(Token = "0x4000D75")]
		[FieldOffset(Offset = "0x38")]
		public bool ParseContent;

		[Token(Token = "0x60019EA")]
		[Address(RVA = "0x476A900", Offset = "0x476A900", VA = "0x476A900")]
		public XsdEntry(SchemaNames.Token n, State state, State[] nextStates, XsdAttributeEntry[] attributes, XsdInitFunction init, XsdEndChildFunction end, bool parseContent)
		{
		}
	}

	[Token(Token = "0x200027C")]
	private class BuilderNamespaceManager : XmlNamespaceManager
	{
		[Token(Token = "0x4000D76")]
		[FieldOffset(Offset = "0x50")]
		private XmlNamespaceManager nsMgr;

		[Token(Token = "0x4000D77")]
		[FieldOffset(Offset = "0x58")]
		private XmlReader reader;

		[Token(Token = "0x60019EB")]
		[Address(RVA = "0x476A990", Offset = "0x476A990", VA = "0x476A990")]
		public BuilderNamespaceManager(XmlNamespaceManager nsMgr, XmlReader reader)
		{
		}

		[Token(Token = "0x60019EC")]
		[Address(RVA = "0x476A9D0", Offset = "0x476A9D0", VA = "0x476A9D0", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}
	}

	[Token(Token = "0x4000CCD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly State[] SchemaElement;

	[Token(Token = "0x4000CCE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly State[] SchemaSubelements;

	[Token(Token = "0x4000CCF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly State[] AttributeSubelements;

	[Token(Token = "0x4000CD0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly State[] ElementSubelements;

	[Token(Token = "0x4000CD1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly State[] ComplexTypeSubelements;

	[Token(Token = "0x4000CD2")]
	[FieldOffset(Offset = "0x28")]
	private static readonly State[] SimpleContentSubelements;

	[Token(Token = "0x4000CD3")]
	[FieldOffset(Offset = "0x30")]
	private static readonly State[] SimpleContentExtensionSubelements;

	[Token(Token = "0x4000CD4")]
	[FieldOffset(Offset = "0x38")]
	private static readonly State[] SimpleContentRestrictionSubelements;

	[Token(Token = "0x4000CD5")]
	[FieldOffset(Offset = "0x40")]
	private static readonly State[] ComplexContentSubelements;

	[Token(Token = "0x4000CD6")]
	[FieldOffset(Offset = "0x48")]
	private static readonly State[] ComplexContentExtensionSubelements;

	[Token(Token = "0x4000CD7")]
	[FieldOffset(Offset = "0x50")]
	private static readonly State[] ComplexContentRestrictionSubelements;

	[Token(Token = "0x4000CD8")]
	[FieldOffset(Offset = "0x58")]
	private static readonly State[] SimpleTypeSubelements;

	[Token(Token = "0x4000CD9")]
	[FieldOffset(Offset = "0x60")]
	private static readonly State[] SimpleTypeRestrictionSubelements;

	[Token(Token = "0x4000CDA")]
	[FieldOffset(Offset = "0x68")]
	private static readonly State[] SimpleTypeListSubelements;

	[Token(Token = "0x4000CDB")]
	[FieldOffset(Offset = "0x70")]
	private static readonly State[] SimpleTypeUnionSubelements;

	[Token(Token = "0x4000CDC")]
	[FieldOffset(Offset = "0x78")]
	private static readonly State[] RedefineSubelements;

	[Token(Token = "0x4000CDD")]
	[FieldOffset(Offset = "0x80")]
	private static readonly State[] AttributeGroupSubelements;

	[Token(Token = "0x4000CDE")]
	[FieldOffset(Offset = "0x88")]
	private static readonly State[] GroupSubelements;

	[Token(Token = "0x4000CDF")]
	[FieldOffset(Offset = "0x90")]
	private static readonly State[] AllSubelements;

	[Token(Token = "0x4000CE0")]
	[FieldOffset(Offset = "0x98")]
	private static readonly State[] ChoiceSequenceSubelements;

	[Token(Token = "0x4000CE1")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly State[] IdentityConstraintSubelements;

	[Token(Token = "0x4000CE2")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly State[] AnnotationSubelements;

	[Token(Token = "0x4000CE3")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly State[] AnnotatedSubelements;

	[Token(Token = "0x4000CE4")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly XsdAttributeEntry[] SchemaAttributes;

	[Token(Token = "0x4000CE5")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly XsdAttributeEntry[] AttributeAttributes;

	[Token(Token = "0x4000CE6")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly XsdAttributeEntry[] ElementAttributes;

	[Token(Token = "0x4000CE7")]
	[FieldOffset(Offset = "0xD0")]
	private static readonly XsdAttributeEntry[] ComplexTypeAttributes;

	[Token(Token = "0x4000CE8")]
	[FieldOffset(Offset = "0xD8")]
	private static readonly XsdAttributeEntry[] SimpleContentAttributes;

	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0xE0")]
	private static readonly XsdAttributeEntry[] SimpleContentExtensionAttributes;

	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0xE8")]
	private static readonly XsdAttributeEntry[] SimpleContentRestrictionAttributes;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0xF0")]
	private static readonly XsdAttributeEntry[] ComplexContentAttributes;

	[Token(Token = "0x4000CEC")]
	[FieldOffset(Offset = "0xF8")]
	private static readonly XsdAttributeEntry[] ComplexContentExtensionAttributes;

	[Token(Token = "0x4000CED")]
	[FieldOffset(Offset = "0x100")]
	private static readonly XsdAttributeEntry[] ComplexContentRestrictionAttributes;

	[Token(Token = "0x4000CEE")]
	[FieldOffset(Offset = "0x108")]
	private static readonly XsdAttributeEntry[] SimpleTypeAttributes;

	[Token(Token = "0x4000CEF")]
	[FieldOffset(Offset = "0x110")]
	private static readonly XsdAttributeEntry[] SimpleTypeRestrictionAttributes;

	[Token(Token = "0x4000CF0")]
	[FieldOffset(Offset = "0x118")]
	private static readonly XsdAttributeEntry[] SimpleTypeUnionAttributes;

	[Token(Token = "0x4000CF1")]
	[FieldOffset(Offset = "0x120")]
	private static readonly XsdAttributeEntry[] SimpleTypeListAttributes;

	[Token(Token = "0x4000CF2")]
	[FieldOffset(Offset = "0x128")]
	private static readonly XsdAttributeEntry[] AttributeGroupAttributes;

	[Token(Token = "0x4000CF3")]
	[FieldOffset(Offset = "0x130")]
	private static readonly XsdAttributeEntry[] AttributeGroupRefAttributes;

	[Token(Token = "0x4000CF4")]
	[FieldOffset(Offset = "0x138")]
	private static readonly XsdAttributeEntry[] GroupAttributes;

	[Token(Token = "0x4000CF5")]
	[FieldOffset(Offset = "0x140")]
	private static readonly XsdAttributeEntry[] GroupRefAttributes;

	[Token(Token = "0x4000CF6")]
	[FieldOffset(Offset = "0x148")]
	private static readonly XsdAttributeEntry[] ParticleAttributes;

	[Token(Token = "0x4000CF7")]
	[FieldOffset(Offset = "0x150")]
	private static readonly XsdAttributeEntry[] AnyAttributes;

	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0x158")]
	private static readonly XsdAttributeEntry[] IdentityConstraintAttributes;

	[Token(Token = "0x4000CF9")]
	[FieldOffset(Offset = "0x160")]
	private static readonly XsdAttributeEntry[] SelectorAttributes;

	[Token(Token = "0x4000CFA")]
	[FieldOffset(Offset = "0x168")]
	private static readonly XsdAttributeEntry[] FieldAttributes;

	[Token(Token = "0x4000CFB")]
	[FieldOffset(Offset = "0x170")]
	private static readonly XsdAttributeEntry[] NotationAttributes;

	[Token(Token = "0x4000CFC")]
	[FieldOffset(Offset = "0x178")]
	private static readonly XsdAttributeEntry[] IncludeAttributes;

	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x180")]
	private static readonly XsdAttributeEntry[] ImportAttributes;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x188")]
	private static readonly XsdAttributeEntry[] FacetAttributes;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x190")]
	private static readonly XsdAttributeEntry[] AnyAttributeAttributes;

	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x198")]
	private static readonly XsdAttributeEntry[] DocumentationAttributes;

	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x1A0")]
	private static readonly XsdAttributeEntry[] AppinfoAttributes;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x1A8")]
	private static readonly XsdAttributeEntry[] RedefineAttributes;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x1B0")]
	private static readonly XsdAttributeEntry[] AnnotationAttributes;

	[Token(Token = "0x4000D04")]
	[FieldOffset(Offset = "0x1B8")]
	private static readonly XsdEntry[] SchemaEntries;

	[Token(Token = "0x4000D05")]
	[FieldOffset(Offset = "0x1C0")]
	private static readonly int[] DerivationMethodValues;

	[Token(Token = "0x4000D06")]
	[FieldOffset(Offset = "0x1C8")]
	private static readonly string[] DerivationMethodStrings;

	[Token(Token = "0x4000D07")]
	[FieldOffset(Offset = "0x1D0")]
	private static readonly string[] FormStringValues;

	[Token(Token = "0x4000D08")]
	[FieldOffset(Offset = "0x1D8")]
	private static readonly string[] UseStringValues;

	[Token(Token = "0x4000D09")]
	[FieldOffset(Offset = "0x1E0")]
	private static readonly string[] ProcessContentsStringValues;

	[Token(Token = "0x4000D0A")]
	[FieldOffset(Offset = "0x10")]
	private XmlReader reader;

	[Token(Token = "0x4000D0B")]
	[FieldOffset(Offset = "0x18")]
	private PositionInfo positionInfo;

	[Token(Token = "0x4000D0C")]
	[FieldOffset(Offset = "0x20")]
	private XsdEntry currentEntry;

	[Token(Token = "0x4000D0D")]
	[FieldOffset(Offset = "0x28")]
	private XsdEntry nextEntry;

	[Token(Token = "0x4000D0E")]
	[FieldOffset(Offset = "0x30")]
	private bool hasChild;

	[Token(Token = "0x4000D0F")]
	[FieldOffset(Offset = "0x38")]
	private HWStack stateHistory;

	[Token(Token = "0x4000D10")]
	[FieldOffset(Offset = "0x40")]
	private Stack containerStack;

	[Token(Token = "0x4000D11")]
	[FieldOffset(Offset = "0x48")]
	private XmlNameTable nameTable;

	[Token(Token = "0x4000D12")]
	[FieldOffset(Offset = "0x50")]
	private SchemaNames schemaNames;

	[Token(Token = "0x4000D13")]
	[FieldOffset(Offset = "0x58")]
	private XmlNamespaceManager namespaceManager;

	[Token(Token = "0x4000D14")]
	[FieldOffset(Offset = "0x60")]
	private bool canIncludeImport;

	[Token(Token = "0x4000D15")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchema schema;

	[Token(Token = "0x4000D16")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaObject xso;

	[Token(Token = "0x4000D17")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaElement element;

	[Token(Token = "0x4000D18")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaAny anyElement;

	[Token(Token = "0x4000D19")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaAttribute attribute;

	[Token(Token = "0x4000D1A")]
	[FieldOffset(Offset = "0x90")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x4000D1B")]
	[FieldOffset(Offset = "0x98")]
	private XmlSchemaComplexType complexType;

	[Token(Token = "0x4000D1C")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchemaSimpleType simpleType;

	[Token(Token = "0x4000D1D")]
	[FieldOffset(Offset = "0xA8")]
	private XmlSchemaComplexContent complexContent;

	[Token(Token = "0x4000D1E")]
	[FieldOffset(Offset = "0xB0")]
	private XmlSchemaComplexContentExtension complexContentExtension;

	[Token(Token = "0x4000D1F")]
	[FieldOffset(Offset = "0xB8")]
	private XmlSchemaComplexContentRestriction complexContentRestriction;

	[Token(Token = "0x4000D20")]
	[FieldOffset(Offset = "0xC0")]
	private XmlSchemaSimpleContent simpleContent;

	[Token(Token = "0x4000D21")]
	[FieldOffset(Offset = "0xC8")]
	private XmlSchemaSimpleContentExtension simpleContentExtension;

	[Token(Token = "0x4000D22")]
	[FieldOffset(Offset = "0xD0")]
	private XmlSchemaSimpleContentRestriction simpleContentRestriction;

	[Token(Token = "0x4000D23")]
	[FieldOffset(Offset = "0xD8")]
	private XmlSchemaSimpleTypeUnion simpleTypeUnion;

	[Token(Token = "0x4000D24")]
	[FieldOffset(Offset = "0xE0")]
	private XmlSchemaSimpleTypeList simpleTypeList;

	[Token(Token = "0x4000D25")]
	[FieldOffset(Offset = "0xE8")]
	private XmlSchemaSimpleTypeRestriction simpleTypeRestriction;

	[Token(Token = "0x4000D26")]
	[FieldOffset(Offset = "0xF0")]
	private XmlSchemaGroup group;

	[Token(Token = "0x4000D27")]
	[FieldOffset(Offset = "0xF8")]
	private XmlSchemaGroupRef groupRef;

	[Token(Token = "0x4000D28")]
	[FieldOffset(Offset = "0x100")]
	private XmlSchemaAll all;

	[Token(Token = "0x4000D29")]
	[FieldOffset(Offset = "0x108")]
	private XmlSchemaChoice choice;

	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x110")]
	private XmlSchemaSequence sequence;

	[Token(Token = "0x4000D2B")]
	[FieldOffset(Offset = "0x118")]
	private XmlSchemaParticle particle;

	[Token(Token = "0x4000D2C")]
	[FieldOffset(Offset = "0x120")]
	private XmlSchemaAttributeGroup attributeGroup;

	[Token(Token = "0x4000D2D")]
	[FieldOffset(Offset = "0x128")]
	private XmlSchemaAttributeGroupRef attributeGroupRef;

	[Token(Token = "0x4000D2E")]
	[FieldOffset(Offset = "0x130")]
	private XmlSchemaNotation notation;

	[Token(Token = "0x4000D2F")]
	[FieldOffset(Offset = "0x138")]
	private XmlSchemaIdentityConstraint identityConstraint;

	[Token(Token = "0x4000D30")]
	[FieldOffset(Offset = "0x140")]
	private XmlSchemaXPath xpath;

	[Token(Token = "0x4000D31")]
	[FieldOffset(Offset = "0x148")]
	private XmlSchemaInclude include;

	[Token(Token = "0x4000D32")]
	[FieldOffset(Offset = "0x150")]
	private XmlSchemaImport import;

	[Token(Token = "0x4000D33")]
	[FieldOffset(Offset = "0x158")]
	private XmlSchemaAnnotation annotation;

	[Token(Token = "0x4000D34")]
	[FieldOffset(Offset = "0x160")]
	private XmlSchemaAppInfo appInfo;

	[Token(Token = "0x4000D35")]
	[FieldOffset(Offset = "0x168")]
	private XmlSchemaDocumentation documentation;

	[Token(Token = "0x4000D36")]
	[FieldOffset(Offset = "0x170")]
	private XmlSchemaFacet facet;

	[Token(Token = "0x4000D37")]
	[FieldOffset(Offset = "0x178")]
	private XmlNode[] markup;

	[Token(Token = "0x4000D38")]
	[FieldOffset(Offset = "0x180")]
	private XmlSchemaRedefine redefine;

	[Token(Token = "0x4000D39")]
	[FieldOffset(Offset = "0x188")]
	private ValidationEventHandler validationEventHandler;

	[Token(Token = "0x4000D3A")]
	[FieldOffset(Offset = "0x190")]
	private ArrayList unhandledAttributes;

	[Token(Token = "0x4000D3B")]
	[FieldOffset(Offset = "0x198")]
	private Hashtable namespaces;

	[Token(Token = "0x170006AE")]
	private SchemaNames.Token CurrentElement
	{
		[Token(Token = "0x6001963")]
		[Address(RVA = "0x475F840", Offset = "0x475F840", VA = "0x475F840")]
		get
		{
			return default(SchemaNames.Token);
		}
	}

	[Token(Token = "0x170006AF")]
	private SchemaNames.Token ParentElement
	{
		[Token(Token = "0x6001964")]
		[Address(RVA = "0x475F860", Offset = "0x475F860", VA = "0x475F860")]
		get
		{
			return default(SchemaNames.Token);
		}
	}

	[Token(Token = "0x170006B0")]
	private XmlSchemaObject ParentContainer
	{
		[Token(Token = "0x6001965")]
		[Address(RVA = "0x475F8C0", Offset = "0x475F8C0", VA = "0x475F8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x475D380", Offset = "0x475D380", VA = "0x475D380")]
	internal XsdBuilder(XmlReader reader, XmlNamespaceManager curmgr, XmlSchema schema, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x475D5F0", Offset = "0x475D5F0", VA = "0x475D5F0", Slot = "4")]
	internal override bool ProcessElement(string prefix, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x475DB90", Offset = "0x475DB90", VA = "0x475DB90", Slot = "5")]
	internal override void ProcessAttribute(string prefix, string name, string ns, string value)
	{
	}

	[Token(Token = "0x600195C")]
	[Address(RVA = "0x475E140", Offset = "0x475E140", VA = "0x475E140", Slot = "6")]
	internal override bool IsContentParsed()
	{
		return default(bool);
	}

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x475E160", Offset = "0x475E160", VA = "0x475E160", Slot = "7")]
	internal override void ProcessMarkup(XmlNode[] markup)
	{
	}

	[Token(Token = "0x600195E")]
	[Address(RVA = "0x475E180", Offset = "0x475E180", VA = "0x475E180", Slot = "8")]
	internal override void ProcessCData(string value)
	{
	}

	[Token(Token = "0x600195F")]
	[Address(RVA = "0x475E1D0", Offset = "0x475E1D0", VA = "0x475E1D0", Slot = "9")]
	internal override void StartChildren()
	{
	}

	[Token(Token = "0x6001960")]
	[Address(RVA = "0x475E380", Offset = "0x475E380", VA = "0x475E380", Slot = "10")]
	internal override void EndChildren()
	{
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x475D890", Offset = "0x475D890", VA = "0x475D890")]
	private void Push()
	{
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x475E3B0", Offset = "0x475E3B0", VA = "0x475E3B0")]
	private void Pop()
	{
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x475E470", Offset = "0x475E470", VA = "0x475E470")]
	private XmlSchemaObject GetContainer(State state)
	{
		return null;
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x475E5F0", Offset = "0x475E5F0", VA = "0x475E5F0")]
	private void SetContainer(State state, object container)
	{
	}

	[Token(Token = "0x6001968")]
	[Address(RVA = "0x475F940", Offset = "0x475F940", VA = "0x475F940")]
	private static void BuildAnnotated_Id(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001969")]
	[Address(RVA = "0x475F970", Offset = "0x475F970", VA = "0x475F970")]
	private static void BuildSchema_AttributeFormDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196A")]
	[Address(RVA = "0x475FAC0", Offset = "0x475FAC0", VA = "0x475FAC0")]
	private static void BuildSchema_ElementFormDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196B")]
	[Address(RVA = "0x475FB60", Offset = "0x475FB60", VA = "0x475FB60")]
	private static void BuildSchema_TargetNamespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196C")]
	[Address(RVA = "0x475FB90", Offset = "0x475FB90", VA = "0x475FB90")]
	private static void BuildSchema_Version(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196D")]
	[Address(RVA = "0x475FBC0", Offset = "0x475FBC0", VA = "0x475FBC0")]
	private static void BuildSchema_FinalDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196E")]
	[Address(RVA = "0x475FEC0", Offset = "0x475FEC0", VA = "0x475FEC0")]
	private static void BuildSchema_BlockDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196F")]
	[Address(RVA = "0x475FF20", Offset = "0x475FF20", VA = "0x475FF20")]
	private static void InitSchema(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001970")]
	[Address(RVA = "0x475FF50", Offset = "0x475FF50", VA = "0x475FF50")]
	private static void InitInclude(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001971")]
	[Address(RVA = "0x4760010", Offset = "0x4760010", VA = "0x4760010")]
	private static void BuildInclude_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001972")]
	[Address(RVA = "0x4760040", Offset = "0x4760040", VA = "0x4760040")]
	private static void InitImport(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001973")]
	[Address(RVA = "0x4760100", Offset = "0x4760100", VA = "0x4760100")]
	private static void BuildImport_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x4760130", Offset = "0x4760130", VA = "0x4760130")]
	private static void BuildImport_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x4760160", Offset = "0x4760160", VA = "0x4760160")]
	private static void InitRedefine(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x4760220", Offset = "0x4760220", VA = "0x4760220")]
	private static void BuildRedefine_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001977")]
	[Address(RVA = "0x4760250", Offset = "0x4760250", VA = "0x4760250")]
	private static void EndRedefine(XsdBuilder builder)
	{
	}

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x4760270", Offset = "0x4760270", VA = "0x4760270")]
	private static void InitAttribute(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x4760650", Offset = "0x4760650", VA = "0x4760650")]
	private static void BuildAttribute_Default(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197A")]
	[Address(RVA = "0x4760680", Offset = "0x4760680", VA = "0x4760680")]
	private static void BuildAttribute_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x47606B0", Offset = "0x47606B0", VA = "0x47606B0")]
	private static void BuildAttribute_Form(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x4760750", Offset = "0x4760750", VA = "0x4760750")]
	private static void BuildAttribute_Use(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197D")]
	[Address(RVA = "0x47607F0", Offset = "0x47607F0", VA = "0x47607F0")]
	private static void BuildAttribute_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197E")]
	[Address(RVA = "0x47609C0", Offset = "0x47609C0", VA = "0x47609C0")]
	private static void BuildAttribute_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197F")]
	[Address(RVA = "0x47609F0", Offset = "0x47609F0", VA = "0x47609F0")]
	private static void BuildAttribute_Type(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x4760A60", Offset = "0x4760A60", VA = "0x4760A60")]
	private static void InitElement(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001981")]
	[Address(RVA = "0x4760BC0", Offset = "0x4760BC0", VA = "0x4760BC0")]
	private static void BuildElement_Abstract(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001982")]
	[Address(RVA = "0x4760D30", Offset = "0x4760D30", VA = "0x4760D30")]
	private static void BuildElement_Block(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x4760D90", Offset = "0x4760D90", VA = "0x4760D90")]
	private static void BuildElement_Default(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x4760DC0", Offset = "0x4760DC0", VA = "0x4760DC0")]
	private static void BuildElement_Form(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x4760E60", Offset = "0x4760E60", VA = "0x4760E60")]
	private static void BuildElement_SubstitutionGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x4760ED0", Offset = "0x4760ED0", VA = "0x4760ED0")]
	private static void BuildElement_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x4760F30", Offset = "0x4760F30", VA = "0x4760F30")]
	private static void BuildElement_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x4760F60", Offset = "0x4760F60", VA = "0x4760F60")]
	private static void BuildElement_MaxOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001989")]
	[Address(RVA = "0x4761040", Offset = "0x4761040", VA = "0x4761040")]
	private static void BuildElement_MinOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x4761120", Offset = "0x4761120", VA = "0x4761120")]
	private static void BuildElement_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x4761150", Offset = "0x4761150", VA = "0x4761150")]
	private static void BuildElement_Nillable(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x47611C0", Offset = "0x47611C0", VA = "0x47611C0")]
	private static void BuildElement_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x4761230", Offset = "0x4761230", VA = "0x4761230")]
	private static void BuildElement_Type(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x47612A0", Offset = "0x47612A0", VA = "0x47612A0")]
	private static void InitSimpleType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198F")]
	[Address(RVA = "0x47616A0", Offset = "0x47616A0", VA = "0x47616A0")]
	private static void BuildSimpleType_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x47616D0", Offset = "0x47616D0", VA = "0x47616D0")]
	private static void BuildSimpleType_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001991")]
	[Address(RVA = "0x4761730", Offset = "0x4761730", VA = "0x4761730")]
	private static void InitSimpleTypeUnion(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001992")]
	[Address(RVA = "0x4761810", Offset = "0x4761810", VA = "0x4761810")]
	private static void BuildSimpleTypeUnion_MemberTypes(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001993")]
	[Address(RVA = "0x4761A20", Offset = "0x4761A20", VA = "0x4761A20")]
	private static void InitSimpleTypeList(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001994")]
	[Address(RVA = "0x4761B00", Offset = "0x4761B00", VA = "0x4761B00")]
	private static void BuildSimpleTypeList_ItemType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x4761B70", Offset = "0x4761B70", VA = "0x4761B70")]
	private static void InitSimpleTypeRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x4761C50", Offset = "0x4761C50", VA = "0x4761C50")]
	private static void BuildSimpleTypeRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x4761CC0", Offset = "0x4761CC0", VA = "0x4761CC0")]
	private static void InitComplexType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x4761EC0", Offset = "0x4761EC0", VA = "0x4761EC0")]
	private static void BuildComplexType_Abstract(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001999")]
	[Address(RVA = "0x4761F30", Offset = "0x4761F30", VA = "0x4761F30")]
	private static void BuildComplexType_Block(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x4761F90", Offset = "0x4761F90", VA = "0x4761F90")]
	private static void BuildComplexType_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x4761FF0", Offset = "0x4761FF0", VA = "0x4761FF0")]
	private static void BuildComplexType_Mixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x4762070", Offset = "0x4762070", VA = "0x4762070")]
	private static void BuildComplexType_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199D")]
	[Address(RVA = "0x47620A0", Offset = "0x47620A0", VA = "0x47620A0")]
	private static void InitComplexContent(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199E")]
	[Address(RVA = "0x47621D0", Offset = "0x47621D0", VA = "0x47621D0")]
	private static void BuildComplexContent_Mixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x4762240", Offset = "0x4762240", VA = "0x4762240")]
	private static void InitComplexContentExtension(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x4762340", Offset = "0x4762340", VA = "0x4762340")]
	private static void BuildComplexContentExtension_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x47623B0", Offset = "0x47623B0", VA = "0x47623B0")]
	private static void InitComplexContentRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x4762450", Offset = "0x4762450", VA = "0x4762450")]
	private static void BuildComplexContentRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x47624C0", Offset = "0x47624C0", VA = "0x47624C0")]
	private static void InitSimpleContent(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x47625F0", Offset = "0x47625F0", VA = "0x47625F0")]
	private static void InitSimpleContentExtension(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x47626F0", Offset = "0x47626F0", VA = "0x47626F0")]
	private static void BuildSimpleContentExtension_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x4762760", Offset = "0x4762760", VA = "0x4762760")]
	private static void InitSimpleContentRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x4762860", Offset = "0x4762860", VA = "0x4762860")]
	private static void BuildSimpleContentRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x47628D0", Offset = "0x47628D0", VA = "0x47628D0")]
	private static void InitAttributeGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x47629F0", Offset = "0x47629F0", VA = "0x47629F0")]
	private static void BuildAttributeGroup_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x4762A20", Offset = "0x4762A20", VA = "0x4762A20")]
	private static void InitAttributeGroupRef(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x4762AB0", Offset = "0x4762AB0", VA = "0x4762AB0")]
	private static void BuildAttributeGroupRef_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x4762B20", Offset = "0x4762B20", VA = "0x4762B20")]
	private static void InitAnyAttribute(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x4762E70", Offset = "0x4762E70", VA = "0x4762E70")]
	private static void BuildAnyAttribute_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x4762EA0", Offset = "0x4762EA0", VA = "0x4762EA0")]
	private static void BuildAnyAttribute_ProcessContents(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x4762F40", Offset = "0x4762F40", VA = "0x4762F40")]
	private static void InitGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x4763060", Offset = "0x4763060", VA = "0x4763060")]
	private static void BuildGroup_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x4763090", Offset = "0x4763090", VA = "0x4763090")]
	private static void InitGroupRef(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x4763570", Offset = "0x4763570", VA = "0x4763570")]
	private static void BuildParticle_MaxOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x4763590", Offset = "0x4763590", VA = "0x4763590")]
	private static void BuildParticle_MinOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x47635B0", Offset = "0x47635B0", VA = "0x47635B0")]
	private static void BuildGroupRef_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x4763620", Offset = "0x4763620", VA = "0x4763620")]
	private static void InitAll(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x47636C0", Offset = "0x47636C0", VA = "0x47636C0")]
	private static void InitChoice(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x4763760", Offset = "0x4763760", VA = "0x4763760")]
	private static void InitSequence(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x4763800", Offset = "0x4763800", VA = "0x4763800")]
	private static void InitAny(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x47638A0", Offset = "0x47638A0", VA = "0x47638A0")]
	private static void BuildAny_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BA")]
	[Address(RVA = "0x47638D0", Offset = "0x47638D0", VA = "0x47638D0")]
	private static void BuildAny_ProcessContents(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x4763970", Offset = "0x4763970", VA = "0x4763970")]
	private static void InitNotation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BC")]
	[Address(RVA = "0x4763A10", Offset = "0x4763A10", VA = "0x4763A10")]
	private static void BuildNotation_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BD")]
	[Address(RVA = "0x4763A40", Offset = "0x4763A40", VA = "0x4763A40")]
	private static void BuildNotation_Public(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x4763A70", Offset = "0x4763A70", VA = "0x4763A70")]
	private static void BuildNotation_System(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x4763AA0", Offset = "0x4763AA0", VA = "0x4763AA0")]
	private static void InitFacet(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x4763E20", Offset = "0x4763E20", VA = "0x4763E20")]
	private static void BuildFacet_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x4763EA0", Offset = "0x4763EA0", VA = "0x4763EA0")]
	private static void BuildFacet_Value(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x4763ED0", Offset = "0x4763ED0", VA = "0x4763ED0")]
	private static void InitIdentityConstraint(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x4764030", Offset = "0x4764030", VA = "0x4764030")]
	private static void BuildIdentityConstraint_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x4764060", Offset = "0x4764060", VA = "0x4764060")]
	private static void BuildIdentityConstraint_Refer(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x4764170", Offset = "0x4764170", VA = "0x4764170")]
	private static void InitSelector(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x4764240", Offset = "0x4764240", VA = "0x4764240")]
	private static void BuildSelector_XPath(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x4764270", Offset = "0x4764270", VA = "0x4764270")]
	private static void InitField(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x4764340", Offset = "0x4764340", VA = "0x4764340")]
	private static void BuildField_XPath(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x4764370", Offset = "0x4764370", VA = "0x4764370")]
	private static void InitAnnotation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x4764550", Offset = "0x4764550", VA = "0x4764550")]
	private static void InitAppinfo(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x4764620", Offset = "0x4764620", VA = "0x4764620")]
	private static void BuildAppinfo_Source(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x47646A0", Offset = "0x47646A0", VA = "0x47646A0")]
	private static void EndAppinfo(XsdBuilder builder)
	{
	}

	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x47646D0", Offset = "0x47646D0", VA = "0x47646D0")]
	private static void InitDocumentation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x47647A0", Offset = "0x47647A0", VA = "0x47647A0")]
	private static void BuildDocumentation_Source(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x4764810", Offset = "0x4764810", VA = "0x4764810")]
	private static void BuildDocumentation_XmlLang(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x4764960", Offset = "0x4764960", VA = "0x4764960")]
	private static void EndDocumentation(XsdBuilder builder)
	{
	}

	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x4760380", Offset = "0x4760380", VA = "0x4760380")]
	private void AddAttribute(XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x4763130", Offset = "0x4763130", VA = "0x4763130")]
	private void AddParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x475D700", Offset = "0x475D700", VA = "0x475D700")]
	private bool GetNextState(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x475DA80", Offset = "0x475DA80", VA = "0x475DA80")]
	private bool IsSkipableElement(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x4761060", Offset = "0x4761060", VA = "0x4761060")]
	private void SetMinOccurs(XmlSchemaParticle particle, string value)
	{
	}

	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x4760F80", Offset = "0x4760F80", VA = "0x4760F80")]
	private void SetMaxOccurs(XmlSchemaParticle particle, string value)
	{
	}

	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x4760C30", Offset = "0x4760C30", VA = "0x4760C30")]
	private bool ParseBoolean(string value, string attributeName)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x475FA10", Offset = "0x475FA10", VA = "0x475FA10")]
	private int ParseEnum(string value, string attributeName, string[] values)
	{
		return default(int);
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x4760860", Offset = "0x4760860", VA = "0x4760860")]
	private XmlQualifiedName ParseQName(string value, string attributeName)
	{
		return null;
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x475FC20", Offset = "0x475FC20", VA = "0x475FC20")]
	private int ParseBlockFinalEnum(string value, string attributeName)
	{
		return default(int);
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x4764690", Offset = "0x4764690", VA = "0x4764690")]
	private static string ParseUriReference(string s)
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x4764990", Offset = "0x4764990", VA = "0x4764990")]
	private void SendValidationEvent(string code, string arg0, string arg1, string arg2)
	{
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x475DAA0", Offset = "0x475DAA0", VA = "0x475DAA0")]
	private void SendValidationEvent(string code, string msg)
	{
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x475E050", Offset = "0x475E050", VA = "0x475E050")]
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x4764B00", Offset = "0x4764B00", VA = "0x4764B00")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x4761A10", Offset = "0x4761A10", VA = "0x4761A10")]
	private void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x475D930", Offset = "0x475D930", VA = "0x475D930")]
	private void RecordPosition()
	{
	}
}
