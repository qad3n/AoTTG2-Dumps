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

[Token(Token = "0x2000656")]
internal sealed class TlsOverPerCoreLockedStacksArrayPool<T> : ArrayPool<T>
{
	[Token(Token = "0x2000657")]
	private enum MemoryPressure
	{
		[Token(Token = "0x4001983")]
		Low,
		[Token(Token = "0x4001984")]
		Medium,
		[Token(Token = "0x4001985")]
		High
	}

	[Token(Token = "0x2000658")]
	private sealed class PerCoreLockedStacks
	{
		[Token(Token = "0x4001986")]
		[FieldOffset(Offset = "0x0")]
		private readonly LockedStack[] _perCoreStacks;

		[Token(Token = "0x600307A")]
		public PerCoreLockedStacks()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600307B")]
		public void TryPush(T[] array)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600307C")]
		public T[] TryPop()
		{
			return null;
		}

		[Token(Token = "0x600307D")]
		public bool Trim(uint tickCount, int id, MemoryPressure pressure, int[] bucketSizes)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000659")]
	private sealed class LockedStack
	{
		[Token(Token = "0x4001987")]
		[FieldOffset(Offset = "0x0")]
		private readonly T[][] _arrays;

		[Token(Token = "0x4001988")]
		[FieldOffset(Offset = "0x0")]
		private int _count;

		[Token(Token = "0x4001989")]
		[FieldOffset(Offset = "0x0")]
		private uint _firstStackItemMS;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600307E")]
		public bool TryPush(T[] array)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600307F")]
		public T[] TryPop()
		{
			return null;
		}

		[Token(Token = "0x6003080")]
		public void Trim(uint tickCount, int id, MemoryPressure pressure, int bucketSize)
		{
		}

		[Token(Token = "0x6003081")]
		public LockedStack()
		{
		}
	}

	[Token(Token = "0x400197C")]
	[FieldOffset(Offset = "0x0")]
	private readonly int[] _bucketArraySizes;

	[Token(Token = "0x400197D")]
	[FieldOffset(Offset = "0x0")]
	private readonly PerCoreLockedStacks[] _buckets;

	[Token(Token = "0x400197E")]
	[ThreadStatic]
	private static T[][] t_tlsBuckets;

	[Token(Token = "0x400197F")]
	[FieldOffset(Offset = "0x0")]
	private int _callbackCreated;

	[Token(Token = "0x4001980")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_trimBuffers;

	[Token(Token = "0x4001981")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<T[][], object> s_allTlsBuckets;

	[Token(Token = "0x170007DD")]
	private int Id
	{
		[Token(Token = "0x6003072")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003070")]
	public TlsOverPerCoreLockedStacksArrayPool()
	{
	}

	[Token(Token = "0x6003071")]
	private PerCoreLockedStacks CreatePerCoreLockedStacks(int bucketIndex)
	{
		return null;
	}

	[Token(Token = "0x6003073")]
	public override T[] Rent(int minimumLength)
	{
		return null;
	}

	[Token(Token = "0x6003074")]
	public override void Return(T[] array, bool clearArray = false)
	{
	}

	[Token(Token = "0x6003075")]
	public bool Trim()
	{
		return default(bool);
	}

	[Token(Token = "0x6003076")]
	private static bool Gen2GcCallbackFunc(object target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003077")]
	private static MemoryPressure GetMemoryPressure()
	{
		return default(MemoryPressure);
	}

	[Token(Token = "0x6003078")]
	private static bool GetTrimBuffers()
	{
		return default(bool);
	}
}
