// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaCollectionPreprocessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.IO;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001EA")]
internal sealed class SchemaCollectionPreprocessor : BaseProcessor
{
	[Token(Token = "0x20001EB")]
	private enum Compositor
	{
		[Token(Token = "0x40008FB")]
		Root,
		[Token(Token = "0x40008FC")]
		Include,
		[Token(Token = "0x40008FD")]
		Import
	}

	[Token(Token = "0x40008EF")]
	[FieldOffset(Offset = "0x40")]
	private XmlSchema schema;

	[Token(Token = "0x40008F0")]
	[FieldOffset(Offset = "0x48")]
	private string targetNamespace;

	[Token(Token = "0x40008F1")]
	[FieldOffset(Offset = "0x50")]
	private bool buildinIncluded;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0x54")]
	private XmlSchemaForm elementFormDefault;

	[Token(Token = "0x40008F3")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaForm attributeFormDefault;

	[Token(Token = "0x40008F4")]
	[FieldOffset(Offset = "0x5C")]
	private XmlSchemaDerivationMethod blockDefault;

	[Token(Token = "0x40008F5")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaDerivationMethod finalDefault;

	[Token(Token = "0x40008F6")]
	[FieldOffset(Offset = "0x68")]
	private Hashtable schemaLocations;

	[Token(Token = "0x40008F7")]
	[FieldOffset(Offset = "0x70")]
	private Hashtable referenceNamespaces;

	[Token(Token = "0x40008F8")]
	[FieldOffset(Offset = "0x78")]
	private string Xmlns;

	[Token(Token = "0x40008F9")]
	[FieldOffset(Offset = "0x80")]
	private XmlResolver xmlResolver;

	[Token(Token = "0x17000522")]
	internal XmlResolver XmlResolver
	{
		[Token(Token = "0x600133E")]
		[Address(RVA = "0x5FEF770", Offset = "0x5FEE770", VA = "0x5FEF770")]
		set
		{
		}
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x5FEBE10", Offset = "0x5FEAE10", VA = "0x5FEBE10")]
	public SchemaCollectionPreprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x5FEBE20", Offset = "0x5FEAE20", VA = "0x5FEBE20")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals, XmlSchemaCollection xsc)
	{
		return default(bool);
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x5FEC070", Offset = "0x5FEB070", VA = "0x5FEC070")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x5FEC2E0", Offset = "0x5FEB2E0", VA = "0x5FEC2E0")]
	private void LoadExternals(XmlSchema schema, XmlSchemaCollection xsc)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x5FEF940", Offset = "0x5FEE940", VA = "0x5FEF940")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x5FED050", Offset = "0x5FEC050", VA = "0x5FED050")]
	private void Preprocess(XmlSchema schema, string targetNamespace, Compositor compositor)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x5FEFC70", Offset = "0x5FEEC70", VA = "0x5FEFC70")]
	private void PreprocessRedefine(XmlSchemaRedefine redefine)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x5FF2E30", Offset = "0x5FF1E30", VA = "0x5FF2E30")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name)
	{
		return default(int);
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x5FF2830", Offset = "0x5FF1830", VA = "0x5FF2830")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x5FF28C0", Offset = "0x5FF18C0", VA = "0x5FF28C0")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x5FF2D40", Offset = "0x5FF1D40", VA = "0x5FF2D40")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x5FF2A10", Offset = "0x5FF1A10", VA = "0x5FF2A10")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x5FF0EF0", Offset = "0x5FEFEF0", VA = "0x5FF0EF0")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x5FF3600", Offset = "0x5FF2600", VA = "0x5FF3600")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x5FF33E0", Offset = "0x5FF23E0", VA = "0x5FF33E0")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x5FF1060", Offset = "0x5FF0060", VA = "0x5FF1060")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x5FF2150", Offset = "0x5FF1150", VA = "0x5FF2150")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x5FF3FD0", Offset = "0x5FF2FD0", VA = "0x5FF3FD0")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x5FF3C30", Offset = "0x5FF2C30", VA = "0x5FF3C30")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x5FF4350", Offset = "0x5FF3350", VA = "0x5FF4350")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x5FF1B00", Offset = "0x5FF0B00", VA = "0x5FF1B00")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x5FF1150", Offset = "0x5FF0150", VA = "0x5FF1150")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x5FF23C0", Offset = "0x5FF13C0", VA = "0x5FF23C0")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x5FF2580", Offset = "0x5FF1580", VA = "0x5FF2580")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x5FF46D0", Offset = "0x5FF36D0", VA = "0x5FF46D0")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x5FF3920", Offset = "0x5FF2920", VA = "0x5FF3920")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x5FECDE0", Offset = "0x5FEBDE0", VA = "0x5FECDE0")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x5FF3120", Offset = "0x5FF2120", VA = "0x5FF3120")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x5FF37A0", Offset = "0x5FF27A0", VA = "0x5FF37A0")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x5FEFB60", Offset = "0x5FEEB60", VA = "0x5FEFB60")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x5FEFB80", Offset = "0x5FEEB80", VA = "0x5FEFB80")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x5FEF780", Offset = "0x5FEE780", VA = "0x5FEF780")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x5FEF830", Offset = "0x5FEE830", VA = "0x5FEF830")]
	private Stream GetSchemaEntity(Uri ruri)
	{
		return null;
	}
}
