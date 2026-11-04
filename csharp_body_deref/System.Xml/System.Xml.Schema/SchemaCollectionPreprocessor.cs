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
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x2637650", Offset = "0x2635C50", VA = "0x182637650")]
	public SchemaCollectionPreprocessor(XmlNameTable nameTable, SchemaNames schemaNames, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x262FC30", Offset = "0x262E230", VA = "0x18262FC30")]
	public bool Execute(XmlSchema schema, string targetNamespace, bool loadExternals, XmlSchemaCollection xsc)
	{
		return default(bool);
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x262F700", Offset = "0x262DD00", VA = "0x18262F700")]
	private void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x262FF30", Offset = "0x262E530", VA = "0x18262FF30")]
	private void LoadExternals(XmlSchema schema, XmlSchemaCollection xsc)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x262EDA0", Offset = "0x262D3A0", VA = "0x18262EDA0")]
	private void BuildRefNamespaces(XmlSchema schema)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x26353A0", Offset = "0x26339A0", VA = "0x1826353A0")]
	private void Preprocess(XmlSchema schema, string targetNamespace, Compositor compositor)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x2633A80", Offset = "0x2632080", VA = "0x182633A80")]
	private void PreprocessRedefine(XmlSchemaRedefine redefine)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x262F970", Offset = "0x262DF70", VA = "0x18262F970")]
	private int CountGroupSelfReference(XmlSchemaObjectCollection items, XmlQualifiedName name)
	{
		return default(int);
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x262F530", Offset = "0x262DB30", VA = "0x18262F530")]
	private void CheckRefinedGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x262EFB0", Offset = "0x262D5B0", VA = "0x18262EFB0")]
	private void CheckRefinedAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x262F5C0", Offset = "0x262DBC0", VA = "0x18262F5C0")]
	private void CheckRefinedSimpleType(XmlSchemaSimpleType stype)
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x262F110", Offset = "0x262D710", VA = "0x18262F110")]
	private void CheckRefinedComplexType(XmlSchemaComplexType ctype)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x2630F50", Offset = "0x262F550", VA = "0x182630F50")]
	private void PreprocessAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x2632950", Offset = "0x2630F50", VA = "0x182632950")]
	private void PreprocessLocalAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x2630BF0", Offset = "0x262F1F0", VA = "0x182630BF0")]
	private void PreprocessAttributeContent(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x2630E20", Offset = "0x262F420", VA = "0x182630E20")]
	private void PreprocessAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x2632160", Offset = "0x2630760", VA = "0x182632160")]
	private void PreprocessElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x2632B10", Offset = "0x2631110", VA = "0x182632B10")]
	private void PreprocessLocalElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x2631D70", Offset = "0x2630370", VA = "0x182631D70")]
	private void PreprocessElementContent(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x26325B0", Offset = "0x2630BB0", VA = "0x1826325B0")]
	private void PreprocessIdentityConstraint(XmlSchemaIdentityConstraint constraint)
	{
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x2634CB0", Offset = "0x26332B0", VA = "0x182634CB0")]
	private void PreprocessSimpleType(XmlSchemaSimpleType simpleType, bool local)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x2631380", Offset = "0x262F980", VA = "0x182631380")]
	private void PreprocessComplexType(XmlSchemaComplexType complexType, bool local)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x26323D0", Offset = "0x26309D0", VA = "0x1826323D0")]
	private void PreprocessGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x2632EE0", Offset = "0x26314E0", VA = "0x182632EE0")]
	private void PreprocessNotation(XmlSchemaNotation notation)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x26330D0", Offset = "0x26316D0", VA = "0x1826330D0")]
	private void PreprocessParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x26310E0", Offset = "0x262F6E0", VA = "0x1826310E0")]
	private void PreprocessAttributes(XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x2637020", Offset = "0x2635620", VA = "0x182637020")]
	private void ValidateIdAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x2637230", Offset = "0x2635830", VA = "0x182637230")]
	private void ValidateNameAttribute(XmlSchemaObject xso)
	{
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x2637530", Offset = "0x2635B30", VA = "0x182637530")]
	private void ValidateQNameAttribute(XmlSchemaObject xso, string attributeName, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x26111C0", Offset = "0x260F7C0", VA = "0x1826111C0")]
	private void SetParent(XmlSchemaObject child, XmlSchemaObject parent)
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x2630AD0", Offset = "0x262F0D0", VA = "0x182630AD0")]
	private void PreprocessAnnotation(XmlSchemaObject schemaObject)
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x2636FD0", Offset = "0x26355D0", VA = "0x182636FD0")]
	private Uri ResolveSchemaLocationUri(XmlSchema enclosingSchema, string location)
	{
		return null;
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x262FE80", Offset = "0x262E480", VA = "0x18262FE80")]
	private Stream GetSchemaEntity(Uri ruri)
	{
		return null;
	}
}
