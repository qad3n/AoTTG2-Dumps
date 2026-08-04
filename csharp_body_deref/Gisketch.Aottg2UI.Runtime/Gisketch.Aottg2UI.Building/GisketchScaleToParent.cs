// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScaleToParent
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScaleToParent.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x200008D")]
[ExecuteAlways]
internal sealed class GisketchScaleToParent : MonoBehaviour
{
	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _root;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x30")]
	private float _referenceWidth;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x34")]
	private float _referenceHeight;

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x3A73A50", Offset = "0x3A73A50", VA = "0x3A73A50")]
	public void Setup(RectTransform content, float referenceWidth, float referenceHeight)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x3A73D00", Offset = "0x3A73D00", VA = "0x3A73D00")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x3A73D10", Offset = "0x3A73D10", VA = "0x3A73D10")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x3A73AE0", Offset = "0x3A73AE0", VA = "0x3A73AE0")]
	private void Apply()
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x3A73D20", Offset = "0x3A73D20", VA = "0x3A73D20")]
	public GisketchScaleToParent()
	{
	}
}
