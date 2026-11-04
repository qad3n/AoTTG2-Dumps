// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000137")]
public sealed class X509BasicConstraintsExtension : X509Extension
{
	[Token(Token = "0x400059E")]
	internal const string oid = "2.5.29.19";

	[Token(Token = "0x400059F")]
	internal const string friendlyName = "Basic Constraints";

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x28")]
	private bool _certificateAuthority;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x29")]
	private bool _hasPathLengthConstraint;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x2C")]
	private int _pathLengthConstraint;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x30")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x1700013A")]
	public bool CertificateAuthority
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x2881820", Offset = "0x287FE20", VA = "0x182881820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	public bool HasPathLengthConstraint
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x2881890", Offset = "0x287FE90", VA = "0x182881890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013C")]
	public int PathLengthConstraint
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x2881900", Offset = "0x287FF00", VA = "0x182881900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x2881680", Offset = "0x287FC80", VA = "0x182881680")]
	public X509BasicConstraintsExtension()
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x2881730", Offset = "0x287FD30", VA = "0x182881730")]
	public X509BasicConstraintsExtension(AsnEncodedData encodedBasicConstraints, bool critical)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x2881410", Offset = "0x287FA10", VA = "0x182881410")]
	public X509BasicConstraintsExtension(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical)
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x2880CA0", Offset = "0x287F2A0", VA = "0x182880CA0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x2880ED0", Offset = "0x287F4D0", VA = "0x182880ED0")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x2881040", Offset = "0x287F640", VA = "0x182881040")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x28811C0", Offset = "0x287F7C0", VA = "0x1828811C0", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
