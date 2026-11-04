// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.DescendantOverDescendantQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000299")]
internal sealed class DescendantOverDescendantQuery : DescendantBaseQuery
{
	[Token(Token = "0x4000E20")]
	[FieldOffset(Offset = "0x60")]
	private int _level;

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x26B74C0", Offset = "0x26B5AC0", VA = "0x1826B74C0")]
	public DescendantOverDescendantQuery(Query qyParent, bool matchSelf, string name, string prefix, XPathNodeType typeTest, bool abbrAxis)
	{
	}

	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x26B7480", Offset = "0x26B5A80", VA = "0x1826B7480")]
	private DescendantOverDescendantQuery(DescendantOverDescendantQuery other)
	{
	}

	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x26B7430", Offset = "0x26B5A30", VA = "0x1826B7430", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x26B7170", Offset = "0x26B5770", VA = "0x1826B7170", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x26B7370", Offset = "0x26B5970", VA = "0x1826B7370")]
	private bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x26B73B0", Offset = "0x26B59B0", VA = "0x1826B73B0")]
	private bool MoveUpUntilNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x26B7300", Offset = "0x26B5900", VA = "0x1826B7300", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
