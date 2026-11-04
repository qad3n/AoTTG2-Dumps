// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList64Bytes
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
[Token(Token = "0x2000050")]
[DebuggerTypeProxy(typeof(FixedList64BytesDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct FixedList64Bytes<T> : INativeList<T>, IIndexable<T>, IEnumerable<T>, IEnumerable, IEquatable<FixedList32Bytes<T>>, IComparable<FixedList32Bytes<T>>, IEquatable<FixedList64Bytes<T>>, IComparable<FixedList64Bytes<T>>, IEquatable<FixedList128Bytes<T>>, IComparable<FixedList128Bytes<T>>, IEquatable<FixedList512Bytes<T>>, IComparable<FixedList512Bytes<T>>, IEquatable<FixedList4096Bytes<T>>, IComparable<FixedList4096Bytes<T>> where T : struct
{
	[Token(Token = "0x2000051")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000BF")]
		[FieldOffset(Offset = "0x0")]
		private FixedList64Bytes<T> m_List;

		[Token(Token = "0x40000C0")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x17000058")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60002AE")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000059")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002AF")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002AA")]
		public Enumerator(ref FixedList64Bytes<T> list)
		{
		}

		[Token(Token = "0x60002AB")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AC")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002AD")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal FixedBytes64Align8 data;

	[Token(Token = "0x1700004F")]
	internal ushort length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000268")]
		readonly get
		{
			return default(ushort);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000269")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	internal unsafe readonly byte* buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600026A")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000051")]
	[CreateProperty]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600026B")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600026C")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	[CreateProperty]
	private IEnumerable<T> Elements
	{
		[Token(Token = "0x600026D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600026E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000054")]
	internal int LengthInBytes
	{
		[Token(Token = "0x600026F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000055")]
	internal unsafe readonly byte* Buffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000270")]
		get
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000056")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000271")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000272")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000273")]
		readonly get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000274")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000275")]
	public unsafe ref T ElementAt(int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000276")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000277")]
	public void Add(in T item)
	{
	}

	[Token(Token = "0x6000278")]
	public unsafe void AddRange(void* ptr, int length)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000279")]
	public void AddNoResize(in T item)
	{
	}

	[Token(Token = "0x600027A")]
	public unsafe void AddRangeNoResize(void* ptr, int length)
	{
	}

	[Token(Token = "0x600027B")]
	public void AddReplicate(in T value, int count)
	{
	}

	[Token(Token = "0x600027C")]
	public void Clear()
	{
	}

	[Token(Token = "0x600027D")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x600027E")]
	public void InsertRange(int index, int count)
	{
	}

	[Token(Token = "0x600027F")]
	public void Insert(int index, in T item)
	{
	}

	[Token(Token = "0x6000280")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x6000281")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x6000282")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000283")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6000284")]
	[ExcludeFromBurstCompatTesting("Returns managed array")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000285")]
	public NativeArray<T> ToNativeArray(AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000286")]
	public static bool operator ==(in FixedList64Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000287")]
	public static bool operator !=(in FixedList64Bytes<T> a, in FixedList32Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000288")]
	public int CompareTo(FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000289")]
	public bool Equals(FixedList32Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600028A")]
	public FixedList64Bytes(in FixedList32Bytes<T> other)
	{
	}

	[Token(Token = "0x600028B")]
	internal int Initialize(in FixedList32Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600028C")]
	public static implicit operator FixedList64Bytes<T>(in FixedList32Bytes<T> other)
	{
		return default(FixedList64Bytes<T>);
	}

	[Token(Token = "0x600028D")]
	public static bool operator ==(in FixedList64Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600028E")]
	public static bool operator !=(in FixedList64Bytes<T> a, in FixedList64Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	public int CompareTo(FixedList64Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000290")]
	public bool Equals(FixedList64Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000291")]
	public static bool operator ==(in FixedList64Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	public static bool operator !=(in FixedList64Bytes<T> a, in FixedList128Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000293")]
	public int CompareTo(FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000294")]
	public bool Equals(FixedList128Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000295")]
	public FixedList64Bytes(in FixedList128Bytes<T> other)
	{
	}

	[Token(Token = "0x6000296")]
	internal int Initialize(in FixedList128Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x6000297")]
	public static implicit operator FixedList64Bytes<T>(in FixedList128Bytes<T> other)
	{
		return default(FixedList64Bytes<T>);
	}

	[Token(Token = "0x6000298")]
	public static bool operator ==(in FixedList64Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000299")]
	public static bool operator !=(in FixedList64Bytes<T> a, in FixedList512Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x600029A")]
	public int CompareTo(FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600029B")]
	public bool Equals(FixedList512Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	public FixedList64Bytes(in FixedList512Bytes<T> other)
	{
	}

	[Token(Token = "0x600029D")]
	internal int Initialize(in FixedList512Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x600029E")]
	public static implicit operator FixedList64Bytes<T>(in FixedList512Bytes<T> other)
	{
		return default(FixedList64Bytes<T>);
	}

	[Token(Token = "0x600029F")]
	public static bool operator ==(in FixedList64Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002A0")]
	public static bool operator !=(in FixedList64Bytes<T> a, in FixedList4096Bytes<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002A1")]
	public int CompareTo(FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002A2")]
	public bool Equals(FixedList4096Bytes<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60002A3")]
	public FixedList64Bytes(in FixedList4096Bytes<T> other)
	{
	}

	[Token(Token = "0x60002A4")]
	internal int Initialize(in FixedList4096Bytes<T> other)
	{
		return default(int);
	}

	[Token(Token = "0x60002A5")]
	public static implicit operator FixedList64Bytes<T>(in FixedList4096Bytes<T> other)
	{
		return default(FixedList64Bytes<T>);
	}

	[Token(Token = "0x60002A6")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002A7")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002A8")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}
}
