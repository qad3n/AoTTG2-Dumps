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

[Token(Token = "0x200013B")]
internal abstract class X509Certificate2Impl : System.Security.Cryptography.X509Certificates.X509CertificateImpl
{
	[Token(Token = "0x1700014E")]
	public abstract IEnumerable<X509Extension> Extensions
	{
		[Token(Token = "0x600077D")]
		get;
	}

	[Token(Token = "0x1700014F")]
	public abstract X500DistinguishedName IssuerName
	{
		[Token(Token = "0x600077E")]
		get;
	}

	[Token(Token = "0x17000150")]
	public abstract AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x600077F")]
		get;
		[Token(Token = "0x6000780")]
		set;
	}

	[Token(Token = "0x17000151")]
	public abstract string SignatureAlgorithm
	{
		[Token(Token = "0x6000781")]
		get;
	}

	[Token(Token = "0x17000152")]
	public abstract X500DistinguishedName SubjectName
	{
		[Token(Token = "0x6000782")]
		get;
	}

	[Token(Token = "0x17000153")]
	public abstract int Version
	{
		[Token(Token = "0x6000783")]
		get;
	}

	[Token(Token = "0x17000154")]
	internal abstract X509CertificateImplCollection IntermediateCertificates
	{
		[Token(Token = "0x6000784")]
		get;
	}

	[Token(Token = "0x6000785")]
	public abstract string GetNameInfo(X509NameType nameType, bool forIssuer);

	[Token(Token = "0x6000786")]
	public abstract bool Verify(X509Certificate2 thisCertificate);

	[Token(Token = "0x6000787")]
	public abstract void AppendPrivateKeyInfo(StringBuilder sb);

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected X509Certificate2Impl()
	{
	}
}
