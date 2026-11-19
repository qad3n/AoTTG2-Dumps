// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUDrawInstanceData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x200005E")]
internal class CPUDrawInstanceData
{
	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x10")]
	private NativeParallelHashMap<RangeKey, int> m_RangeHash;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x20")]
	private NativeList<DrawRange> m_DrawRanges;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x28")]
	private NativeParallelHashMap<DrawKey, int> m_BatchHash;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x38")]
	private NativeList<DrawBatch> m_DrawBatches;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x40")]
	private NativeList<DrawInstance> m_DrawInstances;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x48")]
	private NativeList<int> m_DrawInstanceIndices;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x50")]
	private NativeList<int> m_DrawBatchIndices;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x58")]
	private bool m_NeedsRebuild;

	[Token(Token = "0x17000024")]
	public NativeList<DrawInstance> drawInstances
	{
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x65CB000", Offset = "0x65CA000", VA = "0x65CB000")]
		get
		{
			return default(NativeList<DrawInstance>);
		}
	}

	[Token(Token = "0x17000025")]
	public NativeParallelHashMap<DrawKey, int> batchHash
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x65CB010", Offset = "0x65CA010", VA = "0x65CB010")]
		get
		{
			return default(NativeParallelHashMap<DrawKey, int>);
		}
	}

	[Token(Token = "0x17000026")]
	public NativeList<DrawBatch> drawBatches
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x65CB020", Offset = "0x65CA020", VA = "0x65CB020")]
		get
		{
			return default(NativeList<DrawBatch>);
		}
	}

	[Token(Token = "0x17000027")]
	public NativeParallelHashMap<RangeKey, int> rangeHash
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x65CB030", Offset = "0x65CA030", VA = "0x65CB030")]
		get
		{
			return default(NativeParallelHashMap<RangeKey, int>);
		}
	}

	[Token(Token = "0x17000028")]
	public NativeList<DrawRange> drawRanges
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x65CB040", Offset = "0x65CA040", VA = "0x65CB040")]
		get
		{
			return default(NativeList<DrawRange>);
		}
	}

	[Token(Token = "0x17000029")]
	public NativeArray<int> drawBatchIndices
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x65CB050", Offset = "0x65CA050", VA = "0x65CB050")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x1700002A")]
	public NativeArray<int> drawInstanceIndices
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x65CB090", Offset = "0x65CA090", VA = "0x65CB090")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x1700002B")]
	public bool valid
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x65CB0D0", Offset = "0x65CA0D0", VA = "0x65CB0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x65CB100", Offset = "0x65CA100", VA = "0x65CB100")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x65CB2F0", Offset = "0x65CA2F0", VA = "0x65CB2F0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x65CB490", Offset = "0x65CA490", VA = "0x65CB490")]
	public void RebuildDrawListsIfNeeded()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x65CB790", Offset = "0x65CA790", VA = "0x65CB790")]
	public void DestroyDrawInstanceIndices(NativeArray<int> drawInstanceIndicesToDestroy)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x65CB980", Offset = "0x65CA980", VA = "0x65CB980")]
	public void DestroyDrawInstances(NativeArray<InstanceHandle> destroyedInstances)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x65CBC30", Offset = "0x65CAC30", VA = "0x65CBC30")]
	public void DestroyMaterialDrawInstances(NativeArray<uint> destroyedBatchMaterials)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x65CBC20", Offset = "0x65CAC20", VA = "0x65CBC20")]
	public void NeedsRebuild()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x65CBED0", Offset = "0x65CAED0", VA = "0x65CBED0")]
	public CPUDrawInstanceData()
	{
	}
}
