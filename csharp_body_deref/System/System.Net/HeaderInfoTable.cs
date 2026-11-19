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

[Token(Token = "0x20002A4")]
internal class HeaderInfoTable
{
	[Token(Token = "0x4000A3B")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable HeaderHashTable;

	[Token(Token = "0x4000A3C")]
	[FieldOffset(Offset = "0x8")]
	private static HeaderInfo UnknownHeaderInfo;

	[Token(Token = "0x4000A3D")]
	[FieldOffset(Offset = "0x10")]
	private static HeaderParser SingleParser;

	[Token(Token = "0x4000A3E")]
	[FieldOffset(Offset = "0x18")]
	private static HeaderParser MultiParser;

	[Token(Token = "0x170003FD")]
	internal HeaderInfo this[string name]
	{
		[Token(Token = "0x600126F")]
		[Address(RVA = "0x62A8310", Offset = "0x62A7310", VA = "0x62A8310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x62ACD50", Offset = "0x62ABD50", VA = "0x62ACD50")]
	private static string[] ParseSingleValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x62ACDC0", Offset = "0x62ABDC0", VA = "0x62ACDC0")]
	private static string[] ParseMultiValue(string value)
	{
		return null;
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x62AD0F0", Offset = "0x62AC0F0", VA = "0x62AD0F0")]
	static HeaderInfoTable()
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x62AA9C0", Offset = "0x62A99C0", VA = "0x62AA9C0")]
	public HeaderInfoTable()
	{
	}
}
