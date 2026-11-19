// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F8")]
public sealed class X509BasicConstraintsExtension : X509Extension
{
	[Token(Token = "0x40004CF")]
	internal const string oid = "2.5.29.19";

	[Token(Token = "0x40004D0")]
	internal const string friendlyName = "Basic Constraints";

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x21")]
	private bool _certificateAuthority;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x22")]
	private bool _hasPathLengthConstraint;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x24")]
	private int _pathLengthConstraint;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x28")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x1700010B")]
	public bool CertificateAuthority
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x620DC30", Offset = "0x620CC30", VA = "0x620DC30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010C")]
	public bool HasPathLengthConstraint
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x620DC90", Offset = "0x620CC90", VA = "0x620DC90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010D")]
	public int PathLengthConstraint
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x620DCF0", Offset = "0x620CCF0", VA = "0x620DCF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x620D700", Offset = "0x620C700", VA = "0x620D700")]
	public X509BasicConstraintsExtension()
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x620BD40", Offset = "0x620AD40", VA = "0x620BD40")]
	public X509BasicConstraintsExtension(AsnEncodedData encodedBasicConstraints, bool critical)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x620D990", Offset = "0x620C990", VA = "0x620D990")]
	public X509BasicConstraintsExtension(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x620DD50", Offset = "0x620CD50", VA = "0x620DD50", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x620D7C0", Offset = "0x620C7C0", VA = "0x620D7C0")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x620DAD0", Offset = "0x620CAD0", VA = "0x620DAD0")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x620DF20", Offset = "0x620CF20", VA = "0x620DF20", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
