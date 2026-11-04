// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathSingletonIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074A")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C66")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700074B")]
	public override int Count
	{
		[Token(Token = "0x6001C67")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x26DF410", Offset = "0x26DDA10", VA = "0x1826DF410")]
	public XPathSingletonIterator(XPathNavigator nav)
	{
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x26DF3B0", Offset = "0x26DD9B0", VA = "0x1826DF3B0")]
	public XPathSingletonIterator(XPathNavigator nav, bool moved)
	{
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x26DF340", Offset = "0x26DD940", VA = "0x1826DF340")]
	public XPathSingletonIterator(XPathSingletonIterator it)
	{
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x26DF280", Offset = "0x26DD880", VA = "0x1826DF280", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x26DF320", Offset = "0x26DD920", VA = "0x1826DF320", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x26D4320", Offset = "0x26D2920", VA = "0x1826D4320", Slot = "12")]
	public override void Reset()
	{
	}
}
