// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000330")]
internal abstract class X509CertificateImpl : IDisposable
{
	[Token(Token = "0x1700030E")]
	public abstract bool IsValid
	{
		[Token(Token = "0x6001BED")]
		get;
	}

	[Token(Token = "0x1700030F")]
	public abstract string Issuer
	{
		[Token(Token = "0x6001BF0")]
		get;
	}

	[Token(Token = "0x17000310")]
	public abstract string Subject
	{
		[Token(Token = "0x6001BF1")]
		get;
	}

	[Token(Token = "0x17000311")]
	public abstract byte[] RawData
	{
		[Token(Token = "0x6001BF2")]
		get;
	}

	[Token(Token = "0x17000312")]
	public abstract DateTime NotAfter
	{
		[Token(Token = "0x6001BF3")]
		get;
	}

	[Token(Token = "0x17000313")]
	public abstract DateTime NotBefore
	{
		[Token(Token = "0x6001BF4")]
		get;
	}

	[Token(Token = "0x17000314")]
	public abstract byte[] Thumbprint
	{
		[Token(Token = "0x6001BF5")]
		get;
	}

	[Token(Token = "0x17000315")]
	public abstract string KeyAlgorithm
	{
		[Token(Token = "0x6001BF7")]
		get;
	}

	[Token(Token = "0x17000316")]
	public abstract byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x6001BF8")]
		get;
	}

	[Token(Token = "0x17000317")]
	public abstract byte[] PublicKeyValue
	{
		[Token(Token = "0x6001BF9")]
		get;
	}

	[Token(Token = "0x17000318")]
	public abstract byte[] SerialNumber
	{
		[Token(Token = "0x6001BFA")]
		get;
	}

	[Token(Token = "0x17000319")]
	public abstract bool HasPrivateKey
	{
		[Token(Token = "0x6001BFB")]
		get;
	}

	[Token(Token = "0x6001BEE")]
	[Address(RVA = "0x5364090", Offset = "0x5363090", VA = "0x5364090")]
	protected void ThrowIfContextInvalid()
	{
	}

	[Token(Token = "0x6001BEF")]
	public abstract System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone();

	[Token(Token = "0x6001BF6")]
	[Address(RVA = "0x5364140", Offset = "0x5363140", VA = "0x5364140", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001BFC")]
	public abstract RSA GetRSAPrivateKey();

	[Token(Token = "0x6001BFD")]
	public abstract DSA GetDSAPrivateKey();

	[Token(Token = "0x6001BFE")]
	[Address(RVA = "0x53641D0", Offset = "0x53631D0", VA = "0x53641D0", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BFF")]
	[Address(RVA = "0x5362940", Offset = "0x5361940", VA = "0x5362940", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C00")]
	[Address(RVA = "0x5364340", Offset = "0x5363340", VA = "0x5364340", Slot = "20")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001C01")]
	[Address(RVA = "0x5364350", Offset = "0x5363350", VA = "0x5364350", Slot = "1")]
	~X509CertificateImpl()
	{
	}

	[Token(Token = "0x6001C02")]
	[Address(RVA = "0x53643F0", Offset = "0x53633F0", VA = "0x53643F0")]
	protected X509CertificateImpl()
	{
	}
}
