using System.Collections.Generic;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200028F")]
internal abstract class CacheAxisQuery : BaseAxisQuery
{
	[Token(Token = "0x4000E10")]
	[FieldOffset(Offset = "0x58")]
	protected List<XPathNavigator> outputBuffer;

	[Token(Token = "0x170006DC")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001A8A")]
		[Address(RVA = "0x443B4A0", Offset = "0x443B4A0", VA = "0x443B4A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DD")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A8B")]
		[Address(RVA = "0x443B4F0", Offset = "0x443B4F0", VA = "0x443B4F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DE")]
	public override int Count
	{
		[Token(Token = "0x6001A8C")]
		[Address(RVA = "0x443B500", Offset = "0x443B500", VA = "0x443B500", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DF")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001A8D")]
		[Address(RVA = "0x443B540", Offset = "0x443B540", VA = "0x443B540", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x443B250", Offset = "0x443B250", VA = "0x443B250")]
	public CacheAxisQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x443B2F0", Offset = "0x443B2F0", VA = "0x443B2F0")]
	protected CacheAxisQuery(CacheAxisQuery other)
	{
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x443B390", Offset = "0x443B390", VA = "0x443B390", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x443B3A0", Offset = "0x443B3A0", VA = "0x443B3A0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x443B440", Offset = "0x443B440", VA = "0x443B440", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}
}
