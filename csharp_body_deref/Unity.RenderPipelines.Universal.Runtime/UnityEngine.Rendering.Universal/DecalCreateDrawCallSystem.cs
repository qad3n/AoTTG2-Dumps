// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalCreateDrawCallSystem
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

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000083")]
internal class DecalCreateDrawCallSystem
{
	[Token(Token = "0x2000084")]
	[BurstCompile]
	private struct DrawCallJob : IJob
	{
		[Token(Token = "0x4000274")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public NativeArray<float4x4> decalToWorlds;

		[Token(Token = "0x4000275")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public NativeArray<float4x4> normalToWorlds;

		[Token(Token = "0x4000276")]
		[FieldOffset(Offset = "0x20")]
		[ReadOnly]
		public NativeArray<float4x4> sizeOffsets;

		[Token(Token = "0x4000277")]
		[FieldOffset(Offset = "0x30")]
		[ReadOnly]
		public NativeArray<float2> drawDistances;

		[Token(Token = "0x4000278")]
		[FieldOffset(Offset = "0x40")]
		[ReadOnly]
		public NativeArray<float2> angleFades;

		[Token(Token = "0x4000279")]
		[FieldOffset(Offset = "0x50")]
		[ReadOnly]
		public NativeArray<float4> uvScaleBiases;

		[Token(Token = "0x400027A")]
		[FieldOffset(Offset = "0x60")]
		[ReadOnly]
		public NativeArray<int> layerMasks;

		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x70")]
		[ReadOnly]
		public NativeArray<ulong> sceneLayerMasks;

		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x80")]
		[ReadOnly]
		public NativeArray<float> fadeFactors;

		[Token(Token = "0x400027D")]
		[FieldOffset(Offset = "0x90")]
		[ReadOnly]
		public NativeArray<BoundingSphere> boundingSpheres;

		[Token(Token = "0x400027E")]
		[FieldOffset(Offset = "0xA0")]
		[ReadOnly]
		public NativeArray<uint> renderingLayerMasks;

		[Token(Token = "0x400027F")]
		[FieldOffset(Offset = "0xB0")]
		public Vector3 cameraPosition;

		[Token(Token = "0x4000280")]
		[FieldOffset(Offset = "0xC0")]
		public ulong sceneCullingMask;

		[Token(Token = "0x4000281")]
		[FieldOffset(Offset = "0xC8")]
		public int cullingMask;

		[Token(Token = "0x4000282")]
		[FieldOffset(Offset = "0xD0")]
		[ReadOnly]
		public NativeArray<int> visibleDecalIndices;

		[Token(Token = "0x4000283")]
		[FieldOffset(Offset = "0xE0")]
		public int visibleDecalCount;

		[Token(Token = "0x4000284")]
		[FieldOffset(Offset = "0xE4")]
		public float maxDrawDistance;

		[Token(Token = "0x4000285")]
		[FieldOffset(Offset = "0xE8")]
		[WriteOnly]
		public NativeArray<float4x4> decalToWorldsDraw;

		[Token(Token = "0x4000286")]
		[FieldOffset(Offset = "0xF8")]
		[WriteOnly]
		public NativeArray<float4x4> normalToDecalsDraw;

		[Token(Token = "0x4000287")]
		[FieldOffset(Offset = "0x108")]
		[WriteOnly]
		public NativeArray<float> renderingLayerMasksDraw;

		[Token(Token = "0x4000288")]
		[FieldOffset(Offset = "0x118")]
		[WriteOnly]
		public NativeArray<DecalSubDrawCall> subCalls;

		[Token(Token = "0x4000289")]
		[FieldOffset(Offset = "0x128")]
		[WriteOnly]
		public NativeArray<int> subCallCount;

		[Token(Token = "0x600031F")]
		[Address(RVA = "0x2C28840", Offset = "0x2C26E40", VA = "0x182C28840", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x10")]
	private DecalEntityManager m_EntityManager;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x18")]
	private ProfilingSampler m_Sampler;

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x20")]
	private float m_MaxDrawDistance;

	[Token(Token = "0x170000DE")]
	public float maxDrawDistance
	{
		[Token(Token = "0x600031A")]
		[Address(RVA = "0x584280", Offset = "0x582880", VA = "0x180584280")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600031B")]
		[Address(RVA = "0x5842A0", Offset = "0x5828A0", VA = "0x1805842A0")]
		set
		{
		}
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2C1C680", Offset = "0x2C1AC80", VA = "0x182C1C680")]
	public DecalCreateDrawCallSystem(DecalEntityManager entityManager, float maxDrawDistance)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2C1BF30", Offset = "0x2C1A530", VA = "0x182C1BF30")]
	public void Execute()
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2C1C3E0", Offset = "0x2C1A9E0", VA = "0x182C1C3E0")]
	private void Execute(DecalCachedChunk cachedChunk, DecalCulledChunk culledChunk, DecalDrawCallChunk drawCallChunk, int count)
	{
	}
}
