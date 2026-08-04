// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HeaderInfoTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4960770", Offset = "0x4960770", VA = "0x4960770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4965470", Offset = "0x4965470", VA = "0x4965470")]
	private static string[] ParseSingleValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x49654E0", Offset = "0x49654E0", VA = "0x49654E0")]
	private static string[] ParseMultiValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x4965770", Offset = "0x4965770", VA = "0x4965770")]
	static HeaderInfoTable()
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x4962EF0", Offset = "0x4962EF0", VA = "0x4962EF0")]
	public HeaderInfoTable()
	{
	}
}
