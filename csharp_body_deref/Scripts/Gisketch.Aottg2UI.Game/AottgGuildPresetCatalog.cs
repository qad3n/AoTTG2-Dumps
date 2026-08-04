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

[Token(Token = "0x20001A4")]
internal static class AottgGuildPresetCatalog
{
	[Token(Token = "0x400092D")]
	public const string Custom = "Custom";

	[Token(Token = "0x400092E")]
	public const string Team = "aottg2_developer_team";

	[Token(Token = "0x400092F")]
	public const string Supporter = "supporter";

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x44199B0", Offset = "0x44199B0", VA = "0x44199B0")]
	public static bool TryGet(string id, out AottgGuildPresetDefinition definition)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x4419B60", Offset = "0x4419B60", VA = "0x4419B60")]
	public static string Label(string id)
	{
		return null;
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x4419BA0", Offset = "0x4419BA0", VA = "0x4419BA0")]
	public static NameEffectSettings SupporterShimmer()
	{
		return null;
	}
}
