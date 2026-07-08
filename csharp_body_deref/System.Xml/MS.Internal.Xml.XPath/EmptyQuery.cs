using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200029B")]
internal sealed class EmptyQuery : Query
{
	[Token(Token = "0x170006ED")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001AD5")]
		[Address(RVA = "0x443D0E0", Offset = "0x443D0E0", VA = "0x443D0E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EE")]
	public override int Count
	{
		[Token(Token = "0x6001AD6")]
		[Address(RVA = "0x443D0F0", Offset = "0x443D0F0", VA = "0x443D0F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006EF")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001AD7")]
		[Address(RVA = "0x443D100", Offset = "0x443D100", VA = "0x443D100", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x170006F0")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001AD8")]
		[Address(RVA = "0x443D110", Offset = "0x443D110", VA = "0x443D110", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006F1")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001ADA")]
		[Address(RVA = "0x443D130", Offset = "0x443D130", VA = "0x443D130", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x443D0B0", Offset = "0x443D0B0", VA = "0x443D0B0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x443D0C0", Offset = "0x443D0C0", VA = "0x443D0C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x443D0D0", Offset = "0x443D0D0", VA = "0x443D0D0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x443D120", Offset = "0x443D120", VA = "0x443D120", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x443D140", Offset = "0x443D140", VA = "0x443D140")]
	public EmptyQuery()
	{
	}
}
