// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.CacheAxisQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x607E3A0", Offset = "0x607D3A0", VA = "0x607E3A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DD")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A8B")]
		[Address(RVA = "0x607E3F0", Offset = "0x607D3F0", VA = "0x607E3F0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DE")]
	public override int Count
	{
		[Token(Token = "0x6001A8C")]
		[Address(RVA = "0x607E400", Offset = "0x607D400", VA = "0x607E400", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DF")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001A8D")]
		[Address(RVA = "0x607E440", Offset = "0x607D440", VA = "0x607E440", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x607E150", Offset = "0x607D150", VA = "0x607E150")]
	public CacheAxisQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x607E1F0", Offset = "0x607D1F0", VA = "0x607E1F0")]
	protected CacheAxisQuery(CacheAxisQuery other)
	{
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x607E290", Offset = "0x607D290", VA = "0x607E290", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x607E2A0", Offset = "0x607D2A0", VA = "0x607E2A0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x607E340", Offset = "0x607D340", VA = "0x607E340", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}
}
