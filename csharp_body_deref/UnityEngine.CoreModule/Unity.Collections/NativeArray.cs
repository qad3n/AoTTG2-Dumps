using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Internal;

namespace Unity.Collections;

[Token(Token = "0x2000045")]
[NativeContainerSupportsDeferredConvertListToArray]
[NativeContainerSupportsDeallocateOnJobCompletion]
[NativeContainerSupportsMinMaxWriteRestriction]
[DebuggerDisplay("Length = {m_Length}")]
[DebuggerTypeProxy(typeof(NativeArrayDebugView<>))]
[NativeContainer]
public struct NativeArray<T> : IDisposable, IEnumerable<T>, IEnumerable, IEquatable<NativeArray<T>> where T : struct
{
	[Token(Token = "0x2000046")]
	[ExcludeFromDocs]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000D0")]
		[FieldOffset(Offset = "0x0")]
		private NativeArray<T> m_Array;

		[Token(Token = "0x40000D1")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x40000D2")]
		[FieldOffset(Offset = "0x0")]
		private T value;

		[Token(Token = "0x17000014")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000093")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000015")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000094")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600008F")]
		public Enumerator(ref NativeArray<T> array)
		{
		}

		[Token(Token = "0x6000090")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000091")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000092")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000047")]
	[DebuggerDisplay("Length = {Length}")]
	[NativeContainerIsReadOnly]
	[NativeContainer]
	[DebuggerTypeProxy(typeof(NativeArrayReadOnlyDebugView<>))]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x2000048")]
		[ExcludeFromDocs]
		public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
		{
			[Token(Token = "0x40000D5")]
			[FieldOffset(Offset = "0x0")]
			private ReadOnly m_Array;

			[Token(Token = "0x40000D6")]
			[FieldOffset(Offset = "0x0")]
			private int m_Index;

			[Token(Token = "0x40000D7")]
			[FieldOffset(Offset = "0x0")]
			private T value;

			[Token(Token = "0x17000018")]
			public T Current
			{
				[MethodImpl((MethodImplOptions)256)]
				[Token(Token = "0x600009F")]
				get
				{
					return (T)null;
				}
			}

			[Token(Token = "0x17000019")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x60000A0")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600009B")]
			public Enumerator(in ReadOnly array)
			{
			}

			[Token(Token = "0x600009C")]
			public void Dispose()
			{
			}

			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600009D")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x600009E")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x40000D3")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe void* m_Buffer;

		[Token(Token = "0x40000D4")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Length;

		[Token(Token = "0x17000016")]
		public int Length
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000096")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000017")]
		public T this[int index]
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000097")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x6000095")]
		internal unsafe ReadOnly(void* buffer, int length)
		{
		}

		[Token(Token = "0x6000098")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000099")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600009A")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe void* m_Buffer;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Length;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x0")]
	internal Allocator m_AllocatorLabel;

	[Token(Token = "0x17000011")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000078")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000012")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000079")]
		get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600007A")]
		[WriteAccessRequired]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600007B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000075")]
	public NativeArray(int length, Allocator allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x6000076")]
	public NativeArray(T[] array, Allocator allocator)
	{
	}

	[Token(Token = "0x6000077")]
	private static void Allocate(int length, Allocator allocator, out NativeArray<T> array)
	{
	}

	[Token(Token = "0x600007C")]
	[WriteAccessRequired]
	public void Dispose()
	{
	}

	[Token(Token = "0x600007D")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x600007E")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600007F")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000081")]
	public bool Equals(NativeArray<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000084")]
	public static bool operator ==(NativeArray<T> left, NativeArray<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	public static void Copy(T[] src, NativeArray<T> dst)
	{
	}

	[Token(Token = "0x6000086")]
	public static void Copy(NativeArray<T> src, NativeArray<T> dst, int length)
	{
	}

	[Token(Token = "0x6000087")]
	public static void Copy(NativeArray<T> src, T[] dst, int length)
	{
	}

	[Token(Token = "0x6000088")]
	private static void CopySafe(NativeArray<T> src, int srcIndex, NativeArray<T> dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x6000089")]
	private static void CopySafe(T[] src, int srcIndex, NativeArray<T> dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x600008A")]
	private static void CopySafe(NativeArray<T> src, int srcIndex, T[] dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x600008B")]
	private NativeArray<U> InternalReinterpret<U>(int length) where U : struct
	{
		return default(NativeArray<U>);
	}

	[Token(Token = "0x600008C")]
	public NativeArray<U> Reinterpret<U>(int expectedTypeSize) where U : struct
	{
		return default(NativeArray<U>);
	}

	[Token(Token = "0x600008D")]
	public NativeArray<T> GetSubArray(int start, int length)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x600008E")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
