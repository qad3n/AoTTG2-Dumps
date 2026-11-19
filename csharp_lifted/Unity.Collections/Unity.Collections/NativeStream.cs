// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x20000C9")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
public struct NativeStream : INativeDisposable, IDisposable
{
	[Token(Token = "0x20000CA")]
	[BurstCompile]
	private struct ConstructJobList : IJob
	{
		[Token(Token = "0x4000407")]
		[FieldOffset(Offset = "0x0")]
		public NativeStream Container;

		[Token(Token = "0x4000408")]
		[FieldOffset(Offset = "0x20")]
		[ReadOnly]
		[NativeDisableUnsafePtrRestriction]
		public unsafe UntypedUnsafeList* List;

		[Token(Token = "0x600095B")]
		[Address(RVA = "0x637E6A0", Offset = "0x637D6A0", VA = "0x637E6A0", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	[BurstCompile]
	private struct ConstructJob : IJob
	{
		[Token(Token = "0x4000409")]
		[FieldOffset(Offset = "0x0")]
		public NativeStream Container;

		[Token(Token = "0x400040A")]
		[FieldOffset(Offset = "0x20")]
		[ReadOnly]
		public NativeArray<int> Length;

		[Token(Token = "0x600095C")]
		[Address(RVA = "0x637E6C0", Offset = "0x637D6C0", VA = "0x637E6C0", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	[NativeContainer]
	[NativeContainerSupportsMinMaxWriteRestriction]
	[GenerateTestsForBurstCompatibility]
	public struct Writer
	{
		[Token(Token = "0x400040B")]
		[FieldOffset(Offset = "0x0")]
		private UnsafeStream.Writer m_Writer;

		[Token(Token = "0x1700010E")]
		public int ForEachCount
		{
			[Token(Token = "0x600095E")]
			[Address(RVA = "0x637E710", Offset = "0x637D710", VA = "0x637E710")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600095D")]
		[Address(RVA = "0x637E320", Offset = "0x637D320", VA = "0x637E320")]
		internal Writer(ref NativeStream stream)
		{
		}

		[Token(Token = "0x600095F")]
		[Address(RVA = "0x637E750", Offset = "0x637D750", VA = "0x637E750")]
		public void PatchMinMaxRange(int foreEachIndex)
		{
		}

		[Token(Token = "0x6000960")]
		[Address(RVA = "0x637E760", Offset = "0x637D760", VA = "0x637E760")]
		public void BeginForEachIndex(int foreachIndex)
		{
		}

		[Token(Token = "0x6000961")]
		[Address(RVA = "0x637E7C0", Offset = "0x637D7C0", VA = "0x637E7C0")]
		public void EndForEachIndex()
		{
		}

		[Token(Token = "0x6000962")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void Write<T>(T value) where T : struct
		{
		}

		[Token(Token = "0x6000963")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe ref T Allocate<T>() where T : struct
		{
			return ref *(T*)null;
		}

		[Token(Token = "0x6000964")]
		[Address(RVA = "0x637E880", Offset = "0x637D880", VA = "0x637E880")]
		public unsafe byte* Allocate(int size)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x6000965")]
		[Address(RVA = "0x637E970", Offset = "0x637D970", VA = "0x637E970")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckBeginForEachIndex(int foreachIndex)
		{
		}

		[Token(Token = "0x6000966")]
		[Address(RVA = "0x637E980", Offset = "0x637D980", VA = "0x637E980")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckEndForEachIndex()
		{
		}

		[Token(Token = "0x6000967")]
		[Address(RVA = "0x637E990", Offset = "0x637D990", VA = "0x637E990")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckAllocateSize(int size)
		{
		}
	}

	[Token(Token = "0x20000CD")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	[GenerateTestsForBurstCompatibility]
	public struct Reader
	{
		[Token(Token = "0x400040C")]
		[FieldOffset(Offset = "0x0")]
		private UnsafeStream.Reader m_Reader;

		[Token(Token = "0x1700010F")]
		public int ForEachCount
		{
			[Token(Token = "0x600096B")]
			[Address(RVA = "0x637EAC0", Offset = "0x637DAC0", VA = "0x637EAC0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000110")]
		public int RemainingItemCount
		{
			[Token(Token = "0x600096C")]
			[Address(RVA = "0x637EB00", Offset = "0x637DB00", VA = "0x637EB00")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000968")]
		[Address(RVA = "0x637E2A0", Offset = "0x637D2A0", VA = "0x637E2A0")]
		internal Reader(ref NativeStream stream)
		{
		}

		[Token(Token = "0x6000969")]
		[Address(RVA = "0x637E9C0", Offset = "0x637D9C0", VA = "0x637E9C0")]
		public int BeginForEachIndex(int foreachIndex)
		{
			return default(int);
		}

		[Token(Token = "0x600096A")]
		[Address(RVA = "0x637EAA0", Offset = "0x637DAA0", VA = "0x637EAA0")]
		public void EndForEachIndex()
		{
		}

		[Token(Token = "0x600096D")]
		[Address(RVA = "0x637EB10", Offset = "0x637DB10", VA = "0x637EB10")]
		public unsafe byte* ReadUnsafePtr(int size)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x600096E")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe ref T Read<T>() where T : struct
		{
			return ref *(T*)null;
		}

		[Token(Token = "0x600096F")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public unsafe ref T Peek<T>() where T : struct
		{
			return ref *(T*)null;
		}

		[Token(Token = "0x6000970")]
		[Address(RVA = "0x637EB60", Offset = "0x637DB60", VA = "0x637EB60")]
		public int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000971")]
		[Address(RVA = "0x637EC20", Offset = "0x637DC20", VA = "0x637EC20")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckNotReadingOutOfBounds(int size)
		{
		}

		[Token(Token = "0x6000972")]
		[Address(RVA = "0x637EC30", Offset = "0x637DC30", VA = "0x637EC30")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private void CheckRead()
		{
		}

		[Token(Token = "0x6000973")]
		[Address(RVA = "0x637EC40", Offset = "0x637DC40", VA = "0x637EC40")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckReadSize(int size)
		{
		}

		[Token(Token = "0x6000974")]
		[Address(RVA = "0x637EC50", Offset = "0x637DC50", VA = "0x637EC50")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckBeginForEachIndex(int forEachIndex)
		{
		}

		[Token(Token = "0x6000975")]
		[Address(RVA = "0x637EC60", Offset = "0x637DC60", VA = "0x637EC60")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckEndForEachIndex()
		{
		}
	}

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x0")]
	private UnsafeStream m_Stream;

	[Token(Token = "0x1700010C")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x637E210", Offset = "0x637D210", VA = "0x637E210")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010D")]
	public readonly int ForEachCount
	{
		[Token(Token = "0x6000950")]
		[Address(RVA = "0x637E220", Offset = "0x637D220", VA = "0x637E220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x637DF70", Offset = "0x637CF70", VA = "0x637DF70")]
	public NativeStream(int bufferCount, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600094C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static JobHandle ScheduleConstruct<T>(out NativeStream stream, NativeList<T> bufferCount, JobHandle dependency, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x637E080", Offset = "0x637D080", VA = "0x637E080")]
	public static JobHandle ScheduleConstruct(out NativeStream stream, NativeArray<int> bufferCount, JobHandle dependency, AllocatorManager.AllocatorHandle allocator)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x637E130", Offset = "0x637D130", VA = "0x637E130")]
	public readonly bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x637E260", Offset = "0x637D260", VA = "0x637E260")]
	public Reader AsReader()
	{
		return default(Reader);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x637E2D0", Offset = "0x637D2D0", VA = "0x637E2D0")]
	public Writer AsWriter()
	{
		return default(Writer);
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x637E370", Offset = "0x637D370", VA = "0x637E370")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000954")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public NativeArray<T> ToNativeArray<T>(AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x637E430", Offset = "0x637D430", VA = "0x637E430", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x637E450", Offset = "0x637D450", VA = "0x637E450", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x637DF90", Offset = "0x637CF90", VA = "0x637DF90")]
	private static void AllocateBlock(out NativeStream stream, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x637E610", Offset = "0x637D610", VA = "0x637E610")]
	private void AllocateForEach(int forEachCount)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x637E620", Offset = "0x637D620", VA = "0x637E620")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckForEachCountGreaterThanZero(int forEachCount)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x637E690", Offset = "0x637D690", VA = "0x637E690")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}
}
