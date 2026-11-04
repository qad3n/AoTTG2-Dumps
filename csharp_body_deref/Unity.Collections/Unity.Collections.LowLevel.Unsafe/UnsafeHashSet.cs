// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeHashSet
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

[Token(Token = "0x200010D")]
[DebuggerTypeProxy(typeof(UnsafeHashSetDebuggerTypeProxy<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct UnsafeHashSet<T> : INativeDisposable, IDisposable, IEnumerable<T>, IEnumerable where T : struct, IEquatable<T>
{
	[Token(Token = "0x200010E")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004C5")]
		[FieldOffset(Offset = "0x0")]
		internal HashMapHelper<T>.Enumerator m_Enumerator;

		[Token(Token = "0x17000154")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BA6")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000155")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BA7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BA3")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000BA4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BA5")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200010F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x40004C6")]
		[FieldOffset(Offset = "0x0")]
		internal HashMapHelper<T> m_Data;

		[Token(Token = "0x17000156")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BA9")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000157")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BAA")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000158")]
		public readonly int Count
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BAB")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000159")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000BAC")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000BA8")]
		internal ReadOnly(ref HashMapHelper<T> data)
		{
		}

		[Token(Token = "0x6000BAD")]
		public readonly bool Contains(T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BAE")]
		public readonly NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<T>);
		}

		[Token(Token = "0x6000BAF")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000BB0")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000BB1")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x0")]
	internal HashMapHelper<T> m_Data;

	[Token(Token = "0x40004C4")]
	public const int MaxCapacity = 536870912;

	[Token(Token = "0x17000150")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B92")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000151")]
	public readonly int Count
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B93")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000152")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B94")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000B95")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000B96")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B91")]
	public UnsafeHashSet(int initialCapacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000B97")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B98")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000B99")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B9A")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9B")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9C")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9D")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000B9E")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000B9F")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000BA0")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000BA1")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000BA2")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
