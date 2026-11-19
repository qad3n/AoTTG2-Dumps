// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchSkeletonPulse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchSkeletonPulse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BC")]
public sealed class GisketchSkeletonPulse : MonoBehaviour
{
	[Token(Token = "0x40003E0")]
	private const string ShimmerName = "AoTTG Skeleton Shimmer";

	[Token(Token = "0x40003E1")]
	private const float Duration = 1.18f;

	[Token(Token = "0x40003E2")]
	private const float WidthRatio = 0.42f;

	[Token(Token = "0x40003E3")]
	private const float HeightRatio = 1.35f;

	[Token(Token = "0x40003E4")]
	private const int FeatherTextureWidth = 64;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _featherSprite;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _root;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _shimmer;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x38")]
	private Color _baseColor;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x48")]
	private Color _pulseColor;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x58")]
	private Tween _pulse;

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x5291F20", Offset = "0x5290F20", VA = "0x5291F20")]
	public void Setup(Image image, Color baseColor, Color pulseColor)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x5292580", Offset = "0x5291580", VA = "0x5292580")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x5292590", Offset = "0x5291590", VA = "0x5292590")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x52925F0", Offset = "0x52915F0", VA = "0x52925F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x52923F0", Offset = "0x52913F0", VA = "0x52923F0")]
	private void StartPulse()
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x52925C0", Offset = "0x52915C0", VA = "0x52925C0")]
	private void StopPulse()
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x5292010", Offset = "0x5291010", VA = "0x5292010")]
	private void EnsureShimmer()
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x5292850", Offset = "0x5291850", VA = "0x5292850")]
	private void UpdateShimmer(float value)
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x5292620", Offset = "0x5291620", VA = "0x5292620")]
	private static Sprite FeatherSprite()
	{
		return null;
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x52929C0", Offset = "0x52919C0", VA = "0x52929C0")]
	public GisketchSkeletonPulse()
	{
	}
}
