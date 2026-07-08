using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000096")]
internal sealed class GisketchSpriteCover : MonoBehaviour
{
	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lastParent;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _lastSprite;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x40")]
	private float _lastWidth;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x44")]
	private float _lastHeight;

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x3A1C520", Offset = "0x3A1C520", VA = "0x3A1C520")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x3A1C5A0", Offset = "0x3A1C5A0", VA = "0x3A1C5A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x3A1CC60", Offset = "0x3A1CC60", VA = "0x3A1CC60")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x3A1CC70", Offset = "0x3A1CC70", VA = "0x3A1CC70")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x3A1C5B0", Offset = "0x3A1C5B0", VA = "0x3A1C5B0")]
	private bool Refresh()
	{
		return default(bool);
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x3A1CC80", Offset = "0x3A1CC80", VA = "0x3A1CC80")]
	internal static Vector2 CoverSize(Vector2 parentSize, Vector2 spriteSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x3A1CCD0", Offset = "0x3A1CCD0", VA = "0x3A1CCD0")]
	private static bool SamePoint(YGValue value, float expected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x3A1CD70", Offset = "0x3A1CD70", VA = "0x3A1CD70")]
	public GisketchSpriteCover()
	{
	}
}
