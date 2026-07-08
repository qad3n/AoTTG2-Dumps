using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002D1")]
internal class XPathSingletonIterator : ResetableIterator
{
	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x18")]
	private XPathNavigator _nav;

	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0x20")]
	private int _position;

	[Token(Token = "0x17000749")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C65")]
		[Address(RVA = "0x4451750", Offset = "0x4451750", VA = "0x4451750", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074A")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C66")]
		[Address(RVA = "0x4451760", Offset = "0x4451760", VA = "0x4451760", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700074B")]
	public override int Count
	{
		[Token(Token = "0x6001C67")]
		[Address(RVA = "0x4451770", Offset = "0x4451770", VA = "0x4451770", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x44515E0", Offset = "0x44515E0", VA = "0x44515E0")]
	public XPathSingletonIterator(XPathNavigator nav)
	{
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x4451620", Offset = "0x4451620", VA = "0x4451620")]
	public XPathSingletonIterator(XPathNavigator nav, bool moved)
	{
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x4451660", Offset = "0x4451660", VA = "0x4451660")]
	public XPathSingletonIterator(XPathSingletonIterator it)
	{
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x44516C0", Offset = "0x44516C0", VA = "0x44516C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x4451780", Offset = "0x4451780", VA = "0x4451780", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x44517A0", Offset = "0x44517A0", VA = "0x44517A0", Slot = "12")]
	public override void Reset()
	{
	}
}
