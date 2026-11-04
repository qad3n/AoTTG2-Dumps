// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreviewRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002AC")]
internal sealed class AottgGuildPresetChoicePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x4000DDA")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _label;

	[Token(Token = "0x4000DDB")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000DDC")]
	[FieldOffset(Offset = "0x30")]
	private NameEffectController _effect;

	[Token(Token = "0x170001D6")]
	private TMP_Text Label
	{
		[Token(Token = "0x60010AF")]
		[Address(RVA = "0x1E125A0", Offset = "0x1E10BA0", VA = "0x181E125A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x1E12240", Offset = "0x1E10840", VA = "0x181E12240")]
	public void Configure(string value, string text, bool enabled)
	{
	}

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x1E12570", Offset = "0x1E10B70", VA = "0x181E12570")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGuildPresetChoicePreviewRuntime()
	{
	}
}
