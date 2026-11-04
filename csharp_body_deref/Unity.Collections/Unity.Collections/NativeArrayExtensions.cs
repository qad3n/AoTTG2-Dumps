// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeArrayExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x2000085")]
[GenerateTestsForBurstCompatibility]
public static class NativeArrayExtensions
{
	[Token(Token = "0x2000086")]
	public struct NativeArrayStaticId<T> where T : struct
	{
		[Token(Token = "0x40003A6")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly SharedStatic<int> s_staticSafetyId;
	}

	[Token(Token = "0x60006EF")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Contains<T, U>(this NativeArray<T> array, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x60006F0")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static int IndexOf<T, U>(this NativeArray<T> array, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x60006F1")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Contains<T, U>(this NativeArray<T>.ReadOnly array, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static int IndexOf<T, U>(this NativeArray<T>.ReadOnly array, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x60006F3")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public unsafe static bool Contains<T, U>(void* ptr, int length, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x60006F4")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public unsafe static int IndexOf<T, U>(void* ptr, int length, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x60006F5")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void CopyFrom<T>(this ref NativeArray<T> container, NativeList<T> other) where T : struct, IEquatable<T>
	{
	}

	[Token(Token = "0x60006F6")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void CopyFrom<T>(this ref NativeArray<T> container, in NativeHashSet<T> other) where T : struct, IEquatable<T>
	{
	}

	[Token(Token = "0x60006F7")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void CopyFrom<T>(this ref NativeArray<T> container, in UnsafeHashSet<T> other) where T : struct, IEquatable<T>
	{
	}

	[Token(Token = "0x60006F8")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static NativeArray<U> Reinterpret<T, U>(this NativeArray<T> array) where T : struct where U : struct
	{
		return default(NativeArray<U>);
	}

	[Token(Token = "0x60006F9")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static bool ArraysEqual<T>(this NativeArray<T> container, NativeArray<T> other) where T : struct, IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x60006FA")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckReinterpretSize<T, U>(ref NativeArray<T> array) where T : struct where U : struct
	{
	}

	[Token(Token = "0x60006FB")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal static void Initialize<T>(this ref NativeArray<T> array, int length, AllocatorManager.AllocatorHandle allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory) where T : struct
	{
	}

	[Token(Token = "0x60006FC")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(AllocatorManager.AllocatorHandle)
	})]
	internal static void Initialize<T, U>(this ref NativeArray<T> array, int length, ref U allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory) where T : struct where U : struct, AllocatorManager.IAllocator
	{
	}

	[Token(Token = "0x60006FD")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	internal static void DisposeCheckAllocator<T>(this ref NativeArray<T> array) where T : struct
	{
	}
}
