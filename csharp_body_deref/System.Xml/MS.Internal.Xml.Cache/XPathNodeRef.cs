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
		[Address(RVA = "0x6098790", Offset = "0x6097790", VA = "0x6098790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076F")]
	public int Index
	{
		[Token(Token = "0x6001CC8")]
		[Address(RVA = "0x60987A0", Offset = "0x60977A0", VA = "0x60987A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001CC6")]
	[Address(RVA = "0x6098770", Offset = "0x6097770", VA = "0x6098770")]
	public XPathNodeRef(XPathNode[] page, int idx)
	{
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x60987B0", Offset = "0x60977B0", VA = "0x60987B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
