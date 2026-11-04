// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafePtrList
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
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200011A")]
[DebuggerDisplay("Length = {Length}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
[DebuggerTypeProxy(typeof(UnsafePtrListDebugView<>))]
[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
public struct UnsafePtrList<T> : INativeDisposable, IDisposable, IEnumerable<IntPtr>, IEnumerable where T : struct
{
	[Token(Token = "0x200011B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ReadOnly
	{
		[Token(Token = "0x40004E3")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe readonly T** Ptr;

		[Token(Token = "0x40004E4")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Length;

		[Token(Token = "0x1700016B")]
		public readonly bool IsCreated
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000C2B")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700016C")]
		public readonly bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000C2C")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000C2D")]
		internal unsafe ReadOnly(T** ptr, int length)
		{
		}

		[Token(Token = "0x6000C2E")]
		public unsafe int IndexOf(void* ptr)
		{
			return default(int);
		}

		[Token(Token = "0x6000C2F")]
		public unsafe bool Contains(void* ptr)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200011C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelReader
	{
		[Token(Token = "0x40004E5")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe readonly T** Ptr;

		[Token(Token = "0x40004E6")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Length;

		[Token(Token = "0x6000C30")]
		internal unsafe ParallelReader(T** ptr, int length)
		{
		}

		[Token(Token = "0x6000C31")]
		public unsafe int IndexOf(void* ptr)
		{
			return default(int);
		}

		[Token(Token = "0x6000C32")]
		public unsafe bool Contains(void* ptr)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200011D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct ParallelWriter
	{
		[Token(Token = "0x40004E7")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe readonly T** Ptr;

		[Token(Token = "0x40004E8")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe UnsafeList<IntPtr>* ListData;

		[Token(Token = "0x6000C33")]
		internal unsafe ParallelWriter(T** ptr, UnsafeList<IntPtr>* listData)
		{
		}

		[Token(Token = "0x6000C34")]
		public unsafe void AddNoResize(T* value)
		{
		}

		[Token(Token = "0x6000C35")]
		public unsafe void AddRangeNoResize(T** ptr, int count)
		{
		}

		[Token(Token = "0x6000C36")]
		public void AddRangeNoResize(UnsafePtrList<T> list)
		{
		}
	}

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe readonly T** Ptr;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x0")]
	public readonly int m_length;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x0")]
	public readonly int m_capacity;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x0")]
	public readonly AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x0")]
	private readonly int padding;

	[Token(Token = "0x17000166")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C04")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000C05")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C06")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000C07")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	public unsafe T* this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C08")]
		get
		{
			//IL_0002: Expected I, but got O
			return (T*)unchecked((nint)null);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C09")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016A")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C11")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0A")]
	public unsafe ref T* ElementAt(int index)
	{
		return ref *(T**)null;
	}

	[Token(Token = "0x6000C0B")]
	public unsafe UnsafePtrList(T** ptr, int length)
	{
	}

	[Token(Token = "0x6000C0C")]
	public UnsafePtrList(int initialCapacity, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000C0D")]
	public unsafe static UnsafePtrList<T>* Create(T** ptr, int length)
	{
		//IL_0002: Expected I, but got O
		return (UnsafePtrList<T>*)unchecked((nint)null);
	}

	[Token(Token = "0x6000C0E")]
	public unsafe static UnsafePtrList<T>* Create(int initialCapacity, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
		//IL_0002: Expected I, but got O
		return (UnsafePtrList<T>*)unchecked((nint)null);
	}

	[Token(Token = "0x6000C0F")]
	public unsafe static void Destroy(UnsafePtrList<T>* listData)
	{
	}

	[Token(Token = "0x6000C12")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C13")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000C14")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000C15")]
	public void Resize(int length, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000C16")]
	public void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C17")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000C18")]
	public unsafe int IndexOf(void* ptr)
	{
		return default(int);
	}

	[Token(Token = "0x6000C19")]
	public unsafe bool Contains(void* ptr)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1A")]
	public unsafe void AddNoResize(void* value)
	{
	}

	[Token(Token = "0x6000C1B")]
	public unsafe void AddRangeNoResize(void** ptr, int count)
	{
	}

	[Token(Token = "0x6000C1C")]
	public void AddRangeNoResize(UnsafePtrList<T> list)
	{
	}

	[Token(Token = "0x6000C1D")]
	public void Add(in IntPtr value)
	{
	}

	[Token(Token = "0x6000C1E")]
	public unsafe void Add(void* value)
	{
	}

	[Token(Token = "0x6000C1F")]
	public unsafe void AddRange(void* ptr, int length)
	{
	}

	[Token(Token = "0x6000C20")]
	public void AddRange(UnsafePtrList<T> list)
	{
	}

	[Token(Token = "0x6000C21")]
	public void InsertRangeWithBeginEnd(int begin, int end)
	{
	}

	[Token(Token = "0x6000C22")]
	public void RemoveAtSwapBack(int index)
	{
	}

	[Token(Token = "0x6000C23")]
	public void RemoveRangeSwapBack(int index, int count)
	{
	}

	[Token(Token = "0x6000C24")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6000C25")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x6000C26")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C27")]
	private IEnumerator<IntPtr> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EIntPtr_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000C29")]
	public ParallelReader AsParallelReader()
	{
		return default(ParallelReader);
	}

	[Token(Token = "0x6000C2A")]
	public ParallelWriter AsParallelWriter()
	{
		return default(ParallelWriter);
	}
}
