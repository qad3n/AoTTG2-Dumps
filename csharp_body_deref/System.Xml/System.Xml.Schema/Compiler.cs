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
	[Address(RVA = "0x264C3C0", Offset = "0x264A9C0", VA = "0x18264C3C0")]
	public Compiler(XmlNameTable nameTable, ValidationEventHandler eventHandler, XmlSchema schemaForSchema, XmlSchemaCompilationSettings compilationSettings)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x2645990", Offset = "0x2643F90", VA = "0x182645990")]
	public bool Execute(XmlSchemaSet schemaSet, SchemaInfo schemaCompiledInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x264A5B0", Offset = "0x2648BB0", VA = "0x18264A5B0")]
	internal void Prepare(XmlSchema schema, bool cleanup)
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x264C270", Offset = "0x264A870", VA = "0x18264C270")]
	private void UpdateSForSSimpleTypes()
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x26497E0", Offset = "0x2647DE0", VA = "0x1826497E0")]
	private void Output(SchemaInfo schemaInfo)
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x2645E80", Offset = "0x2644480", VA = "0x182645E80")]
	internal void ImportAllCompiledSchemas(XmlSchemaSet schemaSet)
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x2643DC0", Offset = "0x26423C0", VA = "0x182643DC0")]
	internal bool Compile()
	{
		return default(bool);
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x263B400", Offset = "0x2639A00", VA = "0x18263B400")]
	private void CleanupAttribute(XmlSchemaAttribute attribute)
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x263B380", Offset = "0x2639980", VA = "0x18263B380")]
	private void CleanupAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x263B5B0", Offset = "0x2639BB0", VA = "0x18263B5B0")]
	private void CleanupComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x263BFD0", Offset = "0x263A5D0", VA = "0x18263BFD0")]
	private void CleanupSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x263BB40", Offset = "0x263A140", VA = "0x18263BB40")]
	private void CleanupElement(XmlSchemaElement element)
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x263B500", Offset = "0x2639B00", VA = "0x18263B500")]
	private void CleanupAttributes(XmlSchemaObjectCollection attributes)
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x263BDC0", Offset = "0x263A3C0", VA = "0x18263BDC0")]
	private void CleanupGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x263BE20", Offset = "0x263A420", VA = "0x18263BE20")]
	private void CleanupParticle(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x264B770", Offset = "0x2649D70", VA = "0x18264B770")]
	private void ProcessSubstitutionGroups()
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x2643820", Offset = "0x2641E20", VA = "0x182643820")]
	private void CompileSubstitutionGroup(XmlSchemaSubstitutionGroup substitutionGroup)
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x264BEE0", Offset = "0x264A4E0", VA = "0x18264BEE0")]
	private void RecursivelyCheckRedefinedGroups(XmlSchemaGroup redefinedGroup, XmlSchemaGroup baseGroup)
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x264BE50", Offset = "0x264A450", VA = "0x18264BE50")]
	private void RecursivelyCheckRedefinedAttributeGroups(XmlSchemaAttributeGroup attributeGroup, XmlSchemaAttributeGroup baseAttributeGroup)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x2640A90", Offset = "0x263F090", VA = "0x182640A90")]
	private void CompileGroup(XmlSchemaGroup group)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x2642E20", Offset = "0x2641420", VA = "0x182642E20")]
	private void CompileSimpleType(XmlSchemaSimpleType simpleType)
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x263D360", Offset = "0x263B960", VA = "0x18263D360")]
	private XmlSchemaSimpleType[] CompileBaseMemberTypes(XmlSchemaSimpleType simpleType)
	{
		return null;
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x263B260", Offset = "0x2639860", VA = "0x18263B260")]
	private void CheckUnionType(XmlSchemaSimpleType unionMember, ArrayList memberTypeDefinitions, XmlSchemaSimpleType parentType)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x263ED20", Offset = "0x263D320", VA = "0x18263ED20")]
	private void CompileComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x2642740", Offset = "0x2640D40", VA = "0x182642740")]
	private void CompileSimpleContentExtension(XmlSchemaComplexType complexType, XmlSchemaSimpleContentExtension simpleExtension)
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x26429F0", Offset = "0x2640FF0", VA = "0x1826429F0")]
	private void CompileSimpleContentRestriction(XmlSchemaComplexType complexType, XmlSchemaSimpleContentRestriction simpleRestriction)
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x263D740", Offset = "0x263BD40", VA = "0x18263D740")]
	private void CompileComplexContentExtension(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentExtension complexExtension)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x263DB50", Offset = "0x263C150", VA = "0x18263DB50")]
	private void CompileComplexContentRestriction(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaComplexContentRestriction complexRestriction)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x263AC60", Offset = "0x2639260", VA = "0x18263AC60")]
	private void CheckParticleDerivation(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x263B180", Offset = "0x2639780", VA = "0x18263B180")]
	private void CheckParticleDerivation(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x263F890", Offset = "0x263DE90", VA = "0x18263F890")]
	private XmlSchemaParticle CompileContentTypeParticle(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x2639720", Offset = "0x2637D20", VA = "0x182639720")]
	private XmlSchemaParticle CannonicalizeParticle(XmlSchemaParticle particle, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x2638E50", Offset = "0x2637450", VA = "0x182638E50")]
	private XmlSchemaParticle CannonicalizeElement(XmlSchemaElement element)
	{
		return null;
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x26390C0", Offset = "0x26376C0", VA = "0x1826390C0")]
	private XmlSchemaParticle CannonicalizeGroupRef(XmlSchemaGroupRef groupRef, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x26384C0", Offset = "0x2636AC0", VA = "0x1826384C0")]
	private XmlSchemaParticle CannonicalizeAll(XmlSchemaAll all, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x26387B0", Offset = "0x2636DB0", VA = "0x1826387B0")]
	private XmlSchemaParticle CannonicalizeChoice(XmlSchemaChoice choice, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x2639ED0", Offset = "0x26384D0", VA = "0x182639ED0")]
	private XmlSchemaParticle CannonicalizeSequence(XmlSchemaSequence sequence, bool root)
	{
		return null;
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x2639A20", Offset = "0x2638020", VA = "0x182639A20")]
	private XmlSchemaParticle CannonicalizePointlessRoot(XmlSchemaParticle particle)
	{
		return null;
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x26485B0", Offset = "0x2646BB0", VA = "0x1826485B0")]
	private bool IsValidRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x2646430", Offset = "0x2644A30", VA = "0x182646430")]
	private bool IsElementFromElement(XmlSchemaElement derivedElement, XmlSchemaElement baseElement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x2646240", Offset = "0x2644840", VA = "0x182646240")]
	private bool IsElementFromAny(XmlSchemaElement derivedElement, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x2645F80", Offset = "0x2644580", VA = "0x182645F80")]
	private bool IsAnyFromAny(XmlSchemaAny derivedAny, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x2647290", Offset = "0x2645890", VA = "0x182647290")]
	private bool IsGroupBaseFromAny(XmlSchemaGroupBase derivedGroupBase, XmlSchemaAny baseAny)
	{
		return default(bool);
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x26466B0", Offset = "0x2644CB0", VA = "0x1826466B0")]
	private bool IsElementFromGroupBase(XmlSchemaElement derivedElement, XmlSchemaGroupBase baseGroupBase)
	{
		return default(bool);
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x2646090", Offset = "0x2644690", VA = "0x182646090")]
	private bool IsChoiceFromChoiceSubstGroup(XmlSchemaChoice derivedChoice, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x2647790", Offset = "0x2645D90", VA = "0x182647790")]
	private bool IsGroupBaseFromGroupBase(XmlSchemaGroupBase derivedGroupBase, XmlSchemaGroupBase baseGroupBase, bool skipEmptableOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600141E")]
	[Address(RVA = "0x2647C60", Offset = "0x2646260", VA = "0x182647C60")]
	private bool IsSequenceFromAll(XmlSchemaSequence derivedSequence, XmlSchemaAll baseAll)
	{
		return default(bool);
	}

	[Token(Token = "0x600141F")]
	[Address(RVA = "0x2647F90", Offset = "0x2646590", VA = "0x182647F90")]
	private bool IsSequenceFromChoice(XmlSchemaSequence derivedSequence, XmlSchemaChoice baseChoice)
	{
		return default(bool);
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x26484A0", Offset = "0x2646AA0", VA = "0x1826484A0")]
	private bool IsValidOccurrenceRangeRestriction(XmlSchemaParticle derivedParticle, XmlSchemaParticle baseParticle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x26483D0", Offset = "0x26469D0", VA = "0x1826483D0")]
	private bool IsValidOccurrenceRangeRestriction(decimal minOccurs, decimal maxOccurs, decimal baseMinOccurs, decimal baseMaxOccurs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x2645CC0", Offset = "0x26442C0", VA = "0x182645CC0")]
	private int GetMappingParticle(XmlSchemaParticle particle, XmlSchemaObjectCollection collection)
	{
		return default(int);
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x2647AC0", Offset = "0x26460C0", VA = "0x182647AC0")]
	private bool IsParticleEmptiable(XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x2637D00", Offset = "0x2636300", VA = "0x182637D00")]
	private void CalculateEffectiveTotalRange(XmlSchemaParticle particle, out decimal minOccurs, out decimal maxOccurs)
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x264BE20", Offset = "0x264A420", VA = "0x18264BE20")]
	private void PushComplexType(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x262BB70", Offset = "0x262A170", VA = "0x18262BB70")]
	private XmlSchemaContentType GetSchemaContentType(XmlSchemaComplexType complexType, XmlSchemaComplexContent complexContent, XmlSchemaParticle particle)
	{
		return default(XmlSchemaContentType);
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x263C1E0", Offset = "0x263A7E0", VA = "0x18263C1E0")]
	private void CompileAttributeGroup(XmlSchemaAttributeGroup attributeGroup)
	{
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x2641210", Offset = "0x263F810", VA = "0x182641210")]
	private void CompileLocalAttributes(XmlSchemaComplexType baseType, XmlSchemaComplexType derivedType, XmlSchemaObjectCollection attributes, XmlSchemaAnyAttribute anyAttribute, XmlSchemaDerivationMethod derivedBy)
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x263A4B0", Offset = "0x2638AB0", VA = "0x18263A4B0")]
	private void CheckAtrributeGroupRestriction(XmlSchemaAttributeGroup baseAttributeGroup, XmlSchemaAttributeGroup derivedAttributeGroup)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x2647B80", Offset = "0x2646180", VA = "0x182647B80")]
	private bool IsProcessContentsRestricted(XmlSchemaComplexType baseType, XmlSchemaAnyAttribute derivedAttributeWildcard, XmlSchemaAnyAttribute baseAttributeWildcard)
	{
		return default(bool);
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x263C140", Offset = "0x263A740", VA = "0x18263C140")]
	private XmlSchemaAnyAttribute CompileAnyAttributeUnion(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x263C0A0", Offset = "0x263A6A0", VA = "0x18263C0A0")]
	private XmlSchemaAnyAttribute CompileAnyAttributeIntersection(XmlSchemaAnyAttribute a, XmlSchemaAnyAttribute b)
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x263C9C0", Offset = "0x263AFC0", VA = "0x18263C9C0")]
	private void CompileAttribute(XmlSchemaAttribute xa)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x264C080", Offset = "0x264A680", VA = "0x18264C080")]
	private void SetDefaultFixed(XmlSchemaAttribute xa, SchemaAttDef decl)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x2640B70", Offset = "0x263F170", VA = "0x182640B70")]
	private void CompileIdentityConstraint(XmlSchemaIdentityConstraint xi)
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x263FA20", Offset = "0x263E020", VA = "0x18263FA20")]
	private void CompileElement(XmlSchemaElement xe)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x263DEB0", Offset = "0x263C4B0", VA = "0x18263DEB0")]
	private ContentValidator CompileComplexContent(XmlSchemaComplexType complexType)
	{
		return null;
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x2637660", Offset = "0x2635C60", VA = "0x182637660")]
	private bool BuildParticleContentModel(ParticleContentValidator contentValidator, XmlSchemaParticle particle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x2642440", Offset = "0x2640A40", VA = "0x182642440")]
	private void CompileParticleElements(XmlSchemaComplexType complexType, XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x2642260", Offset = "0x2640860", VA = "0x182642260")]
	private void CompileParticleElements(XmlSchemaParticle particle)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x263EBF0", Offset = "0x263D1F0", VA = "0x18263EBF0")]
	private void CompileComplexTypeElements(XmlSchemaComplexType complexType)
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x2645DA0", Offset = "0x26443A0", VA = "0x182645DA0")]
	private XmlSchemaSimpleType GetSimpleType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x2645C10", Offset = "0x2644210", VA = "0x182645C10")]
	private XmlSchemaComplexType GetComplexType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x2645A50", Offset = "0x2644050", VA = "0x182645A50")]
	private XmlSchemaType GetAnySchemaType(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x2645900", Offset = "0x2643F00", VA = "0x182645900")]
	private void CopyPosition(XmlSchemaAnnotated to, XmlSchemaAnnotated from, bool copyParent)
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x2647120", Offset = "0x2645720", VA = "0x182647120")]
	private bool IsFixedEqual(SchemaDeclBase baseDecl, SchemaDeclBase derivedDecl)
	{
		return default(bool);
	}
}
