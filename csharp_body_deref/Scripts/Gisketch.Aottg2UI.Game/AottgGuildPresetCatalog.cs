// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000307")]
internal static class AottgGuildPresetCatalog
{
	[Token(Token = "0x4000F69")]
	public const string Custom = "Custom";

	[Token(Token = "0x4000F6A")]
	public const string Team = "aottg2_developer_team";

	[Token(Token = "0x4000F6B")]
	public const string Supporter = "supporter";

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x57F6A80", Offset = "0x57F5A80", VA = "0x57F6A80")]
	public static bool TryGet(string id, out AottgGuildPresetDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x57E04B0", Offset = "0x57DF4B0", VA = "0x57E04B0")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x57F6C30", Offset = "0x57F5C30", VA = "0x57F6C30")]
	public static NameEffectSettings SupporterShimmer()
	{
		return null;
	}
}
