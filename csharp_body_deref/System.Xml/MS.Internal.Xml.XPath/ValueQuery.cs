// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ValueQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x26D3BB0", Offset = "0x26D21B0", VA = "0x1826D3BB0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000728")]
	public sealed override int CurrentPosition
	{
		[Token(Token = "0x6001BEA")]
		[Address(RVA = "0x26D3B70", Offset = "0x26D2170", VA = "0x1826D3B70", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000729")]
	public sealed override int Count
	{
		[Token(Token = "0x6001BEB")]
		[Address(RVA = "0x26D3B30", Offset = "0x26D2130", VA = "0x1826D3B30", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x26D1150", Offset = "0x26CF750", VA = "0x1826D1150")]
	public ValueQuery()
	{
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x26D1170", Offset = "0x26CF770", VA = "0x1826D1170")]
	protected ValueQuery(ValueQuery other)
	{
	}

	[Token(Token = "0x6001BE8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	public sealed override void Reset()
	{
	}

	[Token(Token = "0x6001BEC")]
	[Address(RVA = "0x26D3AF0", Offset = "0x26D20F0", VA = "0x1826D3AF0", Slot = "15")]
	public sealed override XPathNavigator Advance()
	{
		return null;
	}
}
