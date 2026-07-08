using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000328")]
internal abstract class X509CertificateImpl : IDisposable
{
	[Token(Token = "0x1700030D")]
	public abstract bool IsValid
	{
		[Token(Token = "0x6001BA8")]
		get;
	}

	[Token(Token = "0x1700030E")]
	public abstract string Issuer
	{
		[Token(Token = "0x6001BAB")]
		get;
	}

	[Token(Token = "0x1700030F")]
	public abstract string Subject
	{
		[Token(Token = "0x6001BAC")]
		get;
	}

	[Token(Token = "0x17000310")]
	public abstract byte[] RawData
	{
		[Token(Token = "0x6001BAD")]
		get;
	}

	[Token(Token = "0x17000311")]
	public abstract DateTime NotAfter
	{
		[Token(Token = "0x6001BAE")]
		get;
	}

	[Token(Token = "0x17000312")]
	public abstract DateTime NotBefore
	{
		[Token(Token = "0x6001BAF")]
		get;
	}

	[Token(Token = "0x17000313")]
	public abstract byte[] Thumbprint
	{
		[Token(Token = "0x6001BB0")]
		get;
	}

	[Token(Token = "0x17000314")]
	public abstract string KeyAlgorithm
	{
		[Token(Token = "0x6001BB2")]
		get;
	}

	[Token(Token = "0x17000315")]
	public abstract byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x6001BB3")]
		get;
	}

	[Token(Token = "0x17000316")]
	public abstract byte[] PublicKeyValue
	{
		[Token(Token = "0x6001BB4")]
		get;
	}

	[Token(Token = "0x17000317")]
	public abstract byte[] SerialNumber
	{
		[Token(Token = "0x6001BB5")]
		get;
	}

	[Token(Token = "0x17000318")]
	public abstract bool HasPrivateKey
	{
		[Token(Token = "0x6001BB6")]
		get;
	}

	[Token(Token = "0x6001BA9")]
	[Address(RVA = "0x4E748B0", Offset = "0x4E748B0", VA = "0x4E748B0")]
	protected void ThrowIfContextInvalid()
	{
	}

	[Token(Token = "0x6001BAA")]
	public abstract System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone();

	[Token(Token = "0x6001BB1")]
	[Address(RVA = "0x4E74960", Offset = "0x4E74960", VA = "0x4E74960", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001BB7")]
	public abstract RSA GetRSAPrivateKey();

	[Token(Token = "0x6001BB8")]
	public abstract DSA GetDSAPrivateKey();

	[Token(Token = "0x6001BB9")]
	[Address(RVA = "0x4E74A30", Offset = "0x4E74A30", VA = "0x4E74A30", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BBA")]
	[Address(RVA = "0x4E73120", Offset = "0x4E73120", VA = "0x4E73120", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BBB")]
	[Address(RVA = "0x4E74BA0", Offset = "0x4E74BA0", VA = "0x4E74BA0", Slot = "20")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BBC")]
	[Address(RVA = "0x4E74BB0", Offset = "0x4E74BB0", VA = "0x4E74BB0", Slot = "1")]
	~X509CertificateImpl()
	{
	}

	[Token(Token = "0x6001BBD")]
	[Address(RVA = "0x4E74C40", Offset = "0x4E74C40", VA = "0x4E74C40")]
	protected X509CertificateImpl()
	{
	}
}
