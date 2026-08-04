// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x493A960", Offset = "0x493A960", VA = "0x493A960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000135")]
	public System.Security.Cryptography.X509Certificates.X509CertificateImpl this[int index]
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x493A9A0", Offset = "0x493A9A0", VA = "0x493A9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4938E70", Offset = "0x4938E70", VA = "0x4938E70")]
	public X509CertificateImplCollection()
	{
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x493A6F0", Offset = "0x493A6F0", VA = "0x493A6F0")]
	private X509CertificateImplCollection(X509CertificateImplCollection other)
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x4938EF0", Offset = "0x4938EF0", VA = "0x4938EF0")]
	public void Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl, bool takeOwnership)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x4937860", Offset = "0x4937860", VA = "0x4937860")]
	public X509CertificateImplCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x493A9F0", Offset = "0x493A9F0", VA = "0x493A9F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x493AA60", Offset = "0x493AA60", VA = "0x493AA60", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x493ACA0", Offset = "0x493ACA0", VA = "0x493ACA0", Slot = "1")]
	~X509CertificateImplCollection()
	{
	}
}
