// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeHashSet
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

[Token(Token = "0x2000092")]
[NativeContainer]
[DebuggerTypeProxy(typeof(NativeHashSetDebuggerTypeProxy<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct NativeHashSet<T> : INativeDisposable, IDisposable, IEnumerable<T>, IEnumerable where T : struct, IEquatable<T>
{
	[Token(Token = "0x2000093")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40003BB")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal HashMapHelper<T>.Enumerator m_Enumerator;

		[Token(Token = "0x170000C5")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600077D")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170000C6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600077E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600077A")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600077B")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600077C")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000094")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x40003BC")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe HashMapHelper<T>* m_Data;

		[Token(Token = "0x170000C7")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000780")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000C8")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000781")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170000C9")]
		public readonly int Count
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000782")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000CA")]
		public readonly int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000783")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600077F")]
		internal ReadOnly(ref NativeHashSet<T> data)
		{
		}

		[Token(Token = "0x6000784")]
		public readonly bool Contains(T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6000785")]
		public readonly NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
		{
			return default(NativeArray<T>);
		}

		[Token(Token = "0x6000786")]
		public readonly Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000787")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000788")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000789")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}
	}

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe HashMapHelper<T>* m_Data;

	[Token(Token = "0x40003BA")]
	public const int MaxCapacity = 536870912;

	[Token(Token = "0x170000C1")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000767")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C2")]
	public readonly int Count
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000768")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C3")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000769")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600076A")]
		set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600076B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000766")]
	public NativeHashSet(int initialCapacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600076C")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600076D")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600076E")]
	public void Clear()
	{
	}

	[Token(Token = "0x600076F")]
	public bool Add(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000771")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000772")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000773")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000774")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000775")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000778")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000779")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}
}
