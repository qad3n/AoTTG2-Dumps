// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchSpriteCover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchSpriteCover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BD")]
internal sealed class GisketchSpriteCover : MonoBehaviour
{
	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lastParent;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _lastSprite;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x40")]
	private float _lastWidth;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x44")]
	private float _lastHeight;

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x52929D0", Offset = "0x52919D0", VA = "0x52929D0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x5292A50", Offset = "0x5291A50", VA = "0x5292A50")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x5292FF0", Offset = "0x5291FF0", VA = "0x5292FF0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x5293000", Offset = "0x5292000", VA = "0x5293000")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x5292A60", Offset = "0x5291A60", VA = "0x5292A60")]
	private bool Refresh()
	{
		return default(bool);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x5293010", Offset = "0x5292010", VA = "0x5293010")]
	internal static Vector2 CoverSize(Vector2 parentSize, Vector2 spriteSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x5293060", Offset = "0x5292060", VA = "0x5293060")]
	private static bool SamePoint(YGValue value, float expected)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x5293100", Offset = "0x5292100", VA = "0x5293100")]
	public GisketchSpriteCover()
	{
	}
}
