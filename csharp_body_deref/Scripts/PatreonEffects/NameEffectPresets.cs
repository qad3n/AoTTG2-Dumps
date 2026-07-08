using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x20000F2")]
public static class NameEffectPresets
{
	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x3F37520", Offset = "0x3F37520", VA = "0x3F37520")]
	public static NameEffectSettings GetPreset(NameEffectType type)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x3F37C50", Offset = "0x3F37C50", VA = "0x3F37C50")]
	public static bool TryResolve(string raw, out NameEffectType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x3F37D70", Offset = "0x3F37D70", VA = "0x3F37D70")]
	private static bool IsSupportedEffect(NameEffectType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x3F353B0", Offset = "0x3F353B0", VA = "0x3F353B0")]
	public static NameEffectSettings Holographic()
	{
		return null;
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x3F376A0", Offset = "0x3F376A0", VA = "0x3F376A0")]
	public static NameEffectSettings Shimmer()
	{
		return null;
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x3F37790", Offset = "0x3F37790", VA = "0x3F37790")]
	public static NameEffectSettings Pop()
	{
		return null;
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x3F37890", Offset = "0x3F37890", VA = "0x3F37890")]
	public static NameEffectSettings Ember()
	{
		return null;
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x3F37980", Offset = "0x3F37980", VA = "0x3F37980")]
	public static NameEffectSettings Waves()
	{
		return null;
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x3F37A80", Offset = "0x3F37A80", VA = "0x3F37A80")]
	public static NameEffectSettings Electric()
	{
		return null;
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x3F37B70", Offset = "0x3F37B70", VA = "0x3F37B70")]
	public static NameEffectSettings Outline()
	{
		return null;
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x3F37D90", Offset = "0x3F37D90", VA = "0x3F37D90")]
	private static bool IsLegacyEffect(string raw)
	{
		return default(bool);
	}
}
