// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HeaderInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002A3")]
internal class HeaderInfo
{
	[Token(Token = "0x4000A36")]
	[FieldOffset(Offset = "0x10")]
	internal readonly bool IsRequestRestricted;

	[Token(Token = "0x4000A37")]
	[FieldOffset(Offset = "0x11")]
	internal readonly bool IsResponseRestricted;

	[Token(Token = "0x4000A38")]
	[FieldOffset(Offset = "0x18")]
	internal readonly HeaderParser Parser;

	[Token(Token = "0x4000A39")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string HeaderName;

	[Token(Token = "0x4000A3A")]
	[FieldOffset(Offset = "0x28")]
	internal readonly bool AllowMultiValues;

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x62ACCF0", Offset = "0x62ABCF0", VA = "0x62ACCF0")]
	internal HeaderInfo(string name, bool requestRestricted, bool responseRestricted, bool multi, HeaderParser p)
	{
	}
}
