// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList128Bytes
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
[Token(Token = "0x2000054")]
[DebuggerTypeProxy(typeof(FixedList128BytesDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct FixedList128Bytes<T> : INativeList<T>, IIndexable<T>, IEnumerable<T>, IEnumerable, IEquatable<FixedList32Bytes<T>>, IComparable<FixedList32Bytes<T>>, IEquatable<FixedList64Bytes<T>>, IComparable<FixedList64Bytes<T>>, IEquatable<FixedList128Bytes<T>>, IComparable<FixedList128Bytes<T>>, IEquatable<FixedList512Bytes<T>>, IComparable<FixedList512Bytes<T>>, IEquatable<FixedList4096Bytes<T>>, IComparable<FixedList4096Bytes<T>> where T : struct
{
	[Token(Token = "0x2000055")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000C3")]
		[FieldOffset(Offset = "0x0")]
		private FixedList128Bytes<T> m_List;

		[Token(Token = "0x40000C4")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x17000064")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60002FC")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000065")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002FD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002F8")]
		public Enumerator(ref FixedList128Bytes<T> list)
		{
		}

		[Token(Token = "0x60002F9")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002FA")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002FB")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal FixedBytes128Align8 data;

	[Token(Token = "0x1700005B")]
	internal ushort length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B6")]
		readonly get
		{
			return default(ushort);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B7")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	internal unsafe readonly byte* buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B8")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x1700005D")]
	[CreateProperty]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B9")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60002BA")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	[CreateProperty]
	private IEnumerable<T> Elements
	{
		[Token(Token = "0x60002BB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005F")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002BC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000060")]
	internal int LengthInBytes
	{
		[Token(Token = "0x60002BD")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000061")]
	internal unsafe readonly byte* Buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002BE")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000062")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002BF")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60002C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C1")]
		readonly get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002C2")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C3")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60002C4")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002C5")]
	public void Add(in T item)
	{
	}

	[Token(Token = "0x60002C6")]
	public unsafe void AddRange(void* ptr, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002C7")]
	public void AddNoResize(in T item)
	{
	}

	[Token(Token = "0x60002C8")]
	public unsafe void AddRangeNoResize(void* ptr, int length)
	{
	}

	[Token(Token = "0x60002C9")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x60002CA")]
	public void Clear()
	{
	}

	[Token(Token = "0x60002CB")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x60002CC")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x60002CD")]
	public void Insert(int index, in T item)
	{
	}

	[Token(Token = "0x60002CE")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x60002CF")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x60002D0")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60002D1")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x60002D2")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60002D4")]
	public static bool operator ==(in FixedList128Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D5")]
	public static bool operator !=(in FixedList128Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D6")]
	public int CompareTo(FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002D7")]
	public bool Equals(FixedList32Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D8")]
	public FixedList128Bytes(in FixedList32Bytes<T> other)
	{
	}

	[Token(Token = "0x60002D9")]
	internal int Initialize(in FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002DA")]
	public static implicit operator FixedList128Bytes<T>(in FixedList32Bytes<T> other)
	{
		return default(FixedList128Bytes<T>);
	}

	[Token(Token = "0x60002DB")]
	public static bool operator ==(in FixedList128Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DC")]
	public static bool operator !=(in FixedList128Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	public int CompareTo(FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002DE")]
	public bool Equals(FixedList64Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DF")]
	public FixedList128Bytes(in FixedList64Bytes<T> other)
	{
	}

	[Token(Token = "0x60002E0")]
	internal int Initialize(in FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002E1")]
	public static implicit operator FixedList128Bytes<T>(in FixedList64Bytes<T> other)
	{
		return default(FixedList128Bytes<T>);
	}

	[Token(Token = "0x60002E2")]
	public static bool operator ==(in FixedList128Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E3")]
	public static bool operator !=(in FixedList128Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E4")]
	public int CompareTo(FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002E5")]
	public bool Equals(FixedList128Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E6")]
	public static bool operator ==(in FixedList128Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E7")]
	public static bool operator !=(in FixedList128Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E8")]
	public int CompareTo(FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002E9")]
	public bool Equals(FixedList512Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EA")]
	public FixedList128Bytes(in FixedList512Bytes<T> other)
	{
	}

	[Token(Token = "0x60002EB")]
	internal int Initialize(in FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002EC")]
	public static implicit operator FixedList128Bytes<T>(in FixedList512Bytes<T> other)
	{
		return default(FixedList128Bytes<T>);
	}

	[Token(Token = "0x60002ED")]
	public static bool operator ==(in FixedList128Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EE")]
	public static bool operator !=(in FixedList128Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EF")]
	public int CompareTo(FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	public bool Equals(FixedList4096Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F1")]
	public FixedList128Bytes(in FixedList4096Bytes<T> other)
	{
	}

	[Token(Token = "0x60002F2")]
	internal int Initialize(in FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002F3")]
	public static implicit operator FixedList128Bytes<T>(in FixedList4096Bytes<T> other)
	{
		return default(FixedList128Bytes<T>);
	}

	[Token(Token = "0x60002F4")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F5")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002F6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}
}
