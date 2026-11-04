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
		[Address(RVA = "0xC83FB0", Offset = "0xC825B0", VA = "0x180C83FB0")]
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
		[Address(RVA = "0x26C8CF0", Offset = "0x26C72F0", VA = "0x1826C8CF0")]
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
		[Address(RVA = "0x26B56B0", Offset = "0x26B3CB0", VA = "0x1826B56B0")]
		public BuilderNamespaceManager(XmlNamespaceManager nsMgr, XmlReader reader)
		{
		}

		[Token(Token = "0x60019EC")]
		[Address(RVA = "0x26B5650", Offset = "0x26B3C50", VA = "0x1826B5650", Slot = "16")]
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
		[Address(RVA = "0x1976AD0", Offset = "0x19750D0", VA = "0x181976AD0")]
		get
		{
			return default(SchemaNames.Token);
		}
	}

	[Token(Token = "0x170006AF")]
	private SchemaNames.Token ParentElement
	{
		[Token(Token = "0x6001964")]
		[Address(RVA = "0x26B4110", Offset = "0x26B2710", VA = "0x1826B4110")]
		get
		{
			return default(SchemaNames.Token);
		}
	}

	[Token(Token = "0x170006B0")]
	private XmlSchemaObject ParentContainer
	{
		[Token(Token = "0x6001965")]
		[Address(RVA = "0x26B4080", Offset = "0x26B2680", VA = "0x1826B4080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x26B3E40", Offset = "0x26B2440", VA = "0x1826B3E40")]
	internal XsdBuilder(XmlReader reader, XmlNamespaceManager curmgr, XmlSchema schema, XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventhandler)
	{
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x26AB950", Offset = "0x26A9F50", VA = "0x1826AB950", Slot = "4")]
	internal override bool ProcessElement(string prefix, string name, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x26AB450", Offset = "0x26A9A50", VA = "0x1826AB450", Slot = "5")]
	internal override void ProcessAttribute(string prefix, string name, string ns, string value)
	{
	}

	[Token(Token = "0x600195C")]
	[Address(RVA = "0x26AAE20", Offset = "0x26A9420", VA = "0x1826AAE20", Slot = "6")]
	internal override bool IsContentParsed()
	{
		return default(bool);
	}

	[Token(Token = "0x600195D")]
	[Address(RVA = "0x26ABCB0", Offset = "0x26AA2B0", VA = "0x1826ABCB0", Slot = "7")]
	internal override void ProcessMarkup(XmlNode[] markup)
	{
	}

	[Token(Token = "0x600195E")]
	[Address(RVA = "0x26AB900", Offset = "0x26A9F00", VA = "0x1826AB900", Slot = "8")]
	internal override void ProcessCData(string value)
	{
	}

	[Token(Token = "0x600195F")]
	[Address(RVA = "0x26ADCE0", Offset = "0x26AC2E0", VA = "0x1826ADCE0", Slot = "9")]
	internal override void StartChildren()
	{
	}

	[Token(Token = "0x6001960")]
	[Address(RVA = "0x26A82F0", Offset = "0x26A68F0", VA = "0x1826A82F0", Slot = "10")]
	internal override void EndChildren()
	{
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x26ABCD0", Offset = "0x26AA2D0", VA = "0x1826ABCD0")]
	private void Push()
	{
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x26AB360", Offset = "0x26A9960", VA = "0x1826AB360")]
	private void Pop()
	{
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x26A8460", Offset = "0x26A6A60", VA = "0x1826A8460")]
	private XmlSchemaObject GetContainer(State state)
	{
		return null;
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x26AC540", Offset = "0x26AAB40", VA = "0x1826AC540")]
	private void SetContainer(State state, object container)
	{
	}

	[Token(Token = "0x6001968")]
	[Address(RVA = "0x26A66D0", Offset = "0x26A4CD0", VA = "0x1826A66D0")]
	private static void BuildAnnotated_Id(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001969")]
	[Address(RVA = "0x26A7BD0", Offset = "0x26A61D0", VA = "0x1826A7BD0")]
	private static void BuildSchema_AttributeFormDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196A")]
	[Address(RVA = "0x26A7CF0", Offset = "0x26A62F0", VA = "0x1826A7CF0")]
	private static void BuildSchema_ElementFormDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196B")]
	[Address(RVA = "0x26A7E10", Offset = "0x26A6410", VA = "0x1826A7E10")]
	private static void BuildSchema_TargetNamespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196C")]
	[Address(RVA = "0x26A7E40", Offset = "0x26A6440", VA = "0x1826A7E40")]
	private static void BuildSchema_Version(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196D")]
	[Address(RVA = "0x26A7DA0", Offset = "0x26A63A0", VA = "0x1826A7DA0")]
	private static void BuildSchema_FinalDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196E")]
	[Address(RVA = "0x26A7C80", Offset = "0x26A6280", VA = "0x1826A7C80")]
	private static void BuildSchema_BlockDefault(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600196F")]
	[Address(RVA = "0x26AA2A0", Offset = "0x26A88A0", VA = "0x1826AA2A0")]
	private static void InitSchema(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001970")]
	[Address(RVA = "0x26AA050", Offset = "0x26A8650", VA = "0x1826AA050")]
	private static void InitInclude(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001971")]
	[Address(RVA = "0x26A7A80", Offset = "0x26A6080", VA = "0x1826A7A80")]
	private static void BuildInclude_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001972")]
	[Address(RVA = "0x26A9F80", Offset = "0x26A8580", VA = "0x1826A9F80")]
	private static void InitImport(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001973")]
	[Address(RVA = "0x26A7A20", Offset = "0x26A6020", VA = "0x1826A7A20")]
	private static void BuildImport_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x26A7A50", Offset = "0x26A6050", VA = "0x1826A7A50")]
	private static void BuildImport_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x26AA1D0", Offset = "0x26A87D0", VA = "0x1826AA1D0")]
	private static void InitRedefine(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x26A7BA0", Offset = "0x26A61A0", VA = "0x1826A7BA0")]
	private static void BuildRedefine_SchemaLocation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001977")]
	[Address(RVA = "0x26A8440", Offset = "0x26A6A40", VA = "0x1826A8440")]
	private static void EndRedefine(XsdBuilder builder)
	{
	}

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x26A9040", Offset = "0x26A7640", VA = "0x1826A9040")]
	private static void InitAttribute(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x26A6A00", Offset = "0x26A5000", VA = "0x1826A6A00")]
	private static void BuildAttribute_Default(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197A")]
	[Address(RVA = "0x26A6A30", Offset = "0x26A5030", VA = "0x1826A6A30")]
	private static void BuildAttribute_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x26A6A60", Offset = "0x26A5060", VA = "0x1826A6A60")]
	private static void BuildAttribute_Form(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x26A6C40", Offset = "0x26A5240", VA = "0x1826A6C40")]
	private static void BuildAttribute_Use(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197D")]
	[Address(RVA = "0x26A6B40", Offset = "0x26A5140", VA = "0x1826A6B40")]
	private static void BuildAttribute_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197E")]
	[Address(RVA = "0x26A6B10", Offset = "0x26A5110", VA = "0x1826A6B10")]
	private static void BuildAttribute_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600197F")]
	[Address(RVA = "0x26A6BC0", Offset = "0x26A51C0", VA = "0x1826A6BC0")]
	private static void BuildAttribute_Type(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001980")]
	[Address(RVA = "0x26A9740", Offset = "0x26A7D40", VA = "0x1826A9740")]
	private static void InitElement(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001981")]
	[Address(RVA = "0x26A7210", Offset = "0x26A5810", VA = "0x1826A7210")]
	private static void BuildElement_Abstract(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001982")]
	[Address(RVA = "0x26A7290", Offset = "0x26A5890", VA = "0x1826A7290")]
	private static void BuildElement_Block(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001983")]
	[Address(RVA = "0x26A7300", Offset = "0x26A5900", VA = "0x1826A7300")]
	private static void BuildElement_Default(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001984")]
	[Address(RVA = "0x26A73D0", Offset = "0x26A59D0", VA = "0x1826A73D0")]
	private static void BuildElement_Form(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001985")]
	[Address(RVA = "0x26A7610", Offset = "0x26A5C10", VA = "0x1826A7610")]
	private static void BuildElement_SubstitutionGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001986")]
	[Address(RVA = "0x26A7330", Offset = "0x26A5930", VA = "0x1826A7330")]
	private static void BuildElement_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001987")]
	[Address(RVA = "0x26A73A0", Offset = "0x26A59A0", VA = "0x1826A73A0")]
	private static void BuildElement_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001988")]
	[Address(RVA = "0x26A7480", Offset = "0x26A5A80", VA = "0x1826A7480")]
	private static void BuildElement_MaxOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001989")]
	[Address(RVA = "0x26A74B0", Offset = "0x26A5AB0", VA = "0x1826A74B0")]
	private static void BuildElement_MinOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198A")]
	[Address(RVA = "0x26A74E0", Offset = "0x26A5AE0", VA = "0x1826A74E0")]
	private static void BuildElement_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198B")]
	[Address(RVA = "0x26A7510", Offset = "0x26A5B10", VA = "0x1826A7510")]
	private static void BuildElement_Nillable(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198C")]
	[Address(RVA = "0x26A7590", Offset = "0x26A5B90", VA = "0x1826A7590")]
	private static void BuildElement_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198D")]
	[Address(RVA = "0x26A7690", Offset = "0x26A5C90", VA = "0x1826A7690")]
	private static void BuildElement_Type(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198E")]
	[Address(RVA = "0x26AAA70", Offset = "0x26A9070", VA = "0x1826AAA70")]
	private static void InitSimpleType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600198F")]
	[Address(RVA = "0x26A8280", Offset = "0x26A6880", VA = "0x1826A8280")]
	private static void BuildSimpleType_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x26A8210", Offset = "0x26A6810", VA = "0x1826A8210")]
	private static void BuildSimpleType_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001991")]
	[Address(RVA = "0x26AA980", Offset = "0x26A8F80", VA = "0x1826AA980")]
	private static void InitSimpleTypeUnion(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001992")]
	[Address(RVA = "0x26A8070", Offset = "0x26A6670", VA = "0x1826A8070")]
	private static void BuildSimpleTypeUnion_MemberTypes(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001993")]
	[Address(RVA = "0x26AA7A0", Offset = "0x26A8DA0", VA = "0x1826AA7A0")]
	private static void InitSimpleTypeList(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001994")]
	[Address(RVA = "0x26A7F70", Offset = "0x26A6570", VA = "0x1826A7F70")]
	private static void BuildSimpleTypeList_ItemType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x26AA890", Offset = "0x26A8E90", VA = "0x1826AA890")]
	private static void InitSimpleTypeRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x26A7FF0", Offset = "0x26A65F0", VA = "0x1826A7FF0")]
	private static void BuildSimpleTypeRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x26A94C0", Offset = "0x26A7AC0", VA = "0x1826A94C0")]
	private static void InitComplexType(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x26A6E70", Offset = "0x26A5470", VA = "0x1826A6E70")]
	private static void BuildComplexType_Abstract(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x6001999")]
	[Address(RVA = "0x26A6EF0", Offset = "0x26A54F0", VA = "0x1826A6EF0")]
	private static void BuildComplexType_Block(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199A")]
	[Address(RVA = "0x26A6F70", Offset = "0x26A5570", VA = "0x1826A6F70")]
	private static void BuildComplexType_Final(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199B")]
	[Address(RVA = "0x26A6FE0", Offset = "0x26A55E0", VA = "0x1826A6FE0")]
	private static void BuildComplexType_Mixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x26A7070", Offset = "0x26A5670", VA = "0x1826A7070")]
	private static void BuildComplexType_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199D")]
	[Address(RVA = "0x26A9380", Offset = "0x26A7980", VA = "0x1826A9380")]
	private static void InitComplexContent(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199E")]
	[Address(RVA = "0x26A6DF0", Offset = "0x26A53F0", VA = "0x1826A6DF0")]
	private static void BuildComplexContent_Mixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x26A91D0", Offset = "0x26A77D0", VA = "0x1826A91D0")]
	private static void InitComplexContentExtension(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x26A6CF0", Offset = "0x26A52F0", VA = "0x1826A6CF0")]
	private static void BuildComplexContentExtension_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x26A92D0", Offset = "0x26A78D0", VA = "0x1826A92D0")]
	private static void InitComplexContentRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x26A6D70", Offset = "0x26A5370", VA = "0x1826A6D70")]
	private static void BuildComplexContentRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x26AA660", Offset = "0x26A8C60", VA = "0x1826AA660")]
	private static void InitSimpleContent(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A4")]
	[Address(RVA = "0x26AA460", Offset = "0x26A8A60", VA = "0x1826AA460")]
	private static void InitSimpleContentExtension(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A5")]
	[Address(RVA = "0x26A7E70", Offset = "0x26A6470", VA = "0x1826A7E70")]
	private static void BuildSimpleContentExtension_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A6")]
	[Address(RVA = "0x26AA560", Offset = "0x26A8B60", VA = "0x1826AA560")]
	private static void InitSimpleContentRestriction(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A7")]
	[Address(RVA = "0x26A7EF0", Offset = "0x26A64F0", VA = "0x1826A7EF0")]
	private static void BuildSimpleContentRestriction_Base(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x26A8F60", Offset = "0x26A7560", VA = "0x1826A8F60")]
	private static void InitAttributeGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019A9")]
	[Address(RVA = "0x26A69D0", Offset = "0x26A4FD0", VA = "0x1826A69D0")]
	private static void BuildAttributeGroup_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AA")]
	[Address(RVA = "0x26A8ED0", Offset = "0x26A74D0", VA = "0x1826A8ED0")]
	private static void InitAttributeGroupRef(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AB")]
	[Address(RVA = "0x26A6950", Offset = "0x26A4F50", VA = "0x1826A6950")]
	private static void BuildAttributeGroupRef_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AC")]
	[Address(RVA = "0x26A8A30", Offset = "0x26A7030", VA = "0x1826A8A30")]
	private static void InitAnyAttribute(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AD")]
	[Address(RVA = "0x26A6700", Offset = "0x26A4D00", VA = "0x1826A6700")]
	private static void BuildAnyAttribute_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AE")]
	[Address(RVA = "0x26A6730", Offset = "0x26A4D30", VA = "0x1826A6730")]
	private static void BuildAnyAttribute_ProcessContents(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019AF")]
	[Address(RVA = "0x26A9D50", Offset = "0x26A8350", VA = "0x1826A9D50")]
	private static void InitGroup(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B0")]
	[Address(RVA = "0x26A7880", Offset = "0x26A5E80", VA = "0x1826A7880")]
	private static void BuildGroup_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B1")]
	[Address(RVA = "0x26A9CA0", Offset = "0x26A82A0", VA = "0x1826A9CA0")]
	private static void InitGroupRef(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B2")]
	[Address(RVA = "0x26A7B40", Offset = "0x26A6140", VA = "0x1826A7B40")]
	private static void BuildParticle_MaxOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B3")]
	[Address(RVA = "0x26A7B70", Offset = "0x26A6170", VA = "0x1826A7B70")]
	private static void BuildParticle_MinOccurs(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B4")]
	[Address(RVA = "0x26A7800", Offset = "0x26A5E00", VA = "0x1826A7800")]
	private static void BuildGroupRef_Ref(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x26A8880", Offset = "0x26A6E80", VA = "0x1826A8880")]
	private static void InitAll(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x26A9120", Offset = "0x26A7720", VA = "0x1826A9120")]
	private static void InitChoice(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x26AA3B0", Offset = "0x26A89B0", VA = "0x1826AA3B0")]
	private static void InitSequence(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B8")]
	[Address(RVA = "0x26A8D40", Offset = "0x26A7340", VA = "0x1826A8D40")]
	private static void InitAny(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019B9")]
	[Address(RVA = "0x26A67E0", Offset = "0x26A4DE0", VA = "0x1826A67E0")]
	private static void BuildAny_Namespace(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BA")]
	[Address(RVA = "0x26A6810", Offset = "0x26A4E10", VA = "0x1826A6810")]
	private static void BuildAny_ProcessContents(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BB")]
	[Address(RVA = "0x26AA120", Offset = "0x26A8720", VA = "0x1826AA120")]
	private static void InitNotation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BC")]
	[Address(RVA = "0x26A7AB0", Offset = "0x26A60B0", VA = "0x1826A7AB0")]
	private static void BuildNotation_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BD")]
	[Address(RVA = "0x26A7AE0", Offset = "0x26A60E0", VA = "0x1826A7AE0")]
	private static void BuildNotation_Public(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BE")]
	[Address(RVA = "0x26A7B10", Offset = "0x26A6110", VA = "0x1826A7B10")]
	private static void BuildNotation_System(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x26A9850", Offset = "0x26A7E50", VA = "0x1826A9850")]
	private static void InitFacet(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x26A7710", Offset = "0x26A5D10", VA = "0x1826A7710")]
	private static void BuildFacet_Fixed(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x26A77A0", Offset = "0x26A5DA0", VA = "0x1826A77A0")]
	private static void BuildFacet_Value(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x26A9E20", Offset = "0x26A8420", VA = "0x1826A9E20")]
	private static void InitIdentityConstraint(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x26A78B0", Offset = "0x26A5EB0", VA = "0x1826A78B0")]
	private static void BuildIdentityConstraint_Name(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C4")]
	[Address(RVA = "0x26A78E0", Offset = "0x26A5EE0", VA = "0x1826A78E0")]
	private static void BuildIdentityConstraint_Refer(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C5")]
	[Address(RVA = "0x26AA2D0", Offset = "0x26A88D0", VA = "0x1826AA2D0")]
	private static void InitSelector(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C6")]
	[Address(RVA = "0x26A77D0", Offset = "0x26A5DD0", VA = "0x1826A77D0")]
	private static void BuildSelector_XPath(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C7")]
	[Address(RVA = "0x26A9BC0", Offset = "0x26A81C0", VA = "0x1826A9BC0")]
	private static void InitField(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C8")]
	[Address(RVA = "0x26A77D0", Offset = "0x26A5DD0", VA = "0x1826A77D0")]
	private static void BuildField_XPath(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019C9")]
	[Address(RVA = "0x26A8930", Offset = "0x26A6F30", VA = "0x1826A8930")]
	private static void InitAnnotation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CA")]
	[Address(RVA = "0x26A8DF0", Offset = "0x26A73F0", VA = "0x1826A8DF0")]
	private static void InitAppinfo(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CB")]
	[Address(RVA = "0x26A68D0", Offset = "0x26A4ED0", VA = "0x1826A68D0")]
	private static void BuildAppinfo_Source(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x26A82B0", Offset = "0x26A68B0", VA = "0x1826A82B0")]
	private static void EndAppinfo(XsdBuilder builder)
	{
	}

	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x26A9660", Offset = "0x26A7C60", VA = "0x1826A9660")]
	private static void InitDocumentation(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x26A70A0", Offset = "0x26A56A0", VA = "0x1826A70A0")]
	private static void BuildDocumentation_Source(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x26A7120", Offset = "0x26A5720", VA = "0x1826A7120")]
	private static void BuildDocumentation_XmlLang(XsdBuilder builder, string value)
	{
	}

	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x26A8400", Offset = "0x26A6A00", VA = "0x1826A8400")]
	private static void EndDocumentation(XsdBuilder builder)
	{
	}

	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x26A60D0", Offset = "0x26A46D0", VA = "0x1826A60D0")]
	private void AddAttribute(XmlSchemaObject value)
	{
	}

	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x26A6340", Offset = "0x26A4940", VA = "0x1826A6340")]
	private void AddParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x26A86B0", Offset = "0x26A6CB0", VA = "0x1826A86B0")]
	private bool GetNextState(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x26AAE40", Offset = "0x26A9440", VA = "0x1826AAE40")]
	private bool IsSkipableElement(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x26ADC80", Offset = "0x26AC280", VA = "0x1826ADC80")]
	private void SetMinOccurs(XmlSchemaParticle particle, string value)
	{
	}

	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x26ADC20", Offset = "0x26AC220", VA = "0x1826ADC20")]
	private void SetMaxOccurs(XmlSchemaParticle particle, string value)
	{
	}

	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x26AB0F0", Offset = "0x26A96F0", VA = "0x1826AB0F0")]
	private bool ParseBoolean(string value, string attributeName)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x26AB180", Offset = "0x26A9780", VA = "0x1826AB180")]
	private int ParseEnum(string value, string attributeName, string[] values)
	{
		return default(int);
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x26AB260", Offset = "0x26A9860", VA = "0x1826AB260")]
	private XmlQualifiedName ParseQName(string value, string attributeName)
	{
		return null;
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x26AAE70", Offset = "0x26A9470", VA = "0x1826AAE70")]
	private int ParseBlockFinalEnum(string value, string attributeName)
	{
		return default(int);
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	private static string ParseUriReference(string s)
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x26AC090", Offset = "0x26AA690", VA = "0x1826AC090")]
	private void SendValidationEvent(string code, string arg0, string arg1, string arg2)
	{
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x26AC220", Offset = "0x26AA820", VA = "0x1826AC220")]
	private void SendValidationEvent(string code, string msg)
	{
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x26AC420", Offset = "0x26AAA20", VA = "0x1826AC420")]
	private void SendValidationEvent(string code, string[] args, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x26AC330", Offset = "0x26AA930", VA = "0x1826AC330")]
	private void SendValidationEvent(XmlSchemaException e, XmlSeverityType severity)
	{
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x26AC080", Offset = "0x26AA680", VA = "0x1826AC080")]
	private void SendValidationEvent(XmlSchemaException e)
	{
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x26ABFB0", Offset = "0x26AA5B0", VA = "0x1826ABFB0")]
	private void RecordPosition()
	{
	}
}
