// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODGroupDataPool
// Update status: NEW in this game update
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
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		get
		{
			return default(NativeParallelHashMap<int, GPUInstanceIndex>);
		}
	}

	[Token(Token = "0x1700005D")]
	public NativeList<LODGroupCullingData> lodGroupCullingData
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return default(NativeList<LODGroupCullingData>);
		}
	}

	[Token(Token = "0x1700005E")]
	public int crossfadedRendererCount
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005F")]
	public int activeLodGroupCount
	{
		[Token(Token = "0x6000331")]
		[Address(RVA = "0x2BF2220", Offset = "0x2BF0820", VA = "0x182BF2220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x2BF20E0", Offset = "0x2BF06E0", VA = "0x182BF20E0")]
	public LODGroupDataPool(GPUResidentDrawerResources resources, int initialInstanceCount, bool supportDitheringCrossFade)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x2BF1AE0", Offset = "0x2BF00E0", VA = "0x182BF1AE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x2BF1FA0", Offset = "0x2BF05A0", VA = "0x182BF1FA0")]
	public void UpdateLODGroupTransformData(in UnityEngine.Rendering.GPUDrivenLODGroupData inputData)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x2BF1BB0", Offset = "0x2BF01B0", VA = "0x182BF1BB0")]
	public void UpdateLODGroupData(in UnityEngine.Rendering.GPUDrivenLODGroupData inputData)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x2BF1B70", Offset = "0x2BF0170", VA = "0x182BF1B70")]
	public void FreeLODGroupData(NativeArray<EntityId> destroyedLODGroupsID)
	{
	}
}
