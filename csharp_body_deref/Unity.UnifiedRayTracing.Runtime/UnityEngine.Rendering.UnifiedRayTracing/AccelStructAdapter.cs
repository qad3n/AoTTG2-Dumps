// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.AccelStructAdapter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000022")]
internal sealed class AccelStructAdapter : IDisposable
{
	[Token(Token = "0x2000023")]
	private struct InstanceIDs
	{
		[Token(Token = "0x40000E9")]
		[FieldOffset(Offset = "0x0")]
		public int InstanceID;

		[Token(Token = "0x40000EA")]
		[FieldOffset(Offset = "0x4")]
		public int AccelStructID;

		[Token(Token = "0x40000EB")]
		[FieldOffset(Offset = "0x8")]
		public Mesh OwnedMesh;
	}

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x10")]
	private IRayTracingAccelStruct _accelStruct;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x18")]
	private AccelStructInstances _instances;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<int, InstanceIDs[]> _objectHandleToInstances;

	[Token(Token = "0x17000001")]
	internal AccelStructInstances Instances
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public GeometryPool GeometryPool
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x1CB0C20", Offset = "0x1CAF220", VA = "0x181CB0C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2D81E40", Offset = "0x2D80440", VA = "0x182D81E40")]
	public AccelStructAdapter(IRayTracingAccelStruct accelStruct, GeometryPool geometryPool)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x2D81C30", Offset = "0x2D80230", VA = "0x182D81C30")]
	public AccelStructAdapter(IRayTracingAccelStruct accelStruct, RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
	public IRayTracingAccelStruct GetAccelerationStructure()
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2D80760", Offset = "0x2D7ED60", VA = "0x182D80760")]
	public void Bind(CommandBuffer cmd, string propertyName, IRayTracingShader shader)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2D80940", Offset = "0x2D7EF40", VA = "0x182D80940", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2D7FD80", Offset = "0x2D7E380", VA = "0x182D7FD80")]
	public void AddInstance(int objectHandle, Component meshRendererOrTerrain, Span<uint> perSubMeshMask, Span<uint> perSubMeshMaterialIDs, Span<bool> perSubMeshIsOpaque, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2D7F7C0", Offset = "0x2D7DDC0", VA = "0x182D7F7C0")]
	public void AddInstance(int objectHandle, Mesh mesh, Matrix4x4 localToWorldMatrix, Span<uint> perSubMeshMask, Span<uint> perSubMeshMaterialIDs, Span<bool> perSubMeshIsOpaque, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2D7F520", Offset = "0x2D7DB20", VA = "0x182D7F520")]
	private void AddInstance(int objectHandle, TerrainDesc terrainDesc)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2D7EED0", Offset = "0x2D7D4D0", VA = "0x182D7EED0")]
	private void AddHeightmap(TerrainDesc terrainDesc, ref List<InstanceIDs> instanceHandles)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2D80030", Offset = "0x2D7E630", VA = "0x182D80030")]
	private void AddTrees(TerrainDesc terrainDesc, ref List<InstanceIDs> instanceHandles)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2D7FBC0", Offset = "0x2D7E1C0", VA = "0x182D7FBC0")]
	private InstanceIDs AddInstance(MeshInstanceDesc instanceDesc, uint materialID, uint renderingLayerMask)
	{
		return default(InstanceIDs);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2D80E40", Offset = "0x2D7F440", VA = "0x182D80E40")]
	public void RemoveInstance(int objectHandle)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2D817C0", Offset = "0x2D7FDC0", VA = "0x182D817C0")]
	public void UpdateInstanceTransform(int objectHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2D814B0", Offset = "0x2D7FAB0", VA = "0x182D814B0")]
	public void UpdateInstanceMaterialIDs(int objectHandle, Span<uint> perSubMeshMaterialIDs)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2D81110", Offset = "0x2D7F710", VA = "0x182D81110")]
	public void UpdateInstanceMask(int objectHandle, Span<uint> perSubMeshMask)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2D812C0", Offset = "0x2D7F8C0", VA = "0x182D812C0")]
	public void UpdateInstanceMask(int objectHandle, uint mask)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2D80850", Offset = "0x2D7EE50", VA = "0x182D80850")]
	public void Build(CommandBuffer cmd, ref GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2D80CF0", Offset = "0x2D7F2F0", VA = "0x182D80CF0")]
	public void NextFrame()
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2D80B70", Offset = "0x2D7F170", VA = "0x182D80B70")]
	public bool GetInstanceIDs(int rendererID, out int[] instanceIDs)
	{
		return default(bool);
	}
}
