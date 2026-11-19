// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ArrayPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000228")]
internal sealed class ArrayPool<T>
{
	[Token(Token = "0x4000650")]
	private const int DefaultMaxNumberOfArraysPerBucket = 50;

	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x0")]
	private static readonly T[] EmptyArray;

	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ArrayPool<T> Shared;

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x0")]
	private readonly MinimumQueue<T[]>[] buckets;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x0")]
	private readonly SpinLock[] locks;

	[Token(Token = "0x6000C8C")]
	private ArrayPool()
	{
	}

	[Token(Token = "0x6000C8D")]
	public T[] Rent(int minimumLength)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	public void Return(T[] array, bool clearArray = false)
	{
	}

	[Token(Token = "0x6000C8F")]
	private static int CalculateSize(int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000C90")]
	private static int GetQueueIndex(int size)
	{
		return default(int);
	}
}
