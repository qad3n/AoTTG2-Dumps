// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonIntroReveal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CF")]
public sealed class GisketchBrushButtonIntroReveal : MonoBehaviour
{
	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _mask;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x30")]
	private Mask _maskComponent;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x38")]
	private Image _maskImage;

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x18FCB80", Offset = "0x18FB180", VA = "0x1818FCB80")]
	public void Setup(RectTransform mask, RectTransform content, Sprite brushSprite)
	{
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x18FC7E0", Offset = "0x18FADE0", VA = "0x1818FC7E0")]
	public Tween Play(float duration)
	{
		return null;
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchBrushButtonIntroReveal()
	{
	}
}
