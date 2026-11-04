// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeStream
// Update status: NEW in this game update
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
		[Address(RVA = "0x29B3280", Offset = "0x29B1880", VA = "0x1829B3280", Slot = "4")]
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
		[Address(RVA = "0x29B32B0", Offset = "0x29B18B0", VA = "0x1829B32B0", Slot = "4")]
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
			[Address(RVA = "0x29B5B70", Offset = "0x29B4170", VA = "0x1829B5B70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600095D")]
		[Address(RVA = "0x29C1420", Offset = "0x29BFA20", VA = "0x1829C1420")]
		internal Writer(ref NativeStream stream)
		{
		}

		[Token(Token = "0x600095F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void PatchMinMaxRange(int foreEachIndex)
		{
		}

		[Token(Token = "0x6000960")]
		[Address(RVA = "0x29C12F0", Offset = "0x29BF8F0", VA = "0x1829C12F0")]
		public void BeginForEachIndex(int foreachIndex)
		{
		}

		[Token(Token = "0x6000961")]
		[Address(RVA = "0x29C1310", Offset = "0x29BF910", VA = "0x1829C1310")]
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
		[Address(RVA = "0x29C1230", Offset = "0x29BF830", VA = "0x1829C1230")]
		public unsafe byte* Allocate(int size)
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x6000965")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckBeginForEachIndex(int foreachIndex)
		{
		}

		[Token(Token = "0x6000966")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckEndForEachIndex()
		{
		}

		[Token(Token = "0x6000967")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
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
			[Address(RVA = "0x29B5B70", Offset = "0x29B4170", VA = "0x1829B5B70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000110")]
		public int RemainingItemCount
		{
			[Token(Token = "0x600096C")]
			[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000968")]
		[Address(RVA = "0x29B8F70", Offset = "0x29B7570", VA = "0x1829B8F70")]
		internal Reader(ref NativeStream stream)
		{
		}

		[Token(Token = "0x6000969")]
		[Address(RVA = "0x29B8BF0", Offset = "0x29B71F0", VA = "0x1829B8BF0")]
		public int BeginForEachIndex(int foreachIndex)
		{
			return default(int);
		}

		[Token(Token = "0x600096A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void EndForEachIndex()
		{
		}

		[Token(Token = "0x600096D")]
		[Address(RVA = "0x29B8EB0", Offset = "0x29B74B0", VA = "0x1829B8EB0")]
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
		[Address(RVA = "0x29B8E00", Offset = "0x29B7400", VA = "0x1829B8E00")]
		public int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000971")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckNotReadingOutOfBounds(int size)
		{
		}

		[Token(Token = "0x6000972")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private void CheckRead()
		{
		}

		[Token(Token = "0x6000973")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckReadSize(int size)
		{
		}

		[Token(Token = "0x6000974")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckBeginForEachIndex(int forEachIndex)
		{
		}

		[Token(Token = "0x6000975")]
		[Address(RVA = "0x29B8D50", Offset = "0x29B7350", VA = "0x1829B8D50")]
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
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010D")]
	public readonly int ForEachCount
	{
		[Token(Token = "0x6000950")]
		[Address(RVA = "0x29B5B70", Offset = "0x29B4170", VA = "0x1829B5B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x29B5B30", Offset = "0x29B4130", VA = "0x1829B5B30")]
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
	[Address(RVA = "0x29B5A80", Offset = "0x29B4080", VA = "0x1829B5A80")]
	public static JobHandle ScheduleConstruct(out NativeStream stream, NativeArray<int> bufferCount, JobHandle dependency, AllocatorManager.AllocatorHandle allocator)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x29B5A70", Offset = "0x29B4070", VA = "0x1829B5A70")]
	public readonly bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x29B5880", Offset = "0x29B3E80", VA = "0x1829B5880")]
	public Reader AsReader()
	{
		return default(Reader);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x29B58C0", Offset = "0x29B3EC0", VA = "0x1829B58C0")]
	public Writer AsWriter()
	{
		return default(Writer);
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x29B59C0", Offset = "0x29B3FC0", VA = "0x1829B59C0")]
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
	[Address(RVA = "0x29B5850", Offset = "0x29B3E50", VA = "0x1829B5850", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x29B59D0", Offset = "0x29B3FD0", VA = "0x1829B59D0", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x29B5860", Offset = "0x29B3E60", VA = "0x1829B5860")]
	private static void AllocateBlock(out NativeStream stream, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x29B5870", Offset = "0x29B3E70", VA = "0x1829B5870")]
	private void AllocateForEach(int forEachCount)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x29B5940", Offset = "0x29B3F40", VA = "0x1829B5940")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckForEachCountGreaterThanZero(int forEachCount)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}
}
