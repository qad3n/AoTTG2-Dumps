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
	[Address(RVA = "0x5FFE4B0", Offset = "0x5FFD4B0", VA = "0x5FFE4B0")]
	public Compiler(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchema schemaForSchema, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x5FFE710", Offset = "0x5FFD710", VA = "0x5FFE710")]
	public bool Execute(XmlSchemaSet schemaSet, SchemaInfo schemaCompiledInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x6001DB0", Offset = "0x6000DB0", VA = "0x6001DB0")]
	internal void Prepare(XmlSchema schema, bool cleanup)
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x6004060", Offset = "0x6003060", VA = "0x6004060")]
	private void UpdateSForSSimpleTypes()
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x6000A90", Offset = "0x5FFFA90", VA = "0x6000A90")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x60041E0", Offset = "0x60031E0", VA = "0x60041E0")]
	internal void ImportAllCompiledSchemas(XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x5FFE7C0", Offset = "0x5FFD7C0", VA = "0x5FFE7C0")]
	internal bool Compile()
	{
		return default(bool);
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x6003A20", Offset = "0x6002A20", VA = "0x6003A20")]
	private void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x6003AB0", Offset = "0x6002AB0", VA = "0x6003AB0")]
	private void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x6003B20", Offset = "0x6002B20", VA = "0x6003B20")]
	private void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x6003FC0", Offset = "0x6002FC0", VA = "0x6003FC0")]
	private void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x6003870", Offset = "0x6002870", VA = "0x6003870")]
	private void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x60093F0", Offset = "0x60083F0", VA = "0x60093F0")]
	private void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x6003A60", Offset = "0x6002A60", VA = "0x6003A60")]
	private void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x60094E0", Offset = "0x60084E0", VA = "0x60094E0")]
	private void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x6008280", Offset = "0x6007280", VA = "0x6008280")]
	private void ProcessSubstitutionGroups()
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x6009660", Offset = "0x6008660", VA = "0x6009660")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x6009280", Offset = "0x6008280", VA = "0x6009280")]
	private void RecursivelyCheckRedefinedGroups(XmlSchemaGroup redefinedGroup, XmlSchemaGroup baseGroup)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x6009380", Offset = "0x6008380", VA = "0x6009380")]
	private void RecursivelyCheckRedefinedAttributeGroups(XmlSchemaAttributeGroup attributeGroup, XmlSchemaAttributeGroup baseAttributeGroup)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x60042E0", Offset = "0x60032E0", VA = "0x60042E0")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x60058A0", Offset = "0x60048A0", VA = "0x60058A0")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x600AAF0", Offset = "0x6009AF0", VA = "0x600AAF0")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x600B030", Offset = "0x600A030", VA = "0x600B030")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x6004D40", Offset = "0x6003D40", VA = "0x6004D40")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x600B140", Offset = "0x600A140", VA = "0x600B140")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x600B3D0", Offset = "0x600A3D0", VA = "0x600B3D0")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x600B8A0", Offset = "0x600A8A0", VA = "0x600B8A0")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x600BD50", Offset = "0x600AD50", VA = "0x600BD50")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x6008BC0", Offset = "0x6007BC0", VA = "0x6008BC0")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x6009F10", Offset = "0x6008F10", VA = "0x6009F10")]
	private void CheckParticleDerivation(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x600D990", Offset = "0x600C990", VA = "0x600D990")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x6009BD0", Offset = "0x6008BD0", VA = "0x6009BD0")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x6010910", Offset = "0x600F910", VA = "0x6010910")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element)
	{
		return null;
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x600F410", Offset = "0x600E410", VA = "0x600F410")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x600FA50", Offset = "0x600EA50", VA = "0x600FA50")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x600FD50", Offset = "0x600ED50", VA = "0x600FD50")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x6010350", Offset = "0x600F350", VA = "0x6010350")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x600E720", Offset = "0x600D720", VA = "0x600E720")]
	private XmlSchemaParticle CannonicalizePointlessRoot(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x600E9E0", Offset = "0x600D9E0", VA = "0x600E9E0")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x6010C80", Offset = "0x600FC80", VA = "0x6010C80")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x6010EE0", Offset = "0x600FEE0", VA = "0x6010EE0")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x60110C0", Offset = "0x60100C0", VA = "0x60110C0")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x60111A0", Offset = "0x60101A0", VA = "0x60111A0")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x6011650", Offset = "0x6010650", VA = "0x6011650")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase)
	{
		return default(bool);
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x6012850", Offset = "0x6011850", VA = "0x6012850")]
	private bool IsChoiceFromChoiceSubstGroup(XmlSchemaChoice derivedChoice, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x6011FD0", Offset = "0x6010FD0", VA = "0x6011FD0")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600141E")]
	[Address(RVA = "0x60123B0", Offset = "0x60113B0", VA = "0x60123B0")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x6012A40", Offset = "0x6011A40", VA = "0x6012A40")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x6012E30", Offset = "0x6011E30", VA = "0x6012E30")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x60139F0", Offset = "0x60129F0", VA = "0x60139F0")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x6013AC0", Offset = "0x6012AC0", VA = "0x6013AC0")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x6010BE0", Offset = "0x600FBE0", VA = "0x6010BE0")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x6013090", Offset = "0x6012090", VA = "0x6013090")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x6013BB0", Offset = "0x6012BB0", VA = "0x6013BB0")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x600DB00", Offset = "0x600CB00", VA = "0x600DB00")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x60043C0", Offset = "0x60033C0", VA = "0x60043C0")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x600C130", Offset = "0x600B130", VA = "0x600C130")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x6009FE0", Offset = "0x6008FE0", VA = "0x6009FE0")]
	private void CheckAtrributeGroupRestriction(XmlSchemaAttributeGroup baseAttributeGroup, XmlSchemaAttributeGroup derivedAttributeGroup)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x6013CE0", Offset = "0x6012CE0", VA = "0x6013CE0")]
	private bool IsProcessContentsRestricted(XmlSchemaComplexType baseType, XmlSchemaAnyAttribute derivedAttributeWildcard, XmlSchemaAnyAttribute baseAttributeWildcard)
	{
		return default(bool);
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x6013C60", Offset = "0x6012C60", VA = "0x6013C60")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x6013BE0", Offset = "0x6012BE0", VA = "0x6013BE0")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x6007240", Offset = "0x6006240", VA = "0x6007240")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x6013E00", Offset = "0x6012E00", VA = "0x6013E00")]
	private void SetDefaultFixed(XmlSchemaAttribute xa, SchemaAttDef decl)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x6007B60", Offset = "0x6006B60", VA = "0x6007B60")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x6006250", Offset = "0x6005250", VA = "0x6006250")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x600DB70", Offset = "0x600CB70", VA = "0x600DB70")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x6014000", Offset = "0x6013000", VA = "0x6014000")]
	private bool BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x6014600", Offset = "0x6013600", VA = "0x6014600")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x6009DB0", Offset = "0x6008DB0", VA = "0x6009DB0")]
	private void CompileParticleElements(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x6008160", Offset = "0x6007160", VA = "0x6008160")]
	private void CompileComplexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x600AA30", Offset = "0x6009A30", VA = "0x600AA30")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x600E690", Offset = "0x600D690", VA = "0x600E690")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x600E550", Offset = "0x600D550", VA = "0x600E550")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x6010B70", Offset = "0x600FB70", VA = "0x6010B70")]
	private void CopyPosition(XmlSchemaAnnotated to, XmlSchemaAnnotated from, bool copyParent)
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x6012F20", Offset = "0x6011F20", VA = "0x6012F20")]
	private bool IsFixedEqual(SchemaDeclBase baseDecl, SchemaDeclBase derivedDecl)
	{
		return default(bool);
	}
}
