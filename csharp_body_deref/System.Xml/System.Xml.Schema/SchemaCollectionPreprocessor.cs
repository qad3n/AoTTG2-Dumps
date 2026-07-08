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
		[Address(RVA = "0x43A5970", Offset = "0x43A5970", VA = "0x43A5970")]
		set
		{
		}
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x43A1920", Offset = "0x43A1920", VA = "0x43A1920")]
	public SchemaCollectionPreprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x43A1930", Offset = "0x43A1930", VA = "0x43A1930")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals, XmlSchemaCollection xsc)
	{
		return default(bool);
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x43A1B90", Offset = "0x43A1B90", VA = "0x43A1B90")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x43A1E00", Offset = "0x43A1E00", VA = "0x43A1E00")]
	private void LoadExternals(XmlSchema schema, XmlSchemaCollection xsc)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x43A5B50", Offset = "0x43A5B50", VA = "0x43A5B50")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x43A2D10", Offset = "0x43A2D10", VA = "0x43A2D10")]
	private void Preprocess(XmlSchema schema, string targetNamespace, Compositor compositor)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x43A5EA0", Offset = "0x43A5EA0", VA = "0x43A5EA0")]
	private void PreprocessRedefine(XmlSchemaRedefine redefine)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x43A92C0", Offset = "0x43A92C0", VA = "0x43A92C0")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name)
	{
		return default(int);
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x43A8CC0", Offset = "0x43A8CC0", VA = "0x43A8CC0")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x43A8D50", Offset = "0x43A8D50", VA = "0x43A8D50")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x43A91D0", Offset = "0x43A91D0", VA = "0x43A91D0")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x43A8EB0", Offset = "0x43A8EB0", VA = "0x43A8EB0")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x43A73D0", Offset = "0x43A73D0", VA = "0x43A73D0")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x43A9AB0", Offset = "0x43A9AB0", VA = "0x43A9AB0")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x43A9890", Offset = "0x43A9890", VA = "0x43A9890")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x43A7540", Offset = "0x43A7540", VA = "0x43A7540")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x43A85C0", Offset = "0x43A85C0", VA = "0x43A85C0")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x43AA520", Offset = "0x43AA520", VA = "0x43AA520")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x43AA180", Offset = "0x43AA180", VA = "0x43AA180")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x43AA8F0", Offset = "0x43AA8F0", VA = "0x43AA8F0")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x43A7F90", Offset = "0x43A7F90", VA = "0x43A7F90")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x43A7630", Offset = "0x43A7630", VA = "0x43A7630")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x43A8830", Offset = "0x43A8830", VA = "0x43A8830")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x43A89F0", Offset = "0x43A89F0", VA = "0x43A89F0")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x43AAC80", Offset = "0x43AAC80", VA = "0x43AAC80")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x43A9E50", Offset = "0x43A9E50", VA = "0x43A9E50")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x43A2A30", Offset = "0x43A2A30", VA = "0x43A2A30")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x43A95D0", Offset = "0x43A95D0", VA = "0x43A95D0")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x43A9CA0", Offset = "0x43A9CA0", VA = "0x43A9CA0")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x43A5D70", Offset = "0x43A5D70", VA = "0x43A5D70")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x43A5D90", Offset = "0x43A5D90", VA = "0x43A5D90")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x43A5980", Offset = "0x43A5980", VA = "0x43A5980")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x43A5A40", Offset = "0x43A5A40", VA = "0x43A5A40")]
	private Stream GetSchemaEntity(Uri ruri)
	{
		return null;
	}
}
