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

[Token(Token = "0x20000AE")]
[ExecuteAlways]
internal sealed class GisketchScaleToParent : MonoBehaviour
{
	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _root;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x30")]
	private float _referenceWidth;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x34")]
	private float _referenceHeight;

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x527BD30", Offset = "0x527AD30", VA = "0x527BD30")]
	public void Setup(RectTransform content, float referenceWidth, float referenceHeight)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x527C020", Offset = "0x527B020", VA = "0x527C020")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x527C030", Offset = "0x527B030", VA = "0x527C030")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x527BDC0", Offset = "0x527ADC0", VA = "0x527BDC0")]
	private void Apply()
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x527C040", Offset = "0x527B040", VA = "0x527C040")]
	public GisketchScaleToParent()
	{
	}
}
