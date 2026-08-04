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

[Token(Token = "0x2000099")]
internal sealed class GisketchSpriteCover : MonoBehaviour
{
	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _lastParent;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _lastSprite;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x40")]
	private float _lastWidth;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x44")]
	private float _lastHeight;

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x3A88760", Offset = "0x3A88760", VA = "0x3A88760")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x3A887E0", Offset = "0x3A887E0", VA = "0x3A887E0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x3A88EA0", Offset = "0x3A88EA0", VA = "0x3A88EA0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x3A88EB0", Offset = "0x3A88EB0", VA = "0x3A88EB0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x3A887F0", Offset = "0x3A887F0", VA = "0x3A887F0")]
	private bool Refresh()
	{
		return default(bool);
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x3A88EC0", Offset = "0x3A88EC0", VA = "0x3A88EC0")]
	internal static Vector2 CoverSize(Vector2 parentSize, Vector2 spriteSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x3A88F10", Offset = "0x3A88F10", VA = "0x3A88F10")]
	private static bool SamePoint(YGValue value, float expected)
	{
		return default(bool);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x3A88FB0", Offset = "0x3A88FB0", VA = "0x3A88FB0")]
	public GisketchSpriteCover()
	{
	}
}
