// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList4096Bytes
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
[Token(Token = "0x200005C")]
[DebuggerTypeProxy(typeof(FixedList4096BytesDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct FixedList4096Bytes<T> : INativeList<T>, IIndexable<T>, IEnumerable<T>, IEnumerable, IEquatable<FixedList32Bytes<T>>, IComparable<FixedList32Bytes<T>>, IEquatable<FixedList64Bytes<T>>, IComparable<FixedList64Bytes<T>>, IEquatable<FixedList128Bytes<T>>, IComparable<FixedList128Bytes<T>>, IEquatable<FixedList512Bytes<T>>, IComparable<FixedList512Bytes<T>>, IEquatable<FixedList4096Bytes<T>>, IComparable<FixedList4096Bytes<T>> where T : struct
{
	[Token(Token = "0x200005D")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000CB")]
		[FieldOffset(Offset = "0x0")]
		private FixedList4096Bytes<T> m_List;

		[Token(Token = "0x40000CC")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x1700007C")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000398")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700007D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000399")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000394")]
		public Enumerator(ref FixedList4096Bytes<T> list)
		{
		}

		[Token(Token = "0x6000395")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000396")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000397")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal FixedBytes4096Align8 data;

	[Token(Token = "0x17000073")]
	internal ushort length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000352")]
		readonly get
		{
			return default(ushort);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000353")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	internal unsafe readonly byte* buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000354")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000075")]
	[CreateProperty]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000355")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000356")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	[CreateProperty]
	private IEnumerable<T> Elements
	{
		[Token(Token = "0x6000357")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000358")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	internal int LengthInBytes
	{
		[Token(Token = "0x6000359")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000079")]
	internal unsafe readonly byte* Buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600035A")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x1700007A")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600035B")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600035C")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600035D")]
		readonly get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600035E")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600035F")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000360")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000361")]
	public void Add(in T item)
	{
	}

	[Token(Token = "0x6000362")]
	public unsafe void AddRange(void* ptr, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000363")]
	public void AddNoResize(in T item)
	{
	}

	[Token(Token = "0x6000364")]
	public unsafe void AddRangeNoResize(void* ptr, int length)
	{
	}

	[Token(Token = "0x6000365")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x6000366")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000367")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x6000368")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x6000369")]
	public void Insert(int index, in T item)
	{
	}

	[Token(Token = "0x600036A")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x600036B")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x600036C")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600036D")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x600036E")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x600036F")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000370")]
	public static bool operator ==(in FixedList4096Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000371")]
	public static bool operator !=(in FixedList4096Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000372")]
	public int CompareTo(FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000373")]
	public bool Equals(FixedList32Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000374")]
	public FixedList4096Bytes(in FixedList32Bytes<T> other)
	{
	}

	[Token(Token = "0x6000375")]
	internal int Initialize(in FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000376")]
	public static implicit operator FixedList4096Bytes<T>(in FixedList32Bytes<T> other)
	{
		return default(FixedList4096Bytes<T>);
	}

	[Token(Token = "0x6000377")]
	public static bool operator ==(in FixedList4096Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000378")]
	public static bool operator !=(in FixedList4096Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000379")]
	public int CompareTo(FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600037A")]
	public bool Equals(FixedList64Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600037B")]
	public FixedList4096Bytes(in FixedList64Bytes<T> other)
	{
	}

	[Token(Token = "0x600037C")]
	internal int Initialize(in FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600037D")]
	public static implicit operator FixedList4096Bytes<T>(in FixedList64Bytes<T> other)
	{
		return default(FixedList4096Bytes<T>);
	}

	[Token(Token = "0x600037E")]
	public static bool operator ==(in FixedList4096Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600037F")]
	public static bool operator !=(in FixedList4096Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000380")]
	public int CompareTo(FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000381")]
	public bool Equals(FixedList128Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000382")]
	public FixedList4096Bytes(in FixedList128Bytes<T> other)
	{
	}

	[Token(Token = "0x6000383")]
	internal int Initialize(in FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000384")]
	public static implicit operator FixedList4096Bytes<T>(in FixedList128Bytes<T> other)
	{
		return default(FixedList4096Bytes<T>);
	}

	[Token(Token = "0x6000385")]
	public static bool operator ==(in FixedList4096Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000386")]
	public static bool operator !=(in FixedList4096Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000387")]
	public int CompareTo(FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000388")]
	public bool Equals(FixedList512Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000389")]
	public FixedList4096Bytes(in FixedList512Bytes<T> other)
	{
	}

	[Token(Token = "0x600038A")]
	internal int Initialize(in FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600038B")]
	public static implicit operator FixedList4096Bytes<T>(in FixedList512Bytes<T> other)
	{
		return default(FixedList4096Bytes<T>);
	}

	[Token(Token = "0x600038C")]
	public static bool operator ==(in FixedList4096Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600038D")]
	public static bool operator !=(in FixedList4096Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600038E")]
	public int CompareTo(FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600038F")]
	public bool Equals(FixedList4096Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000390")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000391")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000392")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000393")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}
}
