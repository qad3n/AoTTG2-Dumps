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
		[Address(RVA = "0x4455A90", Offset = "0x4455A90", VA = "0x4455A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700076F")]
	public int Index
	{
		[Token(Token = "0x6001CC8")]
		[Address(RVA = "0x4455AA0", Offset = "0x4455AA0", VA = "0x4455AA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001CC6")]
	[Address(RVA = "0x4455A70", Offset = "0x4455A70", VA = "0x4455A70")]
	public XPathNodeRef(XPathNode[] page, int idx)
	{
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x4455AB0", Offset = "0x4455AB0", VA = "0x4455AB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
