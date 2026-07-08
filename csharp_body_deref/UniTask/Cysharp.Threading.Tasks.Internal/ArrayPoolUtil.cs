using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000226")]
internal static class ArrayPoolUtil
{
	[Token(Token = "0x2000227")]
	public struct RentArray<T> : IDisposable
	{
		[Token(Token = "0x4000642")]
		[FieldOffset(Offset = "0x0")]
		public readonly T[] Array;

		[Token(Token = "0x4000643")]
		[FieldOffset(Offset = "0x0")]
		public readonly int Length;

		[Token(Token = "0x4000644")]
		[FieldOffset(Offset = "0x0")]
		private ArrayPool<T> pool;

		[Token(Token = "0x6000C71")]
		public RentArray(T[] array, int length, ArrayPool<T> pool)
		{
		}

		[Token(Token = "0x6000C72")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000C73")]
		public void DisposeManually(bool clearArray)
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6E")]
	internal static void EnsureCapacity<T>(ref T[] array, int index, ArrayPool<T> pool)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C6F")]
	private static void EnsureCapacityCore<T>(ref T[] array, int index, ArrayPool<T> pool)
	{
	}

	[Token(Token = "0x6000C70")]
	public static RentArray<T> Materialize<T>(IEnumerable<T> source)
	{
		return default(RentArray<T>);
	}
}
