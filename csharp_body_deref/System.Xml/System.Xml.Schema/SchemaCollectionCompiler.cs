// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.SchemaCollectionCompiler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001E9")]
internal sealed class SchemaCollectionCompiler : BaseProcessor
{
	[Token(Token = "0x40008EB")]
	[FieldOffset(Offset = "0x40")]
	private bool compileContentModel;

	[Token(Token = "0x40008EC")]
	[FieldOffset(Offset = "0x48")]
	private XmlSchemaObjectTable examplars;

	[Token(Token = "0x40008ED")]
	[FieldOffset(Offset = "0x50")]
	private Stack complexTypeStack;

	[Token(Token = "0x40008EE")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchema schema;

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x46C9290", Offset = "0x46C9290", VA = "0x46C9290")]
	public SchemaCollectionCompiler(XmlNameTable nameTable, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x46C9350", Offset = "0x46C9350", VA = "0x46C9350")]
	public bool Execute(XmlSchema schema, SchemaInfo schemaInfo, bool compileContentModel)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x46C93B0", Offset = "0x46C93B0", VA = "0x46C93B0")]
	private void Prepare()
	{
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x46C9940", Offset = "0x46C9940", VA = "0x46C9940")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x46CF290", Offset = "0x46CF290", VA = "0x46CF290")]
	internal static void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x46CAC30", Offset = "0x46CAC30", VA = "0x46CAC30")]
	private void Compile()
	{
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x46CD4B0", Offset = "0x46CD4B0", VA = "0x46CD4B0")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x46CF250", Offset = "0x46CF250", VA = "0x46CF250")]
	private static void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x46CECF0", Offset = "0x46CECF0", VA = "0x46CECF0")]
	private static void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x46CED40", Offset = "0x46CED40", VA = "0x46CED40")]
	private static void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x46CF090", Offset = "0x46CF090", VA = "0x46CF090")]
	private static void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x46CF0B0", Offset = "0x46CF0B0", VA = "0x46CF0B0")]
	private static void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x46D5B20", Offset = "0x46D5B20", VA = "0x46D5B20")]
	private static void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x46CECC0", Offset = "0x46CECC0", VA = "0x46CECC0")]
	private static void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x46D5C20", Offset = "0x46D5C20", VA = "0x46D5C20")]
	private static void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x46CFAB0", Offset = "0x46CFAB0", VA = "0x46CFAB0")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroupV1Compat substitutionGroup)
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x46D5910", Offset = "0x46D5910", VA = "0x46D5910")]
	private void CheckSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x46CFF90", Offset = "0x46CFF90", VA = "0x46CFF90")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x46D1A80", Offset = "0x46D1A80", VA = "0x46D1A80")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x46D60F0", Offset = "0x46D60F0", VA = "0x46D60F0")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x46D6640", Offset = "0x46D6640", VA = "0x46D6640")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x46D0970", Offset = "0x46D0970", VA = "0x46D0970")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x46D6750", Offset = "0x46D6750", VA = "0x46D6750")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x46D69C0", Offset = "0x46D69C0", VA = "0x46D69C0")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x46D6E90", Offset = "0x46D6E90", VA = "0x46D6E90")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x46D7380", Offset = "0x46D7380", VA = "0x46D7380")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x46D57B0", Offset = "0x46D57B0", VA = "0x46D57B0")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x46D9380", Offset = "0x46D9380", VA = "0x46D9380")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x46D5D80", Offset = "0x46D5D80", VA = "0x46D5D80")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x46DA970", Offset = "0x46DA970", VA = "0x46DA970")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x46DAAD0", Offset = "0x46DAAD0", VA = "0x46DAAD0")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x46DB140", Offset = "0x46DB140", VA = "0x46DB140")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x46DB660", Offset = "0x46DB660", VA = "0x46DB660")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x46DBC70", Offset = "0x46DBC70", VA = "0x46DBC70")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x46DA340", Offset = "0x46DA340", VA = "0x46DA340")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x46DC280", Offset = "0x46DC280", VA = "0x46DC280")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x46DC3A0", Offset = "0x46DC3A0", VA = "0x46DC3A0")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x46DC3F0", Offset = "0x46DC3F0", VA = "0x46DC3F0")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x46DC440", Offset = "0x46DC440", VA = "0x46DC440")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x46DC6D0", Offset = "0x46DC6D0", VA = "0x46DC6D0")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x46DCAC0", Offset = "0x46DCAC0", VA = "0x46DCAC0")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x46DCE20", Offset = "0x46DCE20", VA = "0x46DCE20")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x46DD2C0", Offset = "0x46DD2C0", VA = "0x46DD2C0")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x46DE240", Offset = "0x46DE240", VA = "0x46DE240")]
	private void CalculateSequenceRange(XmlSchemaSequence sequence, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x46DD560", Offset = "0x46DD560", VA = "0x46DD560")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x46DE080", Offset = "0x46DE080", VA = "0x46DE080")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x46DE150", Offset = "0x46DE150", VA = "0x46DE150")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x46DC1E0", Offset = "0x46DC1E0", VA = "0x46DC1E0")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x46DD650", Offset = "0x46DD650", VA = "0x46DD650")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x46DE6D0", Offset = "0x46DE6D0", VA = "0x46DE6D0")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x46D9500", Offset = "0x46D9500", VA = "0x46D9500")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x46D0070", Offset = "0x46D0070", VA = "0x46D0070")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x46D76C0", Offset = "0x46D76C0", VA = "0x46D76C0")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x46DE780", Offset = "0x46DE780", VA = "0x46DE780")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x46DE700", Offset = "0x46DE700", VA = "0x46DE700")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x46D3E20", Offset = "0x46D3E20", VA = "0x46D3E20")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x46D4E80", Offset = "0x46D4E80", VA = "0x46D4E80")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x46D27E0", Offset = "0x46D27E0", VA = "0x46D27E0")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x46D9570", Offset = "0x46D9570", VA = "0x46D9570")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x46DE800", Offset = "0x46DE800", VA = "0x46DE800")]
	private void BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x46DEE20", Offset = "0x46DEE20", VA = "0x46DEE20")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x46D56F0", Offset = "0x46D56F0", VA = "0x46D56F0")]
	private void CompileCompexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x46D5FA0", Offset = "0x46D5FA0", VA = "0x46D5FA0")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x46DA2A0", Offset = "0x46DA2A0", VA = "0x46DA2A0")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x46DA150", Offset = "0x46DA150", VA = "0x46DA150")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}
}
