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

[Token(Token = "0x20005F7")]
internal static class HashHelpers
{
	[Token(Token = "0x4001A4D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int[] primes;

	[Token(Token = "0x4001A4E")]
	[FieldOffset(Offset = "0x8")]
	private static ConditionalWeakTable<object, SerializationInfo> s_serializationInfoTable;

	[Token(Token = "0x1700071E")]
	internal static ConditionalWeakTable<object, SerializationInfo> SerializationInfoTable
	{
		[Token(Token = "0x6002EB0")]
		[Address(RVA = "0x3C7D6B0", Offset = "0x3C7D6B0", VA = "0x3C7D6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002EAD")]
	[Address(RVA = "0x3C7D370", Offset = "0x3C7D370", VA = "0x3C7D370")]
	public static bool IsPrime(int candidate)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EAE")]
	[Address(RVA = "0x3C7D420", Offset = "0x3C7D420", VA = "0x3C7D420")]
	public static int GetPrime(int min)
	{
		return default(int);
	}

	[Token(Token = "0x6002EAF")]
	[Address(RVA = "0x3C7D640", Offset = "0x3C7D640", VA = "0x3C7D640")]
	public static int ExpandPrime(int oldSize)
	{
		return default(int);
	}
}
