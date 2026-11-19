// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.CacheOutputQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x607EF60", Offset = "0x607DF60", VA = "0x607EF60", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E1")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A9C")]
		[Address(RVA = "0x607EFB0", Offset = "0x607DFB0", VA = "0x607EFB0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006E2")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A9D")]
		[Address(RVA = "0x607EFC0", Offset = "0x607DFC0", VA = "0x607EFC0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E3")]
	public override int Count
	{
		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x607EFD0", Offset = "0x607DFD0", VA = "0x607EFD0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E4")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0x607F010", Offset = "0x607E010", VA = "0x607F010", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x607ECF0", Offset = "0x607DCF0", VA = "0x607ECF0")]
	public CacheOutputQuery(Query input)
	{
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x607ED80", Offset = "0x607DD80", VA = "0x607ED80")]
	protected CacheOutputQuery(CacheOutputQuery other)
	{
	}

	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x607EE40", Offset = "0x607DE40", VA = "0x607EE40", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x607EE50", Offset = "0x607DE50", VA = "0x607EE50", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x607EE80", Offset = "0x607DE80", VA = "0x607EE80", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x607EF00", Offset = "0x607DF00", VA = "0x607EF00", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}
}
