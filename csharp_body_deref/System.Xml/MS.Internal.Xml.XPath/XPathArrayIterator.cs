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
		[Address(RVA = "0x4789F40", Offset = "0x4789F40", VA = "0x4789F40", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000732")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C02")]
		[Address(RVA = "0x478A0A0", Offset = "0x478A0A0", VA = "0x478A0A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000733")]
	public override int Count
	{
		[Token(Token = "0x6001C03")]
		[Address(RVA = "0x478A0B0", Offset = "0x478A0B0", VA = "0x478A0B0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BFE")]
	[Address(RVA = "0x4789CD0", Offset = "0x4789CD0", VA = "0x4789CD0")]
	public XPathArrayIterator(XPathArrayIterator it)
	{
	}

	[Token(Token = "0x6001BFF")]
	[Address(RVA = "0x4789D20", Offset = "0x4789D20", VA = "0x4789D20")]
	public XPathArrayIterator(XPathNodeIterator nodeIterator)
	{
	}

	[Token(Token = "0x6001C00")]
	[Address(RVA = "0x4789EC0", Offset = "0x4789EC0", VA = "0x4789EC0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x478A150", Offset = "0x478A150", VA = "0x478A150", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x478A210", Offset = "0x478A210", VA = "0x478A210", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x478A220", Offset = "0x478A220", VA = "0x478A220", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
