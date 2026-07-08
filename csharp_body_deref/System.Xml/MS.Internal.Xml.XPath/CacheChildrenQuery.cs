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
	[Address(RVA = "0x443B550", Offset = "0x443B550", VA = "0x443B550")]
	public CacheChildrenQuery(Query qyInput, string name, string prefix, XPathNodeType type)
	{
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x443B750", Offset = "0x443B750", VA = "0x443B750")]
	private CacheChildrenQuery(CacheChildrenQuery other)
	{
	}

	[Token(Token = "0x6001A90")]
	[Address(RVA = "0x443B8B0", Offset = "0x443B8B0", VA = "0x443B8B0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x443B9E0", Offset = "0x443B9E0", VA = "0x443B9E0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x443BC40", Offset = "0x443BC40", VA = "0x443BC40")]
	private bool DecideNextNode()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x443BBD0", Offset = "0x443BBD0", VA = "0x443BBD0")]
	private XPathNavigator GetNextInput()
	{
		return null;
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x443BDA0", Offset = "0x443BDA0", VA = "0x443BDA0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
