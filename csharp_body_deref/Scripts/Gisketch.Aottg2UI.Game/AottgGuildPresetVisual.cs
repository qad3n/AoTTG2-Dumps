using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000175")]
internal static class AottgGuildPresetVisual
{
	[Token(Token = "0x600087F")]
	[Address(RVA = "0x40E9080", Offset = "0x40E9080", VA = "0x40E9080")]
	public static bool IsPreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x40E9050", Offset = "0x40E9050", VA = "0x40E9050")]
	public static bool IsImagePreset(string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x40E9A90", Offset = "0x40E9A90", VA = "0x40E9A90")]
	public static bool ApplyText(TMP_Text label, ref NameEffectController effect, string presetId, string fallback, Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x40E9400", Offset = "0x40E9400", VA = "0x40E9400")]
	public static Image EnsureImage(Transform parent, ref Image image, string name, float height)
	{
		return null;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x40E9730", Offset = "0x40E9730", VA = "0x40E9730")]
	public static bool ApplyImage(Image image, string presetId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x40E9980", Offset = "0x40E9980", VA = "0x40E9980")]
	public static void ClearEffect(TMP_Text label, ref NameEffectController effect, Color color)
	{
	}
}
