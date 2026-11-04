// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalUpdateCachedSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;
using Unity.Mathematics;
using UnityEngine.Jobs;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200008F")]
internal class DecalUpdateCachedSystem
{
	[Token(Token = "0x2000090")]
	[BurstCompile]
	public struct UpdateTransformsJob : IJobParallelForTransform
	{
		[Token(Token = "0x40002D0")]
		[FieldOffset(Offset = "0x0")]
		private static readonly quaternion k_MinusYtoZRotation;

		[Token(Token = "0x40002D1")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<float3> positions;

		[Token(Token = "0x40002D2")]
		[FieldOffset(Offset = "0x10")]
		public NativeArray<quaternion> rotations;

		[Token(Token = "0x40002D3")]
		[FieldOffset(Offset = "0x20")]
		public NativeArray<float3> scales;

		[Token(Token = "0x40002D4")]
		[FieldOffset(Offset = "0x30")]
		public NativeArray<bool> dirty;

		[Token(Token = "0x40002D5")]
		[FieldOffset(Offset = "0x40")]
		[ReadOnly]
		public NativeArray<DecalScaleMode> scaleModes;

		[Token(Token = "0x40002D6")]
		[FieldOffset(Offset = "0x50")]
		[ReadOnly]
		public NativeArray<float4x4> sizeOffsets;

		[Token(Token = "0x40002D7")]
		[FieldOffset(Offset = "0x60")]
		[WriteOnly]
		public NativeArray<float4x4> decalToWorlds;

		[Token(Token = "0x40002D8")]
		[FieldOffset(Offset = "0x70")]
		[WriteOnly]
		public NativeArray<float4x4> normalToWorlds;

		[Token(Token = "0x40002D9")]
		[FieldOffset(Offset = "0x80")]
		[WriteOnly]
		public NativeArray<BoundingSphere> boundingSpheres;

		[Token(Token = "0x40002DA")]
		[FieldOffset(Offset = "0x90")]
		public float minDistance;

		[Token(Token = "0x6000355")]
		[Address(RVA = "0x2C349D0", Offset = "0x2C32FD0", VA = "0x182C349D0")]
		private float DistanceBetweenQuaternions(quaternion a, quaternion b)
		{
			return default(float);
		}

		[Token(Token = "0x6000356")]
		[Address(RVA = "0x2C34A20", Offset = "0x2C33020", VA = "0x182C34A20", Slot = "4")]
		public void Execute(int index, TransformAccess transform)
		{
		}

		[Token(Token = "0x6000357")]
		[Address(RVA = "0x2C352B0", Offset = "0x2C338B0", VA = "0x182C352B0")]
		private BoundingSphere GetDecalProjectBoundingSphere(Matrix4x4 decalToWorld)
		{
			return default(BoundingSphere);
		}
	}

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x10")]
	private DecalEntityManager m_EntityManager;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x18")]
	private ProfilingSampler m_Sampler;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x20")]
	private ProfilingSampler m_SamplerJob;

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x2C27EA0", Offset = "0x2C264A0", VA = "0x182C27EA0")]
	public DecalUpdateCachedSystem(DecalEntityManager entityManager)
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x2C27D30", Offset = "0x2C26330", VA = "0x182C27D30")]
	public void Execute()
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x2C27A10", Offset = "0x2C26010", VA = "0x182C27A10")]
	private void Execute(DecalEntityChunk entityChunk, DecalCachedChunk cachedChunk, int count)
	{
	}
}
