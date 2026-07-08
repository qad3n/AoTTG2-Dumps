using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200015B")]
internal class HeaderInfoTable
{
	[Token(Token = "0x40006F4")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable HeaderHashTable;

	[Token(Token = "0x40006F5")]
	[FieldOffset(Offset = "0x8")]
	private static HeaderInfo UnknownHeaderInfo;

	[Token(Token = "0x40006F6")]
	[FieldOffset(Offset = "0x10")]
	private static HeaderParser SingleParser;

	[Token(Token = "0x40006F7")]
	[FieldOffset(Offset = "0x18")]
	private static HeaderParser MultiParser;

	[Token(Token = "0x170001D7")]
	internal HeaderInfo this[string name]
	{
		[Token(Token = "0x600086D")]
		[Address(RVA = "0x463B670", Offset = "0x463B670", VA = "0x463B670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4640370", Offset = "0x4640370", VA = "0x4640370")]
	private static string[] ParseSingleValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x46403E0", Offset = "0x46403E0", VA = "0x46403E0")]
	private static string[] ParseMultiValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x4640670", Offset = "0x4640670", VA = "0x4640670")]
	static HeaderInfoTable()
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x463DDF0", Offset = "0x463DDF0", VA = "0x463DDF0")]
	public HeaderInfoTable()
	{
	}
}
