// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000110")]
public sealed class X509SubjectKeyIdentifierExtension : X509Extension
{
	[Token(Token = "0x4000516")]
	internal const string oid = "2.5.29.14";

	[Token(Token = "0x4000517")]
	internal const string friendlyName = "Subject Key Identifier";

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _subjectKeyIdentifier;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x30")]
	private string _ski;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x38")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x17000161")]
	public string SubjectKeyIdentifier
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x4945140", Offset = "0x4945140", VA = "0x4945140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x4944440", Offset = "0x4944440", VA = "0x4944440")]
	public X509SubjectKeyIdentifierExtension()
	{
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x49444D0", Offset = "0x49444D0", VA = "0x49444D0")]
	public X509SubjectKeyIdentifierExtension(AsnEncodedData encodedSubjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x4944710", Offset = "0x4944710", VA = "0x4944710")]
	public X509SubjectKeyIdentifierExtension(byte[] subjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x49449D0", Offset = "0x49449D0", VA = "0x49449D0")]
	public X509SubjectKeyIdentifierExtension(string subjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4944CE0", Offset = "0x4944CE0", VA = "0x4944CE0")]
	public X509SubjectKeyIdentifierExtension(PublicKey key, bool critical)
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4944CF0", Offset = "0x4944CF0", VA = "0x4944CF0")]
	public X509SubjectKeyIdentifierExtension(PublicKey key, X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical)
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x49451C0", Offset = "0x49451C0", VA = "0x49451C0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4945370", Offset = "0x4945370", VA = "0x4945370")]
	internal static byte FromHexChar(char c)
	{
		return default(byte);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x49453A0", Offset = "0x49453A0", VA = "0x49453A0")]
	internal static byte FromHexChars(char c1, char c2)
	{
		return default(byte);
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x4944B90", Offset = "0x4944B90", VA = "0x4944B90")]
	internal static byte[] FromHex(string hex)
	{
		return null;
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x49445A0", Offset = "0x49445A0", VA = "0x49445A0")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x4944950", Offset = "0x4944950", VA = "0x4944950")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x4945400", Offset = "0x4945400", VA = "0x4945400", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
