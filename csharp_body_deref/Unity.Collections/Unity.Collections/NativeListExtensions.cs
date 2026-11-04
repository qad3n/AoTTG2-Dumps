// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeListExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x200009D")]
[GenerateTestsForBurstCompatibility]
public static class NativeListExtensions
{
	[Token(Token = "0x60007D4")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Contains<T, U>(this NativeList<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x60007D5")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static int IndexOf<T, U>(this NativeList<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x60007D6")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static bool ArraysEqual<T>(this NativeArray<T> container, in NativeList<T> other) where T : struct, IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static bool ArraysEqual<T>(this NativeList<T> container, in NativeArray<T> other) where T : struct, IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x60007D8")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static bool ArraysEqual<T>(this NativeList<T> container, in NativeList<T> other) where T : struct, IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x60007D9")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static bool ArraysEqual<T>(this NativeList<T> container, in UnsafeList<T> other) where T : struct, IEquatable<T>
	{
		return default(bool);
	}
}
