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
		[Address(RVA = "0x4440710", Offset = "0x4440710", VA = "0x4440710", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070A")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001B28")]
		[Address(RVA = "0x4440740", Offset = "0x4440740", VA = "0x4440740", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x443C2E0", Offset = "0x443C2E0", VA = "0x443C2E0")]
	internal IteratorFilter(XPathNodeIterator innerIterator, string name)
	{
	}

	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x4440600", Offset = "0x4440600", VA = "0x4440600")]
	private IteratorFilter(IteratorFilter it)
	{
	}

	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x4440670", Offset = "0x4440670", VA = "0x4440670", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x4440750", Offset = "0x4440750", VA = "0x4440750", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
