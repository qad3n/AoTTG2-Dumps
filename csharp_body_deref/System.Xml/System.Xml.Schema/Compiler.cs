// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Compiler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x46F22B0", Offset = "0x46F22B0", VA = "0x46F22B0")]
	public Compiler(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchema schemaForSchema, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x46F2510", Offset = "0x46F2510", VA = "0x46F2510")]
	public bool Execute(XmlSchemaSet schemaSet, SchemaInfo schemaCompiledInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x46F6850", Offset = "0x46F6850", VA = "0x46F6850")]
	internal void Prepare(XmlSchema schema, bool cleanup)
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x46F92D0", Offset = "0x46F92D0", VA = "0x46F92D0")]
	private void UpdateSForSSimpleTypes()
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x46F4DD0", Offset = "0x46F4DD0", VA = "0x46F4DD0")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x46F9490", Offset = "0x46F9490", VA = "0x46F9490")]
	internal void ImportAllCompiledSchemas(XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x46F25C0", Offset = "0x46F25C0", VA = "0x46F25C0")]
	internal bool Compile()
	{
		return default(bool);
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x46F8C70", Offset = "0x46F8C70", VA = "0x46F8C70")]
	private void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x46F8D00", Offset = "0x46F8D00", VA = "0x46F8D00")]
	private void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x46F8D70", Offset = "0x46F8D70", VA = "0x46F8D70")]
	private void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x46F9220", Offset = "0x46F9220", VA = "0x46F9220")]
	private void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x46F8AC0", Offset = "0x46F8AC0", VA = "0x46F8AC0")]
	private void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x46FFEE0", Offset = "0x46FFEE0", VA = "0x46FFEE0")]
	private void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x46F8CB0", Offset = "0x46F8CB0", VA = "0x46F8CB0")]
	private void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x46FFFD0", Offset = "0x46FFFD0", VA = "0x46FFFD0")]
	private void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x46FEB00", Offset = "0x46FEB00", VA = "0x46FEB00")]
	private void ProcessSubstitutionGroups()
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x4700180", Offset = "0x4700180", VA = "0x4700180")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x46FFD70", Offset = "0x46FFD70", VA = "0x46FFD70")]
	private void RecursivelyCheckRedefinedGroups(XmlSchemaGroup redefinedGroup, XmlSchemaGroup baseGroup)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x46FFE70", Offset = "0x46FFE70", VA = "0x46FFE70")]
	private void RecursivelyCheckRedefinedAttributeGroups(XmlSchemaAttributeGroup attributeGroup, XmlSchemaAttributeGroup baseAttributeGroup)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x46F9590", Offset = "0x46F9590", VA = "0x46F9590")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x46FAD50", Offset = "0x46FAD50", VA = "0x46FAD50")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x4701970", Offset = "0x4701970", VA = "0x4701970")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x4701EC0", Offset = "0x4701EC0", VA = "0x4701EC0")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x46FA0A0", Offset = "0x46FA0A0", VA = "0x46FA0A0")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x4701FD0", Offset = "0x4701FD0", VA = "0x4701FD0")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x4702240", Offset = "0x4702240", VA = "0x4702240")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x4702790", Offset = "0x4702790", VA = "0x4702790")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x4702C60", Offset = "0x4702C60", VA = "0x4702C60")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x46FF630", Offset = "0x46FF630", VA = "0x46FF630")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x4700BA0", Offset = "0x4700BA0", VA = "0x4700BA0")]
	private void CheckParticleDerivation(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x4704D40", Offset = "0x4704D40", VA = "0x4704D40")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x4700860", Offset = "0x4700860", VA = "0x4700860")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x47080F0", Offset = "0x47080F0", VA = "0x47080F0")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element)
	{
		return null;
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x4706B90", Offset = "0x4706B90", VA = "0x4706B90")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x47071F0", Offset = "0x47071F0", VA = "0x47071F0")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x4707500", Offset = "0x4707500", VA = "0x4707500")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x4707B10", Offset = "0x4707B10", VA = "0x4707B10")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x4705CE0", Offset = "0x4705CE0", VA = "0x4705CE0")]
	private XmlSchemaParticle CannonicalizePointlessRoot(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x4706010", Offset = "0x4706010", VA = "0x4706010")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x4708470", Offset = "0x4708470", VA = "0x4708470")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x47086C0", Offset = "0x47086C0", VA = "0x47086C0")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x4708890", Offset = "0x4708890", VA = "0x4708890")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x4708970", Offset = "0x4708970", VA = "0x4708970")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x4708E20", Offset = "0x4708E20", VA = "0x4708E20")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase)
	{
		return default(bool);
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x470A010", Offset = "0x470A010", VA = "0x470A010")]
	private bool IsChoiceFromChoiceSubstGroup(XmlSchemaChoice derivedChoice, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x4709790", Offset = "0x4709790", VA = "0x4709790")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600141E")]
	[Address(RVA = "0x4709B70", Offset = "0x4709B70", VA = "0x4709B70")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x470A1A0", Offset = "0x470A1A0", VA = "0x470A1A0")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x470A5B0", Offset = "0x470A5B0", VA = "0x470A5B0")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x470B1C0", Offset = "0x470B1C0", VA = "0x470B1C0")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x470B290", Offset = "0x470B290", VA = "0x470B290")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x47083D0", Offset = "0x47083D0", VA = "0x47083D0")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x470A820", Offset = "0x470A820", VA = "0x470A820")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x470B380", Offset = "0x470B380", VA = "0x470B380")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x4704EC0", Offset = "0x4704EC0", VA = "0x4704EC0")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x46F9670", Offset = "0x46F9670", VA = "0x46F9670")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x4703010", Offset = "0x4703010", VA = "0x4703010")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x4700C60", Offset = "0x4700C60", VA = "0x4700C60")]
	private void CheckAtrributeGroupRestriction(XmlSchemaAttributeGroup baseAttributeGroup, XmlSchemaAttributeGroup derivedAttributeGroup)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x470B4B0", Offset = "0x470B4B0", VA = "0x470B4B0")]
	private bool IsProcessContentsRestricted(XmlSchemaComplexType baseType, XmlSchemaAnyAttribute derivedAttributeWildcard, XmlSchemaAnyAttribute baseAttributeWildcard)
	{
		return default(bool);
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x470B430", Offset = "0x470B430", VA = "0x470B430")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x470B3B0", Offset = "0x470B3B0", VA = "0x470B3B0")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x46FD430", Offset = "0x46FD430", VA = "0x46FD430")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x470B5D0", Offset = "0x470B5D0", VA = "0x470B5D0")]
	private void SetDefaultFixed(XmlSchemaAttribute xa, SchemaAttDef decl)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x46FE180", Offset = "0x46FE180", VA = "0x46FE180")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x46FBB10", Offset = "0x46FBB10", VA = "0x46FBB10")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x4704F30", Offset = "0x4704F30", VA = "0x4704F30")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x470B7B0", Offset = "0x470B7B0", VA = "0x470B7B0")]
	private bool BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x470BDD0", Offset = "0x470BDD0", VA = "0x470BDD0")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x4700A30", Offset = "0x4700A30", VA = "0x4700A30")]
	private void CompileParticleElements(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x46FE9D0", Offset = "0x46FE9D0", VA = "0x46FE9D0")]
	private void CompileComplexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x47018B0", Offset = "0x47018B0", VA = "0x47018B0")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x4705C50", Offset = "0x4705C50", VA = "0x4705C50")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x4705B20", Offset = "0x4705B20", VA = "0x4705B20")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x4708350", Offset = "0x4708350", VA = "0x4708350")]
	private void CopyPosition(XmlSchemaAnnotated to, XmlSchemaAnnotated from, bool copyParent)
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x470A6A0", Offset = "0x470A6A0", VA = "0x470A6A0")]
	private bool IsFixedEqual(SchemaDeclBase baseDecl, SchemaDeclBase derivedDecl)
	{
		return default(bool);
	}
}
