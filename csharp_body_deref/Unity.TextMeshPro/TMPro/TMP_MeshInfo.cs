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

[Token(Token = "0x2000070")]
public struct TMP_MeshInfo
{
	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color32 s_DefaultColor;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x4")]
	private static readonly Vector3 s_DefaultNormal;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Vector4 s_DefaultTangent;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Bounds s_DefaultBounds;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x0")]
	public Mesh mesh;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x8")]
	public int vertexCount;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x10")]
	public Vector3[] vertices;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x18")]
	public Vector3[] normals;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x20")]
	public Vector4[] tangents;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x28")]
	public Vector2[] uvs0;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x30")]
	public Vector2[] uvs2;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x38")]
	public Color32[] colors32;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x40")]
	public int[] triangles;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x48")]
	public Material material;

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4C87C80", Offset = "0x4C87C80", VA = "0x4C87C80")]
	public TMP_MeshInfo(Mesh mesh, int size)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4C88290", Offset = "0x4C88290", VA = "0x4C88290")]
	public TMP_MeshInfo(Mesh mesh, int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4C88AF0", Offset = "0x4C88AF0", VA = "0x4C88AF0")]
	public void ResizeMeshInfo(int size)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x4C88FC0", Offset = "0x4C88FC0", VA = "0x4C88FC0")]
	public void ResizeMeshInfo(int size, bool isVolumetric)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x4C89960", Offset = "0x4C89960", VA = "0x4C89960")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x4C89A00", Offset = "0x4C89A00", VA = "0x4C89A00")]
	public void Clear(bool uploadChanges)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x4C89B30", Offset = "0x4C89B30", VA = "0x4C89B30")]
	public void ClearUnusedVertices()
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4C89B60", Offset = "0x4C89B60", VA = "0x4C89B60")]
	public void ClearUnusedVertices(int startIndex)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4C89B90", Offset = "0x4C89B90", VA = "0x4C89B90")]
	public void ClearUnusedVertices(int startIndex, bool updateMesh)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4C89C30", Offset = "0x4C89C30", VA = "0x4C89C30")]
	public void SortGeometry(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4C8A320", Offset = "0x4C8A320", VA = "0x4C8A320")]
	public void SortGeometry(IList<int> sortingOrder)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4C89CE0", Offset = "0x4C89CE0", VA = "0x4C89CE0")]
	public void SwapVertexData(int src, int dst)
	{
	}
}
