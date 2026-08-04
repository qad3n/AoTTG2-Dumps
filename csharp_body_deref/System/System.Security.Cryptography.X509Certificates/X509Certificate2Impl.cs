// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000FB")]
internal abstract class X509Certificate2Impl : System.Security.Cryptography.X509Certificates.X509CertificateImpl
{
	[Token(Token = "0x17000115")]
	public abstract IEnumerable<X509Extension> Extensions
	{
		[Token(Token = "0x6000598")]
		get;
	}

	[Token(Token = "0x17000116")]
	public abstract X500DistinguishedName IssuerName
	{
		[Token(Token = "0x6000599")]
		get;
	}

	[Token(Token = "0x17000117")]
	public abstract AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x600059A")]
		get;
		[Token(Token = "0x600059B")]
		set;
	}

	[Token(Token = "0x17000118")]
	public abstract string SignatureAlgorithm
	{
		[Token(Token = "0x600059C")]
		get;
	}

	[Token(Token = "0x17000119")]
	public abstract X500DistinguishedName SubjectName
	{
		[Token(Token = "0x600059D")]
		get;
	}

	[Token(Token = "0x1700011A")]
	public abstract int Version
	{
		[Token(Token = "0x600059E")]
		get;
	}

	[Token(Token = "0x1700011B")]
	internal abstract X509CertificateImplCollection IntermediateCertificates
	{
		[Token(Token = "0x600059F")]
		get;
	}

	[Token(Token = "0x60005A0")]
	public abstract string GetNameInfo(X509NameType nameType, bool forIssuer);

	[Token(Token = "0x60005A1")]
	public abstract bool Verify(X509Certificate2 thisCertificate);

	[Token(Token = "0x60005A2")]
	public abstract void AppendPrivateKeyInfo(StringBuilder sb);

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x4937740", Offset = "0x4937740", VA = "0x4937740")]
	protected X509Certificate2Impl()
	{
	}
}
