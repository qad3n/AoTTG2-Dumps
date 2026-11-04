// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.CollectionHelper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Jobs;

namespace Unity.Collections;

[Token(Token = "0x200003B")]
[GenerateTestsForBurstCompatibility]
public static class CollectionHelper
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x200003C")]
	internal struct LongDoubleUnion
	{
		[Token(Token = "0x4000082")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal long longValue;

		[Token(Token = "0x4000083")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal double doubleValue;
	}

	[Token(Token = "0x200003D")]
	[BurstCompile]
	public struct DummyJob : IJob
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
		public void Execute()
		{
		}
	}

	[Token(Token = "0x4000081")]
	public const int CacheLineSize = 64;

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x2997B10", Offset = "0x2996110", VA = "0x182997B10")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckAllocator(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x2998020", Offset = "0x2996620", VA = "0x182998020")]
	public static int Log2Floor(int value)
	{
		return default(int);
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x2997FD0", Offset = "0x29965D0", VA = "0x182997FD0")]
	public static int Log2Ceil(int value)
	{
		return default(int);
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x2997AB0", Offset = "0x29960B0", VA = "0x182997AB0")]
	public static int Align(int size, int alignmentPowerOfTwo)
	{
		return default(int);
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x2997AF0", Offset = "0x29960F0", VA = "0x182997AF0")]
	public static long Align(long size, int alignmentPowerOfTwo)
	{
		return default(long);
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x2997AD0", Offset = "0x29960D0", VA = "0x182997AD0")]
	public static ulong Align(ulong size, ulong alignmentPowerOfTwo)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x2997A90", Offset = "0x2996090", VA = "0x182997A90")]
	internal unsafe static void* AlignPointer(void* ptr, int alignmentPowerOfTwo)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x2997FB0", Offset = "0x29965B0", VA = "0x182997FB0")]
	public unsafe static bool IsAligned(void* p, int alignmentPowerOfTwo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x2997FB0", Offset = "0x29965B0", VA = "0x182997FB0")]
	public static bool IsAligned(ulong offset, int alignmentPowerOfTwo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x2997FC0", Offset = "0x29965C0", VA = "0x182997FC0")]
	public static bool IsPowerOfTwo(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x2997F80", Offset = "0x2996580", VA = "0x182997F80")]
	public unsafe static uint Hash(void* ptr, int bytes)
	{
		return default(uint);
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x29980A0", Offset = "0x29966A0", VA = "0x1829980A0")]
	[ExcludeFromBurstCompatTesting("Used only for debugging, and uses managed strings")]
	internal static void WriteLayout(Type type)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x2998080", Offset = "0x2996680", VA = "0x182998080")]
	internal static bool ShouldDeallocate(AllocatorManager.AllocatorHandle allocator)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	internal static int AssumePositive(int value)
	{
		return default(int);
	}

	[Token(Token = "0x600014A")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "ENABLE_UNITY_COLLECTIONS_CHECKS", GenericTypeArguments = new Type[] { typeof(NativeArray<int>) })]
	internal static void CheckIsUnmanaged<T>()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x2997E40", Offset = "0x2996440", VA = "0x182997E40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckIntPositivePowerOfTwo(int value)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x2997EE0", Offset = "0x29964E0", VA = "0x182997EE0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckUlongPositivePowerOfTwo(ulong value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x2997D90", Offset = "0x2996390", VA = "0x182997D90")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckIndexInRange(int index, int length)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x2997BC0", Offset = "0x29961C0", VA = "0x182997BC0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckCapacityInRange(int capacity, int maxCapacity, int length)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckCapacityInRange(int capacity, int length)
	{
	}

	[Token(Token = "0x6000150")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(AllocatorManager.AllocatorHandle)
	})]
	public static NativeArray<T> CreateNativeArray<T, U>(int length, ref U allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory) where T : struct where U : struct, AllocatorManager.IAllocator
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000151")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static NativeArray<T> CreateNativeArray<T>(int length, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000152")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static NativeArray<T> CreateNativeArray<T>(NativeArray<T> array, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000153")]
	[ExcludeFromBurstCompatTesting("Managed array")]
	public static NativeArray<T> CreateNativeArray<T>(T[] array, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000154")]
	[ExcludeFromBurstCompatTesting("Managed array")]
	public static NativeArray<T> CreateNativeArray<T, U>(T[] array, ref U allocator) where T : struct where U : struct, AllocatorManager.IAllocator
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000155")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void DisposeNativeArray<T>(NativeArray<T> nativeArray, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
	}

	[Token(Token = "0x6000156")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Dispose<T>(NativeArray<T> nativeArray) where T : struct
	{
	}

	[Token(Token = "0x6000157")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckConvertArguments<T>(int length) where T : struct
	{
	}

	[Token(Token = "0x6000158")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static NativeArray<T> ConvertExistingDataToNativeArray<T>(void* dataPointer, int length, AllocatorManager.AllocatorHandle allocator, bool setTempMemoryHandle = false) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000159")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static NativeArray<T> ConvertExistingNativeListToNativeArray<T>(ref NativeList<T> nativeList, int length, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x600015A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int),
		typeof(AllocatorManager.AllocatorHandle)
	})]
	public static NativeParallelMultiHashMap<TKey, TValue> CreateNativeParallelMultiHashMap<TKey, TValue, U>(int length, ref U allocator) where TKey : struct, IEquatable<TKey> where TValue : struct where U : struct, AllocatorManager.IAllocator
	{
		return default(NativeParallelMultiHashMap<TKey, TValue>);
	}

	[Token(Token = "0x600015B")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "ENABLE_UNITY_COLLECTIONS_CHECKS", GenericTypeArguments = new Type[] { typeof(DummyJob) })]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public static void CheckReflectionDataCorrect<T>(IntPtr reflectionData)
	{
	}

	[Token(Token = "0x600015C")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	[BurstDiscard]
	private static void CheckReflectionDataCorrectInternal<T>(IntPtr reflectionData, ref bool burstCompiled)
	{
	}
}
