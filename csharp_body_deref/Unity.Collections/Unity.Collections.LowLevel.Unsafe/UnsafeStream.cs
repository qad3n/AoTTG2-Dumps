// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeStream
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000141")]
[GenerateTestsForBurstCompatibility]
public struct UnsafeStream : INativeDisposable, IDisposable
{
	[Token(Token = "0x2000142")]
	[BurstCompile]
	private struct DisposeJob : IJob
	{
		[Token(Token = "0x400053E")]
		[FieldOffset(Offset = "0x0")]
		public UnsafeStream Container;

		[Token(Token = "0x6000DA6")]
		[Address(RVA = "0x29B35E0", Offset = "0x29B1BE0", VA = "0x1829B35E0", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x2000143")]
	[BurstCompile]
	private struct ConstructJobList : IJob
	{
		[Token(Token = "0x400053F")]
		[FieldOffset(Offset = "0x0")]
		public UnsafeStream Container;

		[Token(Token = "0x4000540")]
		[FieldOffset(Offset = "0x20")]
		[ReadOnly]
		[NativeDisableUnsafePtrRestriction]
		public unsafe UntypedUnsafeList* List;

		[Token(Token = "0x6000DA7")]
		[Address(RVA = "0x29B3280", Offset = "0x29B1880", VA = "0x1829B3280", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x2000144")]
	[BurstCompile]
	private struct ConstructJob : IJob
	{
		[Token(Token = "0x4000541")]
		[FieldOffset(Offset = "0x0")]
		public UnsafeStream Container;

		[Token(Token = "0x4000542")]
		[FieldOffset(Offset = "0x20")]
		[ReadOnly]
		public NativeArray<int> Length;

		[Token(Token = "0x6000DA8")]
		[Address(RVA = "0x29B32B0", Offset = "0x29B18B0", VA = "0x1829B32B0", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x2000145")]
	[GenerateTestsForBurstCompatibility]
	public struct Writer
	{
		[Token(Token = "0x4000543")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal AllocatorManager.Block m_BlockData;

		[Token(Token = "0x4000544")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe UnsafeStreamBlock* m_CurrentBlock;

		[Token(Token = "0x4000545")]
		[FieldOffset(Offset = "0x28")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe byte* m_CurrentPtr;

		[Token(Token = "0x4000546")]
		[FieldOffset(Offset = "0x30")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe byte* m_CurrentBlockEnd;

		[Token(Token = "0x4000547")]
		[FieldOffset(Offset = "0x38")]
		internal int m_ForeachIndex;

		[Token(Token = "0x4000548")]
		[FieldOffset(Offset = "0x3C")]
		private int m_ElementCount;

		[Token(Token = "0x4000549")]
		[FieldOffset(Offset = "0x40")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe UnsafeStreamBlock* m_FirstBlock;

		[Token(Token = "0x400054A")]
		[FieldOffset(Offset = "0x48")]
		private int m_FirstOffset;

		[Token(Token = "0x400054B")]
		[FieldOffset(Offset = "0x4C")]
		private int m_NumberOfBlocks;

		[Token(Token = "0x400054C")]
		[FieldOffset(Offset = "0x50")]
		[NativeSetThreadIndex]
		private int m_ThreadIndex;

		[Token(Token = "0x1700019C")]
		public int ForEachCount
		{
			[Token(Token = "0x6000DAA")]
			[Address(RVA = "0x29B5B70", Offset = "0x29B4170", VA = "0x1829B5B70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x29C13F0", Offset = "0x29BF9F0", VA = "0x1829C13F0")]
		internal Writer(ref UnsafeStream stream)
		{
		}

		[Token(Token = "0x6000DAB")]
		[Address(RVA = "0x29C12F0", Offset = "0x29BF8F0", VA = "0x1829C12F0")]
		public void BeginForEachIndex(int foreachIndex)
		{
		}

		[Token(Token = "0x6000DAC")]
		[Address(RVA = "0x29C1320", Offset = "0x29BF920", VA = "0x1829C1320")]
		public void EndForEachIndex()
		{
		}

		[Token(Token = "0x6000DAD")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void Write<T>(T value) where T : struct
		{
		}

		[Token(Token = "0x6000DAE")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe ref T Allocate<T>() where T : struct
		{
			return ref *(T*)null;
		}

		[Token(Token = "0x6000DAF")]
		[Address(RVA = "0x29C1240", Offset = "0x29BF840", VA = "0x1829C1240")]
		public unsafe byte* Allocate(int size)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x2000146")]
	[GenerateTestsForBurstCompatibility]
	public struct Reader
	{
		[Token(Token = "0x400054D")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal AllocatorManager.Block m_BlockData;

		[Token(Token = "0x400054E")]
		[FieldOffset(Offset = "0x20")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeStreamBlock* m_CurrentBlock;

		[Token(Token = "0x400054F")]
		[FieldOffset(Offset = "0x28")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe byte* m_CurrentPtr;

		[Token(Token = "0x4000550")]
		[FieldOffset(Offset = "0x30")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe byte* m_CurrentBlockEnd;

		[Token(Token = "0x4000551")]
		[FieldOffset(Offset = "0x38")]
		internal int m_RemainingItemCount;

		[Token(Token = "0x4000552")]
		[FieldOffset(Offset = "0x3C")]
		internal int m_LastBlockSize;

		[Token(Token = "0x1700019D")]
		public int ForEachCount
		{
			[Token(Token = "0x6000DB3")]
			[Address(RVA = "0x29B5B70", Offset = "0x29B4170", VA = "0x1829B5B70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700019E")]
		public int RemainingItemCount
		{
			[Token(Token = "0x6000DB4")]
			[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000DB0")]
		[Address(RVA = "0x29B8FB0", Offset = "0x29B75B0", VA = "0x1829B8FB0")]
		internal Reader(ref UnsafeStream stream)
		{
		}

		[Token(Token = "0x6000DB1")]
		[Address(RVA = "0x29B8C00", Offset = "0x29B7200", VA = "0x1829B8C00")]
		public int BeginForEachIndex(int foreachIndex)
		{
			return default(int);
		}

		[Token(Token = "0x6000DB2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void EndForEachIndex()
		{
		}

		[Token(Token = "0x6000DB5")]
		[Address(RVA = "0x29B8F10", Offset = "0x29B7510", VA = "0x1829B8F10")]
		public unsafe byte* ReadUnsafePtr(int size)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x6000DB6")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe ref T Read<T>() where T : struct
		{
			return ref *(T*)null;
		}

		[Token(Token = "0x6000DB7")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe ref T Peek<T>() where T : struct
		{
			return ref *(T*)null;
		}

		[Token(Token = "0x6000DB8")]
		[Address(RVA = "0x29B8E00", Offset = "0x29B7400", VA = "0x1829B8E00")]
		public int Count()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal AllocatorManager.Block m_BlockData;

	[Token(Token = "0x1700019A")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D9D")]
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	public readonly int ForEachCount
	{
		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x29B5B70", Offset = "0x29B4170", VA = "0x1829B5B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x29B5B30", Offset = "0x29B4130", VA = "0x1829B5B30")]
	public UnsafeStream(int bufferCount, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000D98")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static JobHandle ScheduleConstruct<T>(out UnsafeStream stream, NativeList<T> bufferCount, JobHandle dependency, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x29C04B0", Offset = "0x29BEAB0", VA = "0x1829C04B0")]
	public static JobHandle ScheduleConstruct(out UnsafeStream stream, NativeArray<int> bufferCount, JobHandle dependency, AllocatorManager.AllocatorHandle allocator)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x29BFFB0", Offset = "0x29BE5B0", VA = "0x1829BFFB0")]
	internal static void AllocateBlock(out UnsafeStream stream, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x29C0110", Offset = "0x29BE710", VA = "0x1829C0110")]
	internal void AllocateForEach(int forEachCount)
	{
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x29C0430", Offset = "0x29BEA30", VA = "0x1829C0430")]
	public readonly bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x29C01F0", Offset = "0x29BE7F0", VA = "0x1829C01F0")]
	public Reader AsReader()
	{
		return default(Reader);
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x29C0220", Offset = "0x29BE820", VA = "0x1829C0220")]
	public Writer AsWriter()
	{
		return default(Writer);
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x29C0260", Offset = "0x29BE860", VA = "0x1829C0260")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000DA2")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public NativeArray<T> ToNativeArray<T>(AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x29C02D0", Offset = "0x29BE8D0", VA = "0x1829C02D0")]
	private void Deallocate()
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x29B5850", Offset = "0x29B3E50", VA = "0x1829B5850", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x29C0390", Offset = "0x29BE990", VA = "0x1829C0390", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}
}
