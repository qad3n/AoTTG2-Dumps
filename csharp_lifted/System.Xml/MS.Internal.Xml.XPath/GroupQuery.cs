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
		[Address(RVA = "0x6082E30", Offset = "0x6081E30", VA = "0x6082E30", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000708")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x6082E60", Offset = "0x6081E60", VA = "0x6082E60", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x6082CD0", Offset = "0x6081CD0", VA = "0x6082CD0")]
	public GroupQuery(Query qy)
	{
	}

	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x6082D60", Offset = "0x6081D60", VA = "0x6082D60")]
	private GroupQuery(GroupQuery other)
	{
	}

	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x6082D70", Offset = "0x6081D70", VA = "0x6082D70", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x6082DB0", Offset = "0x6081DB0", VA = "0x6082DB0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x6082DE0", Offset = "0x6081DE0", VA = "0x6082DE0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
