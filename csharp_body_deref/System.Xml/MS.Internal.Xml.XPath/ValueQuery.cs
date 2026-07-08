using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C2")]
internal abstract class ValueQuery : Query
{
	[Token(Token = "0x17000727")]
	public sealed override XPathNavigator Current
	{
		[Token(Token = "0x6001BE9")]
		[Address(RVA = "0x444BEA0", Offset = "0x444BEA0", VA = "0x444BEA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000728")]
	public sealed override int CurrentPosition
	{
		[Token(Token = "0x6001BEA")]
		[Address(RVA = "0x444BEE0", Offset = "0x444BEE0", VA = "0x444BEE0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000729")]
	public sealed override int Count
	{
		[Token(Token = "0x6001BEB")]
		[Address(RVA = "0x444BF20", Offset = "0x444BF20", VA = "0x444BF20", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x44495F0", Offset = "0x44495F0", VA = "0x44495F0")]
	public ValueQuery()
	{
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x44498C0", Offset = "0x44498C0", VA = "0x44498C0")]
	protected ValueQuery(ValueQuery other)
	{
	}

	[Token(Token = "0x6001BE8")]
	[Address(RVA = "0x444BE90", Offset = "0x444BE90", VA = "0x444BE90", Slot = "12")]
	public sealed override void Reset()
	{
	}

	[Token(Token = "0x6001BEC")]
	[Address(RVA = "0x444BF60", Offset = "0x444BF60", VA = "0x444BF60", Slot = "15")]
	public sealed override XPathNavigator Advance()
	{
		return null;
	}
}
