// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.XPathArrayIterator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Diagnostics;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C6")]
[DebuggerDisplay("Position={CurrentPosition}, Current={debuggerDisplayProxy, nq}")]
internal class XPathArrayIterator : ResetableIterator
{
	[Token(Token = "0x4000EA6")]
	[FieldOffset(Offset = "0x18")]
	protected IList list;

	[Token(Token = "0x4000EA7")]
	[FieldOffset(Offset = "0x20")]
	protected int index;

	[Token(Token = "0x17000731")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C01")]
		[Address(RVA = "0x26D4560", Offset = "0x26D2B60", VA = "0x1826D4560", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000732")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C02")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000733")]
	public override int Count
	{
		[Token(Token = "0x6001C03")]
		[Address(RVA = "0x26D4510", Offset = "0x26D2B10", VA = "0x1826D4510", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BFE")]
	[Address(RVA = "0x26D4330", Offset = "0x26D2930", VA = "0x1826D4330")]
	public XPathArrayIterator(XPathArrayIterator it)
	{
	}

	[Token(Token = "0x6001BFF")]
	[Address(RVA = "0x26D4380", Offset = "0x26D2980", VA = "0x1826D4380")]
	public XPathArrayIterator(XPathNodeIterator nodeIterator)
	{
	}

	[Token(Token = "0x6001C00")]
	[Address(RVA = "0x26D4180", Offset = "0x26D2780", VA = "0x1826D4180", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x26D42B0", Offset = "0x26D28B0", VA = "0x1826D42B0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x26D4320", Offset = "0x26D2920", VA = "0x1826D4320", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x26D4200", Offset = "0x26D2800", VA = "0x1826D4200", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
