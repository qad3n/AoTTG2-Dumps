// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.DaylightTimeStruct
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A2")]
internal readonly struct DaylightTimeStruct
{
	[Token(Token = "0x400181A")]
	[FieldOffset(Offset = "0x0")]
	public readonly DateTime Start;

	[Token(Token = "0x400181B")]
	[FieldOffset(Offset = "0x8")]
	public readonly DateTime End;

	[Token(Token = "0x400181C")]
	[FieldOffset(Offset = "0x10")]
	public readonly TimeSpan Delta;

	[Token(Token = "0x6002C1A")]
	[Address(RVA = "0x3C4A000", Offset = "0x3C4A000", VA = "0x3C4A000")]
	public DaylightTimeStruct(DateTime start, DateTime end, TimeSpan delta)
	{
	}
}
