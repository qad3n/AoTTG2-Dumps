// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedList128BytesExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000056")]
[GenerateTestsForBurstCompatibility]
public static class FixedList128BytesExtensions
{
	[Token(Token = "0x60002FE")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static int IndexOf<T, U>(this ref FixedList128Bytes<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Contains<T, U>(this ref FixedList128Bytes<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x6000300")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool Remove<T, U>(this ref FixedList128Bytes<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(int)
	})]
	public static bool RemoveSwapBack<T, U>(this ref FixedList128Bytes<T> list, U value) where T : struct, IEquatable<U>
	{
		return default(bool);
	}
}
