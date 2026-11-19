// ==================== AoTTG2 cross-reference ====================
// Type: System.AppContextDefaultValues
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000175")]
internal static class AppContextDefaultValues
{
	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly string SwitchEnforceJapaneseEraYearRanges;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly string SwitchFormatJapaneseFirstYearAsANumber;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly string SwitchEnforceLegacyJapaneseDateParsing;

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x5508540", Offset = "0x5507540", VA = "0x5508540")]
	public static void PopulateDefaultValues()
	{
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x5508550", Offset = "0x5507550", VA = "0x5508550")]
	public static bool TryGetSwitchOverride(string switchName, out bool overrideValue)
	{
		return default(bool);
	}
}
