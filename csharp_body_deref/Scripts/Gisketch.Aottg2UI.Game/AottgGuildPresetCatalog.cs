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

[Token(Token = "0x20002AA")]
internal static class AottgGuildPresetCatalog
{
	[Token(Token = "0x4000DD4")]
	public const string Custom = "Custom";

	[Token(Token = "0x4000DD5")]
	public const string Team = "aottg2_developer_team";

	[Token(Token = "0x4000DD6")]
	public const string Supporter = "supporter";

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x1E12060", Offset = "0x1E10660", VA = "0x181E12060")]
	public static bool TryGet(string id, out AottgGuildPresetDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x1E11F30", Offset = "0x1E10530", VA = "0x181E11F30")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x1E11F70", Offset = "0x1E10570", VA = "0x181E11F70")]
	public static NameEffectSettings SupporterShimmer()
	{
		return null;
	}
}
