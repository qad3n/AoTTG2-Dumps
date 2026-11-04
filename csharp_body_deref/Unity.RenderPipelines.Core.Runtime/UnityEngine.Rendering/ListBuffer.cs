// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ListBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200004F")]
public struct ListBuffer<T> where T : struct
{
	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x0")]
	private unsafe T* m_BufferPtr;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x0")]
	private int m_Capacity;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x0")]
	private unsafe int* m_CountPtr;

	[Token(Token = "0x1700003C")]
	internal unsafe T* BufferPtr
	{
		[Token(Token = "0x6000510")]
		get
		{
			//IL_0002: Expected I, but got O
			return (T*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x1700003D")]
	public int Count
	{
		[Token(Token = "0x6000511")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public int Capacity
	{
		[Token(Token = "0x6000512")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003F")]
	public unsafe ref T this[in int index]
	{
		[Token(Token = "0x6000514")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x6000513")]
	public unsafe ListBuffer(T* bufferPtr, int* countPtr, int capacity)
	{
	}

	[Token(Token = "0x6000515")]
	public unsafe ref T GetUnchecked(in int index)
	{
		return ref *(T*)null;
	}

	[Token(Token = "0x6000516")]
	public bool TryAdd(in T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000517")]
	public unsafe void CopyTo(T* dstBuffer, int startDstIndex, int copyCount)
	{
	}

	[Token(Token = "0x6000518")]
	public bool TryCopyTo(ListBuffer<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000519")]
	public unsafe bool TryCopyFrom(T* srcPtr, int count)
	{
		return default(bool);
	}
}
