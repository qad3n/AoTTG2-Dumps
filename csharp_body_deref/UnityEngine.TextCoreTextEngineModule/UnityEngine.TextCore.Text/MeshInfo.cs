using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000015")]
internal struct MeshInfo
{
	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x0")]
	public int vertexCount;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x8")]
	public TextCoreVertex[] vertexData;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x10")]
	public Material material;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.Ignore]
	private static readonly Color32 k_DefaultColor;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.Ignore]
	private static readonly Vector3 k_DefaultNormal;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.Ignore]
	private static readonly Vector4 k_DefaultTangent;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.Ignore]
	private static readonly Bounds k_DefaultBounds;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.Ignore]
	public Mesh mesh;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.Ignore]
	public Vector3[] vertices;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.Ignore]
	public Vector3[] normals;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.Ignore]
	public Vector4[] tangents;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.Ignore]
	public int vertexBufferSize;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x40")]
	[UnityEngine.Bindings.Ignore]
	public Vector4[] uvs0;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x48")]
	[UnityEngine.Bindings.Ignore]
	public Vector2[] uvs2;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x50")]
	[UnityEngine.Bindings.Ignore]
	public Color32[] colors32;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x58")]
	[UnityEngine.Bindings.Ignore]
	public int[] triangles;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x60")]
	[UnityEngine.Bindings.Ignore]
	public VertexDataLayout vertexDataLayout;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x64")]
	internal GlyphRenderMode glyphRenderMode;

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4B8DB90", Offset = "0x4B8DB90", VA = "0x4B8DB90")]
	public MeshInfo(int size, VertexDataLayout layout)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4B8E210", Offset = "0x4B8E210", VA = "0x4B8E210")]
	internal void ResizeMeshInfo(int size)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4B8E400", Offset = "0x4B8E400", VA = "0x4B8E400")]
	internal void Clear(bool uploadChanges)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4B8E460", Offset = "0x4B8E460", VA = "0x4B8E460")]
	internal void ClearUnusedVertices()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4B8E4D0", Offset = "0x4B8E4D0", VA = "0x4B8E4D0")]
	internal void SortGeometry(VertexSortingOrder order)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4B8E580", Offset = "0x4B8E580", VA = "0x4B8E580")]
	internal void SwapVertexData(int src, int dst)
	{
	}
}
