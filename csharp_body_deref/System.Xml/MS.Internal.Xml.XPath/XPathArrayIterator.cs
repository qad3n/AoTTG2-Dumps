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
		[Address(RVA = "0x444C7E0", Offset = "0x444C7E0", VA = "0x444C7E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000732")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C02")]
		[Address(RVA = "0x444C940", Offset = "0x444C940", VA = "0x444C940", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000733")]
	public override int Count
	{
		[Token(Token = "0x6001C03")]
		[Address(RVA = "0x444C950", Offset = "0x444C950", VA = "0x444C950", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BFE")]
	[Address(RVA = "0x444C570", Offset = "0x444C570", VA = "0x444C570")]
	public XPathArrayIterator(XPathArrayIterator it)
	{
	}

	[Token(Token = "0x6001BFF")]
	[Address(RVA = "0x444C5C0", Offset = "0x444C5C0", VA = "0x444C5C0")]
	public XPathArrayIterator(XPathNodeIterator nodeIterator)
	{
	}

	[Token(Token = "0x6001C00")]
	[Address(RVA = "0x444C760", Offset = "0x444C760", VA = "0x444C760", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x444C9F0", Offset = "0x444C9F0", VA = "0x444C9F0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x444CAB0", Offset = "0x444CAB0", VA = "0x444CAB0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x444CAC0", Offset = "0x444CAC0", VA = "0x444CAC0", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
