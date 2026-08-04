// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B5A3D0", Offset = "0x3B5A3D0", VA = "0x3B5A3D0")]
	protected void ThrowIfContextInvalid()
	{
	}

	[Token(Token = "0x6001BAA")]
	public abstract System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone();

	[Token(Token = "0x6001BB1")]
	[Address(RVA = "0x3B5A480", Offset = "0x3B5A480", VA = "0x3B5A480", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001BB7")]
	public abstract RSA GetRSAPrivateKey();

	[Token(Token = "0x6001BB8")]
	public abstract DSA GetDSAPrivateKey();

	[Token(Token = "0x6001BB9")]
	[Address(RVA = "0x3B5A550", Offset = "0x3B5A550", VA = "0x3B5A550", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BBA")]
	[Address(RVA = "0x3B58C40", Offset = "0x3B58C40", VA = "0x3B58C40", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BBB")]
	[Address(RVA = "0x3B5A6C0", Offset = "0x3B5A6C0", VA = "0x3B5A6C0", Slot = "20")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BBC")]
	[Address(RVA = "0x3B5A6D0", Offset = "0x3B5A6D0", VA = "0x3B5A6D0", Slot = "1")]
	~X509CertificateImpl()
	{
	}

	[Token(Token = "0x6001BBD")]
	[Address(RVA = "0x3B5A760", Offset = "0x3B5A760", VA = "0x3B5A760")]
	protected X509CertificateImpl()
	{
	}
}
