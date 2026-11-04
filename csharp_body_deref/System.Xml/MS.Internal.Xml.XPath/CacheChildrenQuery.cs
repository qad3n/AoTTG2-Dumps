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
	[Address(RVA = "0x26B63E0", Offset = "0x26B49E0", VA = "0x1826B63E0")]
	public CacheChildrenQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x26B6310", Offset = "0x26B4910", VA = "0x1826B6310")]
	private CacheChildrenQuery(CacheChildrenQuery other)
	{
	}

	[Token(Token = "0x6001A90")]
	[Address(RVA = "0x26B61F0", Offset = "0x26B47F0", VA = "0x1826B61F0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x26B5B10", Offset = "0x26B4110", VA = "0x1826B5B10", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x26B6020", Offset = "0x26B4620", VA = "0x1826B6020")]
	private bool DecideNextNode()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x26B6180", Offset = "0x26B4780", VA = "0x1826B6180")]
	private XPathNavigator GetNextInput()
	{
		return null;
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x26B5F20", Offset = "0x26B4520", VA = "0x1826B5F20", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
