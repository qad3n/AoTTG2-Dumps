using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000097")]
internal sealed class GisketchRectTransformSpriteCover : MonoBehaviour
{
	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _rect;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lastParent;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _lastSprite;

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x3A1CD90", Offset = "0x3A1CD90", VA = "0x3A1CD90")]
	private void Awake()
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x3A1CE40", Offset = "0x3A1CE40", VA = "0x3A1CE40")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x3A1D2E0", Offset = "0x3A1D2E0", VA = "0x3A1D2E0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x3A1D2F0", Offset = "0x3A1D2F0", VA = "0x3A1D2F0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x3A1CE50", Offset = "0x3A1CE50", VA = "0x3A1CE50")]
	private bool Refresh()
	{
		return default(bool);
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x3A1D300", Offset = "0x3A1D300", VA = "0x3A1D300")]
	public GisketchRectTransformSpriteCover()
	{
	}
}
