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

[Token(Token = "0x20005CB")]
internal static class HashHelpers
{
	[Token(Token = "0x4001868")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int[] primes;

	[Token(Token = "0x4001869")]
	[FieldOffset(Offset = "0x8")]
	private static ConditionalWeakTable<object, SerializationInfo> s_serializationInfoTable;

	[Token(Token = "0x170006AB")]
	internal static ConditionalWeakTable<object, SerializationInfo> SerializationInfoTable
	{
		[Token(Token = "0x6002BBF")]
		[Address(RVA = "0x1AC03F0", Offset = "0x1ABE9F0", VA = "0x181AC03F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002BBC")]
	[Address(RVA = "0x1AC02B0", Offset = "0x1ABE8B0", VA = "0x181AC02B0")]
	public static bool IsPrime(int candidate)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BBD")]
	[Address(RVA = "0x1AC00B0", Offset = "0x1ABE6B0", VA = "0x181AC00B0")]
	public static int GetPrime(int min)
	{
		return default(int);
	}

	[Token(Token = "0x6002BBE")]
	[Address(RVA = "0x1AC0030", Offset = "0x1ABE630", VA = "0x181AC0030")]
	public static int ExpandPrime(int oldSize)
	{
		return default(int);
	}
}
