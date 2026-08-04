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
	[Address(RVA = "0x48492D0", Offset = "0x48492D0", VA = "0x48492D0")]
	public ParticleContentValidator(XmlSchemaContentType contentType)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x4849330", Offset = "0x4849330", VA = "0x4849330")]
	public ParticleContentValidator(XmlSchemaContentType contentType, bool enableUpaCheck)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x4849390", Offset = "0x4849390", VA = "0x4849390", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x48493D0", Offset = "0x48493D0", VA = "0x48493D0", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x4849410", Offset = "0x4849410", VA = "0x4849410", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x4849450", Offset = "0x4849450", VA = "0x4849450")]
	public void Start()
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x4849570", Offset = "0x4849570", VA = "0x4849570")]
	public void OpenGroup()
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x48495A0", Offset = "0x48495A0", VA = "0x48495A0")]
	public void CloseGroup()
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x4849730", Offset = "0x4849730", VA = "0x4849730")]
	public bool Exists(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x4849760", Offset = "0x4849760", VA = "0x4849760")]
	public void AddName(XmlQualifiedName name, object particle)
	{
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x4849950", Offset = "0x4849950", VA = "0x4849950")]
	public void AddNamespaceList(NamespaceList namespaceList, object particle)
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x4849870", Offset = "0x4849870", VA = "0x4849870")]
	private void AddLeafNode(SyntaxTreeNode node)
	{
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x48499F0", Offset = "0x48499F0", VA = "0x48499F0")]
	public void AddChoice()
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x4849AE0", Offset = "0x4849AE0", VA = "0x4849AE0")]
	public void AddSequence()
	{
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x4849BD0", Offset = "0x4849BD0", VA = "0x4849BD0")]
	public void AddStar()
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x4849DE0", Offset = "0x4849DE0", VA = "0x4849DE0")]
	public void AddPlus()
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x4849E40", Offset = "0x4849E40", VA = "0x4849E40")]
	public void AddQMark()
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x4849EA0", Offset = "0x4849EA0", VA = "0x4849EA0")]
	public void AddLeafRange(decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x4849C20", Offset = "0x4849C20", VA = "0x4849C20")]
	private void Closure(InteriorNode node)
	{
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x484A000", Offset = "0x484A000", VA = "0x484A000")]
	public ContentValidator Finish(bool useDFA)
	{
		return null;
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x484A870", Offset = "0x484A870", VA = "0x484A870")]
	private BitSet[] CalculateTotalFollowposForRangeNodes(BitSet firstpos, BitSet[] followpos, out BitSet posWithRangeTerminals)
	{
		return null;
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x484B220", Offset = "0x484B220", VA = "0x484B220")]
	private void CheckCMUPAWithLeafRangeNodes(BitSet curpos)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x484AF00", Offset = "0x484AF00", VA = "0x484AF00")]
	private BitSet GetApplicableMinMaxFollowPos(BitSet curpos, BitSet posWithRangeTerminals, BitSet[] minmaxFollowPos)
	{
		return null;
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x484B5A0", Offset = "0x484B5A0", VA = "0x484B5A0")]
	private void CheckUniqueParticleAttribution(BitSet firstpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x484C000", Offset = "0x484C000", VA = "0x484C000")]
	private void CheckUniqueParticleAttribution(BitSet curpos)
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x484B630", Offset = "0x484B630", VA = "0x484B630")]
	private int[][] BuildTransitionTable(BitSet firstpos, BitSet[] followpos, int endMarkerPos)
	{
		return null;
	}
}
