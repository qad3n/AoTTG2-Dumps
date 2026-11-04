// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList32Bytes
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
using Unity.Properties;
using UnityEngine;

namespace Unity.Collections;

[Serializable]
[Token(Token = "0x200004C")]
[DebuggerTypeProxy(typeof(FixedList32BytesDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct FixedList32Bytes<T> : INativeList<T>, IIndexable<T>, IEnumerable<T>, IEnumerable, IEquatable<FixedList32Bytes<T>>, IComparable<FixedList32Bytes<T>>, IEquatable<FixedList64Bytes<T>>, IComparable<FixedList64Bytes<T>>, IEquatable<FixedList128Bytes<T>>, IComparable<FixedList128Bytes<T>>, IEquatable<FixedList512Bytes<T>>, IComparable<FixedList512Bytes<T>>, IEquatable<FixedList4096Bytes<T>>, IComparable<FixedList4096Bytes<T>> where T : struct
{
	[Token(Token = "0x200004D")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x0")]
		private FixedList32Bytes<T> m_List;

		[Token(Token = "0x40000BC")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x1700004C")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000260")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700004D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000261")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600025C")]
		public Enumerator(ref FixedList32Bytes<T> list)
		{
		}

		[Token(Token = "0x600025D")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600025E")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600025F")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal FixedBytes32Align8 data;

	[Token(Token = "0x17000043")]
	internal ushort length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600021A")]
		readonly get
		{
			return default(ushort);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600021B")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	internal unsafe readonly byte* buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600021C")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000045")]
	[CreateProperty]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600021D")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600021E")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	[CreateProperty]
	private IEnumerable<T> Elements
	{
		[Token(Token = "0x600021F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	internal int LengthInBytes
	{
		[Token(Token = "0x6000221")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000049")]
	internal unsafe readonly byte* Buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000222")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x1700004A")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000223")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000224")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000225")]
		readonly get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000226")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000227")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000228")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000229")]
	public void Add(in T item)
	{
	}

	[Token(Token = "0x600022A")]
	public unsafe void AddRange(void* ptr, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600022B")]
	public void AddNoResize(in T item)
	{
	}

	[Token(Token = "0x600022C")]
	public unsafe void AddRangeNoResize(void* ptr, int length)
	{
	}

	[Token(Token = "0x600022D")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x600022E")]
	public void Clear()
	{
	}

	[Token(Token = "0x600022F")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x6000230")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x6000231")]
	public void Insert(int index, in T item)
	{
	}

	[Token(Token = "0x6000232")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x6000233")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x6000234")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000235")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6000236")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000238")]
	public static bool operator ==(in FixedList32Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000239")]
	public static bool operator !=(in FixedList32Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600023A")]
	public int CompareTo(FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600023B")]
	public bool Equals(FixedList32Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600023C")]
	public static bool operator ==(in FixedList32Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	public static bool operator !=(in FixedList32Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	public int CompareTo(FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600023F")]
	public bool Equals(FixedList64Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000240")]
	public FixedList32Bytes(in FixedList64Bytes<T> other)
	{
	}

	[Token(Token = "0x6000241")]
	internal int Initialize(in FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000242")]
	public static implicit operator FixedList32Bytes<T>(in FixedList64Bytes<T> other)
	{
		return default(FixedList32Bytes<T>);
	}

	[Token(Token = "0x6000243")]
	public static bool operator ==(in FixedList32Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000244")]
	public static bool operator !=(in FixedList32Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000245")]
	public int CompareTo(FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000246")]
	public bool Equals(FixedList128Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000247")]
	public FixedList32Bytes(in FixedList128Bytes<T> other)
	{
	}

	[Token(Token = "0x6000248")]
	internal int Initialize(in FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000249")]
	public static implicit operator FixedList32Bytes<T>(in FixedList128Bytes<T> other)
	{
		return default(FixedList32Bytes<T>);
	}

	[Token(Token = "0x600024A")]
	public static bool operator ==(in FixedList32Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600024B")]
	public static bool operator !=(in FixedList32Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600024C")]
	public int CompareTo(FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600024D")]
	public bool Equals(FixedList512Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600024E")]
	public FixedList32Bytes(in FixedList512Bytes<T> other)
	{
	}

	[Token(Token = "0x600024F")]
	internal int Initialize(in FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000250")]
	public static implicit operator FixedList32Bytes<T>(in FixedList512Bytes<T> other)
	{
		return default(FixedList32Bytes<T>);
	}

	[Token(Token = "0x6000251")]
	public static bool operator ==(in FixedList32Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000252")]
	public static bool operator !=(in FixedList32Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000253")]
	public int CompareTo(FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000254")]
	public bool Equals(FixedList4096Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000255")]
	public FixedList32Bytes(in FixedList4096Bytes<T> other)
	{
	}

	[Token(Token = "0x6000256")]
	internal int Initialize(in FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000257")]
	public static implicit operator FixedList32Bytes<T>(in FixedList4096Bytes<T> other)
	{
		return default(FixedList32Bytes<T>);
	}

	[Token(Token = "0x6000258")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600025A")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}
}
