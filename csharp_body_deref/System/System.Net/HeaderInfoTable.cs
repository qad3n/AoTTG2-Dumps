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

[Token(Token = "0x20002E3")]
internal class HeaderInfoTable
{
	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable HeaderHashTable;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x8")]
	private static HeaderInfo UnknownHeaderInfo;

	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x10")]
	private static HeaderParser SingleParser;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x18")]
	private static HeaderParser MultiParser;

	[Token(Token = "0x1700042C")]
	internal HeaderInfo this[string name]
	{
		[Token(Token = "0x600142D")]
		[Address(RVA = "0x27CF140", Offset = "0x27CD740", VA = "0x1827CF140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x27CC990", Offset = "0x27CAF90", VA = "0x1827CC990")]
	private static string[] ParseSingleValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x27CC790", Offset = "0x27CAD90", VA = "0x1827CC790")]
	private static string[] ParseMultiValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x27CCA10", Offset = "0x27CB010", VA = "0x1827CCA10")]
	static HeaderInfoTable()
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public HeaderInfoTable()
	{
	}
}
