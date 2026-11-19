// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetVisual
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200030A")]
internal static class AottgGuildPresetVisual
{
	[Token(Token = "0x6001303")]
	[Address(RVA = "0x57E0030", Offset = "0x57DF030", VA = "0x57E0030")]
	public static bool IsPreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x57F7200", Offset = "0x57F6200", VA = "0x57F7200")]
	public static bool IsImagePreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x57E04F0", Offset = "0x57DF4F0", VA = "0x57E04F0")]
	public static bool ApplyText(TMP_Text label, ref NameEffectController effect, string presetId, string fallback, Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x57F7570", Offset = "0x57F6570", VA = "0x57F7570")]
	public static Image EnsureImage(Transform parent, ref Image image, string name, float height)
	{
		return null;
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x57E0170", Offset = "0x57DF170", VA = "0x57E0170")]
	public static bool ApplyImage(Image image, string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x57E0060", Offset = "0x57DF060", VA = "0x57E0060")]
	public static void ClearEffect(TMP_Text label, ref NameEffectController effect, Color color)
	{
	}
}
