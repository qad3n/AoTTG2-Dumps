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

[Token(Token = "0x20000A8")]
[ExecuteAlways]
internal sealed class GisketchScaleToParent : MonoBehaviour
{
	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _root;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x30")]
	private float _referenceWidth;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x34")]
	private float _referenceHeight;

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x18DB080", Offset = "0x18D9680", VA = "0x1818DB080")]
	public void Setup(RectTransform content, float referenceWidth, float referenceHeight)
	{
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x18DB070", Offset = "0x18D9670", VA = "0x1818DB070")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x18DB070", Offset = "0x18D9670", VA = "0x1818DB070")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x18DADE0", Offset = "0x18D93E0", VA = "0x1818DADE0")]
	private void Apply()
	{
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x18DB130", Offset = "0x18D9730", VA = "0x1818DB130")]
	public GisketchScaleToParent()
	{
	}
}
