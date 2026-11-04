// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000297")]
internal sealed class AottgNameStyleChoicePreview : MonoBehaviour
{
	[Token(Token = "0x4000D5A")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _text;

	[Token(Token = "0x4000D5B")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectController _effect;

	[Token(Token = "0x4000D5C")]
	[FieldOffset(Offset = "0x30")]
	private Color[] _colors;

	[Token(Token = "0x4000D5D")]
	[FieldOffset(Offset = "0x38")]
	private bool _hooked;

	[Token(Token = "0x170001C5")]
	private TMP_Text Text
	{
		[Token(Token = "0x6000FE9")]
		[Address(RVA = "0x1E0BB00", Offset = "0x1E0A100", VA = "0x181E0BB00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x1E0ABA0", Offset = "0x1E091A0", VA = "0x181E0ABA0")]
	public void ConfigureDisabled()
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x1E0AE50", Offset = "0x1E09450", VA = "0x181E0AE50")]
	public void ConfigureFont(string font)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x1E0B120", Offset = "0x1E09720", VA = "0x181E0B120")]
	public void ConfigureSolid(Color color, string font)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x1E0AF70", Offset = "0x1E09570", VA = "0x181E0AF70")]
	public void ConfigureGradient(Color[] colors, string font)
	{
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x1E0ACF0", Offset = "0x1E092F0", VA = "0x181E0ACF0")]
	public void ConfigureEffect(NameEffectType effect, Color[] colors, string font)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x1E0B320", Offset = "0x1E09920", VA = "0x181E0B320")]
	private void HookVertexColors()
	{
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x1E0AAB0", Offset = "0x1E090B0", VA = "0x181E0AAB0")]
	private void ClearVertexColors()
	{
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x1E0AA00", Offset = "0x1E09000", VA = "0x181E0AA00")]
	private void ClearEffect()
	{
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x1E0B490", Offset = "0x1E09A90", VA = "0x181E0B490")]
	private void ResetPlainVisuals(string font)
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x1E0A880", Offset = "0x1E08E80", VA = "0x181E0A880")]
	private void ClearAllEffects()
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x1E0B1B0", Offset = "0x1E097B0", VA = "0x181E0B1B0")]
	private void DestroyStalePopLayer(string name)
	{
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x1E0A460", Offset = "0x1E08A60", VA = "0x181E0A460")]
	private void ApplyVertexColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x1E0B910", Offset = "0x1E09F10", VA = "0x181E0B910")]
	private bool TryBounds(TMP_TextInfo textInfo, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x1E0B750", Offset = "0x1E09D50", VA = "0x181E0B750")]
	private Color Sample(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x1E0B3D0", Offset = "0x1E099D0", VA = "0x181E0B3D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgNameStyleChoicePreview()
	{
	}
}
