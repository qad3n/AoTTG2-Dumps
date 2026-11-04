// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000357")]
internal abstract class X509CertificateImpl : IDisposable
{
	[Token(Token = "0x1700030F")]
	public abstract bool IsValid
	{
		[Token(Token = "0x6001C15")]
		get;
	}

	[Token(Token = "0x17000310")]
	public abstract string Issuer
	{
		[Token(Token = "0x6001C18")]
		get;
	}

	[Token(Token = "0x17000311")]
	public abstract string Subject
	{
		[Token(Token = "0x6001C19")]
		get;
	}

	[Token(Token = "0x17000312")]
	public abstract byte[] RawData
	{
		[Token(Token = "0x6001C1A")]
		get;
	}

	[Token(Token = "0x17000313")]
	public abstract DateTime NotAfter
	{
		[Token(Token = "0x6001C1B")]
		get;
	}

	[Token(Token = "0x17000314")]
	public abstract DateTime NotBefore
	{
		[Token(Token = "0x6001C1C")]
		get;
	}

	[Token(Token = "0x17000315")]
	public abstract byte[] Thumbprint
	{
		[Token(Token = "0x6001C1D")]
		get;
	}

	[Token(Token = "0x17000316")]
	public abstract string KeyAlgorithm
	{
		[Token(Token = "0x6001C1F")]
		get;
	}

	[Token(Token = "0x17000317")]
	public abstract byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x6001C20")]
		get;
	}

	[Token(Token = "0x17000318")]
	public abstract byte[] PublicKeyValue
	{
		[Token(Token = "0x6001C21")]
		get;
	}

	[Token(Token = "0x17000319")]
	public abstract byte[] SerialNumber
	{
		[Token(Token = "0x6001C22")]
		get;
	}

	[Token(Token = "0x1700031A")]
	public abstract bool HasPrivateKey
	{
		[Token(Token = "0x6001C23")]
		get;
	}

	[Token(Token = "0x6001C16")]
	[Address(RVA = "0x19E9D20", Offset = "0x19E8320", VA = "0x1819E9D20")]
	protected void ThrowIfContextInvalid()
	{
	}

	[Token(Token = "0x6001C17")]
	public abstract System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone();

	[Token(Token = "0x6001C1E")]
	[Address(RVA = "0x19E9C90", Offset = "0x19E8290", VA = "0x1819E9C90", Slot = "2")]
	public sealed override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001C24")]
	public abstract RSA GetRSAPrivateKey();

	[Token(Token = "0x6001C25")]
	public abstract DSA GetDSAPrivateKey();

	[Token(Token = "0x6001C26")]
	public abstract byte[] Export(X509ContentType contentType, Microsoft.Win32.SafeHandles.SafePasswordHandle password);

	[Token(Token = "0x6001C27")]
	[Address(RVA = "0x19E9A90", Offset = "0x19E8090", VA = "0x1819E9A90", Slot = "0")]
	public sealed override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C28")]
	[Address(RVA = "0x19E9A30", Offset = "0x19E8030", VA = "0x1819E9A30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C29")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001C2A")]
	[Address(RVA = "0x19E9C20", Offset = "0x19E8220", VA = "0x1819E9C20", Slot = "1")]
	~X509CertificateImpl()
	{
	}

	[Token(Token = "0x6001C2B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected X509CertificateImpl()
	{
	}
}
