// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HeaderInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200015A")]
internal class HeaderInfo
{
	[Token(Token = "0x40006EF")]
	[FieldOffset(Offset = "0x10")]
	internal readonly bool IsRequestRestricted;

	[Token(Token = "0x40006F0")]
	[FieldOffset(Offset = "0x11")]
	internal readonly bool IsResponseRestricted;

	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x18")]
	internal readonly HeaderParser Parser;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string HeaderName;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x28")]
	internal readonly bool AllowMultiValues;

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4965410", Offset = "0x4965410", VA = "0x4965410")]
	internal HeaderInfo(string name, bool requestRestricted, bool responseRestricted, bool multi, HeaderParser p)
	{
	}
}
