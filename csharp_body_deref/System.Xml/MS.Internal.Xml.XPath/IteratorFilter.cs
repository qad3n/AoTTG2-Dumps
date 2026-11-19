// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.IteratorFilter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A8")]
internal class IteratorFilter : XPathNodeIterator
{
	[Token(Token = "0x4000E53")]
	[FieldOffset(Offset = "0x18")]
	private XPathNodeIterator _innerIterator;

	[Token(Token = "0x4000E54")]
	[FieldOffset(Offset = "0x20")]
	private string _name;

	[Token(Token = "0x4000E55")]
	[FieldOffset(Offset = "0x28")]
	private int _position;

	[Token(Token = "0x17000709")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001B27")]
		[Address(RVA = "0x6083370", Offset = "0x6082370", VA = "0x6083370", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070A")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001B28")]
		[Address(RVA = "0x60833A0", Offset = "0x60823A0", VA = "0x60833A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x607F1D0", Offset = "0x607E1D0", VA = "0x607F1D0")]
	internal IteratorFilter(XPathNodeIterator innerIterator, string name)
	{
	}

	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x6083260", Offset = "0x6082260", VA = "0x6083260")]
	private IteratorFilter(IteratorFilter it)
	{
	}

	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x60832D0", Offset = "0x60822D0", VA = "0x60832D0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x60833B0", Offset = "0x60823B0", VA = "0x60833B0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
