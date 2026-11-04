// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeListExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000118")]
[GenerateTestsForBurstCompatibility]
public static class UnsafeListExtensions
{
	[Token(Token = "0x6000BFB")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static int IndexOf<T, U>(this UnsafeList<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x6000BFC")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Contains<T, U>(this UnsafeList<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFD")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static int IndexOf<T, U>(this UnsafeList<T>.ReadOnly list, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x6000BFE")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Contains<T, U>(this UnsafeList<T>.ReadOnly list, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFF")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static int IndexOf<T, U>(this UnsafeList<T>.ParallelReader list, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x6000C00")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Contains<T, U>(this UnsafeList<T>.ParallelReader list, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x6000C01")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static bool ArraysEqual<T>(this UnsafeList<T> container, in UnsafeList<T> other) where T : struct, IEquatable<T>
	{
		return default(bool);
	}
}
