// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathNodeRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D9")]
internal struct XPathNodeRef
{
	[Token(Token = "0x4000F09")]
	[FieldOffset(Offset = "0x0")]
	private XPathNode[] _page;

	[Token(Token = "0x4000F0A")]
	[FieldOffset(Offset = "0x8")]
	private int _idx;

	[Token(Token = "0x1700076E")]
	public XPathNode[] Page
	{
		[Token(Token = "0x6001CC7")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076F")]
	public int Index
	{
		[Token(Token = "0x6001CC8")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001CC6")]
	[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
	public XPathNodeRef(XPathNode[] page, int idx)
	{
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x26D9E80", Offset = "0x26D8480", VA = "0x1826D9E80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
