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
		[Address(RVA = "0x26D4130", Offset = "0x26D2730", VA = "0x1826D4130", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000730")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001BFD")]
		[Address(RVA = "0x26D1350", Offset = "0x26CF950", VA = "0x1826D1350", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001BF8")]
	[Address(RVA = "0x26D40C0", Offset = "0x26D26C0", VA = "0x1826D40C0")]
	public XPathAncestorQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest, bool matchSelf)
	{
	}

	[Token(Token = "0x6001BF9")]
	[Address(RVA = "0x26D40F0", Offset = "0x26D26F0", VA = "0x1826D40F0")]
	private XPathAncestorQuery(XPathAncestorQuery other)
	{
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x26D3F90", Offset = "0x26D2590", VA = "0x1826D3F90", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x26D3F20", Offset = "0x26D2520", VA = "0x1826D3F20", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
