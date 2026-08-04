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
	[FieldOffset(Offset = "0x58")]
	private int _level;

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x477A360", Offset = "0x477A360", VA = "0x477A360")]
	public DescendantOverDescendantQuery(Query qyParent, bool matchSelf, string name, string prefix, XPathNodeType typeTest, bool abbrAxis)
	{
	}

	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x477A390", Offset = "0x477A390", VA = "0x477A390")]
	private DescendantOverDescendantQuery(DescendantOverDescendantQuery other)
	{
	}

	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x477A3D0", Offset = "0x477A3D0", VA = "0x477A3D0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x477A420", Offset = "0x477A420", VA = "0x477A420", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x477A5D0", Offset = "0x477A5D0", VA = "0x477A5D0")]
	private bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x477A610", Offset = "0x477A610", VA = "0x477A610")]
	private bool MoveUpUntilNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x477A670", Offset = "0x477A670", VA = "0x477A670", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
