// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeParallelHashSet
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

[Token(Token = "0x20000A5")]
[DebuggerTypeProxy(typeof(NativeParallelHashSetDebuggerTypeProxy<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct NativeParallelHashSet<T> : INativeDisposable, IDisposable, IEnumerable<T>, IEnumerable where T : struct, IEquatable<T>
{
	[Token(Token = "0x20000A6")]
	[NativeContainerIsAtomicWriteOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelWriter
	{
		[Token(Token = "0x40003CE")]
		[FieldOffset(Offset = "0x0")]
		internal NativeParallelHashMap<T, bool>.ParallelWriter m_Data;

		[Token(Token = "0x170000E9")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000830")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000831")]
		public bool Add(T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000832")]
		public bool Add(T item, int threadIndexOverride)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20000A7")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003CF")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMapDataEnumerator m_Enumerator;

		[Token(Token = "0x170000EA")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000836")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170000EB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000837")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000833")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000834")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000835")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x40003D0")]
		[FieldOffset(Offset = "0x0")]
		internal UnsafeParallelHashMap<T, bool> m_Data;

		[Token(Token = "0x170000EC")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000839")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000ED")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600083A")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000EE")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600083C")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000838")]
		internal ReadOnly(ref NativeParallelHashSet<T> data)
		{
		}

		[Token(Token = "0x600083B")]
		public readonly int Count()
		{
			return default(int);
		}

		[Token(Token = "0x600083D")]
		public readonly bool Contains(T item)
		{
			return default(bool);
		}

		[Token(Token = "0x600083E")]
		public readonly NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<T>);
		}

		[Token(Token = "0x600083F")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000840")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000841")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000842")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}
	}

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x0")]
	internal NativeParallelHashMap<T, bool> m_Data;

	[Token(Token = "0x40003CD")]
	public const int MaxCapacity = 1073741823;

	[Token(Token = "0x170000E6")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600081F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000821")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000822")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000823")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600081E")]
	public NativeParallelHashSet(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000820")]
	public int Count()
	{
		return default(int);
	}

	[Token(Token = "0x6000824")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000825")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000826")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000827")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000828")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000829")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600082A")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x600082B")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}

	[Token(Token = "0x600082C")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600082D")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600082E")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600082F")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
