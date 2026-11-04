// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.DescendantBaseQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000297")]
internal abstract class DescendantBaseQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E1D")]
	[FieldOffset(Offset = "0x58")]
	protected bool matchSelf;

	[Token(Token = "0x4000E1E")]
	[FieldOffset(Offset = "0x59")]
	protected bool abbrAxis;

	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x26B6FF0", Offset = "0x26B55F0", VA = "0x1826B6FF0")]
	public DescendantBaseQuery(Query qyParent, string Name, string Prefix, XPathNodeType Type, bool matchSelf, bool abbrAxis)
	{
	}

	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x26B70B0", Offset = "0x26B56B0", VA = "0x1826B70B0")]
	public DescendantBaseQuery(DescendantBaseQuery other)
	{
	}
}
