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

[Token(Token = "0x2000140")]
internal class X509CertificateImplCollection : IDisposable
{
	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x10")]
	private List<System.Security.Cryptography.X509Certificates.X509CertificateImpl> list;

	[Token(Token = "0x1700016D")]
	public int Count
	{
		[Token(Token = "0x60007C1")]
		[Address(RVA = "0x2887F20", Offset = "0x2886520", VA = "0x182887F20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700016E")]
	public System.Security.Cryptography.X509Certificates.X509CertificateImpl this[int index]
	{
		[Token(Token = "0x60007C2")]
		[Address(RVA = "0x2887F60", Offset = "0x2886560", VA = "0x182887F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x2887C80", Offset = "0x2886280", VA = "0x182887C80")]
	public X509CertificateImplCollection()
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x2887D00", Offset = "0x2886300", VA = "0x182887D00")]
	private X509CertificateImplCollection(X509CertificateImplCollection other)
	{
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x2887970", Offset = "0x2885F70", VA = "0x182887970")]
	public void Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl, bool takeOwnership)
	{
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x2887A60", Offset = "0x2886060", VA = "0x182887A60")]
	public X509CertificateImplCollection Clone()
	{
		return null;
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x2887C20", Offset = "0x2886220", VA = "0x182887C20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x2887AC0", Offset = "0x28860C0", VA = "0x182887AC0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~X509CertificateImplCollection()
	{
	}
}
