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
		[Address(RVA = "0x243E8F0", Offset = "0x243CEF0", VA = "0x18243E8F0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000708")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x26BABD0", Offset = "0x26B91D0", VA = "0x1826BABD0")]
	public GroupQuery(Query qy)
	{
	}

	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x26B48D0", Offset = "0x26B2ED0", VA = "0x1826B48D0")]
	private GroupQuery(GroupQuery other)
	{
	}

	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x26BAAA0", Offset = "0x26B90A0", VA = "0x1826BAAA0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x25477B0", Offset = "0x2545DB0", VA = "0x1825477B0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}

	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x26BAAF0", Offset = "0x26B90F0", VA = "0x1826BAAF0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
