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

[Token(Token = "0x20000B7")]
internal sealed class GisketchSpriteCover : MonoBehaviour
{
	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lastParent;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _lastSprite;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x40")]
	private float _lastWidth;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x44")]
	private float _lastHeight;

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x1908500", Offset = "0x1906B00", VA = "0x181908500")]
	private void Awake()
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x19085F0", Offset = "0x1906BF0", VA = "0x1819085F0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x19085F0", Offset = "0x1906BF0", VA = "0x1819085F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x19085F0", Offset = "0x1906BF0", VA = "0x1819085F0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x1908600", Offset = "0x1906C00", VA = "0x181908600")]
	private bool Refresh()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x1908580", Offset = "0x1906B80", VA = "0x181908580")]
	internal static Vector2 CoverSize(Vector2 parentSize, Vector2 spriteSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x1908BB0", Offset = "0x19071B0", VA = "0x181908BB0")]
	private static bool SamePoint(YGValue value, float expected)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x1908BE0", Offset = "0x19071E0", VA = "0x181908BE0")]
	public GisketchSpriteCover()
	{
	}
}
