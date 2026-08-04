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
		[Address(RVA = "0x47797C0", Offset = "0x47797C0", VA = "0x47797C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E1")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A9C")]
		[Address(RVA = "0x4779810", Offset = "0x4779810", VA = "0x4779810", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006E2")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A9D")]
		[Address(RVA = "0x4779820", Offset = "0x4779820", VA = "0x4779820", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E3")]
	public override int Count
	{
		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x4779830", Offset = "0x4779830", VA = "0x4779830", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006E4")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0x4779870", Offset = "0x4779870", VA = "0x4779870", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x4779550", Offset = "0x4779550", VA = "0x4779550")]
	public CacheOutputQuery(Query input)
	{
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x47795E0", Offset = "0x47795E0", VA = "0x47795E0")]
	protected CacheOutputQuery(CacheOutputQuery other)
	{
	}

	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x47796A0", Offset = "0x47796A0", VA = "0x47796A0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x47796B0", Offset = "0x47796B0", VA = "0x47796B0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x47796E0", Offset = "0x47796E0", VA = "0x47796E0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x4779760", Offset = "0x4779760", VA = "0x4779760", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}
}
