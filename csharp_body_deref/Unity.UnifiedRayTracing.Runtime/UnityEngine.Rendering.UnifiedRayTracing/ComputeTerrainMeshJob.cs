// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.ComputeTerrainMeshJob
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200003B")]
[BurstCompile]
internal struct ComputeTerrainMeshJob : IJobParallelFor
{
	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x0")]
	[ReadOnly]
	public NativeArray<float> heightmap;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x10")]
	[ReadOnly]
	public NativeArray<bool> holes;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x20")]
	public int width;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x24")]
	public int height;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x28")]
	public float3 heightmapScale;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x38")]
	public NativeArray<float3> positions;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x48")]
	public NativeArray<float2> uvs;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x58")]
	public NativeArray<float3> normals;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x68")]
	[NativeDisableParallelForRestriction]
	public NativeArray<int> indices;

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2D8ABD0", Offset = "0x2D891D0", VA = "0x182D8ABD0")]
	public void DisposeArrays()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2D8AC90", Offset = "0x2D89290", VA = "0x182D8AC90", Slot = "4")]
	public void Execute(int index)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x2D8A7D0", Offset = "0x2D88DD0", VA = "0x182D8A7D0")]
	private static float3 CalculateTerrainNormal(NativeArray<float> heightmap, int x, int y, int width, int height, float3 scale)
	{
		return default(float3);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x2D8AE60", Offset = "0x2D89460", VA = "0x182D8AE60")]
	private static float SampleHeight(int x, int y, int width, int height, NativeArray<float> heightmap, float scale)
	{
		return default(float);
	}
}
