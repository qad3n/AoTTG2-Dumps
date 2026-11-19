// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.CharacterEffectPresets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/CharacterEffectPresets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x2000080")]
public static class CharacterEffectPresets
{
	[Token(Token = "0x400027D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Options;

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x57776A0", Offset = "0x57766A0", VA = "0x57776A0")]
	public static CharacterEffectType ParseOrDefault(string raw)
	{
		return default(CharacterEffectType);
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x5777880", Offset = "0x5776880", VA = "0x5777880")]
	public static CharacterEffectPreset GetPreset(CharacterEffectType type)
	{
		return default(CharacterEffectPreset);
	}
}
