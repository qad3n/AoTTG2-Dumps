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

[Token(Token = "0x2000098")]
public sealed class GisketchSkeletonPulse : MonoBehaviour
{
	[Token(Token = "0x4000310")]
	private const string ShimmerName = "AoTTG Skeleton Shimmer";

	[Token(Token = "0x4000311")]
	private const float Duration = 1.18f;

	[Token(Token = "0x4000312")]
	private const float WidthRatio = 0.42f;

	[Token(Token = "0x4000313")]
	private const float HeightRatio = 1.35f;

	[Token(Token = "0x4000314")]
	private const int FeatherTextureWidth = 64;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _featherSprite;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _root;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x30")]
	private RectTransform _shimmer;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x38")]
	private Color _baseColor;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x48")]
	private Color _pulseColor;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x58")]
	private Tween _pulse;

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x3A87CC0", Offset = "0x3A87CC0", VA = "0x3A87CC0")]
	public void Setup(Image image, Color baseColor, Color pulseColor)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x3A88330", Offset = "0x3A88330", VA = "0x3A88330")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x3A88340", Offset = "0x3A88340", VA = "0x3A88340")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x3A883A0", Offset = "0x3A883A0", VA = "0x3A883A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x3A881A0", Offset = "0x3A881A0", VA = "0x3A881A0")]
	private void StartPulse()
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x3A88370", Offset = "0x3A88370", VA = "0x3A88370")]
	private void StopPulse()
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x3A87DB0", Offset = "0x3A87DB0", VA = "0x3A87DB0")]
	private void EnsureShimmer()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x3A88600", Offset = "0x3A88600", VA = "0x3A88600")]
	private void UpdateShimmer(float value)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x3A883D0", Offset = "0x3A883D0", VA = "0x3A883D0")]
	private static Sprite FeatherSprite()
	{
		return null;
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x3A88750", Offset = "0x3A88750", VA = "0x3A88750")]
	public GisketchSkeletonPulse()
	{
	}
}
