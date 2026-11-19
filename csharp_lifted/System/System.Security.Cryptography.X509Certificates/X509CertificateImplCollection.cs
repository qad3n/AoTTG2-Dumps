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

[Token(Token = "0x2000101")]
internal class X509CertificateImplCollection : IDisposable
{
	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x10")]
	private List<System.Security.Cryptography.X509Certificates.X509CertificateImpl> list;

	[Token(Token = "0x1700013E")]
	public int Count
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x6215810", Offset = "0x6214810", VA = "0x6215810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013F")]
	public System.Security.Cryptography.X509Certificates.X509CertificateImpl this[int index]
	{
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x6215850", Offset = "0x6214850", VA = "0x6215850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x6213D80", Offset = "0x6212D80", VA = "0x6213D80")]
	public X509CertificateImplCollection()
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x62155E0", Offset = "0x62145E0", VA = "0x62155E0")]
	private X509CertificateImplCollection(X509CertificateImplCollection other)
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x6213E00", Offset = "0x6212E00", VA = "0x6213E00")]
	public void Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl, bool takeOwnership)
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x6212A30", Offset = "0x6211A30", VA = "0x6212A30")]
	public X509CertificateImplCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x62158A0", Offset = "0x62148A0", VA = "0x62158A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x6215910", Offset = "0x6214910", VA = "0x6215910", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x6215B30", Offset = "0x6214B30", VA = "0x6215B30", Slot = "1")]
	~X509CertificateImplCollection()
	{
	}
}
