using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200015F")]
internal sealed class AottgNameStyleChoicePreview : MonoBehaviour
{
	[Token(Token = "0x40007F6")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _text;

	[Token(Token = "0x40007F7")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectController _effect;

	[Token(Token = "0x40007F8")]
	[FieldOffset(Offset = "0x30")]
	private Color[] _colors;

	[Token(Token = "0x40007F9")]
	[FieldOffset(Offset = "0x38")]
	private bool _hooked;

	[Token(Token = "0x170000EA")]
	private TMP_Text Text
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x40D87E0", Offset = "0x40D87E0", VA = "0x40D87E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x40D7B50", Offset = "0x40D7B50", VA = "0x40D7B50")]
	public void ConfigureDisabled()
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x40D83B0", Offset = "0x40D83B0", VA = "0x40D83B0")]
	public void ConfigureFont(string font)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x40D7C70", Offset = "0x40D7C70", VA = "0x40D7C70")]
	public void ConfigureSolid(Color color, string font)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x40D8070", Offset = "0x40D8070", VA = "0x40D8070")]
	public void ConfigureGradient(Color[] colors, string font)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x40D8190", Offset = "0x40D8190", VA = "0x40D8190")]
	public void ConfigureEffect(NameEffectType effect, Color[] colors, string font)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x40D8870", Offset = "0x40D8870", VA = "0x40D8870")]
	private void HookVertexColors()
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x40D8910", Offset = "0x40D8910", VA = "0x40D8910")]
	private void ClearVertexColors()
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x40D89F0", Offset = "0x40D89F0", VA = "0x40D89F0")]
	private void ClearEffect()
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x40D86A0", Offset = "0x40D86A0", VA = "0x40D86A0")]
	private void ResetPlainVisuals(string font)
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x40D8AA0", Offset = "0x40D8AA0", VA = "0x40D8AA0")]
	private void ClearAllEffects()
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x40D8C30", Offset = "0x40D8C30", VA = "0x40D8C30")]
	private void DestroyStalePopLayer(string name)
	{
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x40D8D70", Offset = "0x40D8D70", VA = "0x40D8D70")]
	private void ApplyVertexColors(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x40D90B0", Offset = "0x40D90B0", VA = "0x40D90B0")]
	private bool TryBounds(TMP_TextInfo textInfo, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x40D9250", Offset = "0x40D9250", VA = "0x40D9250")]
	private Color Sample(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x40D93A0", Offset = "0x40D93A0", VA = "0x40D93A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x40D93C0", Offset = "0x40D93C0", VA = "0x40D93C0")]
	public AottgNameStyleChoicePreview()
	{
	}
}
