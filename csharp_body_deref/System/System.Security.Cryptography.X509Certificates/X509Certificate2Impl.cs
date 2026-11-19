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

[Token(Token = "0x20000FC")]
internal abstract class X509Certificate2Impl : System.Security.Cryptography.X509Certificates.X509CertificateImpl
{
	[Token(Token = "0x1700011F")]
	public abstract IEnumerable<X509Extension> Extensions
	{
		[Token(Token = "0x60005C2")]
		get;
	}

	[Token(Token = "0x17000120")]
	public abstract X500DistinguishedName IssuerName
	{
		[Token(Token = "0x60005C3")]
		get;
	}

	[Token(Token = "0x17000121")]
	public abstract AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x60005C4")]
		get;
		[Token(Token = "0x60005C5")]
		set;
	}

	[Token(Token = "0x17000122")]
	public abstract string SignatureAlgorithm
	{
		[Token(Token = "0x60005C6")]
		get;
	}

	[Token(Token = "0x17000123")]
	public abstract X500DistinguishedName SubjectName
	{
		[Token(Token = "0x60005C7")]
		get;
	}

	[Token(Token = "0x17000124")]
	public abstract int Version
	{
		[Token(Token = "0x60005C8")]
		get;
	}

	[Token(Token = "0x17000125")]
	internal abstract X509CertificateImplCollection IntermediateCertificates
	{
		[Token(Token = "0x60005C9")]
		get;
	}

	[Token(Token = "0x60005CA")]
	public abstract string GetNameInfo(X509NameType nameType, bool forIssuer);

	[Token(Token = "0x60005CB")]
	public abstract bool Verify(X509Certificate2 thisCertificate);

	[Token(Token = "0x60005CC")]
	public abstract void AppendPrivateKeyInfo(StringBuilder sb);

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x6212910", Offset = "0x6211910", VA = "0x6212910")]
	protected X509Certificate2Impl()
	{
	}
}
