// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingAccelStruct
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Mathematics;
using UnityEngine.Rendering.RadeonRays;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000045")]
internal class ComputeRayTracingAccelStruct : IRayTracingAccelStruct, IDisposable
{
	[Token(Token = "0x2000046")]
	private struct Triangle
	{
		[Token(Token = "0x40001AA")]
		[FieldOffset(Offset = "0x0")]
		public float3 v0;

		[Token(Token = "0x40001AB")]
		[FieldOffset(Offset = "0xC")]
		public float3 v1;

		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0x18")]
		public float3 v2;
	}

	[Token(Token = "0x2000047")]
	private sealed class RadeonRaysInstance
	{
		[Token(Token = "0x40001AD")]
		[FieldOffset(Offset = "0x10")]
		public (int mesh, int subMeshIndex) geomKey;

		[Token(Token = "0x40001AE")]
		[FieldOffset(Offset = "0x18")]
		public MeshBlas blas;

		[Token(Token = "0x40001AF")]
		[FieldOffset(Offset = "0x20")]
		public uint instanceMask;

		[Token(Token = "0x40001B0")]
		[FieldOffset(Offset = "0x24")]
		public bool triangleCullingEnabled;

		[Token(Token = "0x40001B1")]
		[FieldOffset(Offset = "0x25")]
		public bool invertTriangleCulling;

		[Token(Token = "0x40001B2")]
		[FieldOffset(Offset = "0x28")]
		public uint userInstanceID;

		[Token(Token = "0x40001B3")]
		[FieldOffset(Offset = "0x2C")]
		public bool opaqueGeometry;

		[Token(Token = "0x40001B4")]
		[FieldOffset(Offset = "0x30")]
		public UnityEngine.Rendering.RadeonRays.Transform localToWorldTransform;

		[Token(Token = "0x6000121")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public RadeonRaysInstance()
		{
		}
	}

	[Token(Token = "0x2000048")]
	private sealed class MeshBlas
	{
		[Token(Token = "0x40001B5")]
		[FieldOffset(Offset = "0x10")]
		public MeshBuildInfo buildInfo;

		[Token(Token = "0x40001B6")]
		[FieldOffset(Offset = "0x40")]
		public BlockAllocator.Allocation bvhAlloc;

		[Token(Token = "0x40001B7")]
		[FieldOffset(Offset = "0x4C")]
		public BlockAllocator.Allocation bvhLeavesAlloc;

		[Token(Token = "0x40001B8")]
		[FieldOffset(Offset = "0x58")]
		public BlockAllocator.Allocation blasVertices;

		[Token(Token = "0x40001B9")]
		[FieldOffset(Offset = "0x64")]
		public bool bvhBuilt;

		[Token(Token = "0x40001BA")]
		[FieldOffset(Offset = "0x68")]
		private uint refCount;

		[Token(Token = "0x6000122")]
		[Address(RVA = "0x2D97300", Offset = "0x2D95900", VA = "0x182D97300")]
		public void IncRef()
		{
		}

		[Token(Token = "0x6000123")]
		[Address(RVA = "0x2D972F0", Offset = "0x2D958F0", VA = "0x182D972F0")]
		public void DecRef()
		{
		}

		[Token(Token = "0x6000124")]
		[Address(RVA = "0x2D97310", Offset = "0x2D95910", VA = "0x182D97310")]
		public bool IsUnreferenced()
		{
			return default(bool);
		}

		[Token(Token = "0x6000125")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MeshBlas()
		{
		}
	}

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x10")]
	private readonly uint m_HandleObfuscation;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x18")]
	private readonly RadeonRaysAPI m_RadeonRaysAPI;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x20")]
	private readonly BuildFlags m_BuildFlags;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x28")]
	private readonly ReferenceCounter m_Counter;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<(int mesh, int subMeshIndex), MeshBlas> m_Blases;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x38")]
	internal BlockAllocator m_BlasAllocator;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x58")]
	private GraphicsBuffer m_BlasBuffer;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x60")]
	internal BlockAllocator m_BlasLeavesAllocator;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x80")]
	private GraphicsBuffer m_BlasLeavesBuffer;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x88")]
	private readonly BLASPositionsPool m_BlasPositions;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x90")]
	private TopLevelAccelStruct? m_TopLevelAccelStruct;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0xB8")]
	private readonly ComputeShader m_CopyShader;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0xC0")]
	private readonly Dictionary<int, RadeonRaysInstance> m_RadeonInstances;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0xC8")]
	private readonly Queue<uint> m_FreeHandles;

