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
		[Address(RVA = "0x60808B0", Offset = "0x607F8B0", VA = "0x60808B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FC")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001AF2")]
		[Address(RVA = "0x6080BA0", Offset = "0x607FBA0", VA = "0x6080BA0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x6080750", Offset = "0x607F750", VA = "0x6080750")]
	public FilterQuery(Query qyParent, Query cond, bool noPosition)
	{
	}

	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x6080800", Offset = "0x607F800", VA = "0x6080800")]
	private FilterQuery(FilterQuery other)
	{
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x6080850", Offset = "0x607F850", VA = "0x6080850", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x60808C0", Offset = "0x607F8C0", VA = "0x60808C0", Slot = "13")]
	public override void SetXsltContext(XsltContext input)
	{
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x60809E0", Offset = "0x607F9E0", VA = "0x60809E0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x6080A60", Offset = "0x607FA60", VA = "0x6080A60")]
	internal bool EvaluatePredicate()
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x6080BD0", Offset = "0x607FBD0", VA = "0x6080BD0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
