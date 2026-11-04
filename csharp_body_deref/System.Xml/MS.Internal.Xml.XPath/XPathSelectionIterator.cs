// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathSelectionIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x25279D0", Offset = "0x2525FD0", VA = "0x1825279D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000747")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C5A")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000748")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C5B")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x26DEFB0", Offset = "0x26DD5B0", VA = "0x1826DEFB0")]
	internal XPathSelectionIterator(XPathNavigator nav, Query query)
	{
	}

	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x26DF030", Offset = "0x26DD630", VA = "0x1826DF030")]
	protected XPathSelectionIterator(XPathSelectionIterator it)
	{
	}

	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x2527970", Offset = "0x2525F70", VA = "0x182527970", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001C58")]
	[Address(RVA = "0x26DEF10", Offset = "0x26DD510", VA = "0x1826DEF10", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C5C")]
	[Address(RVA = "0x26DEDB0", Offset = "0x26DD3B0", VA = "0x1826DEDB0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
