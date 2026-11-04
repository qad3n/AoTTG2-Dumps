// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeBitArray
// Update status: NEW in this game update
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
			[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700013F")]
		public readonly bool IsEmpty
		{
			[Token(Token = "0x6000B32")]
			[Address(RVA = "0x29B8770", Offset = "0x29B6D70", VA = "0x1829B8770")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000B33")]
		[Address(RVA = "0xB4DBA0", Offset = "0xB4C1A0", VA = "0x180B4DBA0")]
		internal unsafe ReadOnly(ulong* ptr, int length)
		{
		}

		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x29B85D0", Offset = "0x29B6BD0", VA = "0x1829B85D0")]
		public readonly ulong GetBits(int pos, int numBits = 1)
		{
			return default(ulong);
		}

		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x29B8640", Offset = "0x29B6C40", VA = "0x1829B8640")]
		public readonly bool IsSet(int pos)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x29B85A0", Offset = "0x29B6BA0", VA = "0x1829B85A0")]
		public readonly int Find(int pos, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000B37")]
		[Address(RVA = "0x29B8580", Offset = "0x29B6B80", VA = "0x1829B8580")]
		public readonly int Find(int pos, int count, int numBits)
		{
			return default(int);
		}

		[Token(Token = "0x6000B38")]
		[Address(RVA = "0x29B86B0", Offset = "0x29B6CB0", VA = "0x1829B86B0")]
		public readonly bool TestNone(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B39")]
		[Address(RVA = "0x29B8680", Offset = "0x29B6C80", VA = "0x1829B8680")]
		public readonly bool TestAny(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B3A")]
		[Address(RVA = "0x29B8650", Offset = "0x29B6C50", VA = "0x1829B8650")]
		public readonly bool TestAll(int pos, int numBits = 1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B3B")]
		[Address(RVA = "0x29B7EF0", Offset = "0x29B64F0", VA = "0x1829B7EF0")]
		public readonly int CountBits(int pos, int numBits = 1)
		{
			return default(int);
		}

		[Token(Token = "0x6000B3C")]
		[Address(RVA = "0x29B7B30", Offset = "0x29B6130", VA = "0x1829B7B30")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void CheckArgs(int pos, int numBits)
		{
		}

		[Token(Token = "0x6000B3D")]
		[Address(RVA = "0x29B77D0", Offset = "0x29B5DD0", VA = "0x1829B77D0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private readonly void CheckArgsPosCount(int begin, int count, int numBits)
		{
		}

		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x29B79C0", Offset = "0x29B5FC0", VA = "0x1829B79C0")]
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
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013D")]
	public readonly bool IsEmpty
	{
		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x29B8770", Offset = "0x29B6D70", VA = "0x1829B8770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x29BF450", Offset = "0x29BDA50", VA = "0x1829BF450")]
	public unsafe UnsafeBitArray(void* ptr, int sizeInBytes, [Optional] AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x29BF470", Offset = "0x29BDA70", VA = "0x1829BF470")]
	public UnsafeBitArray(int numBits, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x29BE2D0", Offset = "0x29BC8D0", VA = "0x1829BE2D0")]
	internal unsafe static UnsafeBitArray* Alloc(AllocatorManager.AllocatorHandle allocator)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeBitArray*)unchecked((nint)null);
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x29BEEF0", Offset = "0x29BD4F0", VA = "0x1829BEEF0")]
	internal unsafe static void Free(UnsafeBitArray* data, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x29BEF90", Offset = "0x29BD590", VA = "0x1829BEF90")]
	private void Realloc(int capacityInBits)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x29BF130", Offset = "0x29BD730", VA = "0x1829BF130")]
	public void Resize(int numBits, NativeArrayOptions options = NativeArrayOptions.UninitializedMemory)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x29BF380", Offset = "0x29BD980", VA = "0x1829BF380")]
	public void SetCapacity(int capacityInBits)
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x29BF430", Offset = "0x29BDA30", VA = "0x1829BF430")]
	public void TrimExcess()
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x29BED50", Offset = "0x29BD350", VA = "0x1829BED50", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x29BEDE0", Offset = "0x29BD3E0", VA = "0x1829BEDE0", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x29BE9E0", Offset = "0x29BCFE0", VA = "0x1829BE9E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x29BF390", Offset = "0x29BD990", VA = "0x1829BF390")]
	public unsafe static void Set(ulong* ptr, int pos, bool value)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x29BF3E0", Offset = "0x29BD9E0", VA = "0x1829BF3E0")]
	public void Set(int pos, bool value)
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x29BF2A0", Offset = "0x29BD8A0", VA = "0x1829BF2A0")]
	public void SetBits(int pos, bool value, int numBits)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x29BF1A0", Offset = "0x29BD7A0", VA = "0x1829BF1A0")]
	public void SetBits(int pos, ulong value, int numBits = 1)
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x29B85D0", Offset = "0x29B6BD0", VA = "0x1829B85D0")]
	public ulong GetBits(int pos, int numBits = 1)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x29B8640", Offset = "0x29B6C40", VA = "0x1829B8640")]
	public bool IsSet(int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x29BEA20", Offset = "0x29BD020", VA = "0x1829BEA20")]
	internal void CopyUlong(int dstPos, ref UnsafeBitArray srcBitArray, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x29BED20", Offset = "0x29BD320", VA = "0x1829BED20")]
	public void Copy(int dstPos, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x29BEA80", Offset = "0x29BD080", VA = "0x1829BEA80")]
	public void Copy(int dstPos, ref UnsafeBitArray srcBitArray, int srcPos, int numBits)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x29B85A0", Offset = "0x29B6BA0", VA = "0x1829B85A0")]
	public int Find(int pos, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x29B8580", Offset = "0x29B6B80", VA = "0x1829B8580")]
	public int Find(int pos, int count, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x29B86B0", Offset = "0x29B6CB0", VA = "0x1829B86B0")]
	public bool TestNone(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x29B8680", Offset = "0x29B6C80", VA = "0x1829B8680")]
	public bool TestAny(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x29B8650", Offset = "0x29B6C50", VA = "0x1829B8650")]
	public bool TestAll(int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x29B7EF0", Offset = "0x29B64F0", VA = "0x1829B7EF0")]
	public int CountBits(int pos, int numBits = 1)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x59B2F0", Offset = "0x5998F0", VA = "0x18059B2F0")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x29BE930", Offset = "0x29BCF30", VA = "0x1829BE930")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckSizeMultipleOf8(int sizeInBytes)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x29BE840", Offset = "0x29BCE40", VA = "0x1829BE840")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckArgs(int pos, int numBits)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x29BE4E0", Offset = "0x29BCAE0", VA = "0x1829BE4E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckArgsPosCount(int begin, int count, int numBits)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x29BE6D0", Offset = "0x29BCCD0", VA = "0x1829BE6D0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckArgsUlong(int pos, int numBits)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x29BE330", Offset = "0x29BC930", VA = "0x1829BE330")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckArgsCopy(ref UnsafeBitArray dstBitArray, int dstPos, ref UnsafeBitArray srcBitArray, int srcPos, int numBits)
	{
	}
}
