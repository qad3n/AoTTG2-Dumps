// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_MeshInfo
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x67317A0", Offset = "0x67307A0", VA = "0x67317A0")]
	public TMP_MeshInfo(Mesh mesh, int size)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x6731DC0", Offset = "0x6730DC0", VA = "0x6731DC0")]
	public TMP_MeshInfo(Mesh mesh, int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x67326A0", Offset = "0x67316A0", VA = "0x67326A0")]
	public void ResizeMeshInfo(int size)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x6732B80", Offset = "0x6731B80", VA = "0x6732B80")]
	public void ResizeMeshInfo(int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x6733540", Offset = "0x6732540", VA = "0x6733540")]
	public void Clear()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x67335E0", Offset = "0x67325E0", VA = "0x67335E0")]
	public void Clear(bool uploadChanges)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x6733710", Offset = "0x6732710", VA = "0x6733710")]
	public void ClearUnusedVertices()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x6733740", Offset = "0x6732740", VA = "0x6733740")]
	public void ClearUnusedVertices(int startIndex)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x6733770", Offset = "0x6732770", VA = "0x6733770")]
	public void ClearUnusedVertices(int startIndex, bool updateMesh)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x6733810", Offset = "0x6732810", VA = "0x6733810")]
	public void SortGeometry(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x6733F10", Offset = "0x6732F10", VA = "0x6733F10")]
	public void SortGeometry(IList<int> sortingOrder)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x67338B0", Offset = "0x67328B0", VA = "0x67338B0")]
	public void SwapVertexData(int src, int dst)
	{
	}
}
