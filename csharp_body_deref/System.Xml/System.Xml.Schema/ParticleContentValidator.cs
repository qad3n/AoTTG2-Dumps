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
	[Address(RVA = "0x450BB70", Offset = "0x450BB70", VA = "0x450BB70")]
	public ParticleContentValidator(XmlSchemaContentType contentType)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x450BBD0", Offset = "0x450BBD0", VA = "0x450BBD0")]
	public ParticleContentValidator(XmlSchemaContentType contentType, bool enableUpaCheck)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x450BC30", Offset = "0x450BC30", VA = "0x450BC30", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x450BC70", Offset = "0x450BC70", VA = "0x450BC70", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x450BCB0", Offset = "0x450BCB0", VA = "0x450BCB0", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x450BCF0", Offset = "0x450BCF0", VA = "0x450BCF0")]
	public void Start()
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x450BE10", Offset = "0x450BE10", VA = "0x450BE10")]
	public void OpenGroup()
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x450BE40", Offset = "0x450BE40", VA = "0x450BE40")]
	public void CloseGroup()
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x450BFD0", Offset = "0x450BFD0", VA = "0x450BFD0")]
	public bool Exists(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x450C000", Offset = "0x450C000", VA = "0x450C000")]
	public void AddName(XmlQualifiedName name, object particle)
	{
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x450C1F0", Offset = "0x450C1F0", VA = "0x450C1F0")]
	public void AddNamespaceList(NamespaceList namespaceList, object particle)
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x450C110", Offset = "0x450C110", VA = "0x450C110")]
	private void AddLeafNode(SyntaxTreeNode node)
	{
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x450C290", Offset = "0x450C290", VA = "0x450C290")]
	public void AddChoice()
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x450C380", Offset = "0x450C380", VA = "0x450C380")]
	public void AddSequence()
	{
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x450C470", Offset = "0x450C470", VA = "0x450C470")]
	public void AddStar()
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x450C680", Offset = "0x450C680", VA = "0x450C680")]
	public void AddPlus()
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x450C6E0", Offset = "0x450C6E0", VA = "0x450C6E0")]
	public void AddQMark()
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x450C740", Offset = "0x450C740", VA = "0x450C740")]
	public void AddLeafRange(decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x450C4C0", Offset = "0x450C4C0", VA = "0x450C4C0")]
	private void Closure(InteriorNode node)
	{
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x450C8A0", Offset = "0x450C8A0", VA = "0x450C8A0")]
	public ContentValidator Finish(bool useDFA)
	{
		return null;
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x450D110", Offset = "0x450D110", VA = "0x450D110")]
	private BitSet[] CalculateTotalFollowposForRangeNodes(BitSet firstpos, BitSet[] followpos, out BitSet posWithRangeTerminals)
	{
		return null;
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x450DAC0", Offset = "0x450DAC0", VA = "0x450DAC0")]
	private void CheckCMUPAWithLeafRangeNodes(BitSet curpos)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x450D7A0", Offset = "0x450D7A0", VA = "0x450D7A0")]
	private BitSet GetApplicableMinMaxFollowPos(BitSet curpos, BitSet posWithRangeTerminals, BitSet[] minmaxFollowPos)
	{
		return null;
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x450DE40", Offset = "0x450DE40", VA = "0x450DE40")]
	private void CheckUniqueParticleAttribution(BitSet firstpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x450E8A0", Offset = "0x450E8A0", VA = "0x450E8A0")]
	private void CheckUniqueParticleAttribution(BitSet curpos)
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x450DED0", Offset = "0x450DED0", VA = "0x450DED0")]
	private int[][] BuildTransitionTable(BitSet firstpos, BitSet[] followpos, int endMarkerPos)
	{
		return null;
	}
}
