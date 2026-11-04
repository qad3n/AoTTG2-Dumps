// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X501
// Update status: CHANGED in this game update
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

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x1923890", Offset = "0x1921E90", VA = "0x181923890")]
	public static string ToString(ASN1 seq)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x19236B0", Offset = "0x1921CB0", VA = "0x1819236B0")]
	public static string ToString(ASN1 seq, bool reversed, string separator, bool quotes)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x1921340", Offset = "0x191F940", VA = "0x181921340")]
	private static void AppendEntry(StringBuilder sb, ASN1 entry, bool quotes)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x1922110", Offset = "0x1920710", VA = "0x181922110")]
	private static X520.AttributeTypeAndValue GetAttributeFromOid(string attributeType)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x1922C60", Offset = "0x1921260", VA = "0x181922C60")]
	private static bool IsOid(string oid)
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x1922D50", Offset = "0x1921350", VA = "0x181922D50")]
	private static X520.AttributeTypeAndValue ReadAttribute(string value, ref int pos)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x1922BA0", Offset = "0x19211A0", VA = "0x181922BA0")]
	private static bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x19230A0", Offset = "0x19216A0", VA = "0x1819230A0")]
	private static string ReadHex(string value, ref int pos)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x1922EE0", Offset = "0x19214E0", VA = "0x181922EE0")]
	private static int ReadEscaped(StringBuilder sb, string value, int pos)
	{
		return default(int);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x19232D0", Offset = "0x19218D0", VA = "0x1819232D0")]
	private static int ReadQuoted(StringBuilder sb, string value, int pos)
	{
		return default(int);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x1923410", Offset = "0x1921A10", VA = "0x181923410")]
	private static string ReadValue(string value, ref int pos)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x1921CA0", Offset = "0x19202A0", VA = "0x181921CA0")]
	public static ASN1 FromString(string rdn)
	{
		return null;
	}
}
