// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeQueue
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

[Token(Token = "0x20000B3")]
[NativeContainer]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct NativeQueue<T> : INativeDisposable, IDisposable where T : struct
{
	[Token(Token = "0x20000B4")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003E1")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeQueue<T>.Enumerator m_Enumerator;

		[Token(Token = "0x170000FF")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008DA")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000100")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60008DB")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60008D7")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008D8")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008D9")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20000B5")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x40003E2")]
		[FieldOffset(Offset = "0x0")]
		private UnsafeQueue<T>.ReadOnly m_ReadOnly;

		[Token(Token = "0x17000101")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60008DD")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000102")]
		public readonly int Count
		{
			[Token(Token = "0x60008DF")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000103")]
		public readonly T this[int index]
		{
			[Token(Token = "0x60008E0")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x60008DC")]
		internal ReadOnly(ref NativeQueue<T> data)
		{
		}

		[Token(Token = "0x60008DE")]
		public readonly bool IsEmpty()
		{
			return default(bool);
		}

		[Token(Token = "0x60008E1")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x60008E2")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60008E3")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008E4")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}
	}

	[Token(Token = "0x20000B6")]
	[NativeContainer]
	[NativeContainerIsAtomicWriteOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelWriter
	{
		[Token(Token = "0x40003E3")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeQueue<T>.ParallelWriter unsafeWriter;

		[Token(Token = "0x60008E5")]
		public void Enqueue(T value)
		{
		}

		[Token(Token = "0x60008E6")]
		public void Enqueue(T value, int threadIndexOverride)
		{
		}
	}

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	private unsafe UnsafeQueue<T>* m_Queue;

	[Token(Token = "0x170000FD")]
	public readonly int Count
	{
		[Token(Token = "0x60008C9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FE")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60008D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008C7")]
	public NativeQueue(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60008C8")]
	public readonly bool IsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60008CA")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x60008CB")]
	public void Enqueue(T value)
	{
	}

	[Token(Token = "0x60008CC")]
	public T Dequeue()
	{
		return (T)null;
	}

	[Token(Token = "0x60008CD")]
	public bool TryDequeue(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CE")]
	public NativeArray<T> ToArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60008CF")]
	public void Clear()
	{
	}

	[Token(Token = "0x60008D1")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60008D2")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60008D3")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x60008D4")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D5")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D6")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}
}
