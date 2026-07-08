using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200005A")]
public struct TMP_MeshInfo
{
	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color32 s_DefaultColor;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x4")]
	private static readonly Vector3 s_DefaultNormal;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector4 s_DefaultTangent;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Bounds s_DefaultBounds;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x0")]
	public Mesh mesh;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x8")]
	public int vertexCount;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x10")]
	public Vector3[] vertices;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x18")]
	public Vector3[] normals;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x20")]
	public Vector4[] tangents;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x28")]
	public Vector2[] uvs0;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x30")]
	public Vector2[] uvs2;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x38")]
	public Color32[] colors32;

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x40")]
	public int[] triangles;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x48")]
	public Material material;

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x493A700", Offset = "0x493A700", VA = "0x493A700")]
	public TMP_MeshInfo(Mesh mesh, int size)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x493AD10", Offset = "0x493AD10", VA = "0x493AD10")]
	public TMP_MeshInfo(Mesh mesh, int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x493B570", Offset = "0x493B570", VA = "0x493B570")]
	public void ResizeMeshInfo(int size)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x493BA40", Offset = "0x493BA40", VA = "0x493BA40")]
	public void ResizeMeshInfo(int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x493C3E0", Offset = "0x493C3E0", VA = "0x493C3E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x493C480", Offset = "0x493C480", VA = "0x493C480")]
	public void Clear(bool uploadChanges)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x493C5B0", Offset = "0x493C5B0", VA = "0x493C5B0")]
	public void ClearUnusedVertices()
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x493C5E0", Offset = "0x493C5E0", VA = "0x493C5E0")]
	public void ClearUnusedVertices(int startIndex)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x493C610", Offset = "0x493C610", VA = "0x493C610")]
	public void ClearUnusedVertices(int startIndex, bool updateMesh)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x493C6B0", Offset = "0x493C6B0", VA = "0x493C6B0")]
	public void SortGeometry(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x493CDA0", Offset = "0x493CDA0", VA = "0x493CDA0")]
	public void SortGeometry(IList<int> sortingOrder)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x493C760", Offset = "0x493C760", VA = "0x493C760")]
	public void SwapVertexData(int src, int dst)
	{
	}
}
