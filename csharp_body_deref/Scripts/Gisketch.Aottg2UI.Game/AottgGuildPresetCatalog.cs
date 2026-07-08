using Il2CppDummyDll;
using PatreonEffects;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000172")]
internal static class AottgGuildPresetCatalog
{
	[Token(Token = "0x4000869")]
	public const string Custom = "Custom";

	[Token(Token = "0x400086A")]
	public const string Team = "aottg2_developer_team";

	[Token(Token = "0x400086B")]
	public const string Supporter = "supporter";

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x40E8870", Offset = "0x40E8870", VA = "0x40E8870")]
	public static bool TryGet(string id, out AottgGuildPresetDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x40E8A20", Offset = "0x40E8A20", VA = "0x40E8A20")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x40E8A60", Offset = "0x40E8A60", VA = "0x40E8A60")]
	public static NameEffectSettings SupporterShimmer()
	{
		return null;
	}
}
