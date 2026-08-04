// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4932810", Offset = "0x4932810", VA = "0x4932810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000102")]
	public bool HasPathLengthConstraint
	{
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x4932870", Offset = "0x4932870", VA = "0x4932870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	public int PathLengthConstraint
	{
		[Token(Token = "0x600056A")]
		[Address(RVA = "0x49328D0", Offset = "0x49328D0", VA = "0x49328D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x49322B0", Offset = "0x49322B0", VA = "0x49322B0")]
	public X509BasicConstraintsExtension()
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x4930670", Offset = "0x4930670", VA = "0x4930670")]
	public X509BasicConstraintsExtension(AsnEncodedData encodedBasicConstraints, bool critical)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x4932570", Offset = "0x4932570", VA = "0x4932570")]
	public X509BasicConstraintsExtension(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4932930", Offset = "0x4932930", VA = "0x4932930", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4932370", Offset = "0x4932370", VA = "0x4932370")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x49326B0", Offset = "0x49326B0", VA = "0x49326B0")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4932B00", Offset = "0x4932B00", VA = "0x4932B00", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
