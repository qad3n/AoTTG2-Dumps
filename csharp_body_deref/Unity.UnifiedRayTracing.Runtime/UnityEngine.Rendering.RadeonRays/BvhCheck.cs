// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.BvhCheck
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000003")]
internal class BvhCheck
{
	[Token(Token = "0x2000004")]
	public class VertexBuffers
	{
		[Token(Token = "0x4000004")]
		[FieldOffset(Offset = "0x10")]
		public GraphicsBuffer vertices;

		[Token(Token = "0x4000005")]
		[FieldOffset(Offset = "0x18")]
		public GraphicsBuffer indices;

		[Token(Token = "0x4000006")]
		[FieldOffset(Offset = "0x20")]
		public uint vertexBufferOffset;

		[Token(Token = "0x4000007")]
		[FieldOffset(Offset = "0x24")]
		public uint vertexCount;

		[Token(Token = "0x4000008")]
		[FieldOffset(Offset = "0x28")]
		public uint vertexStride;

		[Token(Token = "0x4000009")]
		[FieldOffset(Offset = "0x2C")]
		public uint indexBufferOffset;

		[Token(Token = "0x400000A")]
		[FieldOffset(Offset = "0x30")]
		public IndexFormat indexFormat;

		[Token(Token = "0x400000B")]
		[FieldOffset(Offset = "0x34")]
		public uint indexCount;

		[Token(Token = "0x6000018")]
		[Address(RVA = "0x2D95B40", Offset = "0x2D94140", VA = "0x182D95B40")]
		public VertexBuffers()
		{
		}
	}

	[Token(Token = "0x2000005")]
	private sealed class VertexBuffersCPU
	{
		[Token(Token = "0x400000C")]
		[FieldOffset(Offset = "0x10")]
		public float[] vertices;

		[Token(Token = "0x400000D")]
		[FieldOffset(Offset = "0x18")]
		public uint[] indices;

		[Token(Token = "0x400000E")]
		[FieldOffset(Offset = "0x20")]
		public uint vertexStride;

		[Token(Token = "0x6000019")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public VertexBuffersCPU()
		{
		}
	}

	[Token(Token = "0x2000006")]
	private struct Triangle
	{
		[Token(Token = "0x400000F")]
		[FieldOffset(Offset = "0x0")]
		public float3 v0;

		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0xC")]
		public float3 v1;

		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x18")]
		public float3 v2;
	}

	[Token(Token = "0x4000003")]
	private const uint kInvalidID = 4294967295u;

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2D85FF0", Offset = "0x2D845F0", VA = "0x182D85FF0")]
	public static VertexBuffers Convert(MeshBuildInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2D869C0", Offset = "0x2D84FC0", VA = "0x182D869C0")]
	public static double SurfaceArea(AABB aabb)
	{
		return default(double);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2D868C0", Offset = "0x2D84EC0", VA = "0x182D868C0")]
	public static double NodeSahCost(uint nodeAddr, AABB nodeAabb, AABB parentAabb)
	{
		return default(double);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2D85FC0", Offset = "0x2D845C0", VA = "0x182D85FC0")]
	public static double CheckConsistency(VertexBuffers bvhVertexBuffers, BottomLevelLevelAccelStruct bvh, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2D85F90", Offset = "0x2D84590", VA = "0x182D85F90")]
	public static double CheckConsistency(GraphicsBuffer bvhBuffer, uint bvhBufferOffset, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2D85E90", Offset = "0x2D84490", VA = "0x182D85E90")]
	private static double CheckConsistency(VertexBuffers bvhVertexBuffers, GraphicsBuffer bvhBuffer, uint bvhBufferOffset, GraphicsBuffer bvhLeavesBuffer, uint bvhLeavesBufferOffset, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2D86260", Offset = "0x2D84860", VA = "0x182D86260")]
	public static int ExtractBits(uint value, int startBit, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2D868B0", Offset = "0x2D84EB0", VA = "0x182D868B0")]
	public static bool IsLeafNode(uint nodeAddr)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2D86720", Offset = "0x2D84D20", VA = "0x182D86720")]
	public static uint GetLeafNodeFirstPrim(uint nodeAddr)
	{
		return default(uint);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2D86730", Offset = "0x2D84D30", VA = "0x182D86730")]
	public static uint GetLeafNodePrimCount(uint nodeAddr)
	{
		return default(uint);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2D85A10", Offset = "0x2D84010", VA = "0x182D85A10")]
	private static double CheckConsistency(VertexBuffers bvhVertexBuffers, GraphicsBuffer bvhBuffer, uint bvhBufferOffset, GraphicsBuffer bvhLeavesBuffer, uint bvhLeavesBufferOffset, BvhHeader header, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2D866B0", Offset = "0x2D84CB0", VA = "0x182D866B0")]
	private static uint3 GetFaceIndices(uint[] indices, uint triangleIdx)
	{
		return default(uint3);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2D86850", Offset = "0x2D84E50", VA = "0x182D86850")]
	private static float3 GetVertex(float[] vertices, uint stride, uint idx)
	{
		return default(float3);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2D86740", Offset = "0x2D84D40", VA = "0x182D86740")]
	private static Triangle GetTriangle(float[] vertices, uint stride, uint3 idx)
	{
		return default(Triangle);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2D86090", Offset = "0x2D84690", VA = "0x182D86090")]
	private static VertexBuffersCPU DownloadVertexData(VertexBuffers vertexBuffers)
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2D86290", Offset = "0x2D84890", VA = "0x182D86290")]
	private static AABB GetAabb(VertexBuffersCPU bvhVertexBuffers, BvhNode[] bvhNodes, uint4[] bvhLeafNodes, uint nodeAddr, bool isTopLevel)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BvhCheck()
	{
	}
}
