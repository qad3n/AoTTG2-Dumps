// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.CharacterEffectPresets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/CharacterEffectPresets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x20000EC")]
public static class CharacterEffectPresets
{
	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Options;

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x410CE70", Offset = "0x410CE70", VA = "0x410CE70")]
	public static CharacterEffectType ParseOrDefault(string raw)
	{
		return default(CharacterEffectType);
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x410D020", Offset = "0x410D020", VA = "0x410D020")]
	public static CharacterEffectPreset GetPreset(CharacterEffectType type)
	{
		return default(CharacterEffectPreset);
	}
}
