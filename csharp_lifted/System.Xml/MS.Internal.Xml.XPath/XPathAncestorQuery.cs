// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathAncestorQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C5")]
internal sealed class XPathAncestorQuery : CacheAxisQuery
{
	[Token(Token = "0x4000EA5")]
	[FieldOffset(Offset = "0x60")]
	private bool _matchSelf;

	[Token(Token = "0x1700072F")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001BFC")]
		[Address(RVA = "0x608EEC0", Offset = "0x608DEC0", VA = "0x608EEC0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000730")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001BFD")]
		[Address(RVA = "0x608EF00", Offset = "0x608DF00", VA = "0x608EF00", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001BF8")]
	[Address(RVA = "0x608AEC0", Offset = "0x6089EC0", VA = "0x608AEC0")]
	public XPathAncestorQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest, bool matchSelf)
	{
	}

	[Token(Token = "0x6001BF9")]
	[Address(RVA = "0x608ED10", Offset = "0x608DD10", VA = "0x608ED10")]
	private XPathAncestorQuery(XPathAncestorQuery other)
	{
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x608ED40", Offset = "0x608DD40", VA = "0x608ED40", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x608EE60", Offset = "0x608DE60", VA = "0x608EE60", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
