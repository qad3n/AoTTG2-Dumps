// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.NativePagedList
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200059C")]
internal class NativePagedList<T> : IDisposable where T : struct
{
	[Token(Token = "0x200059D")]
	private struct NativeArrayAllocator
	{
		[Token(Token = "0x40013C8")]
		[FieldOffset(Offset = "0x0")]
		private Allocator m_Allocator;

		[Token(Token = "0x40013C9")]
		[FieldOffset(Offset = "0x0")]
		private MemoryLabel m_MemoryLabel;

		[Token(Token = "0x60029F0")]
		public NativeArrayAllocator(string profilerName, Allocator allocator)
		{
		}

		[Token(Token = "0x60029F1")]
		public NativeArray<T> CreateArray(int length, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
		{
			return default(NativeArray<T>);
		}
	}

	[Token(Token = "0x200059E")]
	public struct Enumerator
	{
		[Token(Token = "0x40013CA")]
		[FieldOffset(Offset = "0x0")]
		private NativePagedList<T> m_NativePagedList;

		[Token(Token = "0x40013CB")]
		[FieldOffset(Offset = "0x0")]
		private NativeArray<T> m_CurrentPage;

		[Token(Token = "0x40013CC")]
		[FieldOffset(Offset = "0x0")]
		private int m_IndexInCurrentPage;

		[Token(Token = "0x40013CD")]
		[FieldOffset(Offset = "0x0")]
		private int m_IndexOfCurrentPage;

		[Token(Token = "0x40013CE")]
		[FieldOffset(Offset = "0x0")]
		private int m_CountInCurrentPage;

		[Token(Token = "0x60029F2")]
		public Enumerator(NativePagedList<T> nativePagedList, int offset)
		{
		}

		[Token(Token = "0x60029F3")]
		public bool HasNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60029F4")]
		public T GetNext()
		{
			return (T)null;
		}
	}

	[Token(Token = "0x40013C0")]
	[FieldOffset(Offset = "0x0")]
	private readonly int k_PoolCapacity;

	[Token(Token = "0x40013C1")]
	[FieldOffset(Offset = "0x0")]
	private List<NativeArray<T>> m_Pages;

	[Token(Token = "0x40013C2")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<T> m_LastPage;

	[Token(Token = "0x40013C3")]
	[FieldOffset(Offset = "0x0")]
	private int m_CountInLastPage;

	[Token(Token = "0x40013C4")]
	[FieldOffset(Offset = "0x0")]
	private readonly NativeArrayAllocator m_FirstPageAllocator;

	[Token(Token = "0x40013C5")]
	[FieldOffset(Offset = "0x0")]
	private readonly NativeArrayAllocator m_OtherPagesAllocator;

	[Token(Token = "0x40013C6")]
	[FieldOffset(Offset = "0x0")]
	private List<NativeSlice<T>> m_Enumerator;

	[Token(Token = "0x17000A65")]
	protected bool disposed
	{
		[Token(Token = "0x60029EC")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029ED")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029E6")]
	public NativePagedList(int poolCapacity, string profilerName, Allocator firstPageAllocator = Allocator.Persistent, Allocator otherPagesAllocator = Allocator.Persistent)
	{
	}

	[Token(Token = "0x60029E7")]
	public void Add(ref T data)
	{
	}

	[Token(Token = "0x60029E8")]
	public void Add(T data)
	{
	}

	[Token(Token = "0x60029E9")]
	public List<NativeSlice<T>> GetPages()
	{
		return null;
	}

	[Token(Token = "0x60029EA")]
	public int GetCount()
	{
		return default(int);
	}

	[Token(Token = "0x60029EB")]
	public void Reset()
	{
	}

	[Token(Token = "0x60029EE")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029EF")]
	protected void Dispose(bool disposing)
	{
	}
}
