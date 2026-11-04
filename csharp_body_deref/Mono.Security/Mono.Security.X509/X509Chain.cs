// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509Chain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x2000014")]
public class X509Chain
{
	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x10")]
	private X509CertificateCollection roots;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x18")]
	private X509CertificateCollection certs;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x20")]
	private X509Certificate _root;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x28")]
	private X509CertificateCollection _chain;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x30")]
	private X509ChainStatusFlags _status;

	[Token(Token = "0x1700003D")]
	public X509CertificateCollection TrustAnchors
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x1927750", Offset = "0x1925D50", VA = "0x181927750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x19276E0", Offset = "0x1925CE0", VA = "0x1819276E0")]
	public X509Chain()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x1927670", Offset = "0x1925C70", VA = "0x181927670")]
	public void LoadCertificates(X509CertificateCollection collection)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x1926B60", Offset = "0x1925160", VA = "0x181926B60")]
	public bool Build(X509Certificate leaf)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x1927690", Offset = "0x1925C90", VA = "0x181927690")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x19274E0", Offset = "0x1925AE0", VA = "0x1819274E0")]
	private bool IsValid(X509Certificate cert)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x1926F40", Offset = "0x1925540", VA = "0x181926F40")]
	private X509Certificate FindCertificateParent(X509Certificate child)
	{
		return null;
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x1927120", Offset = "0x1925720", VA = "0x181927120")]
	private X509Certificate FindCertificateRoot(X509Certificate potentialRoot)
	{
		return null;
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x19274A0", Offset = "0x1925AA0", VA = "0x1819274A0")]
	private bool IsTrusted(X509Certificate potentialTrusted)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x1927320", Offset = "0x1925920", VA = "0x181927320")]
	private bool IsParent(X509Certificate child, X509Certificate parent)
	{
		return default(bool);
	}
}
