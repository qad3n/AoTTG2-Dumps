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

[Token(Token = "0x200001A")]
public sealed class GisketchDropShadow : BaseMeshEffect
{
	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x28")]
	private Color _color;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _offset;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x40")]
	private int _layers;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x44")]
	private float _grain;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x48")]
	private bool _solid;

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3A34440", Offset = "0x3A34440", VA = "0x3A34440")]
	public void Setup(Color color)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3A34500", Offset = "0x3A34500", VA = "0x3A34500")]
	public void Setup(Color color, Vector2 offset, int layers, float grain, bool solid = false)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3A345F0", Offset = "0x3A345F0", VA = "0x3A345F0", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3A34770", Offset = "0x3A34770", VA = "0x3A34770")]
	private void AddLayer(List<UIVertex> source, List<UIVertex> output, int layer)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3A34C20", Offset = "0x3A34C20", VA = "0x3A34C20")]
	private static float Hash(Vector3 position, int layer)
	{
		return default(float);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3A34C70", Offset = "0x3A34C70", VA = "0x3A34C70")]
	public GisketchDropShadow()
	{
	}
}
