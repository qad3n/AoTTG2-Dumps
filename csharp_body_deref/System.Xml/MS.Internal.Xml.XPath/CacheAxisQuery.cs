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
		[Address(RVA = "0x4778C00", Offset = "0x4778C00", VA = "0x4778C00", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DD")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A8B")]
		[Address(RVA = "0x4778C50", Offset = "0x4778C50", VA = "0x4778C50", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DE")]
	public override int Count
	{
		[Token(Token = "0x6001A8C")]
		[Address(RVA = "0x4778C60", Offset = "0x4778C60", VA = "0x4778C60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DF")]
	public override QueryProps Properties
	{
		[Token(Token = "0x6001A8D")]
		[Address(RVA = "0x4778CA0", Offset = "0x4778CA0", VA = "0x4778CA0", Slot = "17")]
		get
		{
			return default(QueryProps);
		}
	}

	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x47789B0", Offset = "0x47789B0", VA = "0x47789B0")]
	public CacheAxisQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x4778A50", Offset = "0x4778A50", VA = "0x4778A50")]
	protected CacheAxisQuery(CacheAxisQuery other)
	{
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x4778AF0", Offset = "0x4778AF0", VA = "0x4778AF0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x4778B00", Offset = "0x4778B00", VA = "0x4778B00", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x4778BA0", Offset = "0x4778BA0", VA = "0x4778BA0", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}
}
