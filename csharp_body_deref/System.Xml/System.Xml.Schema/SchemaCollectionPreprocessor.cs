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
		[Address(RVA = "0x46E30D0", Offset = "0x46E30D0", VA = "0x46E30D0")]
		set
		{
		}
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x46DF080", Offset = "0x46DF080", VA = "0x46DF080")]
	public SchemaCollectionPreprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x46DF090", Offset = "0x46DF090", VA = "0x46DF090")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals, XmlSchemaCollection xsc)
	{
		return default(bool);
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x46DF2F0", Offset = "0x46DF2F0", VA = "0x46DF2F0")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x46DF560", Offset = "0x46DF560", VA = "0x46DF560")]
	private void LoadExternals(XmlSchema schema, XmlSchemaCollection xsc)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x46E32B0", Offset = "0x46E32B0", VA = "0x46E32B0")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x46E0470", Offset = "0x46E0470", VA = "0x46E0470")]
	private void Preprocess(XmlSchema schema, string targetNamespace, Compositor compositor)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x46E3600", Offset = "0x46E3600", VA = "0x46E3600")]
	private void PreprocessRedefine(XmlSchemaRedefine redefine)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x46E6A20", Offset = "0x46E6A20", VA = "0x46E6A20")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name)
	{
		return default(int);
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x46E6420", Offset = "0x46E6420", VA = "0x46E6420")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x46E64B0", Offset = "0x46E64B0", VA = "0x46E64B0")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x46E6930", Offset = "0x46E6930", VA = "0x46E6930")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x46E6610", Offset = "0x46E6610", VA = "0x46E6610")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x46E4B30", Offset = "0x46E4B30", VA = "0x46E4B30")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x46E7210", Offset = "0x46E7210", VA = "0x46E7210")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x46E6FF0", Offset = "0x46E6FF0", VA = "0x46E6FF0")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x46E4CA0", Offset = "0x46E4CA0", VA = "0x46E4CA0")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x46E5D20", Offset = "0x46E5D20", VA = "0x46E5D20")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x46E7C80", Offset = "0x46E7C80", VA = "0x46E7C80")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x46E78E0", Offset = "0x46E78E0", VA = "0x46E78E0")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x46E8050", Offset = "0x46E8050", VA = "0x46E8050")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x46E56F0", Offset = "0x46E56F0", VA = "0x46E56F0")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x46E4D90", Offset = "0x46E4D90", VA = "0x46E4D90")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x46E5F90", Offset = "0x46E5F90", VA = "0x46E5F90")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x46E6150", Offset = "0x46E6150", VA = "0x46E6150")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x46E83E0", Offset = "0x46E83E0", VA = "0x46E83E0")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x46E75B0", Offset = "0x46E75B0", VA = "0x46E75B0")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x46E0190", Offset = "0x46E0190", VA = "0x46E0190")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x46E6D30", Offset = "0x46E6D30", VA = "0x46E6D30")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x46E7400", Offset = "0x46E7400", VA = "0x46E7400")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x46E34D0", Offset = "0x46E34D0", VA = "0x46E34D0")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x46E34F0", Offset = "0x46E34F0", VA = "0x46E34F0")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x46E30E0", Offset = "0x46E30E0", VA = "0x46E30E0")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x46E31A0", Offset = "0x46E31A0", VA = "0x46E31A0")]
	private Stream GetSchemaEntity(Uri ruri)
	{
		return null;
	}
}
