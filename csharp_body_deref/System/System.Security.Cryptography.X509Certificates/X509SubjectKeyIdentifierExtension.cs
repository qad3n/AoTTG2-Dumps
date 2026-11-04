// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000150")]
public sealed class X509SubjectKeyIdentifierExtension : X509Extension
{
	[Token(Token = "0x40005E8")]
	internal const string oid = "2.5.29.14";

	[Token(Token = "0x40005E9")]
	internal const string friendlyName = "Subject Key Identifier";

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _subjectKeyIdentifier;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x30")]
	private string _ski;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x38")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x1700019A")]
	public string SubjectKeyIdentifier
	{
		[Token(Token = "0x6000863")]
		[Address(RVA = "0x2892420", Offset = "0x2890A20", VA = "0x182892420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x2892370", Offset = "0x2890970", VA = "0x182892370")]
	public X509SubjectKeyIdentifierExtension()
	{
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x2891DA0", Offset = "0x28903A0", VA = "0x182891DA0")]
	public X509SubjectKeyIdentifierExtension(AsnEncodedData encodedSubjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x2891E90", Offset = "0x2890490", VA = "0x182891E90")]
	public X509SubjectKeyIdentifierExtension(byte[] subjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x28920B0", Offset = "0x28906B0", VA = "0x1828920B0")]
	public X509SubjectKeyIdentifierExtension(string subjectKeyIdentifier, bool critical)
	{
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x2891D80", Offset = "0x2890380", VA = "0x182891D80")]
	public X509SubjectKeyIdentifierExtension(PublicKey key, bool critical)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x2891930", Offset = "0x288FF30", VA = "0x182891930")]
	public X509SubjectKeyIdentifierExtension(PublicKey key, X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x28910E0", Offset = "0x288F6E0", VA = "0x1828910E0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x28914D0", Offset = "0x288FAD0", VA = "0x1828914D0")]
	internal static byte FromHexChar(char c)
	{
		return default(byte);
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x2891500", Offset = "0x288FB00", VA = "0x182891500")]
	internal static byte FromHexChars(char c1, char c2)
	{
		return default(byte);
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x2891580", Offset = "0x288FB80", VA = "0x182891580")]
	internal static byte[] FromHex(string hex)
	{
		return null;
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x2891310", Offset = "0x288F910", VA = "0x182891310")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2891450", Offset = "0x288FA50", VA = "0x182891450")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x28916E0", Offset = "0x288FCE0", VA = "0x1828916E0", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
