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

[Token(Token = "0x2000631")]
internal sealed class TlsOverPerCoreLockedStacksArrayPool<T> : ArrayPool<T>
{
	[Token(Token = "0x2000632")]
	private enum MemoryPressure
	{
		[Token(Token = "0x40018EA")]
		Low,
		[Token(Token = "0x40018EB")]
		Medium,
		[Token(Token = "0x40018EC")]
		High
	}

	[Token(Token = "0x2000633")]
	private sealed class PerCoreLockedStacks
	{
		[Token(Token = "0x40018ED")]
		[FieldOffset(Offset = "0x0")]
		private readonly LockedStack[] _perCoreStacks;

		[Token(Token = "0x6003059")]
		public PerCoreLockedStacks()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600305A")]
		public void TryPush(T[] array)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600305B")]
		public T[] TryPop()
		{
			return null;
		}

		[Token(Token = "0x600305C")]
		public bool Trim(uint tickCount, int id, MemoryPressure pressure, int[] bucketSizes)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000634")]
	private sealed class LockedStack
	{
		[Token(Token = "0x40018EE")]
		[FieldOffset(Offset = "0x0")]
		private readonly T[][] _arrays;

		[Token(Token = "0x40018EF")]
		[FieldOffset(Offset = "0x0")]
		private int _count;

		[Token(Token = "0x40018F0")]
		[FieldOffset(Offset = "0x0")]
		private uint _firstStackItemMS;

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600305D")]
		public bool TryPush(T[] array)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600305E")]
		public T[] TryPop()
		{
			return null;
		}

		[Token(Token = "0x600305F")]
		public void Trim(uint tickCount, int id, MemoryPressure pressure, int bucketSize)
		{
		}

		[Token(Token = "0x6003060")]
		public LockedStack()
		{
		}
	}

	[Token(Token = "0x40018E3")]
	[FieldOffset(Offset = "0x0")]
	private readonly int[] _bucketArraySizes;

	[Token(Token = "0x40018E4")]
	[FieldOffset(Offset = "0x0")]
	private readonly PerCoreLockedStacks[] _buckets;

	[Token(Token = "0x40018E5")]
	[ThreadStatic]
	private static T[][] t_tlsBuckets;

	[Token(Token = "0x40018E6")]
	[FieldOffset(Offset = "0x0")]
	private int _callbackCreated;

	[Token(Token = "0x40018E7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_trimBuffers;

	[Token(Token = "0x40018E8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<T[][], object> s_allTlsBuckets;

	[Token(Token = "0x170007DC")]
	private int Id
	{
		[Token(Token = "0x6003051")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600304F")]
	public TlsOverPerCoreLockedStacksArrayPool()
	{
	}

	[Token(Token = "0x6003050")]
	private PerCoreLockedStacks CreatePerCoreLockedStacks(int bucketIndex)
	{
		return null;
	}

	[Token(Token = "0x6003052")]
	public override T[] Rent(int minimumLength)
	{
		return null;
	}

	[Token(Token = "0x6003053")]
	public override void Return(T[] array, bool clearArray = false)
	{
	}

	[Token(Token = "0x6003054")]
	public bool Trim()
	{
		return default(bool);
	}

	[Token(Token = "0x6003055")]
	private static bool Gen2GcCallbackFunc(object target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003056")]
	private static MemoryPressure GetMemoryPressure()
	{
		return default(MemoryPressure);
	}

	[Token(Token = "0x6003057")]
	private static bool GetTrimBuffers()
	{
		return default(bool);
	}
}
