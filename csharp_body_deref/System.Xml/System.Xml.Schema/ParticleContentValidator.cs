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
	[Address(RVA = "0x27835E0", Offset = "0x2781BE0", VA = "0x1827835E0")]
	public ParticleContentValidator(XmlSchemaContentType contentType)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x2783640", Offset = "0x2781C40", VA = "0x182783640")]
	public ParticleContentValidator(XmlSchemaContentType contentType, bool enableUpaCheck)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x2783390", Offset = "0x2781990", VA = "0x182783390", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x27835A0", Offset = "0x2781BA0", VA = "0x1827835A0", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x2781CD0", Offset = "0x27802D0", VA = "0x182781CD0", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x2783400", Offset = "0x2781A00", VA = "0x182783400")]
	public void Start()
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x27833D0", Offset = "0x27819D0", VA = "0x1827833D0")]
	public void OpenGroup()
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x2781960", Offset = "0x277FF60", VA = "0x182781960")]
	public void CloseGroup()
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x2781D10", Offset = "0x2780310", VA = "0x182781D10")]
	public bool Exists(XmlQualifiedName name)
	{
		return default(bool);
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x27806C0", Offset = "0x277ECC0", VA = "0x1827806C0")]
	public void AddName(XmlQualifiedName name, object particle)
	{
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x2780770", Offset = "0x277ED70", VA = "0x182780770")]
	public void AddNamespaceList(NamespaceList namespaceList, object particle)
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x27804E0", Offset = "0x277EAE0", VA = "0x1827804E0")]
	private void AddLeafNode(SyntaxTreeNode node)
	{
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x27803E0", Offset = "0x277E9E0", VA = "0x1827803E0")]
	public void AddChoice()
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x27808F0", Offset = "0x277EEF0", VA = "0x1827808F0")]
	public void AddSequence()
	{
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x27809F0", Offset = "0x277EFF0", VA = "0x1827809F0")]
	public void AddStar()
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x2780830", Offset = "0x277EE30", VA = "0x182780830")]
	public void AddPlus()
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x2780890", Offset = "0x277EE90", VA = "0x182780890")]
	public void AddQMark()
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x27805E0", Offset = "0x277EBE0", VA = "0x1827805E0")]
	public void AddLeafRange(decimal min, decimal max)
	{
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x2781B00", Offset = "0x2780100", VA = "0x182781B00")]
	private void Closure(InteriorNode node)
	{
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x2781D50", Offset = "0x2780350", VA = "0x182781D50")]
	public ContentValidator Finish(bool useDFA)
	{
		return null;
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x2781080", Offset = "0x277F680", VA = "0x182781080")]
	private BitSet[] CalculateTotalFollowposForRangeNodes(BitSet firstpos, BitSet[] followpos, out BitSet posWithRangeTerminals)
	{
		return null;
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x2781460", Offset = "0x277FA60", VA = "0x182781460")]
	private void CheckCMUPAWithLeafRangeNodes(BitSet curpos)
	{
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x2782EA0", Offset = "0x27814A0", VA = "0x182782EA0")]
	private BitSet GetApplicableMinMaxFollowPos(BitSet curpos, BitSet posWithRangeTerminals, BitSet[] minmaxFollowPos)
	{
		return null;
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x27818D0", Offset = "0x277FED0", VA = "0x1827818D0")]
	private void CheckUniqueParticleAttribution(BitSet firstpos, BitSet[] followpos)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x2781670", Offset = "0x277FC70", VA = "0x182781670")]
	private void CheckUniqueParticleAttribution(BitSet curpos)
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x2780A50", Offset = "0x277F050", VA = "0x182780A50")]
	private int[][] BuildTransitionTable(BitSet firstpos, BitSet[] followpos, int endMarkerPos)
	{
		return null;
	}
}
