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
		[Address(RVA = "0x608C0F0", Offset = "0x608B0F0", VA = "0x608C0F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000720")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001BC2")]
		[Address(RVA = "0x608C130", Offset = "0x608B130", VA = "0x608C130", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001BBE")]
	[Address(RVA = "0x608B470", Offset = "0x608A470", VA = "0x608B470")]
	public ReversePositionQuery(Query input)
	{
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x608C090", Offset = "0x608B090", VA = "0x608C090")]
	private ReversePositionQuery(ReversePositionQuery other)
	{
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x608C0A0", Offset = "0x608B0A0", VA = "0x608C0A0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
