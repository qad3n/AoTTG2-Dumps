// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullerSplitDebugArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000045")]
internal struct InstanceCullerSplitDebugArray : IDisposable
{
	[Token(Token = "0x2000046")]
	internal struct Info
	{
		[Token(Token = "0x400013C")]
		[FieldOffset(Offset = "0x0")]
		public BatchCullingViewType viewType;

		[Token(Token = "0x400013D")]
		[FieldOffset(Offset = "0x4")]
		public int viewInstanceID;

		[Token(Token = "0x400013E")]
		[FieldOffset(Offset = "0x8")]
		public int splitIndex;
	}

	[Token(Token = "0x4000138")]
	private const int MaxSplitCount = 64;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x0")]
	private NativeList<Info> m_Info;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x8")]
	private NativeArray<int> m_Counters;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x18")]
	private NativeQueue<JobHandle> m_CounterSync;

	[Token(Token = "0x17000022")]
	public NativeArray<int> Counters
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x65C5230", Offset = "0x65C4230", VA = "0x65C5230")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x65C5240", Offset = "0x65C4240", VA = "0x65C5240")]
	public void Init()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x65C5320", Offset = "0x65C4320", VA = "0x65C5320", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x65C53A0", Offset = "0x65C43A0", VA = "0x65C53A0")]
	public int TryAddSplits(BatchCullingViewType viewType, int viewInstanceID, int splitCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x65C5480", Offset = "0x65C4480", VA = "0x65C5480")]
	public void AddSync(int baseIndex, JobHandle jobHandle)
	{
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x65C54F0", Offset = "0x65C44F0", VA = "0x65C54F0")]
	public void MoveToDebugStatsAndClear(DebugRendererBatcherStats debugStats)
	{
	}
}
