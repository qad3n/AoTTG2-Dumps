using System.Collections.Generic;
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000291")]
internal abstract class CacheOutputQuery : Query
{
	[Token(Token = "0x4000E15")]
	[FieldOffset(Offset = "0x18")]
	internal Query input;

	[Token(Token = "0x4000E16")]
	[FieldOffset(Offset = "0x20")]
	protected List<XPathNavigator> outputBuffer;

	[Token(Token = "0x170006E0")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001A9B")]
		[Address(RVA = "0x443C060", Offset = "0x443C060", VA = "0x443C060", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E1")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A9C")]
		[Address(RVA = "0x443C0B0", Offset = "0x443C0B0", VA = "0x443C0B0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006E2")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A9D")]
		[Address(RVA = "0x443C0C0", Offset = "0x443C0C0", VA = "0x443C0C0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E3")]
	public override int Count
	{
		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x443C0D0", Offset = "0x443C0D0", VA = "0x443C0D0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E4")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0x443C110", Offset = "0x443C110", VA = "0x443C110", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x443BDF0", Offset = "0x443BDF0", VA = "0x443BDF0")]
	public CacheOutputQuery(Query input)
	{
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x443BE80", Offset = "0x443BE80", VA = "0x443BE80")]
	protected CacheOutputQuery(CacheOutputQuery other)
	{
	}

	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x443BF40", Offset = "0x443BF40", VA = "0x443BF40", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x443BF50", Offset = "0x443BF50", VA = "0x443BF50", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x443BF80", Offset = "0x443BF80", VA = "0x443BF80", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x443C000", Offset = "0x443C000", VA = "0x443C000", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}
}
