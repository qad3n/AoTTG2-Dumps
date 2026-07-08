using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000AB")]
public sealed class GisketchBrushButtonIntroReveal : MonoBehaviour
{
	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _mask;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x30")]
	private Mask _maskComponent;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x38")]
	private Image _maskImage;

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x3A269E0", Offset = "0x3A269E0", VA = "0x3A269E0")]
	public void Setup(RectTransform mask, RectTransform content, Sprite brushSprite)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x3A26C00", Offset = "0x3A26C00", VA = "0x3A26C00")]
	public Tween Play(float duration)
	{
		return null;
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x3A26F50", Offset = "0x3A26F50", VA = "0x3A26F50")]
	public GisketchBrushButtonIntroReveal()
	{
	}
}
