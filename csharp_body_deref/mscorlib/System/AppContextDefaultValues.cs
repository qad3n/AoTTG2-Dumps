// ==================== AoTTG2 cross-reference ====================
// Type: System.AppContextDefaultValues
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200019D")]
internal static class AppContextDefaultValues
{
	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly string SwitchEnforceJapaneseEraYearRanges;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly string SwitchFormatJapaneseFirstYearAsANumber;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly string SwitchEnforceLegacyJapaneseDateParsing;

	[Token(Token = "0x6000F3D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void PopulateDefaultValues()
	{
	}

	[Token(Token = "0x6000F3E")]
	[Address(RVA = "0x1B7A7D0", Offset = "0x1B78DD0", VA = "0x181B7A7D0")]
	public static bool TryGetSwitchOverride(string switchName, out bool overrideValue)
	{
		return default(bool);
	}
}
