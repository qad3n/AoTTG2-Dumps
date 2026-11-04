// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList512Bytes
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
[Token(Token = "0x2000058")]
[DebuggerTypeProxy(typeof(FixedList512BytesDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct FixedList512Bytes<T> : INativeList<T>, IIndexable<T>, IEnumerable<T>, IEnumerable, IEquatable<FixedList32Bytes<T>>, IComparable<FixedList32Bytes<T>>, IEquatable<FixedList64Bytes<T>>, IComparable<FixedList64Bytes<T>>, IEquatable<FixedList128Bytes<T>>, IComparable<FixedList128Bytes<T>>, IEquatable<FixedList512Bytes<T>>, IComparable<FixedList512Bytes<T>>, IEquatable<FixedList4096Bytes<T>>, IComparable<FixedList4096Bytes<T>> where T : struct
{
	[Token(Token = "0x2000059")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000C7")]
		[FieldOffset(Offset = "0x0")]
		private FixedList512Bytes<T> m_List;

		[Token(Token = "0x40000C8")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x17000070")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600034A")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000071")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600034B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000346")]
		public Enumerator(ref FixedList512Bytes<T> list)
		{
		}

		[Token(Token = "0x6000347")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000348")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000349")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal FixedBytes512Align8 data;

	[Token(Token = "0x17000067")]
	internal ushort length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000304")]
		readonly get
		{
			return default(ushort);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000305")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	internal unsafe readonly byte* buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000306")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000069")]
	[CreateProperty]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000307")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000308")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	[CreateProperty]
	private IEnumerable<T> Elements
	{
		[Token(Token = "0x6000309")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006B")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600030A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	internal int LengthInBytes
	{
		[Token(Token = "0x600030B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	internal unsafe readonly byte* Buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600030C")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x1700006E")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600030D")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600030E")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600030F")]
		readonly get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000310")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000311")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000312")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000313")]
	public void Add(in T item)
	{
	}

	[Token(Token = "0x6000314")]
	public unsafe void AddRange(void* ptr, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000315")]
	public void AddNoResize(in T item)
	{
	}

	[Token(Token = "0x6000316")]
	public unsafe void AddRangeNoResize(void* ptr, int length)
	{
	}

	[Token(Token = "0x6000317")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x6000318")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000319")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x600031A")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x600031B")]
	public void Insert(int index, in T item)
	{
	}

	[Token(Token = "0x600031C")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x600031D")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x600031E")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x600031F")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6000320")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000322")]
	public static bool operator ==(in FixedList512Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000323")]
	public static bool operator !=(in FixedList512Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000324")]
	public int CompareTo(FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000325")]
	public bool Equals(FixedList32Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000326")]
	public FixedList512Bytes(in FixedList32Bytes<T> other)
	{
	}

	[Token(Token = "0x6000327")]
	internal int Initialize(in FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000328")]
	public static implicit operator FixedList512Bytes<T>(in FixedList32Bytes<T> other)
	{
		return default(FixedList512Bytes<T>);
	}

	[Token(Token = "0x6000329")]
	public static bool operator ==(in FixedList512Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600032A")]
	public static bool operator !=(in FixedList512Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600032B")]
	public int CompareTo(FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600032C")]
	public bool Equals(FixedList64Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600032D")]
	public FixedList512Bytes(in FixedList64Bytes<T> other)
	{
	}

	[Token(Token = "0x600032E")]
	internal int Initialize(in FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600032F")]
	public static implicit operator FixedList512Bytes<T>(in FixedList64Bytes<T> other)
	{
		return default(FixedList512Bytes<T>);
	}

	[Token(Token = "0x6000330")]
	public static bool operator ==(in FixedList512Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000331")]
	public static bool operator !=(in FixedList512Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000332")]
	public int CompareTo(FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000333")]
	public bool Equals(FixedList128Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000334")]
	public FixedList512Bytes(in FixedList128Bytes<T> other)
	{
	}

	[Token(Token = "0x6000335")]
	internal int Initialize(in FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000336")]
	public static implicit operator FixedList512Bytes<T>(in FixedList128Bytes<T> other)
	{
		return default(FixedList512Bytes<T>);
	}

	[Token(Token = "0x6000337")]
	public static bool operator ==(in FixedList512Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000338")]
	public static bool operator !=(in FixedList512Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000339")]
	public int CompareTo(FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600033A")]
	public bool Equals(FixedList512Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600033B")]
	public static bool operator ==(in FixedList512Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600033C")]
	public static bool operator !=(in FixedList512Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600033D")]
	public int CompareTo(FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600033E")]
	public bool Equals(FixedList4096Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600033F")]
	public FixedList512Bytes(in FixedList4096Bytes<T> other)
	{
	}

	[Token(Token = "0x6000340")]
	internal int Initialize(in FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000341")]
	public static implicit operator FixedList512Bytes<T>(in FixedList4096Bytes<T> other)
	{
		return default(FixedList512Bytes<T>);
	}

	[Token(Token = "0x6000342")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000343")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000344")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000345")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}
}
