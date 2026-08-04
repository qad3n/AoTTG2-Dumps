// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.MinimumQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200022D")]
internal class MinimumQueue<T>
{
	[Token(Token = "0x4000655")]
	private const int MinimumGrow = 4;

	[Token(Token = "0x4000656")]
	private const int GrowFactor = 200;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x0")]
	private T[] array;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x0")]
	private int head;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x0")]
	private int tail;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x0")]
	private int size;

	[Token(Token = "0x17000075")]
	public int Count
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CA3")]
	public MinimumQueue(int capacity)
	{
	}

	[Token(Token = "0x6000CA5")]
	public T Peek()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA6")]
	public void Enqueue(T item)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA7")]
	public T Dequeue()
	{
		return (T)null;
	}

	[Token(Token = "0x6000CA8")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000CA9")]
	private void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CAA")]
	private void MoveNext(ref int index)
	{
	}

	[Token(Token = "0x6000CAB")]
	private void ThrowForEmptyQueue()
	{
	}
}
