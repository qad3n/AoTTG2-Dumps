// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.BvhCheck
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x67754D0", Offset = "0x67744D0", VA = "0x67754D0")]
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
		[Address(RVA = "0x6776550", Offset = "0x6775550", VA = "0x6776550")]
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
	[Address(RVA = "0x6775430", Offset = "0x6774430", VA = "0x6775430")]
	public static VertexBuffers Convert(MeshBuildInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x67754E0", Offset = "0x67744E0", VA = "0x67754E0")]
	public static double SurfaceArea(AABB aabb)
	{
		return default(double);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6775530", Offset = "0x6774530", VA = "0x6775530")]
	public static double NodeSahCost(uint nodeAddr, AABB nodeAabb, AABB parentAabb)
	{
		return default(double);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x6775610", Offset = "0x6774610", VA = "0x6775610")]
	public static double CheckConsistency(VertexBuffers bvhVertexBuffers, BottomLevelLevelAccelStruct bvh, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6775710", Offset = "0x6774710", VA = "0x6775710")]
	public static double CheckConsistency(GraphicsBuffer bvhBuffer, uint bvhBufferOffset, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x6775630", Offset = "0x6774630", VA = "0x6775630")]
	private static double CheckConsistency(VertexBuffers bvhVertexBuffers, GraphicsBuffer bvhBuffer, uint bvhBufferOffset, GraphicsBuffer bvhLeavesBuffer, uint bvhLeavesBufferOffset, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x6775BC0", Offset = "0x6774BC0", VA = "0x6775BC0")]
	public static int ExtractBits(uint value, int startBit, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x67755F0", Offset = "0x67745F0", VA = "0x67755F0")]
	public static bool IsLeafNode(uint nodeAddr)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6775BE0", Offset = "0x6774BE0", VA = "0x6775BE0")]
	public static uint GetLeafNodeFirstPrim(uint nodeAddr)
	{
		return default(uint);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6775600", Offset = "0x6774600", VA = "0x6775600")]
	public static uint GetLeafNodePrimCount(uint nodeAddr)
	{
		return default(uint);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6775730", Offset = "0x6774730", VA = "0x6775730")]
	private static double CheckConsistency(VertexBuffers bvhVertexBuffers, GraphicsBuffer bvhBuffer, uint bvhBufferOffset, GraphicsBuffer bvhLeavesBuffer, uint bvhLeavesBufferOffset, BvhHeader header, uint primitiveCount)
	{
		return default(double);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6776390", Offset = "0x6775390", VA = "0x6776390")]
	private static uint3 GetFaceIndices(uint[] indices, uint triangleIdx)
	{
		return default(uint3);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x67763E0", Offset = "0x67753E0", VA = "0x67763E0")]
	private static float3 GetVertex(float[] vertices, uint stride, uint idx)
	{
		return default(float3);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x6776430", Offset = "0x6775430", VA = "0x6776430")]
	private static Triangle GetTriangle(float[] vertices, uint stride, uint3 idx)
	{
		return default(Triangle);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x6775C00", Offset = "0x6774C00", VA = "0x6775C00")]
	private static VertexBuffersCPU DownloadVertexData(VertexBuffers vertexBuffers)
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x6775DC0", Offset = "0x6774DC0", VA = "0x6775DC0")]
	private static AABB GetAabb(VertexBuffersCPU bvhVertexBuffers, BvhNode[] bvhNodes, uint4[] bvhLeafNodes, uint nodeAddr, bool isTopLevel)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6776560", Offset = "0x6775560", VA = "0x6776560")]
	public BvhCheck()
	{
	}
}
