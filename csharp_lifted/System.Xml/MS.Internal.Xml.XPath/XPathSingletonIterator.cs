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
		[Address(RVA = "0x60944E0", Offset = "0x60934E0", VA = "0x60944E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074A")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C66")]
		[Address(RVA = "0x60944F0", Offset = "0x60934F0", VA = "0x60944F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700074B")]
	public override int Count
	{
		[Token(Token = "0x6001C67")]
		[Address(RVA = "0x6094500", Offset = "0x6093500", VA = "0x6094500", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x6094370", Offset = "0x6093370", VA = "0x6094370")]
	public XPathSingletonIterator(XPathNavigator nav)
	{
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x60943B0", Offset = "0x60933B0", VA = "0x60943B0")]
	public XPathSingletonIterator(XPathNavigator nav, bool moved)
	{
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x60943F0", Offset = "0x60933F0", VA = "0x60943F0")]
	public XPathSingletonIterator(XPathSingletonIterator it)
	{
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x6094450", Offset = "0x6093450", VA = "0x6094450", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x6094510", Offset = "0x6093510", VA = "0x6094510", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x6094530", Offset = "0x6093530", VA = "0x6094530", Slot = "12")]
	public override void Reset()
	{
	}
}
