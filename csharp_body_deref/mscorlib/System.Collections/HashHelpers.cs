// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.HashHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005A6")]
internal static class HashHelpers
{
	[Token(Token = "0x40017CF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int[] primes;

	[Token(Token = "0x40017D0")]
	[FieldOffset(Offset = "0x8")]
	private static ConditionalWeakTable<object, SerializationInfo> s_serializationInfoTable;

	[Token(Token = "0x170006AC")]
	internal static ConditionalWeakTable<object, SerializationInfo> SerializationInfoTable
	{
		[Token(Token = "0x6002B9E")]
		[Address(RVA = "0x5450860", Offset = "0x544F860", VA = "0x5450860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B9B")]
	[Address(RVA = "0x5450530", Offset = "0x544F530", VA = "0x5450530")]
	public static bool IsPrime(int candidate)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9C")]
	[Address(RVA = "0x54505E0", Offset = "0x544F5E0", VA = "0x54505E0")]
	public static int GetPrime(int min)
	{
		return default(int);
	}

	[Token(Token = "0x6002B9D")]
	[Address(RVA = "0x54507F0", Offset = "0x544F7F0", VA = "0x54507F0")]
	public static int ExpandPrime(int oldSize)
	{
		return default(int);
	}
}
