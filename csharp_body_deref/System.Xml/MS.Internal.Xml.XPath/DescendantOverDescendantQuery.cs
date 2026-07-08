using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000299")]
internal sealed class DescendantOverDescendantQuery : DescendantBaseQuery
{
	[Token(Token = "0x4000E20")]
	[FieldOffset(Offset = "0x58")]
	private int _level;

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x443CC00", Offset = "0x443CC00", VA = "0x443CC00")]
	public DescendantOverDescendantQuery(Query qyParent, bool matchSelf, string name, string prefix, XPathNodeType typeTest, bool abbrAxis)
	{
	}

	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x443CC30", Offset = "0x443CC30", VA = "0x443CC30")]
	private DescendantOverDescendantQuery(DescendantOverDescendantQuery other)
	{
	}

	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x443CC70", Offset = "0x443CC70", VA = "0x443CC70", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x443CCC0", Offset = "0x443CCC0", VA = "0x443CCC0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x443CE70", Offset = "0x443CE70", VA = "0x443CE70")]
	private bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x443CEB0", Offset = "0x443CEB0", VA = "0x443CEB0")]
	private bool MoveUpUntilNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x443CF10", Offset = "0x443CF10", VA = "0x443CF10", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
