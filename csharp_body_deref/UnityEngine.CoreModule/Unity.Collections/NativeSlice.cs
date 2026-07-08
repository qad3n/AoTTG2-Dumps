using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Internal;

namespace Unity.Collections;

[Token(Token = "0x200004E")]
[NativeContainer]
[NativeContainerSupportsMinMaxWriteRestriction]
[DebuggerTypeProxy(typeof(NativeSliceDebugView<>))]
[DebuggerDisplay("Length = {Length}")]
public struct NativeSlice<T> : IEnumerable<T>, IEnumerable, IEquatable<NativeSlice<T>> where T : struct
{
	[Token(Token = "0x200004F")]
	[ExcludeFromDocs]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000DE")]
		[FieldOffset(Offset = "0x0")]
		private NativeSlice<T> m_Array;

		[Token(Token = "0x40000DF")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x1700001D")]
		public T Current
		{
			[Token(Token = "0x60000B9")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700001E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000BA")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000B5")]
		public Enumerator(ref NativeSlice<T> array)
		{
		}

		[Token(Token = "0x60000B6")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60000B7")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000B8")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe byte* m_Buffer;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Stride;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Length;

	[Token(Token = "0x1700001A")]
	public T this[int index]
	{
		[Token(Token = "0x60000AA")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60000AB")]
		[WriteAccessRequired]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public int Stride
	{
		[Token(Token = "0x60000AD")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public int Length
	{
		[Token(Token = "0x60000AE")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000A6")]
	public NativeSlice(NativeSlice<T> slice, int start, int length)
	{
	}

	[Token(Token = "0x60000A7")]
	public NativeSlice(NativeArray<T> array)
	{
	}

	[Token(Token = "0x60000A8")]
	public static implicit operator NativeSlice<T>(NativeArray<T> array)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x60000A9")]
	public NativeSlice(NativeArray<T> array, int start, int length)
	{
	}

	[Token(Token = "0x60000AC")]
	[WriteAccessRequired]
	public void CopyFrom(NativeSlice<T> slice)
	{
	}

	[Token(Token = "0x60000AF")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60000B0")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000B1")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	public bool Equals(NativeSlice<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B3")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
