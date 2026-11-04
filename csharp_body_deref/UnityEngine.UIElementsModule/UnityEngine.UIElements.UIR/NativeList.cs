// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.NativeList
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005B0")]
internal class NativeList<T> : IDisposable where T : struct
{
	[Token(Token = "0x400147A")]
	[FieldOffset(Offset = "0x0")]
	private readonly MemoryLabel m_MemoryLabel;

	[Token(Token = "0x400147B")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<T> m_NativeArray;

	[Token(Token = "0x400147C")]
	[FieldOffset(Offset = "0x0")]
	private int m_Count;

	[Token(Token = "0x17000A6F")]
	public int Count
	{
		[Token(Token = "0x6002A42")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A70")]
	protected bool disposed
	{
		[Token(Token = "0x6002A43")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A44")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002A3D")]
	public NativeList(int initialCapacity, MemoryLabel allocLabel)
	{
	}

	[Token(Token = "0x6002A3E")]
	private void Expand(int newLength)
	{
	}

	[Token(Token = "0x6002A3F")]
	public void Add(NativeSlice<T> src)
	{
	}

	[Token(Token = "0x6002A40")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002A41")]
	public NativeSlice<T> GetSlice(int start, int length)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6002A45")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A46")]
	protected void Dispose(bool disposing)
	{
	}
}
