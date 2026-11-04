// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.PrecedingQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002B7")]
internal sealed class PrecedingQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0x58")]
	private XPathNodeIterator _workIterator;

	[Token(Token = "0x4000E7F")]
	[FieldOffset(Offset = "0x60")]
	private ClonableStack<XPathNavigator> _ancestorStk;

	[Token(Token = "0x1700071A")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001B9B")]
		[Address(RVA = "0x26C40E0", Offset = "0x26C26E0", VA = "0x1826C40E0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x26C3ED0", Offset = "0x26C24D0", VA = "0x1826C3ED0")]
	public PrecedingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x26C3FD0", Offset = "0x26C25D0", VA = "0x1826C3FD0")]
	private PrecedingQuery(PrecedingQuery other)
	{
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x26C3E30", Offset = "0x26C2430", VA = "0x1826C3E30", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x26C3A00", Offset = "0x26C2000", VA = "0x1826C3A00", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B9A")]
	[Address(RVA = "0x26C3CF0", Offset = "0x26C22F0", VA = "0x1826C3CF0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
