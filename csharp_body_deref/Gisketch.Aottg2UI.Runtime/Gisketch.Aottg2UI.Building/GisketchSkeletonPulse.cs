using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000095")]
public sealed class GisketchSkeletonPulse : MonoBehaviour
{
	[Token(Token = "0x40002F4")]
	private const string ShimmerName = "AoTTG Skeleton Shimmer";

	[Token(Token = "0x40002F5")]
	private const float Duration = 1.18f;

	[Token(Token = "0x40002F6")]
	private const float WidthRatio = 0.42f;

	[Token(Token = "0x40002F7")]
	private const float HeightRatio = 1.35f;

	[Token(Token = "0x40002F8")]
	private const int FeatherTextureWidth = 64;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _featherSprite;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _root;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _shimmer;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x38")]
	private Color _baseColor;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x48")]
	private Color _pulseColor;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x58")]
	private Tween _pulse;

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x3A1BA80", Offset = "0x3A1BA80", VA = "0x3A1BA80")]
	public void Setup(Image image, Color baseColor, Color pulseColor)
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x3A1C0F0", Offset = "0x3A1C0F0", VA = "0x3A1C0F0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x3A1C100", Offset = "0x3A1C100", VA = "0x3A1C100")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x3A1C160", Offset = "0x3A1C160", VA = "0x3A1C160")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x3A1BF60", Offset = "0x3A1BF60", VA = "0x3A1BF60")]
	private void StartPulse()
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x3A1C130", Offset = "0x3A1C130", VA = "0x3A1C130")]
	private void StopPulse()
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x3A1BB70", Offset = "0x3A1BB70", VA = "0x3A1BB70")]
	private void EnsureShimmer()
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x3A1C3C0", Offset = "0x3A1C3C0", VA = "0x3A1C3C0")]
	private void UpdateShimmer(float value)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x3A1C190", Offset = "0x3A1C190", VA = "0x3A1C190")]
	private static Sprite FeatherSprite()
	{
		return null;
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x3A1C510", Offset = "0x3A1C510", VA = "0x3A1C510")]
	public GisketchSkeletonPulse()
	{
	}
}
