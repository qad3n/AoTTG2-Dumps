// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TempAllocator
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

[Token(Token = "0x20005C0")]
internal class TempAllocator<T> : IDisposable where T : struct
{
	[Token(Token = "0x20005C1")]
	private struct Page
	{
		[Token(Token = "0x40014EC")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<T> array;

		[Token(Token = "0x40014ED")]
		[FieldOffset(Offset = "0x0")]
		public int used;
	}

	[Token(Token = "0x40014E5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x40014E6")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_ExcessMinCapacity;

	[Token(Token = "0x40014E7")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_ExcessMaxCapacity;

	[Token(Token = "0x40014E8")]
	[FieldOffset(Offset = "0x0")]
	private Page m_Pool;

	[Token(Token = "0x40014E9")]
	[FieldOffset(Offset = "0x0")]
	private List<Page> m_Excess;

	[Token(Token = "0x40014EA")]
	[FieldOffset(Offset = "0x0")]
	private int m_NextExcessSize;

	[Token(Token = "0x17000A99")]
	protected bool disposed
	{
		[Token(Token = "0x6002AF1")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002AF2")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002AF0")]
	public TempAllocator(int poolCapacity, int excessMinCapacity, int excessMaxCapacity)
	{
	}

	[Token(Token = "0x6002AF3")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002AF4")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002AF5")]
	public NativeSlice<T> Alloc(int count)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6002AF6")]
	private NativeSlice<T> DoAlloc(int count)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6002AF7")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002AF8")]
	private void ReleaseExcess()
	{
	}
}
