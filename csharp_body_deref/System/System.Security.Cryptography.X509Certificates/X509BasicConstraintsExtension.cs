using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F7")]
public sealed class X509BasicConstraintsExtension : X509Extension
{
	[Token(Token = "0x40004CC")]
	internal const string oid = "2.5.29.19";

	[Token(Token = "0x40004CD")]
	internal const string friendlyName = "Basic Constraints";

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x21")]
	private bool _certificateAuthority;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x22")]
	private bool _hasPathLengthConstraint;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x24")]
	private int _pathLengthConstraint;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x28")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x17000101")]
	public bool CertificateAuthority
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x460D710", Offset = "0x460D710", VA = "0x460D710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000102")]
	public bool HasPathLengthConstraint
	{
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x460D770", Offset = "0x460D770", VA = "0x460D770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	public int PathLengthConstraint
	{
		[Token(Token = "0x600056A")]
		[Address(RVA = "0x460D7D0", Offset = "0x460D7D0", VA = "0x460D7D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x460D1B0", Offset = "0x460D1B0", VA = "0x460D1B0")]
	public X509BasicConstraintsExtension()
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x460B570", Offset = "0x460B570", VA = "0x460B570")]
	public X509BasicConstraintsExtension(AsnEncodedData encodedBasicConstraints, bool critical)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x460D470", Offset = "0x460D470", VA = "0x460D470")]
	public X509BasicConstraintsExtension(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x460D830", Offset = "0x460D830", VA = "0x460D830", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x460D270", Offset = "0x460D270", VA = "0x460D270")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x460D5B0", Offset = "0x460D5B0", VA = "0x460D5B0")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x460DA00", Offset = "0x460DA00", VA = "0x460DA00", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
