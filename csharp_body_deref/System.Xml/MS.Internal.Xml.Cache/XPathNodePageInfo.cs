// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathNodePageInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000771")]
	public int NodeCount
	{
		[Token(Token = "0x6001CDD")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000772")]
	public XPathNode[] NextPage
	{
		[Token(Token = "0x6001CDE")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}
}
