// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.DaylightTimeStruct
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x200054F")]
internal readonly struct DaylightTimeStruct
{
	[Token(Token = "0x40015CB")]
	[FieldOffset(Offset = "0x0")]
	public readonly DateTime Start;

	[Token(Token = "0x40015CC")]
	[FieldOffset(Offset = "0x8")]
	public readonly DateTime End;

	[Token(Token = "0x40015CD")]
	[FieldOffset(Offset = "0x10")]
	public readonly TimeSpan Delta;

	[Token(Token = "0x6002906")]
	[Address(RVA = "0x53FF620", Offset = "0x53FE620", VA = "0x53FF620")]
	public DaylightTimeStruct(DateTime start, DateTime end, TimeSpan delta)
	{
	}
}
