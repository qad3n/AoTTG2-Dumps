// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Authenticode.AuthenticodeDeformatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Security.Cryptography;
using Il2CppDummyDll;
using Mono.Security.X509;

namespace Mono.Security.Authenticode;

[Token(Token = "0x2000054")]
public class AuthenticodeDeformatter : AuthenticodeBase
{
	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x40")]
	private string filename;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x48")]
	private byte[] rawdata;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x50")]
	private byte[] hash;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x58")]
	private X509CertificateCollection coll;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x60")]
	private ASN1 signedHash;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x68")]
	private DateTime timestamp;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x70")]
	private X509Certificate signingCertificate;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x78")]
	private int reason;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x7C")]
	private bool trustedRoot;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x7D")]
	private bool trustedTimestampRoot;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x80")]
	private byte[] entry;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x88")]
	private X509Chain signerChain;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x90")]
	private X509Chain timestampChain;

	[Token(Token = "0x17000086")]
	public byte[] RawData
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x192ED60", Offset = "0x192D360", VA = "0x18192ED60")]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	public X509Certificate SigningCertificate
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x192EB80", Offset = "0x192D180", VA = "0x18192EB80")]
	public AuthenticodeDeformatter()
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x192EC60", Offset = "0x192D260", VA = "0x18192EC60")]
	public AuthenticodeDeformatter(byte[] rawData)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x192BE80", Offset = "0x192A480", VA = "0x18192BE80")]
	private bool CheckSignature()
	{
		return default(bool);
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x192D700", Offset = "0x192BD00", VA = "0x18192D700")]
	private bool CompareIssuerSerial(string issuer, byte[] serial, X509Certificate x509)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x192E160", Offset = "0x192C760", VA = "0x18192E160")]
	private bool VerifySignature(PKCS7.SignedData sd, byte[] calculatedMessageDigest, HashAlgorithm ha)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x192D8E0", Offset = "0x192BEE0", VA = "0x18192D8E0")]
	private bool VerifyCounterSignature(PKCS7.SignerInfo cs, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x192D7E0", Offset = "0x192BDE0", VA = "0x18192D7E0")]
	private void Reset()
	{
	}
}
