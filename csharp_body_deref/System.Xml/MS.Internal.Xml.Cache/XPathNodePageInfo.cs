using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002DB")]
internal sealed class XPathNodePageInfo
{
	[Token(Token = "0x4000F0B")]
	[FieldOffset(Offset = "0x10")]
	private int _pageNum;

	[Token(Token = "0x4000F0C")]
	[FieldOffset(Offset = "0x14")]
	private int _nodeCount;

	[Token(Token = "0x4000F0D")]
	[FieldOffset(Offset = "0x18")]
	private XPathNode[] _pageNext;

	[Token(Token = "0x17000770")]
	public int PageNumber
	{
		[Token(Token = "0x6001CDC")]
		[Address(RVA = "0x4455B40", Offset = "0x4455B40", VA = "0x4455B40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000771")]
	public int NodeCount
	{
		[Token(Token = "0x6001CDD")]
		[Address(RVA = "0x4455B50", Offset = "0x4455B50", VA = "0x4455B50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000772")]
	public XPathNode[] NextPage
	{
		[Token(Token = "0x6001CDE")]
		[Address(RVA = "0x4455B60", Offset = "0x4455B60", VA = "0x4455B60")]
		get
		{
			return null;
		}
	}
}
