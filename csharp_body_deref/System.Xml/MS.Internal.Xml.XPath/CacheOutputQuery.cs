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
		[Address(RVA = "0x26B6830", Offset = "0x26B4E30", VA = "0x1826B6830", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E1")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A9C")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006E2")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A9D")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E3")]
	public override int Count
	{
		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x26B67F0", Offset = "0x26B4DF0", VA = "0x1826B67F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E4")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0x1AB5F20", Offset = "0x1AB4520", VA = "0x181AB5F20", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x26B6750", Offset = "0x26B4D50", VA = "0x1826B6750")]
	public CacheOutputQuery(Query input)
	{
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x26B6680", Offset = "0x26B4C80", VA = "0x1826B6680")]
	protected CacheOutputQuery(CacheOutputQuery other)
	{
	}

	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x26B5820", Offset = "0x26B3E20", VA = "0x1826B5820", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x1A580D0", Offset = "0x1A566D0", VA = "0x181A580D0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x26B65F0", Offset = "0x26B4BF0", VA = "0x1826B65F0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x26B6580", Offset = "0x26B4B80", VA = "0x1826B6580", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}
}
