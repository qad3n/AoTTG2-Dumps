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
	[Address(RVA = "0x438BB30", Offset = "0x438BB30", VA = "0x438BB30")]
	public SchemaCollectionCompiler(XmlNameTable nameTable, ValidationEventHandler eventHandler)
	{
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x438BBF0", Offset = "0x438BBF0", VA = "0x438BBF0")]
	public bool Execute(XmlSchema schema, SchemaInfo schemaInfo, bool compileContentModel)
	{
		return default(bool);
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x438BC50", Offset = "0x438BC50", VA = "0x438BC50")]
	private void Prepare()
	{
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x438C1E0", Offset = "0x438C1E0", VA = "0x438C1E0")]
	private void Cleanup()
	{
	}

	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x4391B30", Offset = "0x4391B30", VA = "0x4391B30")]
	internal static void Cleanup(XmlSchema schema)
	{
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x438D4D0", Offset = "0x438D4D0", VA = "0x438D4D0")]
	private void Compile()
	{
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x438FD50", Offset = "0x438FD50", VA = "0x438FD50")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x4391AF0", Offset = "0x4391AF0", VA = "0x4391AF0")]
	private static void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x4391590", Offset = "0x4391590", VA = "0x4391590")]
	private static void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x43915E0", Offset = "0x43915E0", VA = "0x43915E0")]
	private static void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x4391930", Offset = "0x4391930", VA = "0x4391930")]
	private static void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x4391950", Offset = "0x4391950", VA = "0x4391950")]
	private static void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x43983C0", Offset = "0x43983C0", VA = "0x43983C0")]
	private static void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x4391560", Offset = "0x4391560", VA = "0x4391560")]
	private static void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x43984C0", Offset = "0x43984C0", VA = "0x43984C0")]
	private static void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x4392350", Offset = "0x4392350", VA = "0x4392350")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroupV1Compat substitutionGroup)
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x43981B0", Offset = "0x43981B0", VA = "0x43981B0")]
	private void CheckSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x4392830", Offset = "0x4392830", VA = "0x4392830")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x4394320", Offset = "0x4394320", VA = "0x4394320")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x4398990", Offset = "0x4398990", VA = "0x4398990")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x4398EE0", Offset = "0x4398EE0", VA = "0x4398EE0")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x4393210", Offset = "0x4393210", VA = "0x4393210")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x4398FF0", Offset = "0x4398FF0", VA = "0x4398FF0")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x4399260", Offset = "0x4399260", VA = "0x4399260")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x4399730", Offset = "0x4399730", VA = "0x4399730")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x4399C20", Offset = "0x4399C20", VA = "0x4399C20")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x4398050", Offset = "0x4398050", VA = "0x4398050")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x439BC20", Offset = "0x439BC20", VA = "0x439BC20")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x4398620", Offset = "0x4398620", VA = "0x4398620")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x439D210", Offset = "0x439D210", VA = "0x439D210")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x439D370", Offset = "0x439D370", VA = "0x439D370")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x439D9E0", Offset = "0x439D9E0", VA = "0x439D9E0")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x439DF00", Offset = "0x439DF00", VA = "0x439DF00")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x439E510", Offset = "0x439E510", VA = "0x439E510")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root, bool substitution)
	{
		return null;
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x439CBE0", Offset = "0x439CBE0", VA = "0x439CBE0")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x439EB20", Offset = "0x439EB20", VA = "0x439EB20")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x439EC40", Offset = "0x439EC40", VA = "0x439EC40")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x439EC90", Offset = "0x439EC90", VA = "0x439EC90")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x439ECE0", Offset = "0x439ECE0", VA = "0x439ECE0")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x439EF70", Offset = "0x439EF70", VA = "0x439EF70")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x439F360", Offset = "0x439F360", VA = "0x439F360")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x439F6C0", Offset = "0x439F6C0", VA = "0x439F6C0")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x439FB60", Offset = "0x439FB60", VA = "0x439FB60")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x43A0AE0", Offset = "0x43A0AE0", VA = "0x43A0AE0")]
	private void CalculateSequenceRange(XmlSchemaSequence sequence, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x439FE00", Offset = "0x439FE00", VA = "0x439FE00")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x43A0920", Offset = "0x43A0920", VA = "0x43A0920")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x43A09F0", Offset = "0x43A09F0", VA = "0x43A09F0")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x439EA80", Offset = "0x439EA80", VA = "0x439EA80")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x439FEF0", Offset = "0x439FEF0", VA = "0x439FEF0")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x43A0F70", Offset = "0x43A0F70", VA = "0x43A0F70")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x439BDA0", Offset = "0x439BDA0", VA = "0x439BDA0")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x4392910", Offset = "0x4392910", VA = "0x4392910")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x4399F60", Offset = "0x4399F60", VA = "0x4399F60")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x43A1020", Offset = "0x43A1020", VA = "0x43A1020")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x43A0FA0", Offset = "0x43A0FA0", VA = "0x43A0FA0")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x43966C0", Offset = "0x43966C0", VA = "0x43966C0")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x4397720", Offset = "0x4397720", VA = "0x4397720")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x4395080", Offset = "0x4395080", VA = "0x4395080")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x439BE10", Offset = "0x439BE10", VA = "0x439BE10")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x43A10A0", Offset = "0x43A10A0", VA = "0x43A10A0")]
	private void BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x43A16C0", Offset = "0x43A16C0", VA = "0x43A16C0")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x4397F90", Offset = "0x4397F90", VA = "0x4397F90")]
	private void CompileCompexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x4398840", Offset = "0x4398840", VA = "0x4398840")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x439CB40", Offset = "0x439CB40", VA = "0x439CB40")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x439C9F0", Offset = "0x439C9F0", VA = "0x439C9F0")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}
}
