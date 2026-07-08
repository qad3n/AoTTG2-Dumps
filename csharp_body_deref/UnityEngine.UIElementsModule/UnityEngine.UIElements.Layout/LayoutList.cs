using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000521")]
internal struct LayoutList<T> : IDisposable where T : struct
{
	[Token(Token = "0x2000522")]
	private struct Data
	{
		[Token(Token = "0x400114F")]
		[FieldOffset(Offset = "0x0")]
		public int Capacity;

		[Token(Token = "0x4001150")]
		[FieldOffset(Offset = "0x0")]
		public int Count;

		[Token(Token = "0x4001151")]
		[FieldOffset(Offset = "0x0")]
		public unsafe T* Values;
	}

	[Token(Token = "0x400114D")]
	[FieldOffset(Offset = "0x0")]
	private readonly Allocator m_Allocator;

	[Token(Token = "0x400114E")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Data* m_Data;

	[Token(Token = "0x170007F6")]
	public int Count
	{
		[Token(Token = "0x6001F51")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007F7")]
	public bool IsCreated
	{
		[Token(Token = "0x6001F52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007F8")]
	public unsafe ref T this[int index]
	{
		[Token(Token = "0x6001F53")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x6001F54")]
	public LayoutList(int initialCapacity, Allocator allocator)
	{
	}

	[Token(Token = "0x6001F55")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001F56")]
	public void Insert(int index, T value)
	{
	}

	[Token(Token = "0x6001F57")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6001F58")]
	private void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6001F59")]
	private void EnsureCapacity(int capacity)
	{
	}

	[Token(Token = "0x6001F5A")]
	private void ResizeCapacity(int capacity)
	{
	}

	[Token(Token = "0x6001F5B")]
	private unsafe static void* ResizeArray(void* fromPtr, long fromCount, long toCount, long size, int align, Allocator allocator)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
