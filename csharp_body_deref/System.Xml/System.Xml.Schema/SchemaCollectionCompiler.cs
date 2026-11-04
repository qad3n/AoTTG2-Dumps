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
	[Address(RVA = "0x262ECF0", Offset = "0x262D2F0", VA = "0x18262ECF0")]
	public SchemaCollectionCompiler(XmlNameTable nameTable, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x262B780", Offset = "0x2629D80", VA = "0x18262B780")]
	public bool Execute(XmlSchema schema, SchemaInfo schemaInfo, bool compileContentModel)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x262E960", Offset = "0x262CF60", VA = "0x18262E960")]
	private void Prepare()
	{
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x2620C00", Offset = "0x261F200", VA = "0x182620C00")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x2621880", Offset = "0x261FE80", VA = "0x182621880")]
	internal static void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x2629C50", Offset = "0x2628250", VA = "0x182629C50")]
	private void Compile()
	{
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x262DCE0", Offset = "0x262C2E0", VA = "0x18262DCE0")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x2620230", Offset = "0x261E830", VA = "0x182620230")]
	private static void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x26201D0", Offset = "0x261E7D0", VA = "0x1826201D0")]
	private static void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x2620370", Offset = "0x261E970", VA = "0x182620370")]
	private static void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x2620BE0", Offset = "0x261F1E0", VA = "0x182620BE0")]
	private static void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x26207F0", Offset = "0x261EDF0", VA = "0x1826207F0")]
	private static void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x2620280", Offset = "0x261E880", VA = "0x182620280")]
	private static void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x26209C0", Offset = "0x261EFC0", VA = "0x1826209C0")]
	private static void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x2620A00", Offset = "0x261F000", VA = "0x182620A00")]
	private static void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x2629730", Offset = "0x2627D30", VA = "0x182629730")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroupV1Compat substitutionGroup)
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x261FE80", Offset = "0x261E480", VA = "0x18261FE80")]
	private void CheckSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x2626C00", Offset = "0x2625200", VA = "0x182626C00")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x2628D60", Offset = "0x2627360", VA = "0x182628D60")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x2623420", Offset = "0x2621A20", VA = "0x182623420")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x26200B0", Offset = "0x261E6B0", VA = "0x1826200B0")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x2624E90", Offset = "0x2623490", VA = "0x182624E90")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x2628680", Offset = "0x2626C80", VA = "0x182628680")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x2628930", Offset = "0x2626F30", VA = "0x182628930")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x26238D0", Offset = "0x2621ED0", VA = "0x1826238D0")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x2623DB0", Offset = "0x26223B0", VA = "0x182623DB0")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x261FD40", Offset = "0x261E340", VA = "0x18261FD40")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x2625AD0", Offset = "0x26240D0", VA = "0x182625AD0")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x261F2B0", Offset = "0x261D8B0", VA = "0x18261F2B0")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x261EA90", Offset = "0x261D090", VA = "0x18261EA90")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x261EC30", Offset = "0x261D230", VA = "0x18261EC30")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x261DEB0", Offset = "0x261C4B0", VA = "0x18261DEB0")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x261E440", Offset = "0x261CA40", VA = "0x18261E440")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x261F770", Offset = "0x261DD70", VA = "0x18261F770")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x262D0F0", Offset = "0x262B6F0", VA = "0x18262D0F0")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x262BE20", Offset = "0x262A420", VA = "0x18262BE20")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x262BDB0", Offset = "0x262A3B0", VA = "0x18262BDB0")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x262BD50", Offset = "0x262A350", VA = "0x18262BD50")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x262C2F0", Offset = "0x262A8F0", VA = "0x18262C2F0")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x262BF70", Offset = "0x262A570", VA = "0x18262BF70")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x262C5B0", Offset = "0x262ABB0", VA = "0x18262C5B0")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x262C920", Offset = "0x262AF20", VA = "0x18262C920")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x262CC50", Offset = "0x262B250", VA = "0x18262CC50")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x261DA80", Offset = "0x261C080", VA = "0x18261DA80")]
	private void CalculateSequenceRange(XmlSchemaSequence sequence, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x262CFE0", Offset = "0x262B5E0", VA = "0x18262CFE0")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x262CF10", Offset = "0x262B510", VA = "0x18262CF10")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x262BA90", Offset = "0x262A090", VA = "0x18262BA90")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x262C860", Offset = "0x262AE60", VA = "0x18262C860")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x261D100", Offset = "0x261B700", VA = "0x18261D100")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x262ECC0", Offset = "0x262D2C0", VA = "0x18262ECC0")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x262BB70", Offset = "0x262A170", VA = "0x18262BB70")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x2622170", Offset = "0x2620770", VA = "0x182622170")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x2627390", Offset = "0x2625990", VA = "0x182627390")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x26220D0", Offset = "0x26206D0", VA = "0x1826220D0")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x2622030", Offset = "0x2620630", VA = "0x182622030")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x26227F0", Offset = "0x2620DF0", VA = "0x1826227F0")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x2626CF0", Offset = "0x26252F0", VA = "0x182626CF0")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x2625C80", Offset = "0x2624280", VA = "0x182625C80")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x2624120", Offset = "0x2622720", VA = "0x182624120")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x261CA70", Offset = "0x261B070", VA = "0x18261CA70")]
	private void BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x2628380", Offset = "0x2626980", VA = "0x182628380")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x2623800", Offset = "0x2621E00", VA = "0x182623800")]
	private void CompileCompexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x262BBF0", Offset = "0x262A1F0", VA = "0x18262BBF0")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x262B9D0", Offset = "0x2629FD0", VA = "0x18262B9D0")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x262B800", Offset = "0x2629E00", VA = "0x18262B800")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}
}
