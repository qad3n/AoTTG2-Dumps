using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x20000EB")]
public static class CharacterEffectPresets
{
	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] Options;

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x3E1DD80", Offset = "0x3E1DD80", VA = "0x3E1DD80")]
	public static CharacterEffectType ParseOrDefault(string raw)
	{
		return default(CharacterEffectType);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x3E1DF30", Offset = "0x3E1DF30", VA = "0x3E1DF30")]
	public static CharacterEffectPreset GetPreset(CharacterEffectType type)
	{
		return default(CharacterEffectPreset);
	}
}
