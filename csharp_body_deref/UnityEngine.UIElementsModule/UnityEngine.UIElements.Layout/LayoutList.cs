// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutList
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000615")]
internal struct LayoutList<T> : IDisposable where T : struct
{
	[Token(Token = "0x2000616")]
	private struct Data
	{
		[Token(Token = "0x40016C8")]
		[FieldOffset(Offset = "0x0")]
		public int Capacity;

		[Token(Token = "0x40016C9")]
		[FieldOffset(Offset = "0x0")]
		public int Count;

		[Token(Token = "0x40016CA")]
		[FieldOffset(Offset = "0x0")]
		public unsafe T* Values;
	}

	[Token(Token = "0x40016C6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel s_Label;

	[Token(Token = "0x40016C7")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Data* m_Data;

	[Token(Token = "0x17000B09")]
	public int Count
	{
		[Token(Token = "0x6002C9E")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B0A")]
	public bool IsCreated
	{
		[Token(Token = "0x6002C9F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B0B")]
	public unsafe ref T this[int index]
	{
		[Token(Token = "0x6002CA0")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x6002CA1")]
	public LayoutList()
	{
	}

	[Token(Token = "0x6002CA2")]
	public LayoutList(int initialCapacity)
	{
	}

	[Token(Token = "0x6002CA3")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002CA4")]
	public void Insert(int index, T value)
	{
	}

	[Token(Token = "0x6002CA5")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002CA6")]
	private void IncreaseCapacity()
	{
	}

	[Token(Token = "0x6002CA7")]
	private void EnsureCapacity(int capacity)
	{
	}

	[Token(Token = "0x6002CA8")]
	private void ResizeCapacity(int capacity)
	{
	}

	[Token(Token = "0x6002CA9")]
	private unsafe static void* ResizeArray(void* fromPtr, long fromCount, long toCount, long size, int align)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
