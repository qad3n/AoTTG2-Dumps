// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODGroupDataPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000BD")]
internal class LODGroupDataPool : IDisposable
{
	[Token(Token = "0x20000BE")]
	private static class LodGroupShaderIDs
	{
		[Token(Token = "0x4000394")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _SupportDitheringCrossFade;

		[Token(Token = "0x4000395")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _LodGroupCullingDataGPUByteSize;

		[Token(Token = "0x4000396")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _LodGroupCullingDataStartOffset;

		[Token(Token = "0x4000397")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _LodCullingDataQueueCount;

		[Token(Token = "0x4000398")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _InputLodCullingDataIndices;

		[Token(Token = "0x4000399")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _InputLodCullingDataBuffer;

		[Token(Token = "0x400039A")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _LodGroupCullingData;
	}

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x10")]
	private NativeList<LODGroupData> m_LODGroupData;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x18")]
	private NativeParallelHashMap<int, GPUInstanceIndex> m_LODGroupDataHash;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x28")]
	private NativeList<LODGroupCullingData> m_LODGroupCullingData;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x30")]
	private NativeList<GPUInstanceIndex> m_FreeLODGroupDataHandles;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x38")]
	private int m_CrossfadedRendererCount;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x3C")]
	private bool m_SupportDitheringCrossFade;

	[Token(Token = "0x1700005C")]
	public NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash
	{
		[Token(Token = "0x600032E")]
		[Address(RVA = "0x65E8A80", Offset = "0x65E7A80", VA = "0x65E8A80")]
		get
		{
			return default(NativeParallelHashMap<int, GPUInstanceIndex>);
		}
	}

	[Token(Token = "0x1700005D")]
	public NativeList<LODGroupCullingData> lodGroupCullingData
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x65E8A90", Offset = "0x65E7A90", VA = "0x65E8A90")]
		get
		{
			return default(NativeList<LODGroupCullingData>);
		}
	}

	[Token(Token = "0x1700005E")]
	public int crossfadedRendererCount
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x65E8AA0", Offset = "0x65E7AA0", VA = "0x65E8AA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005F")]
	public int activeLodGroupCount
	{
		[Token(Token = "0x6000331")]
		[Address(RVA = "0x65E8AB0", Offset = "0x65E7AB0", VA = "0x65E8AB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x65E8B00", Offset = "0x65E7B00", VA = "0x65E8B00")]
	public LODGroupDataPool(GPUResidentDrawerResources resources, int initialInstanceCount, bool supportDitheringCrossFade)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x65E8C40", Offset = "0x65E7C40", VA = "0x65E8C40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x65E8CE0", Offset = "0x65E7CE0", VA = "0x65E8CE0")]
	public void UpdateLODGroupTransformData(in UnityEngine.Rendering.GPUDrivenLODGroupData inputData)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x65E8F90", Offset = "0x65E7F90", VA = "0x65E8F90")]
	public void UpdateLODGroupData(in UnityEngine.Rendering.GPUDrivenLODGroupData inputData)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x65E93B0", Offset = "0x65E83B0", VA = "0x65E93B0")]
	public void FreeLODGroupData(NativeArray<EntityId> destroyedLODGroupsID)
	{
	}
}
