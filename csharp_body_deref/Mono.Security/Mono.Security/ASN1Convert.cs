using System;
using Il2CppDummyDll;

namespace Mono.Security;

[Token(Token = "0x2000004")]
public static class ASN1Convert
{
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3A31D80", Offset = "0x3A31D80", VA = "0x3A31D80")]
	public static ASN1 FromInt32(int value)
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3A31F00", Offset = "0x3A31F00", VA = "0x3A31F00")]
	public static ASN1 FromOid(string oid)
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3A31FD0", Offset = "0x3A31FD0", VA = "0x3A31FD0")]
	public static ASN1 FromUnsignedBigInteger(byte[] big)
	{
		return null;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3A320E0", Offset = "0x3A320E0", VA = "0x3A320E0")]
	public static int ToInt32(ASN1 asn1)
	{
		return default(int);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3A32310", Offset = "0x3A32310", VA = "0x3A32310")]
	public static string ToOid(ASN1 asn1)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3A32630", Offset = "0x3A32630", VA = "0x3A32630")]
	public static DateTime ToDateTime(ASN1 time)
	{
		return default(DateTime);
	}
}
