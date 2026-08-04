// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.GroupQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A6")]
internal sealed class GroupQuery : BaseAxisQuery
{
	[Token(Token = "0x17000707")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001B1D")]
		[Address(RVA = "0x477D900", Offset = "0x477D900", VA = "0x477D900", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000708")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x477D930", Offset = "0x477D930", VA = "0x477D930", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x477D790", Offset = "0x477D790", VA = "0x477D790")]
	public GroupQuery(Query qy)
	{
	}

	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x477D820", Offset = "0x477D820", VA = "0x477D820")]
	private GroupQuery(GroupQuery other)
	{
	}

	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x477D830", Offset = "0x477D830", VA = "0x477D830", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x477D880", Offset = "0x477D880", VA = "0x477D880", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x477D8B0", Offset = "0x477D8B0", VA = "0x477D8B0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