	[Token(Token = "0x1700001F")]
	internal GraphicsBuffer topLevelBvhBuffer
	{
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x2D8A780", Offset = "0x2D88D80", VA = "0x182D8A780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000020")]
	internal GraphicsBuffer bottomLevelBvhBuffer
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x2D8A6E0", Offset = "0x2D88CE0", VA = "0x182D8A6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	internal GraphicsBuffer instanceInfoBuffer
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x2D8A730", Offset = "0x2D88D30", VA = "0x182D8A730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x2D8A1B0", Offset = "0x2D887B0", VA = "0x182D8A1B0")]
	internal ComputeRayTracingAccelStruct(AccelerationStructureOptions options, RayTracingResources resources, ReferenceCounter counter, int blasBufferInitialSizeBytes = 67108864)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x2D89310", Offset = "0x2D87910", VA = "0x182D89310", Slot = "12")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x2D86B00", Offset = "0x2D85100", VA = "0x182D86B00", Slot = "4")]
	public int AddInstance(MeshInstanceDesc meshInstance)
	{
		return default(int);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x2D89E00", Offset = "0x2D88400", VA = "0x182D89E00", Slot = "5")]
	public void RemoveInstance(int instanceHandle)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x2D88AD0", Offset = "0x2D870D0", VA = "0x182D88AD0", Slot = "6")]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2D8A0E0", Offset = "0x2D886E0", VA = "0x182D8A0E0", Slot = "7")]
	public void UpdateInstanceTransform(int instanceHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2D89FE0", Offset = "0x2D885E0", VA = "0x182D89FE0", Slot = "8")]
	public void UpdateInstanceID(int instanceHandle, uint instanceID)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x2D8A060", Offset = "0x2D88660", VA = "0x182D8A060", Slot = "9")]
	public void UpdateInstanceMask(int instanceHandle, uint mask)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2D88970", Offset = "0x2D86F70", VA = "0x182D88970", Slot = "10")]
	public void Build(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2D895F0", Offset = "0x2D87BF0", VA = "0x182D895F0", Slot = "11")]
	public ulong GetBuildScratchBufferRequiredSizeInBytes()
	{
		return default(ulong);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2D89560", Offset = "0x2D87B60", VA = "0x182D89560")]
	private void FreeTopLevelAccelStruct()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x2D89990", Offset = "0x2D87F90", VA = "0x182D89990")]
	private MeshBlas GetOrAllocateMeshBlas(Mesh mesh, int subMeshIndex)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2D87700", Offset = "0x2D85D00", VA = "0x182D87700")]
	private void AllocateBlas(Mesh mesh, int submeshIndex, MeshBlas blas)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2D89C50", Offset = "0x2D88250", VA = "0x182D89C50")]
	private GraphicsBuffer LoadIndexBuffer(Mesh mesh)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x2D89C70", Offset = "0x2D88270", VA = "0x182D89C70")]
	private GraphicsBuffer LoadPositionBuffer(Mesh mesh, out int stride, out int offset)
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x2D891F0", Offset = "0x2D877F0", VA = "0x182D891F0")]
	private void DeleteMeshBlas((int mesh, int subMeshIndex) geomKey, MeshBlas blas)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x2D89610", Offset = "0x2D87C10", VA = "0x182D89610")]
	private ulong GetBvhBuildScratchBufferSizeInDwords()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x2D891B0", Offset = "0x2D877B0", VA = "0x182D891B0")]
	private void CreateBvh(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x2D88280", Offset = "0x2D86880", VA = "0x182D88280")]
	private void BuildMissingBottomLevelAccelStructs(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x2D88510", Offset = "0x2D86B10", VA = "0x182D88510")]
	private void BuildTopLevelAccelStruct(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x2D88E20", Offset = "0x2D87420", VA = "0x182D88E20")]
	private UnityEngine.Rendering.RadeonRays.BuildFlags ConvertFlagsToGpuBuild(BuildFlags flags)
	{
		return default(UnityEngine.Rendering.RadeonRays.BuildFlags);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x2D87D60", Offset = "0x2D86360", VA = "0x182D87D60")]
	public void Bind(CommandBuffer cmd, string name, IRayTracingShader shader)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x2D87FF0", Offset = "0x2D865F0", VA = "0x182D87FF0")]
	public void Bind(CommandBuffer cmd, string name, ComputeShader shader, int kernelIndex)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x2D890B0", Offset = "0x2D876B0", VA = "0x182D890B0")]
	private static UnityEngine.Rendering.RadeonRays.Transform ConvertTranform(Matrix4x4 input)
	{
		return default(UnityEngine.Rendering.RadeonRays.Transform);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x2D88E30", Offset = "0x2D87430", VA = "0x182D88E30")]
	private static Matrix4x4 ConvertTranform(UnityEngine.Rendering.RadeonRays.Transform input)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2D898D0", Offset = "0x2D87ED0", VA = "0x182D898D0")]
	private static int3 GetFaceIndices(List<int> indices, int triangleIdx)
	{
		return default(int3);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x2D89B00", Offset = "0x2D88100", VA = "0x182D89B00")]
	private static Triangle GetTriangle(List<Vector3> vertices, int3 idx)
	{
		return default(Triangle);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x2D87080", Offset = "0x2D85680", VA = "0x182D87080")]
	private BlockAllocator.Allocation AllocateBlasInternalNodes(int allocationNodeCount)
	{
		return default(BlockAllocator.Allocation);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x2D873C0", Offset = "0x2D859C0", VA = "0x182D873C0")]
	private BlockAllocator.Allocation AllocateBlasLeafNodes(int allocationNodeCount)
	{
		return default(BlockAllocator.Allocation);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x2D89D00", Offset = "0x2D88300", VA = "0x182D89D00")]
	private int NewHandle()
	{
		return default(int);
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x2D89DA0", Offset = "0x2D883A0", VA = "0x182D89DA0")]
	private void ReleaseHandle(int handle)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x2D889F0", Offset = "0x2D86FF0", VA = "0x182D889F0")]
	[Conditional("UNITY_ASSERTIONS")]
	private void CheckInstanceHandleIsValid(int instanceHandle)
	{
	}
}
