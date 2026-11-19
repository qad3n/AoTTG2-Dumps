// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000111")]
public sealed class X509SubjectKeyIdentifierExtension : X509Extension
{
	[Token(Token = "0x4000519")]
	internal const string oid = "2.5.29.14";

	[Token(Token = "0x400051A")]
	internal const string friendlyName = "Subject Key Identifier";

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _subjectKeyIdentifier;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x30")]
	private string _ski;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x38")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x1700016B")]
	public string SubjectKeyIdentifier
	{
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x621F800", Offset = "0x621E800", VA = "0x621F800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x621EAD0", Offset = "0x621DAD0", VA = "0x621EAD0")]
	public X509SubjectKeyIdentifierExtension()
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x621EB60", Offset = "0x621DB60", VA = "0x621EB60")]
	public X509SubjectKeyIdentifierExtension(AsnEncodedData encodedSubjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x621ED90", Offset = "0x621DD90", VA = "0x621ED90")]
	public X509SubjectKeyIdentifierExtension(byte[] subjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x621F050", Offset = "0x621E050", VA = "0x621F050")]
	public X509SubjectKeyIdentifierExtension(string subjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x621F3A0", Offset = "0x621E3A0", VA = "0x621F3A0")]
	public X509SubjectKeyIdentifierExtension(PublicKey key, bool critical)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x621F3B0", Offset = "0x621E3B0", VA = "0x621F3B0")]
	public X509SubjectKeyIdentifierExtension(PublicKey key, X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical)
	{
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x621F880", Offset = "0x621E880", VA = "0x621F880", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x621FA30", Offset = "0x621EA30", VA = "0x621FA30")]
	internal static byte FromHexChar(char c)
	{
		return default(byte);
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x621FA70", Offset = "0x621EA70", VA = "0x621FA70")]
	internal static byte FromHexChars(char c1, char c2)
	{
		return default(byte);
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x621F210", Offset = "0x621E210", VA = "0x621F210")]
	internal static byte[] FromHex(string hex)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x621EC30", Offset = "0x621DC30", VA = "0x621EC30")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x621EFD0", Offset = "0x621DFD0", VA = "0x621EFD0")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x621FAF0", Offset = "0x621EAF0", VA = "0x621FAF0", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
