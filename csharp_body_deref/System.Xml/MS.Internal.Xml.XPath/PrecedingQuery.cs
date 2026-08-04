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
		[Address(RVA = "0x47848C0", Offset = "0x47848C0", VA = "0x47848C0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x47843A0", Offset = "0x47843A0", VA = "0x47843A0")]
	public PrecedingQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x4784440", Offset = "0x4784440", VA = "0x4784440")]
	private PrecedingQuery(PrecedingQuery other)
	{
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x47844D0", Offset = "0x47844D0", VA = "0x47844D0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x4784570", Offset = "0x4784570", VA = "0x4784570", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001B9A")]
	[Address(RVA = "0x4784870", Offset = "0x4784870", VA = "0x4784870", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
