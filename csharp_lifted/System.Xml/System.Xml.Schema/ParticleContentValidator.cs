// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ParticleContentValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000181")]
internal sealed class ParticleContentValidator : ContentValidator
{
	[Token(Token = "0x4000790")]
	[FieldOffset(Offset = "0x18")]
	private SymbolsDictionary symbols;

	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x20")]
	private Positions positions;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x28")]
	private Stack stack;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x30")]
	private SyntaxTreeNode contentNode;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x38")]
	private bool isPartial;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x3C")]
	private int minMaxNodesCount;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x40")]
	private bool enableUpaCheck;

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x6147E20", Offset = "0x6146E20", VA = "0x6147E20")]
	public ParticleContentValidator(XmlSchemaContentType contentType)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x6147E80", Offset = "0x6146E80", VA = "0x6147E80")]
	public ParticleContentValidator(XmlSchemaContentType contentType, bool enableUpaCheck)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x6147EE0", Offset = "0x6146EE0", VA = "0x6147EE0", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x6147F20", Offset = "0x6146F20", VA = "0x6147F20", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x6147F60", Offset = "0x6146F60", VA = "0x6147F60", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x6147FA0", Offset = "0x6146FA0", VA = "0x6147FA0")]
	public void Start()
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x61480C0", Offset = "0x61470C0", VA = "0x61480C0")]
	public void OpenGroup()
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x61480F0", Offset = "0x61470F0", VA = "0x61480F0")]
	public void CloseGroup()
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x6148280", Offset = "0x6147280", VA = "0x6148280")]
	public bool Exists(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x61482B0", Offset = "0x61472B0", VA = "0x61482B0")]
	public void AddName(XmlQualifiedName name, object particle)
	{
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x61484B0", Offset = "0x61474B0", VA = "0x61484B0")]
	public void AddNamespaceList(NamespaceList namespaceList, object particle)
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x61483C0", Offset = "0x61473C0", VA = "0x61483C0")]
	private void AddLeafNode(SyntaxTreeNode node)
	{
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x6148550", Offset = "0x6147550", VA = "0x6148550")]
	public void AddChoice()
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x6148640", Offset = "0x6147640", VA = "0x6148640")]
	public void AddSequence()
	{
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x6148730", Offset = "0x6147730", VA = "0x6148730")]
	public void AddStar()
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x6148940", Offset = "0x6147940", VA = "0x6148940")]
	public void AddPlus()
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x61489A0", Offset = "0x61479A0", VA = "0x61489A0")]
	public void AddQMark()
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x6148A00", Offset = "0x6147A00", VA = "0x6148A00")]
	public void AddLeafRange(decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x6148790", Offset = "0x6147790", VA = "0x6148790")]
	private void Closure(InteriorNode node)
	{
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x6148B60", Offset = "0x6147B60", VA = "0x6148B60")]
	public ContentValidator Finish(bool useDFA)
	{
		return null;
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x6149390", Offset = "0x6148390", VA = "0x6149390")]
	private BitSet[] CalculateTotalFollowposForRangeNodes(BitSet firstpos, BitSet[] followpos, out BitSet posWithRangeTerminals)
	{
		return null;
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x6149D50", Offset = "0x6148D50", VA = "0x6149D50")]
	private void CheckCMUPAWithLeafRangeNodes(BitSet curpos)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x6149A30", Offset = "0x6148A30", VA = "0x6149A30")]
	private BitSet GetApplicableMinMaxFollowPos(BitSet curpos, BitSet posWithRangeTerminals, BitSet[] minmaxFollowPos)
	{
		return null;
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x6149FE0", Offset = "0x6148FE0", VA = "0x6149FE0")]
	private void CheckUniqueParticleAttribution(BitSet firstpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x614AAB0", Offset = "0x6149AB0", VA = "0x614AAB0")]
	private void CheckUniqueParticleAttribution(BitSet curpos)
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x614A070", Offset = "0x6149070", VA = "0x614A070")]
	private int[][] BuildTransitionTable(BitSet firstpos, BitSet[] followpos, int endMarkerPos)
	{
		return null;
	}
}
