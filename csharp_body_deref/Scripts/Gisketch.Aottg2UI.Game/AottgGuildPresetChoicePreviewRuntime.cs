using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000174")]
internal sealed class AottgGuildPresetChoicePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x400086F")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _label;

	[Token(Token = "0x4000870")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x4000871")]
	[FieldOffset(Offset = "0x30")]
	private NameEffectController _effect;

	[Token(Token = "0x170000F9")]
	private TMP_Text Label
	{
		[Token(Token = "0x600087C")]
		[Address(RVA = "0x40E9370", Offset = "0x40E9370", VA = "0x40E9370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x40E90B0", Offset = "0x40E90B0", VA = "0x40E90B0")]
	public void Configure(string value, string text, bool enabled)
	{
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x40E9CF0", Offset = "0x40E9CF0", VA = "0x40E9CF0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x40E9D10", Offset = "0x40E9D10", VA = "0x40E9D10")]
	public AottgGuildPresetChoicePreviewRuntime()
	{
	}
}
