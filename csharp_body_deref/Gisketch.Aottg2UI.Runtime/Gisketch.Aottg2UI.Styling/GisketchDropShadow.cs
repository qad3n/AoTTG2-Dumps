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

[Token(Token = "0x2000026")]
public sealed class GisketchDropShadow : BaseMeshEffect
{
	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x28")]
	private Color _color;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _offset;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x40")]
	private int _layers;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x44")]
	private float _grain;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x48")]
	private bool _solid;

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x522ECE0", Offset = "0x522DCE0", VA = "0x522ECE0")]
	public void Setup(Color color)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x522EDA0", Offset = "0x522DDA0", VA = "0x522EDA0")]
	public void Setup(Color color, Vector2 offset, int layers, float grain, bool solid = false)
	{
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x522EE90", Offset = "0x522DE90", VA = "0x522EE90", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x522F000", Offset = "0x522E000", VA = "0x522F000")]
	private void AddLayer(List<UIVertex> source, List<UIVertex> output, int layer)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x522F400", Offset = "0x522E400", VA = "0x522F400")]
	private static float Hash(Vector3 position, int layer)
	{
		return default(float);
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x522F450", Offset = "0x522E450", VA = "0x522F450")]
	public GisketchDropShadow()
	{
	}
}
