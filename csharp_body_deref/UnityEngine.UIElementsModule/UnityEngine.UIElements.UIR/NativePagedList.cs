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

[Token(Token = "0x20004B1")]
internal class NativePagedList<T> : IDisposable where T : struct
{
	[Token(Token = "0x4000EB8")]
	[FieldOffset(Offset = "0x0")]
	private readonly int k_PoolCapacity;

	[Token(Token = "0x4000EB9")]
	[FieldOffset(Offset = "0x0")]
	private List<NativeArray<T>> m_Pages;

	[Token(Token = "0x4000EBA")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<T> m_CurrentPage;

	[Token(Token = "0x4000EBB")]
	[FieldOffset(Offset = "0x0")]
	private int m_CurrentPageCount;

	[Token(Token = "0x4000EBC")]
	[FieldOffset(Offset = "0x0")]
	private List<NativeSlice<T>> m_Enumerator;

	[Token(Token = "0x17000771")]
	protected bool disposed
	{
		[Token(Token = "0x6001D24")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D25")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001D20")]
	public NativePagedList(int poolCapacity)
	{
	}

	[Token(Token = "0x6001D21")]
	public void Add(ref T data)
	{
	}

	[Token(Token = "0x6001D22")]
	public List<NativeSlice<T>> GetPages()
	{
		return null;
	}

	[Token(Token = "0x6001D23")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001D26")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001D27")]
	protected void Dispose(bool disposing)
	{
	}
}
