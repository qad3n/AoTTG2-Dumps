// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchDropShadow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchDropShadow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000023")]
public sealed class GisketchDropShadow : BaseMeshEffect
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x28")]
	private Color _color;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _offset;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x40")]
	private int _layers;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x44")]
	private float _grain;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x48")]
	private bool _solid;

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x1885090", Offset = "0x1883690", VA = "0x181885090")]
	public void Setup(Color color)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x1884FB0", Offset = "0x18835B0", VA = "0x181884FB0")]
	public void Setup(Color color, Vector2 offset, int layers, float grain, bool solid = false)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x1884E30", Offset = "0x1883430", VA = "0x181884E30", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x1884940", Offset = "0x1882F40", VA = "0x181884940")]
	private void AddLayer(List<UIVertex> source, List<UIVertex> output, int layer)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x1884DC0", Offset = "0x18833C0", VA = "0x181884DC0")]
	private static float Hash(Vector3 position, int layer)
	{
		return default(float);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x1885130", Offset = "0x1883730", VA = "0x181885130")]
	public GisketchDropShadow()
	{
	}
}
