using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000100")]
internal class X509CertificateImplCollection : IDisposable
{
	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x10")]
	private List<System.Security.Cryptography.X509Certificates.X509CertificateImpl> list;

	[Token(Token = "0x17000134")]
	public int Count
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x4615860", Offset = "0x4615860", VA = "0x4615860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000135")]
	public System.Security.Cryptography.X509Certificates.X509CertificateImpl this[int index]
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x46158A0", Offset = "0x46158A0", VA = "0x46158A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4613D70", Offset = "0x4613D70", VA = "0x4613D70")]
	public X509CertificateImplCollection()
	{
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x46155F0", Offset = "0x46155F0", VA = "0x46155F0")]
	private X509CertificateImplCollection(X509CertificateImplCollection other)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x4613DF0", Offset = "0x4613DF0", VA = "0x4613DF0")]
	public void Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl, bool takeOwnership)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x4612760", Offset = "0x4612760", VA = "0x4612760")]
	public X509CertificateImplCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x46158F0", Offset = "0x46158F0", VA = "0x46158F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4615960", Offset = "0x4615960", VA = "0x4615960", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4615BA0", Offset = "0x4615BA0", VA = "0x4615BA0", Slot = "1")]
	~X509CertificateImplCollection()
	{
	}
}
