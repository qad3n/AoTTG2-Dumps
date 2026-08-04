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

[Token(Token = "0x2000191")]
internal sealed class AottgNameStyleChoicePreview : MonoBehaviour
{
	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _text;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectController _effect;

	[Token(Token = "0x40008B9")]
	[FieldOffset(Offset = "0x30")]
	private Color[] _colors;

	[Token(Token = "0x40008BA")]
	[FieldOffset(Offset = "0x38")]
	private bool _hooked;

	[Token(Token = "0x17000140")]
	private TMP_Text Text
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x440B960", Offset = "0x440B960", VA = "0x440B960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x440ACD0", Offset = "0x440ACD0", VA = "0x440ACD0")]
	public void ConfigureDisabled()
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x440B530", Offset = "0x440B530", VA = "0x440B530")]
	public void ConfigureFont(string font)
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x440ADF0", Offset = "0x440ADF0", VA = "0x440ADF0")]
	public void ConfigureSolid(Color color, string font)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x440B1F0", Offset = "0x440B1F0", VA = "0x440B1F0")]
	public void ConfigureGradient(Color[] colors, string font)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x440B310", Offset = "0x440B310", VA = "0x440B310")]
	public void ConfigureEffect(NameEffectType effect, Color[] colors, string font)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x440B9F0", Offset = "0x440B9F0", VA = "0x440B9F0")]
	private void HookVertexColors()
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x440BA90", Offset = "0x440BA90", VA = "0x440BA90")]
	private void ClearVertexColors()
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x440BB70", Offset = "0x440BB70", VA = "0x440BB70")]
	private void ClearEffect()
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x440B820", Offset = "0x440B820", VA = "0x440B820")]
	private void ResetPlainVisuals(string font)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x440BC20", Offset = "0x440BC20", VA = "0x440BC20")]
	private void ClearAllEffects()
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x440BDB0", Offset = "0x440BDB0", VA = "0x440BDB0")]
	private void DestroyStalePopLayer(string name)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x440BEF0", Offset = "0x440BEF0", VA = "0x440BEF0")]
	private void ApplyVertexColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x440C230", Offset = "0x440C230", VA = "0x440C230")]
	private bool TryBounds(TMP_TextInfo textInfo, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x440C3D0", Offset = "0x440C3D0", VA = "0x440C3D0")]
	private Color Sample(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x440C520", Offset = "0x440C520", VA = "0x440C520")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x440C540", Offset = "0x440C540", VA = "0x440C540")]
	public AottgNameStyleChoicePreview()
	{
	}
}
