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

[Token(Token = "0x2000041")]
public class AuthenticodeDeformatter : AuthenticodeBase
{
	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x40")]
	private string filename;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x48")]
	private byte[] rawdata;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x50")]
	private byte[] hash;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x58")]
	private X509CertificateCollection coll;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x60")]
	private ASN1 signedHash;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x68")]
	private DateTime timestamp;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x70")]
	private X509Certificate signingCertificate;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x78")]
	private int reason;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x7C")]
	private bool trustedRoot;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x7D")]
	private bool trustedTimestampRoot;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x80")]
	private byte[] entry;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x88")]
	private X509Chain signerChain;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x90")]
	private X509Chain timestampChain;

	[Token(Token = "0x17000083")]
	public byte[] RawData
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x52D0630", Offset = "0x52CF630", VA = "0x52D0630")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	public X509Certificate SigningCertificate
	{
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x52D0C90", Offset = "0x52CFC90", VA = "0x52D0C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x52D0520", Offset = "0x52CF520", VA = "0x52D0520")]
	public AuthenticodeDeformatter()
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x52D0600", Offset = "0x52CF600", VA = "0x52D0600")]
	public AuthenticodeDeformatter(byte[] rawData)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x52D0820", Offset = "0x52CF820", VA = "0x52D0820")]
	private bool CheckSignature()
	{
		return default(bool);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x52D1790", Offset = "0x52D0790", VA = "0x52D1790")]
	private bool CompareIssuerSerial(string issuer, byte[] serial, X509Certificate x509)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x52D0CA0", Offset = "0x52CFCA0", VA = "0x52D0CA0")]
	private bool VerifySignature(PKCS7.SignedData sd, byte[] calculatedMessageDigest, HashAlgorithm ha)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x52D1880", Offset = "0x52D0880", VA = "0x52D1880")]
	private bool VerifyCounterSignature(PKCS7.SignerInfo cs, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x52D0710", Offset = "0x52CF710", VA = "0x52D0710")]
	private void Reset()
	{
	}
}
