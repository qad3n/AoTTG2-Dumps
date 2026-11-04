// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.TempAllocator
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

[Token(Token = "0x20005D5")]
internal class TempAllocator<T> : IDisposable where T : struct
{
	[Token(Token = "0x20005D6")]
	private struct Page
	{
		[Token(Token = "0x40015AA")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<T> array;

		[Token(Token = "0x40015AB")]
		[FieldOffset(Offset = "0x0")]
		public int used;
	}

	[Token(Token = "0x40015A3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x40015A4")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_ExcessMinCapacity;

	[Token(Token = "0x40015A5")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_ExcessMaxCapacity;

	[Token(Token = "0x40015A6")]
	[FieldOffset(Offset = "0x0")]
	private Page m_Pool;

	[Token(Token = "0x40015A7")]
	[FieldOffset(Offset = "0x0")]
	private List<Page> m_Excess;

	[Token(Token = "0x40015A8")]
	[FieldOffset(Offset = "0x0")]
	private int m_NextExcessSize;

	[Token(Token = "0x17000AA5")]
	protected bool disposed
	{
		[Token(Token = "0x6002B52")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B53")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B51")]
	public TempAllocator(int poolCapacity, int excessMinCapacity, int excessMaxCapacity)
	{
	}

	[Token(Token = "0x6002B54")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B55")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B56")]
	public NativeSlice<T> Alloc(int count)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6002B57")]
	private NativeSlice<T> DoAlloc(int count)
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6002B58")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B59")]
	private void ReleaseExcess()
	{
	}
}
