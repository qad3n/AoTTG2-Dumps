// ==================== AoTTG2 cross-reference ====================
// Type: System.Buffers.TlsOverPerCoreLockedStacksArrayPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Buffers;

[Token(Token = "0x2000682")]
internal sealed class TlsOverPerCoreLockedStacksArrayPool<T> : ArrayPool<T>
{
	[Token(Token = "0x2000683")]
	private enum MemoryPressure
	{
		[Token(Token = "0x4001B81")]
		Low,
		[Token(Token = "0x4001B82")]
		Medium,
		[Token(Token = "0x4001B83")]
		High
	}

	[Token(Token = "0x2000684")]
	private sealed class PerCoreLockedStacks
	{
		[Token(Token = "0x4001B84")]
		[FieldOffset(Offset = "0x0")]
		private readonly LockedStack[] _perCoreStacks;

		[Token(Token = "0x6003360")]
		public PerCoreLockedStacks()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6003361")]
		public void TryPush(T[] array)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6003362")]
		public T[] TryPop()
		{
			return null;
		}

		[Token(Token = "0x6003363")]
		public bool Trim(uint tickCount, int id, MemoryPressure pressure, int[] bucketSizes)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000685")]
	private sealed class LockedStack
	{
		[Token(Token = "0x4001B85")]
		[FieldOffset(Offset = "0x0")]
		private readonly T[][] _arrays;

		[Token(Token = "0x4001B86")]
		[FieldOffset(Offset = "0x0")]
		private int _count;

		[Token(Token = "0x4001B87")]
		[FieldOffset(Offset = "0x0")]
		private uint _firstStackItemMS;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6003364")]
		public bool TryPush(T[] array)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6003365")]
		public T[] TryPop()
		{
			return null;
		}

		[Token(Token = "0x6003366")]
		public void Trim(uint tickCount, int id, MemoryPressure pressure, int bucketSize)
		{
		}

		[Token(Token = "0x6003367")]
		public LockedStack()
		{
		}
	}

	[Token(Token = "0x4001B7A")]
	[FieldOffset(Offset = "0x0")]
	private readonly int[] _bucketArraySizes;

	[Token(Token = "0x4001B7B")]
	[FieldOffset(Offset = "0x0")]
	private readonly PerCoreLockedStacks[] _buckets;

	[Token(Token = "0x4001B7C")]
	[ThreadStatic]
	private static T[][] t_tlsBuckets;

	[Token(Token = "0x4001B7D")]
	[FieldOffset(Offset = "0x0")]
	private int _callbackCreated;

	[Token(Token = "0x4001B7E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_trimBuffers;

	[Token(Token = "0x4001B7F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<T[][], object> s_allTlsBuckets;

	[Token(Token = "0x1700084E")]
	private int Id
	{
		[Token(Token = "0x6003358")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003356")]
	public TlsOverPerCoreLockedStacksArrayPool()
	{
	}

	[Token(Token = "0x6003357")]
	private PerCoreLockedStacks CreatePerCoreLockedStacks(int bucketIndex)
	{
		return null;
	}

	[Token(Token = "0x6003359")]
	public override T[] Rent(int minimumLength)
	{
		return null;
	}

	[Token(Token = "0x600335A")]
	public override void Return(T[] array, bool clearArray = false)
	{
	}

	[Token(Token = "0x600335B")]
	public bool Trim()
	{
		return default(bool);
	}

	[Token(Token = "0x600335C")]
	private static bool Gen2GcCallbackFunc(object target)
	{
		return default(bool);
	}

	[Token(Token = "0x600335D")]
	private static MemoryPressure GetMemoryPressure()
	{
		return default(MemoryPressure);
	}

	[Token(Token = "0x600335E")]
	private static bool GetTrimBuffers()
	{
		return default(bool);
	}
}
