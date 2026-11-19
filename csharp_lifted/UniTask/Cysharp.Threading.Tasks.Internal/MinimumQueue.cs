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

[Token(Token = "0x2000230")]
internal class MinimumQueue<T>
{
	[Token(Token = "0x4000668")]
	private const int MinimumGrow = 4;

	[Token(Token = "0x4000669")]
	private const int GrowFactor = 200;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x0")]
	private T[] array;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x0")]
	private int head;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x0")]
	private int tail;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x0")]
	private int size;

	[Token(Token = "0x17000077")]
	public int Count
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000CC7")]
	public MinimumQueue(int capacity)
	{
	}

	[Token(Token = "0x6000CC9")]
	public T Peek()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCA")]
	public void Enqueue(T item)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCB")]
	public T Dequeue()
	{
		return (T)null;
	}

	[Token(Token = "0x6000CCC")]
	private void Grow()
	{
	}

	[Token(Token = "0x6000CCD")]
	private void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CCE")]
	private void MoveNext(ref int index)
	{
	}

	[Token(Token = "0x6000CCF")]
	private void ThrowForEmptyQueue()
	{
	}
}
