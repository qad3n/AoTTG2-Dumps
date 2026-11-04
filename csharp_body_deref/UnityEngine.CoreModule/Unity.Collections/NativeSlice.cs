// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeSlice
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Internal;

namespace Unity.Collections;

[Token(Token = "0x2000062")]
[DebuggerTypeProxy(typeof(NativeSliceDebugView<>))]
[NativeContainer]
[NativeContainerSupportsMinMaxWriteRestriction]
[DebuggerDisplay("Length = {Length}")]
public struct NativeSlice<T> : IEnumerable<T>, IEnumerable, IEquatable<NativeSlice<T>> where T : struct
{
	[Token(Token = "0x2000063")]
	[ExcludeFromDocs]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000113")]
		[FieldOffset(Offset = "0x0")]
		private NativeSlice<T> m_Array;

		[Token(Token = "0x4000114")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x17000028")]
		public T Current
		{
			[Token(Token = "0x6000146")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000029")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000147")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000142")]
		public Enumerator(ref NativeSlice<T> array)
		{
		}

		[Token(Token = "0x6000143")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000144")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000145")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe byte* m_Buffer;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Stride;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Length;

	[Token(Token = "0x17000025")]
	public T this[int index]
	{
		[Token(Token = "0x6000137")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000138")]
		[WriteAccessRequired]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public int Stride
	{
		[Token(Token = "0x600013A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	public int Length
	{
		[Token(Token = "0x600013B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000133")]
	public NativeSlice(NativeSlice<T> slice, int start, int length)
	{
	}

	[Token(Token = "0x6000134")]
	public NativeSlice(NativeArray<T> array)
	{
	}

	[Token(Token = "0x6000135")]
	public static implicit operator NativeSlice<T>(NativeArray<T> array)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6000136")]
	public NativeSlice(NativeArray<T> array, int start, int length)
	{
	}

	[Token(Token = "0x6000139")]
	[WriteAccessRequired]
	public void CopyFrom(NativeSlice<T> slice)
	{
	}

	[Token(Token = "0x600013C")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600013D")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600013F")]
	public bool Equals(NativeSlice<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000140")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000141")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
