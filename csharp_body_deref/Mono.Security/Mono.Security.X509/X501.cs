// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X501
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x200000E")]
public sealed class X501
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] countryName;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] organizationName;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x10")]
	private static byte[] organizationalUnitName;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] commonName;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x20")]
	private static byte[] localityName;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x28")]
	private static byte[] stateOrProvinceName;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x30")]
	private static byte[] streetAddress;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x38")]
	private static byte[] serialNumber;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x40")]
	private static byte[] domainComponent;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x48")]
	private static byte[] userid;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x50")]
	private static byte[] email;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x58")]
	private static byte[] dnQualifier;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x60")]
	private static byte[] title;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x68")]
	private static byte[] surname;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x70")]
	private static byte[] givenName;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x78")]
	private static byte[] initial;

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3AA1720", Offset = "0x3AA1720", VA = "0x3AA1720")]
	public static string ToString(ASN1 seq)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3AAE520", Offset = "0x3AAE520", VA = "0x3AAE520")]
	public static string ToString(ASN1 seq, bool reversed, string separator, bool quotes)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3AAD5B0", Offset = "0x3AAD5B0", VA = "0x3AAD5B0")]
	private static void AppendEntry(StringBuilder sb, ASN1 entry, bool quotes)
	{
	}
}
