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
	[Address(RVA = "0x39CB240", Offset = "0x39CB240", VA = "0x39CB240")]
	public void Setup(Color color)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x39CB300", Offset = "0x39CB300", VA = "0x39CB300")]
	public void Setup(Color color, Vector2 offset, int layers, float grain, bool solid = false)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x39CB3F0", Offset = "0x39CB3F0", VA = "0x39CB3F0", Slot = "20")]
	public override void ModifyMesh(VertexHelper vh)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x39CB570", Offset = "0x39CB570", VA = "0x39CB570")]
	private void AddLayer(List<UIVertex> source, List<UIVertex> output, int layer)
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x39CBA20", Offset = "0x39CBA20", VA = "0x39CBA20")]
	private static float Hash(Vector3 position, int layer)
	{
		return default(float);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x39CBA70", Offset = "0x39CBA70", VA = "0x39CBA70")]
	public GisketchDropShadow()
	{
	}
}
