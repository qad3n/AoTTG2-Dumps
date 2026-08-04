// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.ASN1Convert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000004")]
public static class ASN1Convert
{
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3A9EA40", Offset = "0x3A9EA40", VA = "0x3A9EA40")]
	public static ASN1 FromInt32(int value)
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3A9EBC0", Offset = "0x3A9EBC0", VA = "0x3A9EBC0")]
	public static ASN1 FromOid(string oid)
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3A9EC90", Offset = "0x3A9EC90", VA = "0x3A9EC90")]
	public static ASN1 FromUnsignedBigInteger(byte[] big)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3A9EDA0", Offset = "0x3A9EDA0", VA = "0x3A9EDA0")]
	public static int ToInt32(ASN1 asn1)
	{
		return default(int);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3A9EFD0", Offset = "0x3A9EFD0", VA = "0x3A9EFD0")]
	public static string ToOid(ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3A9F2F0", Offset = "0x3A9F2F0", VA = "0x3A9F2F0")]
	public static DateTime ToDateTime(ASN1 time)
	{
		return default(DateTime);
	}
}
