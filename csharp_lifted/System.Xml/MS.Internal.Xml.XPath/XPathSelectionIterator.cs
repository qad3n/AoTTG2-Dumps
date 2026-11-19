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
		[Address(RVA = "0x60941E0", Offset = "0x60931E0", VA = "0x60941E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000747")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C5A")]
		[Address(RVA = "0x6094210", Offset = "0x6093210", VA = "0x6094210", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000748")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C5B")]
		[Address(RVA = "0x6094220", Offset = "0x6093220", VA = "0x6094220", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x6093FA0", Offset = "0x6092FA0", VA = "0x6093FA0")]
	internal XPathSelectionIterator(XPathNavigator nav, Query query)
	{
	}

	[Token(Token = "0x6001C56")]
	[Address(RVA = "0x6094010", Offset = "0x6093010", VA = "0x6094010")]
	protected XPathSelectionIterator(XPathSelectionIterator it)
	{
	}

	[Token(Token = "0x6001C57")]
	[Address(RVA = "0x6094120", Offset = "0x6093120", VA = "0x6094120", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001C58")]
	[Address(RVA = "0x6094150", Offset = "0x6093150", VA = "0x6094150", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C5C")]
	[Address(RVA = "0x6094230", Offset = "0x6093230", VA = "0x6094230", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
