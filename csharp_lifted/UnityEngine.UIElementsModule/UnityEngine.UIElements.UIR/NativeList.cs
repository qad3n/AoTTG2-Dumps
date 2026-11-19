// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.NativeList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200059B")]
internal class NativeList<T> : IDisposable where T : struct
{
	[Token(Token = "0x40013BC")]
	[FieldOffset(Offset = "0x0")]
	private readonly MemoryLabel m_MemoryLabel;

	[Token(Token = "0x40013BD")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<T> m_NativeArray;

	[Token(Token = "0x40013BE")]
	[FieldOffset(Offset = "0x0")]
	private int m_Count;

	[Token(Token = "0x17000A63")]
	public int Count
	{
		[Token(Token = "0x60029E1")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A64")]
	protected bool disposed
	{
		[Token(Token = "0x60029E2")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029E3")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029DC")]
	public NativeList(int initialCapacity, MemoryLabel allocLabel)
	{
	}

	[Token(Token = "0x60029DD")]
	private void Expand(int newLength)
	{
	}

	[Token(Token = "0x60029DE")]
	public void Add(NativeSlice<T> src)
	{
	}

	[Token(Token = "0x60029DF")]
	public void Clear()
	{
	}

	[Token(Token = "0x60029E0")]
	public NativeSlice<T> GetSlice(int start, int length)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x60029E4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029E5")]
	protected void Dispose(bool disposing)
	{
	}
}
