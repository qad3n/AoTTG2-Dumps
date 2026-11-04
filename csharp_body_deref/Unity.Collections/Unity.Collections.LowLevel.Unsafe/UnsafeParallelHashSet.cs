// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashSet
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
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200012E")]
[DebuggerTypeProxy(typeof(UnsafeParallelHashSetDebuggerTypeProxy<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct UnsafeParallelHashSet<T> : INativeDisposable, IDisposable, IEnumerable<T>, IEnumerable where T : struct, IEquatable<T>
{
	[Token(Token = "0x200012F")]
	[NativeContainerIsAtomicWriteOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelWriter
	{
		[Token(Token = "0x4000513")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMap<T, bool>.ParallelWriter m_Data;

		[Token(Token = "0x17000182")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000CB1")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000CB2")]
		public bool Add(T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CB3")]
		public bool Add(T item, int threadIndexOverride)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000130")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000514")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMapDataEnumerator m_Enumerator;

		[Token(Token = "0x17000183")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000CB7")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000184")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CB8")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CB4")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB5")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CB6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000131")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x4000515")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMap<T, bool> m_Data;

		[Token(Token = "0x17000185")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000CBA")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000186")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000CBB")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000187")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000CBD")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000CB9")]
		internal ReadOnly(ref UnsafeParallelHashSet<T> data)
		{
		}

		[Token(Token = "0x6000CBC")]
		public readonly int Count()
		{
			return default(int);
		}

		[Token(Token = "0x6000CBE")]
		public readonly bool Contains(T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CBF")]
		public readonly NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<T>);
		}

		[Token(Token = "0x6000CC0")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000CC1")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000CC2")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x0")]
	internal UnsafeParallelHashMap<T, bool> m_Data;

	[Token(Token = "0x4000512")]
	public const int MaxCapacity = 1073741823;

	[Token(Token = "0x1700017F")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000180")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA2")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000CA3")]
		set
		{
		}
	}

	[Token(Token = "0x17000181")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C9F")]
	public UnsafeParallelHashSet(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000CA1")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000CA5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000CA6")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000CA7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000CA8")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA9")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAA")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAB")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000CAC")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x6000CAD")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000CAE")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000CB0")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
