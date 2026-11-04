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

[Token(Token = "0x20002AD")]
internal static class AottgGuildPresetVisual
{
	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x1E14260", Offset = "0x1E12860", VA = "0x181E14260")]
	public static bool IsPreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x1E14220", Offset = "0x1E12820", VA = "0x181E14220")]
	public static bool IsImagePreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x1E13A90", Offset = "0x1E12090", VA = "0x181E13A90")]
	public static bool ApplyText(TMP_Text label, ref NameEffectController effect, string presetId, string fallback, Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x1E13ED0", Offset = "0x1E124D0", VA = "0x181E13ED0")]
	public static Image EnsureImage(Transform parent, ref Image image, string name, float height)
	{
		return null;
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x1E13810", Offset = "0x1E11E10", VA = "0x181E13810")]
	public static bool ApplyImage(Image image, string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x1E13DD0", Offset = "0x1E123D0", VA = "0x181E13DD0")]
	public static void ClearEffect(TMP_Text label, ref NameEffectController effect, Color color)
	{
	}
}
