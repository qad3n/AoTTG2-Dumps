// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ListBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000085")]
public struct ListBuffer<T> where T : struct
{
	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x0")]
	private unsafe T* m_BufferPtr;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x0")]
	private int m_Capacity;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x0")]
	private unsafe int* m_CountPtr;

	[Token(Token = "0x1700005D")]
	internal unsafe T* BufferPtr
	{
		[Token(Token = "0x60005F9")]
		get
		{
			//IL_0002: Expected I, but got O
			return (T*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x1700005E")]
	public int Count
	{
		[Token(Token = "0x60005FA")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005F")]
	public int Capacity
	{
		[Token(Token = "0x60005FB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public unsafe ref T this[in int index]
	{
		[Token(Token = "0x60005FD")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x60005FC")]
	public unsafe ListBuffer(T* bufferPtr, int* countPtr, int capacity)
	{
	}

	[Token(Token = "0x60005FE")]
	public unsafe ref T GetUnchecked(in int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x60005FF")]
	public bool TryAdd(in T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000600")]
	public unsafe void CopyTo(T* dstBuffer, int startDstIndex, int copyCount)
	{
	}

	[Token(Token = "0x6000601")]
	public bool TryCopyTo(ListBuffer<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000602")]
	public unsafe bool TryCopyFrom(T* srcPtr, int count)
	{
		return default(bool);
	}
}
