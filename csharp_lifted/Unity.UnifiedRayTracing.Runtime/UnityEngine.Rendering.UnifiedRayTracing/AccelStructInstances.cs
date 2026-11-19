// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.AccelStructInstances
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000026")]
internal sealed class AccelStructInstances : IDisposable
{
	[Token(Token = "0x2000027")]
	public struct RTInstance
	{
		[Token(Token = "0x40000FA")]
		[FieldOffset(Offset = "0x0")]
		public float4x4 localToWorld;

		[Token(Token = "0x40000FB")]
		[FieldOffset(Offset = "0x40")]
		public float4x4 previousLocalToWorld;

		[Token(Token = "0x40000FC")]
		[FieldOffset(Offset = "0x80")]
		public float4x4 localToWorldNormals;

		[Token(Token = "0x40000FD")]
		[FieldOffset(Offset = "0xC0")]
		public uint renderingLayerMask;

		[Token(Token = "0x40000FE")]
		[FieldOffset(Offset = "0xC4")]
		public uint instanceMask;

		[Token(Token = "0x40000FF")]
		[FieldOffset(Offset = "0xC8")]
		public uint userMaterialID;

		[Token(Token = "0x4000100")]
		[FieldOffset(Offset = "0xCC")]
		public uint geometryIndex;
	}

	[Token(Token = "0x2000028")]
	public class InstanceEntry
	{
		[Token(Token = "0x4000101")]
		[FieldOffset(Offset = "0x10")]
		public GeometryPoolHandle geometryPoolHandle;

		[Token(Token = "0x4000102")]
		[FieldOffset(Offset = "0x14")]
		public BlockAllocator.Allocation indexInInstanceBuffer;

		[Token(Token = "0x4000103")]
		[FieldOffset(Offset = "0x20")]
		public uint instanceMask;

		[Token(Token = "0x4000104")]
		[FieldOffset(Offset = "0x24")]
		public uint vertexOffset;

		[Token(Token = "0x4000105")]
		[FieldOffset(Offset = "0x28")]
		public uint indexOffset;

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x6780270", Offset = "0x677F270", VA = "0x6780270")]
		public InstanceEntry()
		{
		}
	}

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x10")]
	private readonly GeometryPool m_GeometryPool;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x18")]
	private readonly PersistentGpuArray<RTInstance> m_InstanceBuffer;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<int, InstanceEntry> m_Instances;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x28")]
	private uint m_FrameTimestamp;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x2C")]
	private uint m_TransformTouchedLastTimestamp;

	[Token(Token = "0x17000003")]
	public PersistentGpuArray<RTInstance> instanceBuffer
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x677F690", Offset = "0x677E690", VA = "0x677F690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public IReadOnlyCollection<InstanceEntry> instances
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x677F6A0", Offset = "0x677E6A0", VA = "0x677F6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public GeometryPool geometryPool
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x677F6E0", Offset = "0x677E6E0", VA = "0x677F6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public GraphicsBuffer indexBuffer
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x6780360", Offset = "0x677F360", VA = "0x6780360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public GraphicsBuffer vertexBuffer
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x6780380", Offset = "0x677F380", VA = "0x6780380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public bool instanceListValid
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x67807E0", Offset = "0x677F7E0", VA = "0x67807E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x677AFF0", Offset = "0x6779FF0", VA = "0x677AFF0")]
	internal AccelStructInstances(GeometryPool geometryPool)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x677BDC0", Offset = "0x677ADC0", VA = "0x677BDC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x677CB50", Offset = "0x677BB50", VA = "0x677CB50")]
	public int AddInstance(MeshInstanceDesc meshInstance, uint materialID, uint renderingLayerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x677FEC0", Offset = "0x677EEC0", VA = "0x677FEC0")]
	public int AddInstances(Span<MeshInstanceDesc> meshInstances, Span<uint> materialIDs, Span<uint> renderingLayerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x677F6F0", Offset = "0x677E6F0", VA = "0x677F6F0")]
	private void AddInstance(BlockAllocator.Allocation slotAllocation, in MeshInstanceDesc meshInstance, uint materialID, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x6780290", Offset = "0x677F290", VA = "0x6780290")]
	public GeometryPool.MeshChunk GetEntryGeomAllocation(GeometryPoolHandle handle, int submeshIndex)
	{
		return default(GeometryPool.MeshChunk);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x677DE70", Offset = "0x677CE70", VA = "0x677DE70")]
	public void RemoveInstance(int instanceHandle)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x67803A0", Offset = "0x677F3A0", VA = "0x67803A0")]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x677E220", Offset = "0x677D220", VA = "0x677E220")]
	public void UpdateInstanceTransform(int instanceHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x677E6A0", Offset = "0x677D6A0", VA = "0x677E6A0")]
	public void UpdateInstanceMaterialID(int instanceHandle, uint materialID)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x6780640", Offset = "0x677F640", VA = "0x6780640")]
	public void UpdateRenderingLayerMask(int instanceHandle, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x677E9C0", Offset = "0x677D9C0", VA = "0x677E9C0")]
	public void UpdateInstanceMask(int instanceHandle, uint mask)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x677EE40", Offset = "0x677DE40", VA = "0x677EE40")]
	public void NextFrame()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x677B770", Offset = "0x677A770", VA = "0x677B770")]
	public void Bind(CommandBuffer cmd, IRayTracingShader shader)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x6780800", Offset = "0x677F800", VA = "0x6780800")]
	public int GetInstanceCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x6780050", Offset = "0x677F050", VA = "0x6780050")]
	private static float4x4 NormalMatrix(float4x4 m)
	{
		return default(float4x4);
	}
}
