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
		[Address(RVA = "0x1A56060", Offset = "0x1A54660", VA = "0x181A56060", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070A")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001B28")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x26BB3A0", Offset = "0x26B99A0", VA = "0x1826BB3A0")]
	internal IteratorFilter(XPathNodeIterator innerIterator, string name)
	{
	}

	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x26BB3F0", Offset = "0x26B99F0", VA = "0x1826BB3F0")]
	private IteratorFilter(IteratorFilter it)
	{
	}

	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x26BB270", Offset = "0x26B9870", VA = "0x1826BB270", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x26BB310", Offset = "0x26B9910", VA = "0x1826BB310", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
