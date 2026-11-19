// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeBitArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000104")]
[DebuggerDisplay("Length = {Length}, IsCreated = {IsCreated}")]
[DebuggerTypeProxy(typeof(UnsafeBitArrayDebugView))]
[GenerateTestsForBurstCompatibility]
public struct UnsafeBitArray : INativeDisposable, IDisposable
{
	[Token(Token = "0x2000105")]
	public struct ReadOnly
	{
		[Token(Token = "0x40004A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public unsafe readonly ulong* Ptr;

		[Token(Token = "0x40004AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly int Length;

		[Token(Token = "0x1700013E")]
		public readonly bool IsCreated
		{
			[Token(Token = "0x6000B31")]
			[Address(RVA = "0x637DAB0", Offset = "0x637CAB0", VA = "0x637DAB0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700013F")]
		public readonly bool IsEmpty
		{
			[Token(Token = "0x6000B32")]
			[Address(RVA = "0x637DAE0", Offset = "0x637CAE0", VA = "0x637DAE0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000B33")]
		[Address(RVA = "0x638CB80", Offset = "0x638BB80", VA = "0x638CB80")]
		internal unsafe ReadOnly(ulong* ptr, int length)
		{
		}

		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x637DB40", Offset = "0x637CB40", VA = "0x637DB40")]
		public readonly ulong GetBits(int pos, int numBits = 1)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x637DB70", Offset = "0x637CB70", VA = "0x637DB70")]
		public readonly bool IsSet(int pos)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x637DBA0", Offset = "0x637CBA0", VA = "0x637DBA0")]
		public readonly int Find(int pos, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000B37")]
		[Address(RVA = "0x637DBD0", Offset = "0x637CBD0", VA = "0x637DBD0")]
		public readonly int Find(int pos, int count, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000B38")]
		[Address(RVA = "0x637DC00", Offset = "0x637CC00", VA = "0x637DC00")]
		public readonly bool TestNone(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x637DC40", Offset = "0x637CC40", VA = "0x637DC40")]
		public readonly bool TestAny(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B3A")]
		[Address(RVA = "0x637DC80", Offset = "0x637CC80", VA = "0x637DC80")]
		public readonly bool TestAll(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x637DCC0", Offset = "0x637CCC0", VA = "0x637DCC0")]
		public readonly int CountBits(int pos, int numBits = 1)
		{
			return default(int);
		}

		[Token(Token = "0x6000B3C")]
		[Address(RVA = "0x638D0A0", Offset = "0x638C0A0", VA = "0x638D0A0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void CheckArgs(int pos, int numBits)
		{
		}

		[Token(Token = "0x6000B3D")]
		[Address(RVA = "0x638D170", Offset = "0x638C170", VA = "0x638D170")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void CheckArgsPosCount(int begin, int count, int numBits)
		{
		}

		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x638D2B0", Offset = "0x638C2B0", VA = "0x638D2B0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void CheckArgsUlong(int pos, int numBits)
		{
		}
	}

	[Token(Token = "0x40004A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe ulong* Ptr;

	[Token(Token = "0x40004A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public int Length;

	[Token(Token = "0x40004A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public int Capacity;

	[Token(Token = "0x40004A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x40004A8")]
	public const int MaxCapacity = 2147483584;

	[Token(Token = "0x1700013C")]
	public readonly bool IsCreated
	{
		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x637CDB0", Offset = "0x637BDB0", VA = "0x637CDB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public readonly bool IsEmpty
	{
		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x638C950", Offset = "0x638B950", VA = "0x638C950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x638C020", Offset = "0x638B020", VA = "0x638C020")]
	public unsafe UnsafeBitArray(void* ptr, int sizeInBytes, [Optional] AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x637CD80", Offset = "0x637BD80", VA = "0x637CD80")]
	public UnsafeBitArray(int numBits, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x637CD20", Offset = "0x637BD20", VA = "0x637CD20")]
	internal unsafe static UnsafeBitArray* Alloc(AllocatorManager.AllocatorHandle allocator)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeBitArray*)unchecked((nint)null);
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x637D010", Offset = "0x637C010", VA = "0x637D010")]
	internal unsafe static void Free(UnsafeBitArray* data, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x638C970", Offset = "0x638B970", VA = "0x638C970")]
	private void Realloc(int capacityInBits)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x637CDF0", Offset = "0x637BDF0", VA = "0x637CDF0")]
	public void Resize(int numBits, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x637CF60", Offset = "0x637BF60", VA = "0x637CF60")]
	public void SetCapacity(int capacityInBits)
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x637CF90", Offset = "0x637BF90", VA = "0x637CF90")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x638C8B0", Offset = "0x638B8B0", VA = "0x638C8B0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x638CA30", Offset = "0x638BA30", VA = "0x638CA30", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x637D1D0", Offset = "0x637C1D0", VA = "0x637D1D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x638CAF0", Offset = "0x638BAF0", VA = "0x638CAF0")]
	public unsafe static void Set(ulong* ptr, int pos, bool value)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x637D250", Offset = "0x637C250", VA = "0x637D250")]
	public void Set(int pos, bool value)
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x637D3D0", Offset = "0x637C3D0", VA = "0x637D3D0")]
	public void SetBits(int pos, bool value, int numBits)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x637D510", Offset = "0x637C510", VA = "0x637D510")]
	public void SetBits(int pos, ulong value, int numBits = 1)
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x637D600", Offset = "0x637C600", VA = "0x637D600")]
	public ulong GetBits(int pos, int numBits = 1)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x637D630", Offset = "0x637C630", VA = "0x637D630")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x638CB40", Offset = "0x638BB40", VA = "0x638CB40")]
	internal void CopyUlong(int dstPos, ref UnsafeBitArray srcBitArray, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x637D660", Offset = "0x637C660", VA = "0x637D660")]
	public void Copy(int dstPos, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x637D690", Offset = "0x637C690", VA = "0x637D690")]
	public void Copy(int dstPos, ref UnsafeBitArray srcBitArray, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x637D920", Offset = "0x637C920", VA = "0x637D920")]
	public int Find(int pos, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x637D950", Offset = "0x637C950", VA = "0x637D950")]
	public int Find(int pos, int count, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x637D980", Offset = "0x637C980", VA = "0x637D980")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x637D9C0", Offset = "0x637C9C0", VA = "0x637D9C0")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x637DA00", Offset = "0x637CA00", VA = "0x637DA00")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x637DA40", Offset = "0x637CA40", VA = "0x637DA40")]
	public int CountBits(int pos, int numBits = 1)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x637DB00", Offset = "0x637CB00", VA = "0x637DB00")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x638CB90", Offset = "0x638BB90", VA = "0x638CB90")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckSizeMultipleOf8(int sizeInBytes)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x638CC40", Offset = "0x638BC40", VA = "0x638CC40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckArgs(int pos, int numBits)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x638CD10", Offset = "0x638BD10", VA = "0x638CD10")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckArgsPosCount(int begin, int count, int numBits)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x638CE50", Offset = "0x638BE50", VA = "0x638CE50")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckArgsUlong(int pos, int numBits)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x638CF60", Offset = "0x638BF60", VA = "0x638CF60")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckArgsCopy(ref UnsafeBitArray dstBitArray, int dstPos, ref UnsafeBitArray srcBitArray, int srcPos, int numBits)
	{
	}
}
