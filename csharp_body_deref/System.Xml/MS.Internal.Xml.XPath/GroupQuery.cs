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
		[Address(RVA = "0x44401A0", Offset = "0x44401A0", VA = "0x44401A0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000708")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x44401D0", Offset = "0x44401D0", VA = "0x44401D0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x4440030", Offset = "0x4440030", VA = "0x4440030")]
	public GroupQuery(Query qy)
	{
	}

	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x44400C0", Offset = "0x44400C0", VA = "0x44400C0")]
	private GroupQuery(GroupQuery other)
	{
	}

	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x44400D0", Offset = "0x44400D0", VA = "0x44400D0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x4440120", Offset = "0x4440120", VA = "0x4440120", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x4440150", Offset = "0x4440150", VA = "0x4440150", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
