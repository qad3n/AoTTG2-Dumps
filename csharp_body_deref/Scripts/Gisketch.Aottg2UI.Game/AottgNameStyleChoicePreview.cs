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

[Token(Token = "0x20002F3")]
internal sealed class AottgNameStyleChoicePreview : MonoBehaviour
{
	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _text;

	[Token(Token = "0x4000EF2")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectController _effect;

	[Token(Token = "0x4000EF3")]
	[FieldOffset(Offset = "0x30")]
	private Color[] _colors;

	[Token(Token = "0x4000EF4")]
	[FieldOffset(Offset = "0x38")]
	private bool _hooked;

	[Token(Token = "0x17000202")]
	private TMP_Text Text
	{
		[Token(Token = "0x6001239")]
		[Address(RVA = "0x57E8120", Offset = "0x57E7120", VA = "0x57E8120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x57E7590", Offset = "0x57E6590", VA = "0x57E7590")]
	public void ConfigureDisabled()
	{
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x57E7CD0", Offset = "0x57E6CD0", VA = "0x57E7CD0")]
	public void ConfigureFont(string font)
	{
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x57E76B0", Offset = "0x57E66B0", VA = "0x57E76B0")]
	public void ConfigureSolid(Color color, string font)
	{
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x57E7990", Offset = "0x57E6990", VA = "0x57E7990")]
	public void ConfigureGradient(Color[] colors, string font)
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x57E7AB0", Offset = "0x57E6AB0", VA = "0x57E7AB0")]
	public void ConfigureEffect(NameEffectType effect, Color[] colors, string font)
	{
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x57E81B0", Offset = "0x57E71B0", VA = "0x57E81B0")]
	private void HookVertexColors()
	{
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x57E8250", Offset = "0x57E7250", VA = "0x57E8250")]
	private void ClearVertexColors()
	{
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x57E8330", Offset = "0x57E7330", VA = "0x57E8330")]
	private void ClearEffect()
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x57E7FD0", Offset = "0x57E6FD0", VA = "0x57E7FD0")]
	private void ResetPlainVisuals(string font)
	{
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x57E83E0", Offset = "0x57E73E0", VA = "0x57E83E0")]
	private void ClearAllEffects()
	{
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x57E8580", Offset = "0x57E7580", VA = "0x57E8580")]
	private void DestroyStalePopLayer(string name)
	{
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x57E86F0", Offset = "0x57E76F0", VA = "0x57E86F0")]
	private void ApplyVertexColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x57E8A40", Offset = "0x57E7A40", VA = "0x57E8A40")]
	private bool TryBounds(TMP_TextInfo textInfo, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x57E8BE0", Offset = "0x57E7BE0", VA = "0x57E8BE0")]
	private Color Sample(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x57E8D60", Offset = "0x57E7D60", VA = "0x57E8D60")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x57E8D80", Offset = "0x57E7D80", VA = "0x57E8D80")]
	public AottgNameStyleChoicePreview()
	{
	}
}
