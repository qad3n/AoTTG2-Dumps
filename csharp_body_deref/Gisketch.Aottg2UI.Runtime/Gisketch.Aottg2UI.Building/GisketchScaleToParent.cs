using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x200008A")]
[ExecuteAlways]
internal sealed class GisketchScaleToParent : MonoBehaviour
{
	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _root;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x30")]
	private float _referenceWidth;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x34")]
	private float _referenceHeight;

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x3A07A90", Offset = "0x3A07A90", VA = "0x3A07A90")]
	public void Setup(RectTransform content, float referenceWidth, float referenceHeight)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x3A07D40", Offset = "0x3A07D40", VA = "0x3A07D40")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x3A07D50", Offset = "0x3A07D50", VA = "0x3A07D50")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x3A07B20", Offset = "0x3A07B20", VA = "0x3A07B20")]
	private void Apply()
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x3A07D60", Offset = "0x3A07D60", VA = "0x3A07D60")]
	public GisketchScaleToParent()
	{
	}
}
