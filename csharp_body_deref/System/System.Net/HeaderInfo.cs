// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HeaderInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002E2")]
internal class HeaderInfo
{
	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x10")]
	internal readonly bool IsRequestRestricted;

	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x11")]
	internal readonly bool IsResponseRestricted;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x18")]
	internal readonly HeaderParser Parser;

	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string HeaderName;

	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x28")]
	internal readonly bool AllowMultiValues;

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x27CF230", Offset = "0x27CD830", VA = "0x1827CF230")]
	internal HeaderInfo(string name, bool requestRestricted, bool responseRestricted, bool multi, HeaderParser p)
	{
	}
}
