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

[Token(Token = "0x2000309")]
internal sealed class AottgGuildPresetChoicePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x4000F6F")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _label;

	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x30")]
	private NameEffectController _effect;

	[Token(Token = "0x17000213")]
	private TMP_Text Label
	{
		[Token(Token = "0x6001300")]
		[Address(RVA = "0x57F74E0", Offset = "0x57F64E0", VA = "0x57F74E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x57F7230", Offset = "0x57F6230", VA = "0x57F7230")]
	public void Configure(string value, string text, bool enabled)
	{
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x57F78B0", Offset = "0x57F68B0", VA = "0x57F78B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x57F78D0", Offset = "0x57F68D0", VA = "0x57F78D0")]
	public AottgGuildPresetChoicePreviewRuntime()
	{
	}
}
