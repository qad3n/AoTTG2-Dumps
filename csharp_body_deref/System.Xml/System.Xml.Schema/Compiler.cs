using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F6")]
internal sealed class Compiler : BaseProcessor
{
	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x40")]
	private string restrictionErrorMsg;

	[Token(Token = "0x4000A52")]
	[FieldOffset(Offset = "0x48")]
	private XmlSchemaObjectTable attributes;

	[Token(Token = "0x4000A53")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObjectTable attributeGroups;

	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaObjectTable elements;

	[Token(Token = "0x4000A55")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaObjectTable schemaTypes;

	[Token(Token = "0x4000A56")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchemaObjectTable groups;

	[Token(Token = "0x4000A57")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaObjectTable notations;

	[Token(Token = "0x4000A58")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaObjectTable examplars;

	[Token(Token = "0x4000A59")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaObjectTable identityConstraints;

	[Token(Token = "0x4000A5A")]
	[FieldOffset(Offset = "0x88")]
	private Stack complexTypeStack;

	[Token(Token = "0x4000A5B")]
	[FieldOffset(Offset = "0x90")]
	private Hashtable schemasToCompile;

	[Token(Token = "0x4000A5C")]
	[FieldOffset(Offset = "0x98")]
	private Hashtable importedSchemas;

	[Token(Token = "0x4000A5D")]
	[FieldOffset(Offset = "0xA0")]
	private XmlSchema schemaForSchema;

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x43B4B50", Offset = "0x43B4B50", VA = "0x43B4B50")]
	public Compiler(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchema schemaForSchema, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x43B4DB0", Offset = "0x43B4DB0", VA = "0x43B4DB0")]
	public bool Execute(XmlSchemaSet schemaSet, SchemaInfo schemaCompiledInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x43B90F0", Offset = "0x43B90F0", VA = "0x43B90F0")]
	internal void Prepare(XmlSchema schema, bool cleanup)
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x43BBB70", Offset = "0x43BBB70", VA = "0x43BBB70")]
	private void UpdateSForSSimpleTypes()
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x43B7670", Offset = "0x43B7670", VA = "0x43B7670")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x43BBD30", Offset = "0x43BBD30", VA = "0x43BBD30")]
	internal void ImportAllCompiledSchemas(XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x43B4E60", Offset = "0x43B4E60", VA = "0x43B4E60")]
	internal bool Compile()
	{
		return default(bool);
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x43BB510", Offset = "0x43BB510", VA = "0x43BB510")]
	private void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x43BB5A0", Offset = "0x43BB5A0", VA = "0x43BB5A0")]
	private void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x43BB610", Offset = "0x43BB610", VA = "0x43BB610")]
	private void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x43BBAC0", Offset = "0x43BBAC0", VA = "0x43BBAC0")]
	private void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x43BB360", Offset = "0x43BB360", VA = "0x43BB360")]
	private void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x43C2780", Offset = "0x43C2780", VA = "0x43C2780")]
	private void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x43BB550", Offset = "0x43BB550", VA = "0x43BB550")]
	private void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x43C2870", Offset = "0x43C2870", VA = "0x43C2870")]
	private void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x43C13A0", Offset = "0x43C13A0", VA = "0x43C13A0")]
	private void ProcessSubstitutionGroups()
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x43C2A20", Offset = "0x43C2A20", VA = "0x43C2A20")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x43C2610", Offset = "0x43C2610", VA = "0x43C2610")]
	private void RecursivelyCheckRedefinedGroups(XmlSchemaGroup redefinedGroup, XmlSchemaGroup baseGroup)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x43C2710", Offset = "0x43C2710", VA = "0x43C2710")]
	private void RecursivelyCheckRedefinedAttributeGroups(XmlSchemaAttributeGroup attributeGroup, XmlSchemaAttributeGroup baseAttributeGroup)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x43BBE30", Offset = "0x43BBE30", VA = "0x43BBE30")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x43BD5F0", Offset = "0x43BD5F0", VA = "0x43BD5F0")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x43C4210", Offset = "0x43C4210", VA = "0x43C4210")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x43C4760", Offset = "0x43C4760", VA = "0x43C4760")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x43BC940", Offset = "0x43BC940", VA = "0x43BC940")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x43C4870", Offset = "0x43C4870", VA = "0x43C4870")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x43C4AE0", Offset = "0x43C4AE0", VA = "0x43C4AE0")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x43C5030", Offset = "0x43C5030", VA = "0x43C5030")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x43C5500", Offset = "0x43C5500", VA = "0x43C5500")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x43C1ED0", Offset = "0x43C1ED0", VA = "0x43C1ED0")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x43C3440", Offset = "0x43C3440", VA = "0x43C3440")]
	private void CheckParticleDerivation(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x43C75E0", Offset = "0x43C75E0", VA = "0x43C75E0")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x43C3100", Offset = "0x43C3100", VA = "0x43C3100")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x43CA990", Offset = "0x43CA990", VA = "0x43CA990")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element)
	{
		return null;
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x43C9430", Offset = "0x43C9430", VA = "0x43C9430")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x43C9A90", Offset = "0x43C9A90", VA = "0x43C9A90")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x43C9DA0", Offset = "0x43C9DA0", VA = "0x43C9DA0")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x43CA3B0", Offset = "0x43CA3B0", VA = "0x43CA3B0")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x43C8580", Offset = "0x43C8580", VA = "0x43C8580")]
	private XmlSchemaParticle CannonicalizePointlessRoot(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x43C88B0", Offset = "0x43C88B0", VA = "0x43C88B0")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x43CAD10", Offset = "0x43CAD10", VA = "0x43CAD10")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x43CAF60", Offset = "0x43CAF60", VA = "0x43CAF60")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x43CB130", Offset = "0x43CB130", VA = "0x43CB130")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x43CB210", Offset = "0x43CB210", VA = "0x43CB210")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x43CB6C0", Offset = "0x43CB6C0", VA = "0x43CB6C0")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase)
	{
		return default(bool);
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x43CC8B0", Offset = "0x43CC8B0", VA = "0x43CC8B0")]
	private bool IsChoiceFromChoiceSubstGroup(XmlSchemaChoice derivedChoice, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x43CC030", Offset = "0x43CC030", VA = "0x43CC030")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600141E")]
	[Address(RVA = "0x43CC410", Offset = "0x43CC410", VA = "0x43CC410")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x43CCA40", Offset = "0x43CCA40", VA = "0x43CCA40")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x43CCE50", Offset = "0x43CCE50", VA = "0x43CCE50")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x43CDA60", Offset = "0x43CDA60", VA = "0x43CDA60")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x43CDB30", Offset = "0x43CDB30", VA = "0x43CDB30")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x43CAC70", Offset = "0x43CAC70", VA = "0x43CAC70")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x43CD0C0", Offset = "0x43CD0C0", VA = "0x43CD0C0")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x43CDC20", Offset = "0x43CDC20", VA = "0x43CDC20")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x43C7760", Offset = "0x43C7760", VA = "0x43C7760")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x43BBF10", Offset = "0x43BBF10", VA = "0x43BBF10")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x43C58B0", Offset = "0x43C58B0", VA = "0x43C58B0")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x43C3500", Offset = "0x43C3500", VA = "0x43C3500")]
	private void CheckAtrributeGroupRestriction(XmlSchemaAttributeGroup baseAttributeGroup, XmlSchemaAttributeGroup derivedAttributeGroup)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x43CDD50", Offset = "0x43CDD50", VA = "0x43CDD50")]
	private bool IsProcessContentsRestricted(XmlSchemaComplexType baseType, XmlSchemaAnyAttribute derivedAttributeWildcard, XmlSchemaAnyAttribute baseAttributeWildcard)
	{
		return default(bool);
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x43CDCD0", Offset = "0x43CDCD0", VA = "0x43CDCD0")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x43CDC50", Offset = "0x43CDC50", VA = "0x43CDC50")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x43BFCD0", Offset = "0x43BFCD0", VA = "0x43BFCD0")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x43CDE70", Offset = "0x43CDE70", VA = "0x43CDE70")]
	private void SetDefaultFixed(XmlSchemaAttribute xa, SchemaAttDef decl)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x43C0A20", Offset = "0x43C0A20", VA = "0x43C0A20")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x43BE3B0", Offset = "0x43BE3B0", VA = "0x43BE3B0")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x43C77D0", Offset = "0x43C77D0", VA = "0x43C77D0")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x43CE050", Offset = "0x43CE050", VA = "0x43CE050")]
	private bool BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x43CE670", Offset = "0x43CE670", VA = "0x43CE670")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x43C32D0", Offset = "0x43C32D0", VA = "0x43C32D0")]
	private void CompileParticleElements(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x43C1270", Offset = "0x43C1270", VA = "0x43C1270")]
	private void CompileComplexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x43C4150", Offset = "0x43C4150", VA = "0x43C4150")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x43C84F0", Offset = "0x43C84F0", VA = "0x43C84F0")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x43C83C0", Offset = "0x43C83C0", VA = "0x43C83C0")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x43CABF0", Offset = "0x43CABF0", VA = "0x43CABF0")]
	private void CopyPosition(XmlSchemaAnnotated to, XmlSchemaAnnotated from, bool copyParent)
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x43CCF40", Offset = "0x43CCF40", VA = "0x43CCF40")]
	private bool IsFixedEqual(SchemaDeclBase baseDecl, SchemaDeclBase derivedDecl)
	{
		return default(bool);
	}
}
