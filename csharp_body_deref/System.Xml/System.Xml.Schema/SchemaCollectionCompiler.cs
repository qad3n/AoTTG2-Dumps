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
	[Address(RVA = "0x5FD8DC0", Offset = "0x5FD7DC0", VA = "0x5FD8DC0")]
	public SchemaCollectionCompiler(XmlNameTable nameTable, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x5FD8E80", Offset = "0x5FD7E80", VA = "0x5FD8E80")]
	public bool Execute(XmlSchema schema, SchemaInfo schemaInfo, bool compileContentModel)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x5FD8EE0", Offset = "0x5FD7EE0", VA = "0x5FD8EE0")]
	private void Prepare()
	{
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x5FD93A0", Offset = "0x5FD83A0", VA = "0x5FD93A0")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x5FDDDF0", Offset = "0x5FDCDF0", VA = "0x5FDDDF0")]
	internal static void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x5FDA450", Offset = "0x5FD9450", VA = "0x5FDA450")]
	private void Compile()
	{
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x5FDC700", Offset = "0x5FDB700", VA = "0x5FDC700")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x5FDDDB0", Offset = "0x5FDCDB0", VA = "0x5FDDDB0")]
	private static void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x5FDD830", Offset = "0x5FDC830", VA = "0x5FDD830")]
	private static void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x5FDD880", Offset = "0x5FDC880", VA = "0x5FDD880")]
	private static void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x5FDDBF0", Offset = "0x5FDCBF0", VA = "0x5FDDBF0")]
	private static void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x5FDDC10", Offset = "0x5FDCC10", VA = "0x5FDDC10")]
	private static void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x5FE30D0", Offset = "0x5FE20D0", VA = "0x5FE30D0")]
	private static void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x5FDD800", Offset = "0x5FDC800", VA = "0x5FDD800")]
	private static void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x5FE31C0", Offset = "0x5FE21C0", VA = "0x5FE31C0")]
	private static void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x5FDE670", Offset = "0x5FDD670", VA = "0x5FDE670")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroupV1Compat substitutionGroup)
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x5FE2EC0", Offset = "0x5FE1EC0", VA = "0x5FE2EC0")]
	private void CheckSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x5FDEB60", Offset = "0x5FDDB60", VA = "0x5FDEB60")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x5FE02E0", Offset = "0x5FDF2E0", VA = "0x5FE02E0")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x5FE3690", Offset = "0x5FE2690", VA = "0x5FE3690")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x5FE3BD0", Offset = "0x5FE2BD0", VA = "0x5FE3BD0")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x5FDF4D0", Offset = "0x5FDE4D0", VA = "0x5FDF4D0")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x5FE3CE0", Offset = "0x5FE2CE0", VA = "0x5FE3CE0")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x5FE3F70", Offset = "0x5FE2F70", VA = "0x5FE3F70")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x5FE43D0", Offset = "0x5FE33D0", VA = "0x5FE43D0")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x5FE48F0", Offset = "0x5FE38F0", VA = "0x5FE48F0")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x5FE2D80", Offset = "0x5FE1D80", VA = "0x5FE2D80")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x5FE6420", Offset = "0x5FE5420", VA = "0x5FE6420")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x5FE3310", Offset = "0x5FE2310", VA = "0x5FE3310")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x5FE77A0", Offset = "0x5FE67A0", VA = "0x5FE77A0")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x5FE7900", Offset = "0x5FE6900", VA = "0x5FE7900")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x5FE7F50", Offset = "0x5FE6F50", VA = "0x5FE7F50")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x5FE8470", Offset = "0x5FE7470", VA = "0x5FE8470")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x5FE8A30", Offset = "0x5FE7A30", VA = "0x5FE8A30")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x5FE71D0", Offset = "0x5FE61D0", VA = "0x5FE71D0")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x5FE9020", Offset = "0x5FE8020", VA = "0x5FE9020")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x5FE9140", Offset = "0x5FE8140", VA = "0x5FE9140")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x5FE9190", Offset = "0x5FE8190", VA = "0x5FE9190")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x5FE91E0", Offset = "0x5FE81E0", VA = "0x5FE91E0")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x5FE9470", Offset = "0x5FE8470", VA = "0x5FE9470")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x5FE9870", Offset = "0x5FE8870", VA = "0x5FE9870")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x5FE9BD0", Offset = "0x5FE8BD0", VA = "0x5FE9BD0")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x5FEA070", Offset = "0x5FE9070", VA = "0x5FEA070")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x5FEAFE0", Offset = "0x5FE9FE0", VA = "0x5FEAFE0")]
	private void CalculateSequenceRange(XmlSchemaSequence sequence, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x5FEA320", Offset = "0x5FE9320", VA = "0x5FEA320")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x5FEAE20", Offset = "0x5FE9E20", VA = "0x5FEAE20")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x5FEAEF0", Offset = "0x5FE9EF0", VA = "0x5FEAEF0")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x5FE8F80", Offset = "0x5FE7F80", VA = "0x5FE8F80")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x5FEA410", Offset = "0x5FE9410", VA = "0x5FEA410")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x5FEB470", Offset = "0x5FEA470", VA = "0x5FEB470")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x5FE6590", Offset = "0x5FE5590", VA = "0x5FE6590")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x5FDEC40", Offset = "0x5FDDC40", VA = "0x5FDEC40")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x5FE4C50", Offset = "0x5FE3C50", VA = "0x5FE4C50")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x5FEB520", Offset = "0x5FEA520", VA = "0x5FEB520")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x5FEB4A0", Offset = "0x5FEA4A0", VA = "0x5FEB4A0")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x5FE1AF0", Offset = "0x5FE0AF0", VA = "0x5FE1AF0")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x5FE26B0", Offset = "0x5FE16B0", VA = "0x5FE26B0")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x5FE0C60", Offset = "0x5FDFC60", VA = "0x5FE0C60")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x5FE6600", Offset = "0x5FE5600", VA = "0x5FE6600")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x5FEB5A0", Offset = "0x5FEA5A0", VA = "0x5FEB5A0")]
	private void BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x5FEBBB0", Offset = "0x5FEABB0", VA = "0x5FEBBB0")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x5FE2CC0", Offset = "0x5FE1CC0", VA = "0x5FE2CC0")]
	private void CompileCompexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x5FE3540", Offset = "0x5FE2540", VA = "0x5FE3540")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x5FE7130", Offset = "0x5FE6130", VA = "0x5FE7130")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x5FE6FE0", Offset = "0x5FE5FE0", VA = "0x5FE6FE0")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}
}
