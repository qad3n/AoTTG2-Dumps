// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ReversePositionQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4786CD0", Offset = "0x4786CD0", VA = "0x4786CD0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000720")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001BC2")]
		[Address(RVA = "0x4786D10", Offset = "0x4786D10", VA = "0x4786D10", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001BBE")]
	[Address(RVA = "0x4786030", Offset = "0x4786030", VA = "0x4786030")]
	public ReversePositionQuery(Query input)
	{
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x4786C70", Offset = "0x4786C70", VA = "0x4786C70")]
	private ReversePositionQuery(ReversePositionQuery other)
	{
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x4786C80", Offset = "0x4786C80", VA = "0x4786C80", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
