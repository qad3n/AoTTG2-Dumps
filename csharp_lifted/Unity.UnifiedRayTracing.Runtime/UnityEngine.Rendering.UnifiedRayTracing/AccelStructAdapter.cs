// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.AccelStructAdapter
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x677AF00", Offset = "0x6779F00", VA = "0x677AF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000002")]
	public GeometryPool GeometryPool
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x677B670", Offset = "0x677A670", VA = "0x677B670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x677AF10", Offset = "0x6779F10", VA = "0x677AF10")]
	public AccelStructAdapter(IRayTracingAccelStruct accelStruct, GeometryPool geometryPool)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x677B0D0", Offset = "0x677A0D0", VA = "0x677B0D0")]
	public AccelStructAdapter(IRayTracingAccelStruct accelStruct, RayTracingResources resources)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x677B660", Offset = "0x677A660", VA = "0x677B660")]
	public IRayTracingAccelStruct GetAccelerationStructure()
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x677B690", Offset = "0x677A690", VA = "0x677B690")]
	public void Bind(CommandBuffer cmd, string propertyName, IRayTracingShader shader)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x677BAF0", Offset = "0x677AAF0", VA = "0x677BAF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x677C040", Offset = "0x677B040", VA = "0x677C040")]
	public void AddInstance(int objectHandle, Component meshRendererOrTerrain, Span<uint> perSubMeshMask, Span<uint> perSubMeshMaterialIDs, Span<bool> perSubMeshIsOpaque, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x677C5E0", Offset = "0x677B5E0", VA = "0x677C5E0")]
	public void AddInstance(int objectHandle, Mesh mesh, Matrix4x4 localToWorldMatrix, Span<uint> perSubMeshMask, Span<uint> perSubMeshMaterialIDs, Span<bool> perSubMeshIsOpaque, uint renderingLayerMask)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x677C310", Offset = "0x677B310", VA = "0x677C310")]
	private void AddInstance(int objectHandle, TerrainDesc terrainDesc)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x677CBE0", Offset = "0x677BBE0", VA = "0x677CBE0")]
	private void AddHeightmap(TerrainDesc terrainDesc, ref List<InstanceIDs> instanceHandles)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x677D120", Offset = "0x677C120", VA = "0x677D120")]
	private void AddTrees(TerrainDesc terrainDesc, ref List<InstanceIDs> instanceHandles)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x677DAB0", Offset = "0x677CAB0", VA = "0x677DAB0")]
	private InstanceIDs AddInstance(MeshInstanceDesc instanceDesc, uint materialID, uint renderingLayerMask)
	{
		return default(InstanceIDs);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x677DC90", Offset = "0x677CC90", VA = "0x677DC90")]
	public void RemoveInstance(int objectHandle)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x677E010", Offset = "0x677D010", VA = "0x677E010")]
	public void UpdateInstanceTransform(int objectHandle, Matrix4x4 localToWorldMatrix)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x677E5D0", Offset = "0x677D5D0", VA = "0x677E5D0")]
	public void UpdateInstanceMaterialIDs(int objectHandle, Span<uint> perSubMeshMaterialIDs)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x677E810", Offset = "0x677D810", VA = "0x677E810")]
	public void UpdateInstanceMask(int objectHandle, Span<uint> perSubMeshMask)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x677EB30", Offset = "0x677DB30", VA = "0x677EB30")]
	public void UpdateInstanceMask(int objectHandle, uint mask)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x677ED50", Offset = "0x677DD50", VA = "0x677ED50")]
	public void Build(CommandBuffer cmd, ref GraphicsBuffer scratchBuffer)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x677EE20", Offset = "0x677DE20", VA = "0x677EE20")]
	public void NextFrame()
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x677EF80", Offset = "0x677DF80", VA = "0x677EF80")]
	public bool GetInstanceIDs(int rendererID, out int[] instanceIDs)
	{
		return default(bool);
	}
}
