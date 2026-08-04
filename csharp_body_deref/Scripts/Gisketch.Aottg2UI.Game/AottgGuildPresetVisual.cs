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

[Token(Token = "0x20001A7")]
internal static class AottgGuildPresetVisual
{
	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x441A2D0", Offset = "0x441A2D0", VA = "0x441A2D0")]
	public static bool IsPreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x441A2A0", Offset = "0x441A2A0", VA = "0x441A2A0")]
	public static bool IsImagePreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x441ACE0", Offset = "0x441ACE0", VA = "0x441ACE0")]
	public static bool ApplyText(TMP_Text label, ref NameEffectController effect, string presetId, string fallback, Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x441A650", Offset = "0x441A650", VA = "0x441A650")]
	public static Image EnsureImage(Transform parent, ref Image image, string name, float height)
	{
		return null;
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x441A980", Offset = "0x441A980", VA = "0x441A980")]
	public static bool ApplyImage(Image image, string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x441ABD0", Offset = "0x441ABD0", VA = "0x441ABD0")]
	public static void ClearEffect(TMP_Text label, ref NameEffectController effect, Color color)
	{
	}
}
