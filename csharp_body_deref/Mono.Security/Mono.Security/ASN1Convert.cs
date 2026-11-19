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
	[Address(RVA = "0x52ACB00", Offset = "0x52ABB00", VA = "0x52ACB00")]
	public static ASN1 FromInt32(int value)
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x52ACC70", Offset = "0x52ABC70", VA = "0x52ACC70")]
	public static ASN1 FromOid(string oid)
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x52ACD40", Offset = "0x52ABD40", VA = "0x52ACD40")]
	public static ASN1 FromUnsignedBigInteger(byte[] big)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x52ACE50", Offset = "0x52ABE50", VA = "0x52ACE50")]
	public static int ToInt32(ASN1 asn1)
	{
		return default(int);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x52AD030", Offset = "0x52AC030", VA = "0x52AD030")]
	public static string ToOid(ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x52AD330", Offset = "0x52AC330", VA = "0x52AD330")]
	public static DateTime ToDateTime(ASN1 time)
	{
		return default(DateTime);
	}
}
