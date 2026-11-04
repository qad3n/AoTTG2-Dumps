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

[Token(Token = "0x20000B6")]
public sealed class GisketchSkeletonPulse : MonoBehaviour
{
	[Token(Token = "0x40003B9")]
	private const string ShimmerName = "AoTTG Skeleton Shimmer";

	[Token(Token = "0x40003BA")]
	private const float Duration = 1.18f;

	[Token(Token = "0x40003BB")]
	private const float WidthRatio = 0.42f;

	[Token(Token = "0x40003BC")]
	private const float HeightRatio = 1.35f;

	[Token(Token = "0x40003BD")]
	private const int FeatherTextureWidth = 64;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _featherSprite;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _root;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _shimmer;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x38")]
	private Color _baseColor;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x48")]
	private Color _pulseColor;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x58")]
	private Tween _pulse;

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x1908100", Offset = "0x1906700", VA = "0x181908100")]
	public void Setup(Image image, Color baseColor, Color pulseColor)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x19080F0", Offset = "0x19066F0", VA = "0x1819080F0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x19080B0", Offset = "0x19066B0", VA = "0x1819080B0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x19080B0", Offset = "0x19066B0", VA = "0x1819080B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x19081D0", Offset = "0x19067D0", VA = "0x1819081D0")]
	private void StartPulse()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x19080B0", Offset = "0x19066B0", VA = "0x1819080B0")]
	private void StopPulse()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x1907850", Offset = "0x1905E50", VA = "0x181907850")]
	private void EnsureShimmer()
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x1908360", Offset = "0x1906960", VA = "0x181908360")]
	private void UpdateShimmer(float value)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x1907DB0", Offset = "0x19063B0", VA = "0x181907DB0")]
	private static Sprite FeatherSprite()
	{
		return null;
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchSkeletonPulse()
	{
	}
}
