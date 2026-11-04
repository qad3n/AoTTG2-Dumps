// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.UnsafeQueue
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x20000EC")]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct UnsafeQueue<T> : INativeDisposable, IDisposable where T : struct
{
	[Token(Token = "0x20000ED")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000467")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeQueueBlockHeader* m_FirstBlock;

		[Token(Token = "0x4000468")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeQueueBlockHeader* m_Block;

		[Token(Token = "0x4000469")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Index;

		[Token(Token = "0x400046A")]
		[FieldOffset(Offset = "0x0")]
		private T value;

		[Token(Token = "0x17000131")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A75")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000132")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000A76")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A72")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A73")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A74")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20000EE")]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x400046B")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		private unsafe UnsafeQueueData* m_Buffer;

		[Token(Token = "0x17000133")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000A78")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000134")]
		public readonly int Count
		{
			[Token(Token = "0x6000A7A")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000135")]
		public readonly T this[int index]
		{
			[Token(Token = "0x6000A7B")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x6000A77")]
		internal ReadOnly(ref UnsafeQueue<T> data)
		{
		}

		[Token(Token = "0x6000A79")]
		public readonly bool IsEmpty()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A7C")]
		private readonly bool TryGetValue(int index, out T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A7D")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000A7E")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000A7F")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A80")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void ThrowIndexOutOfRangeException(int index)
		{
		}
	}

	[Token(Token = "0x20000EF")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelWriter
	{
		[Token(Token = "0x400046C")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeQueueData* m_Buffer;

		[Token(Token = "0x400046D")]
		[FieldOffset(Offset = "0x0")]
		internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

		[Token(Token = "0x400046E")]
		[FieldOffset(Offset = "0x0")]
		[NativeSetThreadIndex]
		internal int m_ThreadIndex;

		[Token(Token = "0x6000A81")]
		public void Enqueue(T value)
		{
		}

		[Token(Token = "0x6000A82")]
		public void Enqueue(T value, int threadIndexOverride)
		{
		}
	}

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeQueueData* m_Buffer;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

	[Token(Token = "0x1700012F")]
	public readonly int Count
	{
		[Token(Token = "0x6000A64")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000130")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A6B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A60")]
	public UnsafeQueue(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000A61")]
	internal unsafe static UnsafeQueue<T>* Alloc(AllocatorManager.AllocatorHandle allocator)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeQueue<T>*)unchecked((nint)null);
	}

	[Token(Token = "0x6000A62")]
	internal unsafe static void Free(UnsafeQueue<T>* data)
	{
	}

	[Token(Token = "0x6000A63")]
	public readonly bool IsEmpty()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A65")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A66")]
	public void Enqueue(T value)
	{
	}

	[Token(Token = "0x6000A67")]
	public T Dequeue()
	{
		return (T)null;
	}

	[Token(Token = "0x6000A68")]
	public bool TryDequeue(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A69")]
	public NativeArray<T> ToArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000A6A")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000A6C")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000A6D")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000A6E")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000A6F")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A70")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckNotEmpty()
	{
	}

	[Token(Token = "0x6000A71")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void ThrowEmpty()
	{
	}
}
