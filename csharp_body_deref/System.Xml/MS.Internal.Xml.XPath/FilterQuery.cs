// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.FilterQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200029E")]
internal sealed class FilterQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E27")]
	[FieldOffset(Offset = "0x58")]
	private Query _cond;

	[Token(Token = "0x4000E28")]
	[FieldOffset(Offset = "0x60")]
	private bool _noPosition;

	[Token(Token = "0x170006FB")]
	public Query Condition
	{
		[Token(Token = "0x6001AEE")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FC")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001AF2")]
		[Address(RVA = "0x26B8A50", Offset = "0x26B7050", VA = "0x1826B8A50", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x26B8930", Offset = "0x26B6F30", VA = "0x1826B8930")]
	public FilterQuery(Query qyParent, Query cond, bool noPosition)
	{
	}

	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x26B8980", Offset = "0x26B6F80", VA = "0x1826B8980")]
	private FilterQuery(FilterQuery other)
	{
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x26B87B0", Offset = "0x26B6DB0", VA = "0x1826B87B0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x26B8810", Offset = "0x26B6E10", VA = "0x1826B8810", Slot = "13")]
	public override void SetXsltContext(XsltContext input)
	{
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x26B82D0", Offset = "0x26B68D0", VA = "0x1826B82D0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x26B85E0", Offset = "0x26B6BE0", VA = "0x1826B85E0")]
	internal bool EvaluatePredicate()
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x26B84E0", Offset = "0x26B6AE0", VA = "0x1826B84E0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
