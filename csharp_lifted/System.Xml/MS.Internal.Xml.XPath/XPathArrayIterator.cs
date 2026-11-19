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
		[Address(RVA = "0x608F180", Offset = "0x608E180", VA = "0x608F180", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000732")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C02")]
		[Address(RVA = "0x608F2E0", Offset = "0x608E2E0", VA = "0x608F2E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000733")]
	public override int Count
	{
		[Token(Token = "0x6001C03")]
		[Address(RVA = "0x608F2F0", Offset = "0x608E2F0", VA = "0x608F2F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BFE")]
	[Address(RVA = "0x608EF10", Offset = "0x608DF10", VA = "0x608EF10")]
	public XPathArrayIterator(XPathArrayIterator it)
	{
	}

	[Token(Token = "0x6001BFF")]
	[Address(RVA = "0x608EF60", Offset = "0x608DF60", VA = "0x608EF60")]
	public XPathArrayIterator(XPathNodeIterator nodeIterator)
	{
	}

	[Token(Token = "0x6001C00")]
	[Address(RVA = "0x608F100", Offset = "0x608E100", VA = "0x608F100", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x608F390", Offset = "0x608E390", VA = "0x608F390", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x608F450", Offset = "0x608E450", VA = "0x608F450", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x608F460", Offset = "0x608E460", VA = "0x608F460", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
