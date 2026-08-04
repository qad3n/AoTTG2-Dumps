// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.CacheChildrenQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000290")]
internal sealed class CacheChildrenQuery : ChildrenQuery
{
	[Token(Token = "0x4000E11")]
	[FieldOffset(Offset = "0x60")]
	private XPathNavigator _nextInput;

	[Token(Token = "0x4000E12")]
	[FieldOffset(Offset = "0x68")]
	private ClonableStack<XPathNavigator> _elementStk;

	[Token(Token = "0x4000E13")]
	[FieldOffset(Offset = "0x70")]
	private ClonableStack<int> _positionStk;

	[Token(Token = "0x4000E14")]
	[FieldOffset(Offset = "0x78")]
	private bool _needInput;

	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x4778CB0", Offset = "0x4778CB0", VA = "0x4778CB0")]
	public CacheChildrenQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x4778EB0", Offset = "0x4778EB0", VA = "0x4778EB0")]
	private CacheChildrenQuery(CacheChildrenQuery other)
	{
	}

	[Token(Token = "0x6001A90")]
	[Address(RVA = "0x4779010", Offset = "0x4779010", VA = "0x4779010", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x4779140", Offset = "0x4779140", VA = "0x4779140", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x47793A0", Offset = "0x47793A0", VA = "0x47793A0")]
	private bool DecideNextNode()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x4779330", Offset = "0x4779330", VA = "0x4779330")]
	private XPathNavigator GetNextInput()
	{
		return null;
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x4779500", Offset = "0x4779500", VA = "0x4779500", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
