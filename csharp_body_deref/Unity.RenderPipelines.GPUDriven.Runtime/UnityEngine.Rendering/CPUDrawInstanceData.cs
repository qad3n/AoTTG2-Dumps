// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CPUDrawInstanceData
// Update status: NEW in this game update
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
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return default(NativeList<DrawInstance>);
		}
	}

	[Token(Token = "0x17000025")]
	public NativeParallelHashMap<DrawKey, int> batchHash
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		get
		{
			return default(NativeParallelHashMap<DrawKey, int>);
		}
	}

	[Token(Token = "0x17000026")]
	public NativeList<DrawBatch> drawBatches
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return default(NativeList<DrawBatch>);
		}
	}

	[Token(Token = "0x17000027")]
	public NativeParallelHashMap<RangeKey, int> rangeHash
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x561300", Offset = "0x55F900", VA = "0x180561300")]
		get
		{
			return default(NativeParallelHashMap<RangeKey, int>);
		}
	}

	[Token(Token = "0x17000028")]
	public NativeList<DrawRange> drawRanges
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return default(NativeList<DrawRange>);
		}
	}

	[Token(Token = "0x17000029")]
	public NativeArray<int> drawBatchIndices
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x2BD5760", Offset = "0x2BD3D60", VA = "0x182BD5760")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x1700002A")]
	public NativeArray<int> drawInstanceIndices
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x2BD57C0", Offset = "0x2BD3DC0", VA = "0x182BD57C0")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x1700002B")]
	public bool valid
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x2BD5820", Offset = "0x2BD3E20", VA = "0x182BD5820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2BD5290", Offset = "0x2BD3890", VA = "0x182BD5290")]
	public void Initialize()
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2BD5110", Offset = "0x2BD3710", VA = "0x182BD5110")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2BD5470", Offset = "0x2BD3A70", VA = "0x182BD5470")]
	public void RebuildDrawListsIfNeeded()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x2BD4A60", Offset = "0x2BD3060", VA = "0x182BD4A60")]
	public void DestroyDrawInstanceIndices(NativeArray<int> drawInstanceIndicesToDestroy)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2BD4AF0", Offset = "0x2BD30F0", VA = "0x182BD4AF0")]
	public void DestroyDrawInstances(NativeArray<InstanceHandle> destroyedInstances)
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2BD4E00", Offset = "0x2BD3400", VA = "0x182BD4E00")]
	public void DestroyMaterialDrawInstances(NativeArray<uint> destroyedBatchMaterials)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2161420", Offset = "0x215FA20", VA = "0x182161420")]
	public void NeedsRebuild()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CPUDrawInstanceData()
	{
	}
}
