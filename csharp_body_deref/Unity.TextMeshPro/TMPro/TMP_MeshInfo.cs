// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_MeshInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000064")]
public struct TMP_MeshInfo
{
	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color32 s_DefaultColor;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x4")]
	private static readonly Vector3 s_DefaultNormal;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector4 s_DefaultTangent;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Bounds s_DefaultBounds;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x0")]
	public Mesh mesh;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x8")]
	public int vertexCount;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x10")]
	public Vector3[] vertices;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x18")]
	public Vector3[] normals;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x20")]
	public Vector4[] tangents;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x28")]
	public Vector4[] uvs0;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x30")]
	public Vector2[] uvs2;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x38")]
	public Color32[] colors32;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x40")]
	public int[] triangles;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x48")]
	public Material material;

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x2D3C090", Offset = "0x2D3A690", VA = "0x182D3C090")]
	public TMP_MeshInfo(Mesh mesh, int size)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2D3C630", Offset = "0x2D3AC30", VA = "0x182D3C630")]
	public TMP_MeshInfo(Mesh mesh, int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x2D3A560", Offset = "0x2D38B60", VA = "0x182D3A560")]
	public void ResizeMeshInfo(int size)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x2D3AA70", Offset = "0x2D39070", VA = "0x182D3AA70")]
	public void ResizeMeshInfo(int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x2D3A370", Offset = "0x2D38970", VA = "0x182D3A370")]
	public void Clear()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x2D3A420", Offset = "0x2D38A20", VA = "0x182D3A420")]
	public void Clear(bool uploadChanges)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x2D3A330", Offset = "0x2D38930", VA = "0x182D3A330")]
	public void ClearUnusedVertices()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x2D3A240", Offset = "0x2D38840", VA = "0x182D3A240")]
	public void ClearUnusedVertices(int startIndex)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x2D3A280", Offset = "0x2D38880", VA = "0x182D3A280")]
	public void ClearUnusedVertices(int startIndex, bool updateMesh)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x2D3B630", Offset = "0x2D39C30", VA = "0x182D3B630")]
	public void SortGeometry(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x2D3B6F0", Offset = "0x2D39CF0", VA = "0x182D3B6F0")]
	public void SortGeometry(IList<int> sortingOrder)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x2D3B890", Offset = "0x2D39E90", VA = "0x182D3B890")]
	public void SwapVertexData(int src, int dst)
	{
	}
}
