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
		[Address(RVA = "0x443DA80", Offset = "0x443DA80", VA = "0x443DA80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FC")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001AF2")]
		[Address(RVA = "0x443DD80", Offset = "0x443DD80", VA = "0x443DD80", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x443D920", Offset = "0x443D920", VA = "0x443D920")]
	public FilterQuery(Query qyParent, Query cond, bool noPosition)
	{
	}

	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x443D9D0", Offset = "0x443D9D0", VA = "0x443D9D0")]
	private FilterQuery(FilterQuery other)
	{
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x443DA20", Offset = "0x443DA20", VA = "0x443DA20", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x443DA90", Offset = "0x443DA90", VA = "0x443DA90", Slot = "13")]
	public override void SetXsltContext(XsltContext input)
	{
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x443DBC0", Offset = "0x443DBC0", VA = "0x443DBC0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x443DC40", Offset = "0x443DC40", VA = "0x443DC40")]
	internal bool EvaluatePredicate()
	{
		return default(bool);
	}

	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x443DDB0", Offset = "0x443DDB0", VA = "0x443DDB0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
