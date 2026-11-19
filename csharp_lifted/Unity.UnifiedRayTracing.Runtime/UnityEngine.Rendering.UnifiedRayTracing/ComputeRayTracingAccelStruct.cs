// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.ComputeRayTracingAccelStruct
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x678ADD0", Offset = "0x6789DD0", VA = "0x678ADD0")]
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
		[Address(RVA = "0x678ADE0", Offset = "0x6789DE0", VA = "0x678ADE0")]
		public void IncRef()
		{
		}

		[Token(Token = "0x6000123")]
		[Address(RVA = "0x678ADF0", Offset = "0x6789DF0", VA = "0x678ADF0")]
		public void DecRef()
		{
		}

		[Token(Token = "0x6000124")]
		[Address(RVA = "0x678AE00", Offset = "0x6789E00", VA = "0x678AE00")]
		public bool IsUnreferenced()
		{
			return default(bool);
		}

		[Token(Token = "0x6000125")]
		[Address(RVA = "0x678AE10", Offset = "0x6789E10", VA = "0x678AE10")]
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
		[Address(RVA = "0x67876B0", Offset = "0x67866B0", VA = "0x67876B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000020")]
	internal GraphicsBuffer bottomLevelBvhBuffer
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x6787700", Offset = "0x6786700", VA = "0x6787700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	internal GraphicsBuffer instanceInfoBuffer
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x6787750", Offset = "0x6786750", VA = "0x6787750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x6787250", Offset = "0x6786250", VA = "0x6787250")]
	internal ComputeRayTracingAccelStruct(AccelerationStructureOptions options, RayTracingResources resources, ReferenceCounter counter, int blasBufferInitialSizeBytes = 67108864)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x67877A0", Offset = "0x67867A0", VA = "0x67877A0", Slot = "12")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x6787A20", Offset = "0x6786A20", VA = "0x6787A20", Slot = "4")]
	public int AddInstance(MeshInstanceDesc meshInstance)
	{
		return default(int);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x67880B0", Offset = "0x67870B0", VA = "0x67880B0", Slot = "5")]
	public void RemoveInstance(int instanceHandle)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x67883F0", Offset = "0x67873F0", VA = "0x67883F0", Slot = "6")]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x67886D0", Offset = "0x67876D0", VA = "0x67886D0", Slot = "7")]
	public void UpdateInstanceTransform(int instanceHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x67888D0", Offset = "0x67878D0", VA = "0x67888D0", Slot = "8")]
	public void UpdateInstanceID(int instanceHandle, uint instanceID)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x67889A0", Offset = "0x67879A0", VA = "0x67889A0", Slot = "9")]
	public void UpdateInstanceMask(int instanceHandle, uint mask)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x6788A70", Offset = "0x6787A70", VA = "0x6788A70", Slot = "10")]
	public void Build(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x6788AE0", Offset = "0x6787AE0", VA = "0x6788AE0", Slot = "11")]
	public ulong GetBuildScratchBufferRequiredSizeInBytes()
	{
		return default(ulong);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x6787EB0", Offset = "0x6786EB0", VA = "0x6787EB0")]
	private void FreeTopLevelAccelStruct()
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x6787D40", Offset = "0x6786D40", VA = "0x6787D40")]
	private MeshBlas GetOrAllocateMeshBlas(Mesh mesh, int subMeshIndex)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x6788E20", Offset = "0x6787E20", VA = "0x6788E20")]
	private void AllocateBlas(Mesh mesh, int submeshIndex, MeshBlas blas)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x6789620", Offset = "0x6788620", VA = "0x6789620")]
	private GraphicsBuffer LoadIndexBuffer(Mesh mesh)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x67895A0", Offset = "0x67885A0", VA = "0x67895A0")]
	private GraphicsBuffer LoadPositionBuffer(Mesh mesh, out int stride, out int offset)
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x6788290", Offset = "0x6787290", VA = "0x6788290")]
	private void DeleteMeshBlas((int mesh, int subMeshIndex) geomKey, MeshBlas blas)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x6788B20", Offset = "0x6787B20", VA = "0x6788B20")]
	private ulong GetBvhBuildScratchBufferSizeInDwords()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x6788AF0", Offset = "0x6787AF0", VA = "0x6788AF0")]
	private void CreateBvh(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x6789C30", Offset = "0x6788C30", VA = "0x6789C30")]
	private void BuildMissingBottomLevelAccelStructs(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x6789FF0", Offset = "0x6788FF0", VA = "0x6789FF0")]
	private void BuildTopLevelAccelStruct(CommandBuffer cmd, GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x6789640", Offset = "0x6788640", VA = "0x6789640")]
	private UnityEngine.Rendering.RadeonRays.BuildFlags ConvertFlagsToGpuBuild(BuildFlags flags)
	{
		return default(UnityEngine.Rendering.RadeonRays.BuildFlags);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x678A3D0", Offset = "0x67893D0", VA = "0x678A3D0")]
	public void Bind(CommandBuffer cmd, string name, IRayTracingShader shader)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x678A830", Offset = "0x6789830", VA = "0x678A830")]
	public void Bind(CommandBuffer cmd, string name, ComputeShader shader, int kernelIndex)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x6787FD0", Offset = "0x6786FD0", VA = "0x6787FD0")]
	private static UnityEngine.Rendering.RadeonRays.Transform ConvertTranform(Matrix4x4 input)
	{
		return default(UnityEngine.Rendering.RadeonRays.Transform);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x678AA90", Offset = "0x6789A90", VA = "0x678AA90")]
	private static Matrix4x4 ConvertTranform(UnityEngine.Rendering.RadeonRays.Transform input)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x678AB70", Offset = "0x6789B70", VA = "0x678AB70")]
	private static int3 GetFaceIndices(List<int> indices, int triangleIdx)
	{
		return default(int3);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x678AC00", Offset = "0x6789C00", VA = "0x678AC00")]
	private static Triangle GetTriangle(List<Vector3> vertices, int3 idx)
	{
		return default(Triangle);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x6789650", Offset = "0x6788650", VA = "0x6789650")]
	private BlockAllocator.Allocation AllocateBlasInternalNodes(int allocationNodeCount)
	{
		return default(BlockAllocator.Allocation);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x6789940", Offset = "0x6788940", VA = "0x6789940")]
	private BlockAllocator.Allocation AllocateBlasLeafNodes(int allocationNodeCount)
	{
		return default(BlockAllocator.Allocation);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x6787F40", Offset = "0x6786F40", VA = "0x6787F40")]
	private int NewHandle()
	{
		return default(int);
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x6788230", Offset = "0x6787230", VA = "0x6788230")]
	private void ReleaseHandle(int handle)
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x678ACF0", Offset = "0x6789CF0", VA = "0x678ACF0")]
	[Conditional("UNITY_ASSERTIONS")]
	private void CheckInstanceHandleIsValid(int instanceHandle)
	{
	}
}
