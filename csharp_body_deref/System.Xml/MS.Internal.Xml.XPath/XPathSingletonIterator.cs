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
		[Address(RVA = "0x478EEB0", Offset = "0x478EEB0", VA = "0x478EEB0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074A")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C66")]
		[Address(RVA = "0x478EEC0", Offset = "0x478EEC0", VA = "0x478EEC0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700074B")]
	public override int Count
	{
		[Token(Token = "0x6001C67")]
		[Address(RVA = "0x478EED0", Offset = "0x478EED0", VA = "0x478EED0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C61")]
	[Address(RVA = "0x478ED40", Offset = "0x478ED40", VA = "0x478ED40")]
	public XPathSingletonIterator(XPathNavigator nav)
	{
	}

	[Token(Token = "0x6001C62")]
	[Address(RVA = "0x478ED80", Offset = "0x478ED80", VA = "0x478ED80")]
	public XPathSingletonIterator(XPathNavigator nav, bool moved)
	{
	}

	[Token(Token = "0x6001C63")]
	[Address(RVA = "0x478EDC0", Offset = "0x478EDC0", VA = "0x478EDC0")]
	public XPathSingletonIterator(XPathSingletonIterator it)
	{
	}

	[Token(Token = "0x6001C64")]
	[Address(RVA = "0x478EE20", Offset = "0x478EE20", VA = "0x478EE20", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C68")]
	[Address(RVA = "0x478EEE0", Offset = "0x478EEE0", VA = "0x478EEE0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C69")]
	[Address(RVA = "0x478EF00", Offset = "0x478EF00", VA = "0x478EF00", Slot = "12")]
	public override void Reset()
	{
	}
}
