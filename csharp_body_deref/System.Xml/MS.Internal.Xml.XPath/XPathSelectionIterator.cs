using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002CF")]
internal class XPathSelectionIterator : ResetableIterator
{
	[Token(Token = "0x4000EEC")]
	[FieldOffset(Offset = "0x18")]
	private XPathNavigator _nav;

	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x20")]
	private Query _query;

	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x28")]
	private int _position;

	[Token(Token = "0x17000746")]
	public override int Count
	{
		[Token(Token = "0x6001C59")]
		[Address(RVA = "0x4451450", Offset = "0x4451450", VA = "0x4451450", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000747")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C5A")]
		[Address(RVA = "0x4451480", Offset = "0x4451480", VA = "0x4451480", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000748")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C5B")]
		[Address(RVA = "0x4451490", Offset = "0x4451490", VA = "0x4451490", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x4451210", Offset = "0x4451210", VA = "0x4451210")]
	internal XPathSelectionIterator(XPathNavigator nav, Query query)
	{
	}

	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x4451280", Offset = "0x4451280", VA = "0x4451280")]
	protected XPathSelectionIterator(XPathSelectionIterator it)
	{
	}

	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x4451390", Offset = "0x4451390", VA = "0x4451390", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001C58")]
	[Address(RVA = "0x44513C0", Offset = "0x44513C0", VA = "0x44513C0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C5C")]
	[Address(RVA = "0x44514A0", Offset = "0x44514A0", VA = "0x44514A0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
