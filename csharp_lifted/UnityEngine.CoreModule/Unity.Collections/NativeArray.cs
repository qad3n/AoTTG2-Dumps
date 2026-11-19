// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeArray
// Update status: unchanged since the previous dump
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
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace Unity.Collections;

[Token(Token = "0x2000059")]
[DebuggerTypeProxy(typeof(NativeArrayDebugView<>))]
[NativeContainer]
[NativeContainerSupportsMinMaxWriteRestriction]
[NativeContainerSupportsDeallocateOnJobCompletion]
[DebuggerDisplay("Length = {m_Length}")]
[NativeContainerSupportsDeferredConvertListToArray]
public struct NativeArray<T> : IDisposable, IEnumerable<T>, IEnumerable, IEquatable<NativeArray<T>> where T : struct
{
	[Token(Token = "0x200005A")]
	[ExcludeFromDocs]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000105")]
		[FieldOffset(Offset = "0x0")]
		private NativeArray<T> m_Array;

		[Token(Token = "0x4000106")]
		[FieldOffset(Offset = "0x0")]
		private int m_Index;

		[Token(Token = "0x4000107")]
		[FieldOffset(Offset = "0x0")]
		private T value;

		[Token(Token = "0x1700001F")]
		public T Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600011F")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000020")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000120")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600011B")]
		public Enumerator(ref NativeArray<T> array)
		{
		}

		[Token(Token = "0x600011C")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600011D")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600011E")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200005B")]
	[NativeContainerIsReadOnly]
	[NativeContainer]
	[DebuggerTypeProxy(typeof(NativeArrayReadOnlyDebugView<>))]
	[DebuggerDisplay("Length = {Length}")]
	public struct ReadOnly : IEnumerable<T>, IEnumerable
	{
		[Token(Token = "0x200005C")]
		[ExcludeFromDocs]
		public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
		{
			[Token(Token = "0x400010A")]
			[FieldOffset(Offset = "0x0")]
			private ReadOnly m_Array;

			[Token(Token = "0x400010B")]
			[FieldOffset(Offset = "0x0")]
			private int m_Index;

			[Token(Token = "0x400010C")]
			[FieldOffset(Offset = "0x0")]
			private T value;

			[Token(Token = "0x17000023")]
			public T Current
			{
				[MethodImpl((MethodImplOptions)256)]
				[Token(Token = "0x600012E")]
				get
				{
					return (T)null;
				}
			}

			[Token(Token = "0x17000024")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x600012F")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x600012A")]
			public Enumerator(in ReadOnly array)
			{
			}

			[Token(Token = "0x600012B")]
			public void Dispose()
			{
			}

			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600012C")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x600012D")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x4000108")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe void* m_Buffer;

		[Token(Token = "0x4000109")]
		[FieldOffset(Offset = "0x0")]
		internal int m_Length;

		[Token(Token = "0x17000021")]
		public int Length
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000122")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000022")]
		public T this[int index]
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000123")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x6000121")]
		internal unsafe ReadOnly(void* buffer, int length)
		{
		}

		[Token(Token = "0x6000124")]
		public unsafe ref T UnsafeElementAt(int index)
		{
			return ref *(T*)null;
		}

		[Token(Token = "0x6000125")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}

		[Token(Token = "0x6000126")]
		private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000127")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000128")]
		public readonly ReadOnlySpan<T> AsReadOnlySpan()
		{
			return default(ReadOnlySpan<T>);
		}

		[Token(Token = "0x6000129")]
		public static implicit operator ReadOnlySpan<T>(in ReadOnly source)
		{
			return default(ReadOnlySpan<T>);
		}
	}

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ContentLoadModule", "UnityEngine.TilemapModule" })]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe void* m_Buffer;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x0")]
	internal int m_Length;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x0")]
	internal Allocator m_AllocatorLabel;

	[Token(Token = "0x1700001C")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000F7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001D")]
	public T this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000F8")]
		get
		{
			return (T)null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000F9")]
		[WriteAccessRequired]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60000FA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000F2")]
	public NativeArray(int length, Allocator allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x60000F3")]
	public NativeArray(int length, MemoryLabel label, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x60000F4")]
	public NativeArray(T[] array, Allocator allocator)
	{
	}

	[Token(Token = "0x60000F5")]
	public NativeArray(NativeArray<T> array, Allocator allocator)
	{
	}

	[Token(Token = "0x60000F6")]
	private static void Allocate(int length, Allocator allocator, MemoryLabel label, out NativeArray<T> array)
	{
	}

	[Token(Token = "0x60000FB")]
	[WriteAccessRequired]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000FC")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x60000FD")]
	[WriteAccessRequired]
	public void CopyFrom(T[] array)
	{
	}

	[Token(Token = "0x60000FE")]
	[WriteAccessRequired]
	public void CopyFrom(NativeArray<T> array)
	{
	}

	[Token(Token = "0x60000FF")]
	public void CopyTo(T[] array)
	{
	}

	[Token(Token = "0x6000100")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000101")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000102")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000103")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	public bool Equals(NativeArray<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000107")]
	public static bool operator ==(NativeArray<T> left, NativeArray<T> right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000108")]
	public static void Copy(NativeArray<T> src, NativeArray<T> dst)
	{
	}

	[Token(Token = "0x6000109")]
	public static void Copy(T[] src, NativeArray<T> dst)
	{
	}

	[Token(Token = "0x600010A")]
	public static void Copy(NativeArray<T> src, T[] dst)
	{
	}

	[Token(Token = "0x600010B")]
	public static void Copy(NativeArray<T> src, NativeArray<T> dst, int length)
	{
	}

	[Token(Token = "0x600010C")]
	public static void Copy(NativeArray<T> src, T[] dst, int length)
	{
	}

	[Token(Token = "0x600010D")]
	public static void Copy(NativeArray<T> src, int srcIndex, NativeArray<T> dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x600010E")]
	public static void Copy(NativeArray<T> src, int srcIndex, T[] dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x600010F")]
	private static void CopySafe(NativeArray<T> src, int srcIndex, NativeArray<T> dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x6000110")]
	private static void CopySafe(T[] src, int srcIndex, NativeArray<T> dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x6000111")]
	private static void CopySafe(NativeArray<T> src, int srcIndex, T[] dst, int dstIndex, int length)
	{
	}

	[Token(Token = "0x6000112")]
	private NativeArray<U> InternalReinterpret<U>(int length) where U : struct
	{
		return default(NativeArray<U>);
	}

	[Token(Token = "0x6000113")]
	public NativeArray<U> Reinterpret<U>() where U : struct
	{
		return default(NativeArray<U>);
	}

	[Token(Token = "0x6000114")]
	public NativeArray<U> Reinterpret<U>(int expectedTypeSize) where U : struct
	{
		return default(NativeArray<U>);
	}

	[Token(Token = "0x6000115")]
	public NativeArray<T> GetSubArray(int start, int length)
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000116")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000117")]
	[WriteAccessRequired]
	public readonly Span<T> AsSpan()
	{
		return default(Span<T>);
	}

	[Token(Token = "0x6000118")]
	public readonly ReadOnlySpan<T> AsReadOnlySpan()
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x6000119")]
	public static implicit operator Span<T>(in NativeArray<T> source)
	{
		return default(Span<T>);
	}

	[Token(Token = "0x600011A")]
	public static implicit operator ReadOnlySpan<T>(in NativeArray<T> source)
	{
		return default(ReadOnlySpan<T>);
	}
}
