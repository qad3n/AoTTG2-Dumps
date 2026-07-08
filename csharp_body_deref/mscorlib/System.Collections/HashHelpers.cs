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
		[Address(RVA = "0x4F97B90", Offset = "0x4F97B90", VA = "0x4F97B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002EAD")]
	[Address(RVA = "0x4F97850", Offset = "0x4F97850", VA = "0x4F97850")]
	public static bool IsPrime(int candidate)
	{
		return default(bool);
	}

	[Token(Token = "0x6002EAE")]
	[Address(RVA = "0x4F97900", Offset = "0x4F97900", VA = "0x4F97900")]
	public static int GetPrime(int min)
	{
		return default(int);
	}

	[Token(Token = "0x6002EAF")]
	[Address(RVA = "0x4F97B20", Offset = "0x4F97B20", VA = "0x4F97B20")]
	public static int ExpandPrime(int oldSize)
	{
		return default(int);
	}
}
