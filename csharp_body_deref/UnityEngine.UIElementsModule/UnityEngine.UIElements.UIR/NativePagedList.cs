// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.NativePagedList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005B1")]
internal class NativePagedList<T> : IDisposable where T : struct
{
	[Token(Token = "0x20005B2")]
	private struct NativeArrayAllocator
	{
		[Token(Token = "0x4001486")]
		[FieldOffset(Offset = "0x0")]
		private Allocator m_Allocator;

		[Token(Token = "0x4001487")]
		[FieldOffset(Offset = "0x0")]
		private MemoryLabel m_MemoryLabel;

		[Token(Token = "0x6002A51")]
		public NativeArrayAllocator(string profilerName, Allocator allocator)
		{
		}

		[Token(Token = "0x6002A52")]
		public NativeArray<T> CreateArray(int length, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
		{
			return default(NativeArray<T>);
		}
	}

	[Token(Token = "0x20005B3")]
	public struct Enumerator
	{
		[Token(Token = "0x4001488")]
		[FieldOffset(Offset = "0x0")]
		private NativePagedList<T> m_NativePagedList;

		[Token(Token = "0x4001489")]
		[FieldOffset(Offset = "0x0")]
		private NativeArray<T> m_CurrentPage;

		[Token(Token = "0x400148A")]
		[FieldOffset(Offset = "0x0")]
		private int m_IndexInCurrentPage;

		[Token(Token = "0x400148B")]
		[FieldOffset(Offset = "0x0")]
		private int m_IndexOfCurrentPage;

		[Token(Token = "0x400148C")]
		[FieldOffset(Offset = "0x0")]
		private int m_CountInCurrentPage;

		[Token(Token = "0x6002A53")]
		public Enumerator(NativePagedList<T> nativePagedList, int offset)
		{
		}

		[Token(Token = "0x6002A54")]
		public bool HasNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002A55")]
		public T GetNext()
		{
			return (T)null;
		}
	}

	[Token(Token = "0x400147E")]
	[FieldOffset(Offset = "0x0")]
	private readonly int k_PoolCapacity;

	[Token(Token = "0x400147F")]
	[FieldOffset(Offset = "0x0")]
	private List<NativeArray<T>> m_Pages;

	[Token(Token = "0x4001480")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<T> m_LastPage;

	[Token(Token = "0x4001481")]
	[FieldOffset(Offset = "0x0")]
	private int m_CountInLastPage;

	[Token(Token = "0x4001482")]
	[FieldOffset(Offset = "0x0")]
	private readonly NativeArrayAllocator m_FirstPageAllocator;

	[Token(Token = "0x4001483")]
	[FieldOffset(Offset = "0x0")]
	private readonly NativeArrayAllocator m_OtherPagesAllocator;

	[Token(Token = "0x4001484")]
	[FieldOffset(Offset = "0x0")]
	private List<NativeSlice<T>> m_Enumerator;

	[Token(Token = "0x17000A71")]
	protected bool disposed
	{
		[Token(Token = "0x6002A4D")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A4E")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002A47")]
	public NativePagedList(int poolCapacity, string profilerName, Allocator firstPageAllocator = Allocator.Persistent, Allocator otherPagesAllocator = Allocator.Persistent)
	{
	}

	[Token(Token = "0x6002A48")]
	public void Add(ref T data)
	{
	}

	[Token(Token = "0x6002A49")]
	public void Add(T data)
	{
	}

	[Token(Token = "0x6002A4A")]
	public List<NativeSlice<T>> GetPages()
	{
		return null;
	}

	[Token(Token = "0x6002A4B")]
	public int GetCount()
	{
		return default(int);
	}

	[Token(Token = "0x6002A4C")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002A4F")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A50")]
	protected void Dispose(bool disposing)
	{
	}
}
