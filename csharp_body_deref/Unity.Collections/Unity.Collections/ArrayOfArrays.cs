// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.ArrayOfArrays
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000031")]
internal struct ArrayOfArrays<T> : IDisposable where T : struct
{
	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x0")]
	private AllocatorManager.AllocatorHandle m_backingAllocatorHandle;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x0")]
	private int m_lengthInElements;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x0")]
	private int m_capacityInElements;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x0")]
	private int m_log2BlockSizeInElements;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x0")]
	private int m_blocks;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x0")]
	private unsafe IntPtr* m_block;

	[Token(Token = "0x1700001F")]
	private int BlockSizeInElements
	{
		[Token(Token = "0x60000DA")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000020")]
	private int BlockSizeInBytes
	{
		[Token(Token = "0x60000DB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000021")]
	private int BlockMask
	{
		[Token(Token = "0x60000DC")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000022")]
	public int Length
	{
		[Token(Token = "0x60000DD")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000023")]
	public int Capacity
	{
		[Token(Token = "0x60000DE")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000024")]
	public unsafe ref T this[int elementIndex]
	{
		[Token(Token = "0x60000E1")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x60000DF")]
	public ArrayOfArrays(int capacityInElements, AllocatorManager.AllocatorHandle backingAllocatorHandle, int log2BlockSizeInElements = 12)
	{
	}

	[Token(Token = "0x60000E0")]
	public void LockfreeAdd(T t)
	{
	}

	[Token(Token = "0x60000E2")]
	public void Rewind()
	{
	}

	[Token(Token = "0x60000E3")]
	public void Clear()
	{
	}

	[Token(Token = "0x60000E4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000E5")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckElementIndex(int elementIndex)
	{
	}

	[Token(Token = "0x60000E6")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckBlockIndex(int blockIndex)
	{
	}

	[Token(Token = "0x60000E7")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckBlockIsNotNull(int blockIndex)
	{
	}

	[Token(Token = "0x60000E8")]
	public void RemoveAtSwapBack(int elementIndex)
	{
	}

	[Token(Token = "0x60000E9")]
	private int BlockIndexOfElement(int elementIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60000EA")]
	public void TrimExcess()
	{
	}
}
