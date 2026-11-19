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
		[Address(RVA = "0x6070D20", Offset = "0x606FD20", VA = "0x6070D20")]
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
		[Address(RVA = "0x6070D50", Offset = "0x606FD50", VA = "0x6070D50")]
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
		[Address(RVA = "0x6070DE0", Offset = "0x606FDE0", VA = "0x6070DE0")]
		public BuilderNamespaceManager(XmlNamespaceManager nsMgr, XmlReader reader)
		{
		}

		[Token(Token = "0x60019EC")]
		[Address(RVA = "0x6070E20", Offset = "0x606FE20", VA = "0x6070E20", Slot = "16")]
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
		[Address(RVA = "0x6065D10", Offset = "0x6064D10", VA = "0x6065D10")]
		get
		{
			return default(SchemaNames.Token);
		}
	}

	[Token(Token = "0x170006AF")]
	private SchemaNames.Token ParentElement
	{
		[Token(Token = "0x6001964")]
		[Address(RVA = "0x6065D30", Offset = "0x6064D30", VA = "0x6065D30")]
		get
		{
			return default(SchemaNames.Token);
		}
	}

	[Token(Token = "0x170006B0")]
	private XmlSchemaObject ParentContainer
	{
		[Token(Token = "0x6001965")]
		[Address(RVA = "0x6065D90", Offset = "0x6064D90", VA = "0x6065D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x6063670", Offset = "0x6062670", VA = "0x6063670")]
	internal XsdBuilder(XmlReader reader, XmlNamespaceManager curmgr, XmlSchema schema, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x60638E0", Offset = "0x60628E0", VA = "0x60638E0", Slot = "4")]
	internal override bool ProcessElement(string prefix, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x6064180", Offset = "0x6063180", VA = "0x6064180", Slot = "5")]
	internal override void ProcessAttribute(string prefix, string name, string ns, string value)
	{
	}

	[Token(Token = "0x600195C")]
	[Address(RVA = "0x6064720", Offset = "0x6063720", VA = "0x6064720", Slot = "6")]
	internal override bool IsContentParsed()
	{
		return default(bool);
	}

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x6064740", Offset = "0x6063740", VA = "0x6064740", Slot = "7")]
	internal override void ProcessMarkup(XmlNode[] markup)
	{
	}

	[Token(Token = "0x600195E")]
	[Address(RVA = "0x6064760", Offset = "0x6063760", VA = "0x6064760", Slot = "8")]
	internal override void ProcessCData(string value)
	{
	}

	[Token(Token = "0x600195F")]
	[Address(RVA = "0x60647B0", Offset = "0x60637B0", VA = "0x60647B0", Slot = "9")]
	internal override void StartChildren()
	{
	}

	[Token(Token = "0x6001960")]
	[Address(RVA = "0x6064960", Offset = "0x6063960", VA = "0x6064960", Slot = "10")]
	internal override void EndChildren()
	{
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x6063B70", Offset = "0x6062B70", VA = "0x6063B70")]
	private void Push()
	{
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x60649A0", Offset = "0x60639A0", VA = "0x60649A0")]
	private void Pop()
	{
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x6064A60", Offset = "0x6063A60", VA = "0x6064A60")]
	private XmlSchemaObject GetContainer(State state)
	{
		return null;
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x6064BE0", Offset = "0x6063BE0", VA = "0x6064BE0")]
	private void SetContainer(State state, object container)
	{
	}

	[Token(Token = "0x6001968")]
	[Address(RVA = "0x6065E10", Offset = "0x6064E10", VA = "0x6065E10")]
	private static void BuildAnnotated_Id(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001969")]
	[Address(RVA = "0x6065E40", Offset = "0x6064E40", VA = "0x6065E40")]
	private static void BuildSchema_AttributeFormDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196A")]
	[Address(RVA = "0x6065FA0", Offset = "0x6064FA0", VA = "0x6065FA0")]
	private static void BuildSchema_ElementFormDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196B")]
	[Address(RVA = "0x6066040", Offset = "0x6065040", VA = "0x6066040")]
	private static void BuildSchema_TargetNamespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196C")]
	[Address(RVA = "0x6066070", Offset = "0x6065070", VA = "0x6066070")]
	private static void BuildSchema_Version(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196D")]
	[Address(RVA = "0x60660A0", Offset = "0x60650A0", VA = "0x60660A0")]
	private static void BuildSchema_FinalDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196E")]
	[Address(RVA = "0x6066390", Offset = "0x6065390", VA = "0x6066390")]
	private static void BuildSchema_BlockDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196F")]
	[Address(RVA = "0x60663F0", Offset = "0x60653F0", VA = "0x60663F0")]
	private static void InitSchema(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001970")]
	[Address(RVA = "0x6066420", Offset = "0x6065420", VA = "0x6066420")]
	private static void InitInclude(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001971")]
	[Address(RVA = "0x60664E0", Offset = "0x60654E0", VA = "0x60664E0")]
	private static void BuildInclude_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001972")]
	[Address(RVA = "0x6066510", Offset = "0x6065510", VA = "0x6066510")]
	private static void InitImport(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001973")]
	[Address(RVA = "0x60665D0", Offset = "0x60655D0", VA = "0x60665D0")]
	private static void BuildImport_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x6066600", Offset = "0x6065600", VA = "0x6066600")]
	private static void BuildImport_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x6066630", Offset = "0x6065630", VA = "0x6066630")]
	private static void InitRedefine(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x60666F0", Offset = "0x60656F0", VA = "0x60666F0")]
	private static void BuildRedefine_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001977")]
	[Address(RVA = "0x6066720", Offset = "0x6065720", VA = "0x6066720")]
	private static void EndRedefine(XsdBuilder builder)
	{
	}

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x6066740", Offset = "0x6065740", VA = "0x6066740")]
	private static void InitAttribute(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x6066AF0", Offset = "0x6065AF0", VA = "0x6066AF0")]
	private static void BuildAttribute_Default(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197A")]
	[Address(RVA = "0x6066B20", Offset = "0x6065B20", VA = "0x6066B20")]
	private static void BuildAttribute_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x6066B50", Offset = "0x6065B50", VA = "0x6066B50")]
	private static void BuildAttribute_Form(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x6066BF0", Offset = "0x6065BF0", VA = "0x6066BF0")]
	private static void BuildAttribute_Use(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197D")]
	[Address(RVA = "0x6066C90", Offset = "0x6065C90", VA = "0x6066C90")]
	private static void BuildAttribute_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197E")]
	[Address(RVA = "0x6066E60", Offset = "0x6065E60", VA = "0x6066E60")]
	private static void BuildAttribute_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197F")]
	[Address(RVA = "0x6066E90", Offset = "0x6065E90", VA = "0x6066E90")]
	private static void BuildAttribute_Type(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x6066F00", Offset = "0x6065F00", VA = "0x6066F00")]
	private static void InitElement(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001981")]
	[Address(RVA = "0x6067050", Offset = "0x6066050", VA = "0x6067050")]
	private static void BuildElement_Abstract(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001982")]
	[Address(RVA = "0x60671C0", Offset = "0x60661C0", VA = "0x60671C0")]
	private static void BuildElement_Block(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x6067220", Offset = "0x6066220", VA = "0x6067220")]
	private static void BuildElement_Default(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x6067250", Offset = "0x6066250", VA = "0x6067250")]
	private static void BuildElement_Form(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x60672F0", Offset = "0x60662F0", VA = "0x60672F0")]
	private static void BuildElement_SubstitutionGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x6067360", Offset = "0x6066360", VA = "0x6067360")]
	private static void BuildElement_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x60673C0", Offset = "0x60663C0", VA = "0x60673C0")]
	private static void BuildElement_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x60673F0", Offset = "0x60663F0", VA = "0x60673F0")]
	private static void BuildElement_MaxOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001989")]
	[Address(RVA = "0x60674D0", Offset = "0x60664D0", VA = "0x60674D0")]
	private static void BuildElement_MinOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x60675B0", Offset = "0x60665B0", VA = "0x60675B0")]
	private static void BuildElement_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x60675E0", Offset = "0x60665E0", VA = "0x60675E0")]
	private static void BuildElement_Nillable(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x6067650", Offset = "0x6066650", VA = "0x6067650")]
	private static void BuildElement_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x60676C0", Offset = "0x60666C0", VA = "0x60676C0")]
	private static void BuildElement_Type(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x6067730", Offset = "0x6066730", VA = "0x6067730")]
	private static void InitSimpleType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198F")]
	[Address(RVA = "0x6067AF0", Offset = "0x6066AF0", VA = "0x6067AF0")]
	private static void BuildSimpleType_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x6067B20", Offset = "0x6066B20", VA = "0x6067B20")]
	private static void BuildSimpleType_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001991")]
	[Address(RVA = "0x6067B80", Offset = "0x6066B80", VA = "0x6067B80")]
	private static void InitSimpleTypeUnion(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001992")]
	[Address(RVA = "0x6067C60", Offset = "0x6066C60", VA = "0x6067C60")]
	private static void BuildSimpleTypeUnion_MemberTypes(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001993")]
	[Address(RVA = "0x6067E60", Offset = "0x6066E60", VA = "0x6067E60")]
	private static void InitSimpleTypeList(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001994")]
	[Address(RVA = "0x6067F40", Offset = "0x6066F40", VA = "0x6067F40")]
	private static void BuildSimpleTypeList_ItemType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x6067FB0", Offset = "0x6066FB0", VA = "0x6067FB0")]
	private static void InitSimpleTypeRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x6068090", Offset = "0x6067090", VA = "0x6068090")]
	private static void BuildSimpleTypeRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x6068100", Offset = "0x6067100", VA = "0x6068100")]
	private static void InitComplexType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x60682F0", Offset = "0x60672F0", VA = "0x60682F0")]
	private static void BuildComplexType_Abstract(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001999")]
	[Address(RVA = "0x6068360", Offset = "0x6067360", VA = "0x6068360")]
	private static void BuildComplexType_Block(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x60683C0", Offset = "0x60673C0", VA = "0x60683C0")]
	private static void BuildComplexType_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x6068420", Offset = "0x6067420", VA = "0x6068420")]
	private static void BuildComplexType_Mixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x60684A0", Offset = "0x60674A0", VA = "0x60684A0")]
	private static void BuildComplexType_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199D")]
	[Address(RVA = "0x60684D0", Offset = "0x60674D0", VA = "0x60684D0")]
	private static void InitComplexContent(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199E")]
	[Address(RVA = "0x6068600", Offset = "0x6067600", VA = "0x6068600")]
	private static void BuildComplexContent_Mixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x6068670", Offset = "0x6067670", VA = "0x6068670")]
	private static void InitComplexContentExtension(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x6068770", Offset = "0x6067770", VA = "0x6068770")]
	private static void BuildComplexContentExtension_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x60687E0", Offset = "0x60677E0", VA = "0x60687E0")]
	private static void InitComplexContentRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x6068880", Offset = "0x6067880", VA = "0x6068880")]
	private static void BuildComplexContentRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x60688F0", Offset = "0x60678F0", VA = "0x60688F0")]
	private static void InitSimpleContent(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x6068A20", Offset = "0x6067A20", VA = "0x6068A20")]
	private static void InitSimpleContentExtension(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x6068B20", Offset = "0x6067B20", VA = "0x6068B20")]
	private static void BuildSimpleContentExtension_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x6068B90", Offset = "0x6067B90", VA = "0x6068B90")]
	private static void InitSimpleContentRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x6068C90", Offset = "0x6067C90", VA = "0x6068C90")]
	private static void BuildSimpleContentRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x6068D00", Offset = "0x6067D00", VA = "0x6068D00")]
	private static void InitAttributeGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x6068E10", Offset = "0x6067E10", VA = "0x6068E10")]
	private static void BuildAttributeGroup_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x6068E40", Offset = "0x6067E40", VA = "0x6068E40")]
	private static void InitAttributeGroupRef(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x6068ED0", Offset = "0x6067ED0", VA = "0x6068ED0")]
	private static void BuildAttributeGroupRef_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x6068F40", Offset = "0x6067F40", VA = "0x6068F40")]
	private static void InitAnyAttribute(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x6069270", Offset = "0x6068270", VA = "0x6069270")]
	private static void BuildAnyAttribute_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x60692A0", Offset = "0x60682A0", VA = "0x60692A0")]
	private static void BuildAnyAttribute_ProcessContents(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x6069340", Offset = "0x6068340", VA = "0x6069340")]
	private static void InitGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x6069450", Offset = "0x6068450", VA = "0x6069450")]
	private static void BuildGroup_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x6069480", Offset = "0x6068480", VA = "0x6069480")]
	private static void InitGroupRef(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x6069930", Offset = "0x6068930", VA = "0x6069930")]
	private static void BuildParticle_MaxOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x6069950", Offset = "0x6068950", VA = "0x6069950")]
	private static void BuildParticle_MinOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x6069970", Offset = "0x6068970", VA = "0x6069970")]
	private static void BuildGroupRef_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x60699E0", Offset = "0x60689E0", VA = "0x60699E0")]
	private static void InitAll(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x6069A80", Offset = "0x6068A80", VA = "0x6069A80")]
	private static void InitChoice(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x6069B20", Offset = "0x6068B20", VA = "0x6069B20")]
	private static void InitSequence(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x6069BC0", Offset = "0x6068BC0", VA = "0x6069BC0")]
	private static void InitAny(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x6069C60", Offset = "0x6068C60", VA = "0x6069C60")]
	private static void BuildAny_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BA")]
	[Address(RVA = "0x6069C90", Offset = "0x6068C90", VA = "0x6069C90")]
	private static void BuildAny_ProcessContents(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x6069D30", Offset = "0x6068D30", VA = "0x6069D30")]
	private static void InitNotation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BC")]
	[Address(RVA = "0x6069DD0", Offset = "0x6068DD0", VA = "0x6069DD0")]
	private static void BuildNotation_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BD")]
	[Address(RVA = "0x6069E00", Offset = "0x6068E00", VA = "0x6069E00")]
	private static void BuildNotation_Public(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x6069E30", Offset = "0x6068E30", VA = "0x6069E30")]
	private static void BuildNotation_System(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x6069E60", Offset = "0x6068E60", VA = "0x6069E60")]
	private static void InitFacet(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x606A1E0", Offset = "0x60691E0", VA = "0x606A1E0")]
	private static void BuildFacet_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x606A260", Offset = "0x6069260", VA = "0x606A260")]
	private static void BuildFacet_Value(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x606A290", Offset = "0x6069290", VA = "0x606A290")]
	private static void InitIdentityConstraint(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x606A3F0", Offset = "0x60693F0", VA = "0x606A3F0")]
	private static void BuildIdentityConstraint_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x606A420", Offset = "0x6069420", VA = "0x606A420")]
	private static void BuildIdentityConstraint_Refer(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x606A530", Offset = "0x6069530", VA = "0x606A530")]
	private static void InitSelector(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x606A600", Offset = "0x6069600", VA = "0x606A600")]
	private static void BuildSelector_XPath(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x606A630", Offset = "0x6069630", VA = "0x606A630")]
	private static void InitField(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x606A700", Offset = "0x6069700", VA = "0x606A700")]
	private static void BuildField_XPath(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x606A730", Offset = "0x6069730", VA = "0x606A730")]
	private static void InitAnnotation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x606A910", Offset = "0x6069910", VA = "0x606A910")]
	private static void InitAppinfo(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x606A9E0", Offset = "0x60699E0", VA = "0x606A9E0")]
	private static void BuildAppinfo_Source(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x606AA60", Offset = "0x6069A60", VA = "0x606AA60")]
	private static void EndAppinfo(XsdBuilder builder)
	{
	}

	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x606AA90", Offset = "0x6069A90", VA = "0x606AA90")]
	private static void InitDocumentation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x606AB60", Offset = "0x6069B60", VA = "0x606AB60")]
	private static void BuildDocumentation_Source(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x606ABD0", Offset = "0x6069BD0", VA = "0x606ABD0")]
	private static void BuildDocumentation_XmlLang(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x606AD10", Offset = "0x6069D10", VA = "0x606AD10")]
	private static void EndDocumentation(XsdBuilder builder)
	{
	}

	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x6066850", Offset = "0x6065850", VA = "0x6066850")]
	private void AddAttribute(XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x6069520", Offset = "0x6068520", VA = "0x6069520")]
	private void AddParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x60639F0", Offset = "0x60629F0", VA = "0x60639F0")]
	private bool GetNextState(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x6064070", Offset = "0x6063070", VA = "0x6064070")]
	private bool IsSkipableElement(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x60674F0", Offset = "0x60664F0", VA = "0x60674F0")]
	private void SetMinOccurs(XmlSchemaParticle particle, string value)
	{
	}

	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x6067410", Offset = "0x6066410", VA = "0x6067410")]
	private void SetMaxOccurs(XmlSchemaParticle particle, string value)
	{
	}

	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x60670C0", Offset = "0x60660C0", VA = "0x60670C0")]
	private bool ParseBoolean(string value, string attributeName)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x6065EE0", Offset = "0x6064EE0", VA = "0x6065EE0")]
	private int ParseEnum(string value, string attributeName, string[] values)
	{
		return default(int);
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x6066D00", Offset = "0x6065D00", VA = "0x6066D00")]
	private XmlQualifiedName ParseQName(string value, string attributeName)
	{
		return null;
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x6066100", Offset = "0x6065100", VA = "0x6066100")]
	private int ParseBlockFinalEnum(string value, string attributeName)
	{
		return default(int);
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x606AA50", Offset = "0x6069A50", VA = "0x606AA50")]
	private static string ParseUriReference(string s)
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x606AD40", Offset = "0x6069D40", VA = "0x606AD40")]
	private void SendValidationEvent(string code, string arg0, string arg1, string arg2)
	{
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x6064090", Offset = "0x6063090", VA = "0x6064090")]
	private void SendValidationEvent(string code, string msg)
	{
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x6064630", Offset = "0x6063630", VA = "0x6064630")]
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x606AEC0", Offset = "0x6069EC0", VA = "0x606AEC0")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x6067E50", Offset = "0x6066E50", VA = "0x6067E50")]
	private void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x6063F20", Offset = "0x6062F20", VA = "0x6063F20")]
	private void RecordPosition()
	{
	}
}
