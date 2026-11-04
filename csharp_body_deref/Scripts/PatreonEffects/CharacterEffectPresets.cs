// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.CharacterEffectPresets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/CharacterEffectPresets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x200010C")]
public static class CharacterEffectPresets
{
	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Options;

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x20B67E0", Offset = "0x20B4DE0", VA = "0x1820B67E0")]
	public static CharacterEffectType ParseOrDefault(string raw)
	{
		return default(CharacterEffectType);
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x20B6320", Offset = "0x20B4920", VA = "0x1820B6320")]
	public static CharacterEffectPreset GetPreset(CharacterEffectType type)
	{
		return default(CharacterEffectPreset);
	}
}
