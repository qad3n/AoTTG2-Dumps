using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002BE")]
internal sealed class ReversePositionQuery : ForwardPositionQuery
{
	[Token(Token = "0x1700071F")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001BC1")]
		[Address(RVA = "0x4449570", Offset = "0x4449570", VA = "0x4449570", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000720")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001BC2")]
		[Address(RVA = "0x44495B0", Offset = "0x44495B0", VA = "0x44495B0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001BBE")]
	[Address(RVA = "0x44488D0", Offset = "0x44488D0", VA = "0x44488D0")]
	public ReversePositionQuery(Query input)
	{
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x4449510", Offset = "0x4449510", VA = "0x4449510")]
	private ReversePositionQuery(ReversePositionQuery other)
	{
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x4449520", Offset = "0x4449520", VA = "0x4449520", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
