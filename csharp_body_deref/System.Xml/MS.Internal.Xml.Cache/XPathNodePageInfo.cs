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
		[Address(RVA = "0x47932A0", Offset = "0x47932A0", VA = "0x47932A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000771")]
	public int NodeCount
	{
		[Token(Token = "0x6001CDD")]
		[Address(RVA = "0x47932B0", Offset = "0x47932B0", VA = "0x47932B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000772")]
	public XPathNode[] NextPage
	{
		[Token(Token = "0x6001CDE")]
		[Address(RVA = "0x47932C0", Offset = "0x47932C0", VA = "0x47932C0")]
		get
		{
			return null;
		}
	}
}
