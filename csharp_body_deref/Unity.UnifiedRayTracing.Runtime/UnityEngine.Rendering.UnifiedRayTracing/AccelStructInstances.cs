// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.AccelStructInstances
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public IReadOnlyCollection<InstanceEntry> instances
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x2D83C50", Offset = "0x2D82250", VA = "0x182D83C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public GeometryPool geometryPool
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000006")]
	public GraphicsBuffer indexBuffer
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x11282C0", Offset = "0x11268C0", VA = "0x1811282C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public GraphicsBuffer vertexBuffer
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x19BCDF0", Offset = "0x19BB3F0", VA = "0x1819BCDF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public bool instanceListValid
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x1979E60", Offset = "0x1978460", VA = "0x181979E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2D83B70", Offset = "0x2D82170", VA = "0x182D83B70")]
	internal AccelStructInstances(GeometryPool geometryPool)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2D82B40", Offset = "0x2D81140", VA = "0x182D82B40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2D81FB0", Offset = "0x2D805B0", VA = "0x182D81FB0")]
	public int AddInstance(MeshInstanceDesc meshInstance, uint materialID, uint renderingLayerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2D824E0", Offset = "0x2D80AE0", VA = "0x182D824E0")]
	public int AddInstances(Span<MeshInstanceDesc> meshInstances, Span<uint> materialIDs, Span<uint> renderingLayerMask)
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2D82060", Offset = "0x2D80660", VA = "0x182D82060")]
	private void AddInstance(BlockAllocator.Allocation slotAllocation, in MeshInstanceDesc meshInstance, uint materialID, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2D82D60", Offset = "0x2D81360", VA = "0x182D82D60")]
	public GeometryPool.MeshChunk GetEntryGeomAllocation(GeometryPoolHandle handle, int submeshIndex)
	{
		return default(GeometryPool.MeshChunk);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x2D83130", Offset = "0x2D81730", VA = "0x182D83130")]
	public void RemoveInstance(int instanceHandle)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2D82910", Offset = "0x2D80F10", VA = "0x182D82910")]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2D83680", Offset = "0x2D81C80", VA = "0x182D83680")]
	public void UpdateInstanceTransform(int instanceHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2D83460", Offset = "0x2D81A60", VA = "0x182D83460")]
	public void UpdateInstanceMaterialID(int instanceHandle, uint materialID)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2D83950", Offset = "0x2D81F50", VA = "0x182D83950")]
	public void UpdateRenderingLayerMask(int instanceHandle, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2D83230", Offset = "0x2D81830", VA = "0x182D83230")]
	public void UpdateInstanceMask(int instanceHandle, uint mask)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2D82E80", Offset = "0x2D81480", VA = "0x182D82E80")]
	public void NextFrame()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2D82640", Offset = "0x2D80C40", VA = "0x182D82640")]
	public void Bind(CommandBuffer cmd, IRayTracingShader shader)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2D82E30", Offset = "0x2D81430", VA = "0x182D82E30")]
	public int GetInstanceCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2D82FC0", Offset = "0x2D815C0", VA = "0x182D82FC0")]
	private static float4x4 NormalMatrix(float4x4 m)
	{
		return default(float4x4);
	}
}
