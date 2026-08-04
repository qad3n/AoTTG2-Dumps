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
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x3AB36E0", Offset = "0x3AB36E0", VA = "0x3AB36E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3AB3670", Offset = "0x3AB3670", VA = "0x3AB3670")]
	public X509Chain()
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3AB3870", Offset = "0x3AB3870", VA = "0x3AB3870")]
	public void LoadCertificates(X509CertificateCollection collection)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3AB3890", Offset = "0x3AB3890", VA = "0x3AB3890")]
	public bool Build(X509Certificate leaf)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3AB4880", Offset = "0x3AB4880", VA = "0x3AB4880")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3AB4780", Offset = "0x3AB4780", VA = "0x3AB4780")]
	private bool IsValid(X509Certificate cert)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3AB3F50", Offset = "0x3AB3F50", VA = "0x3AB3F50")]
	private X509Certificate FindCertificateParent(X509Certificate child)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3AB4240", Offset = "0x3AB4240", VA = "0x3AB4240")]
	private X509Certificate FindCertificateRoot(X509Certificate potentialRoot)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3AB48D0", Offset = "0x3AB48D0", VA = "0x3AB48D0")]
	private bool IsTrusted(X509Certificate potentialTrusted)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3AB45A0", Offset = "0x3AB45A0", VA = "0x3AB45A0")]
	private bool IsParent(X509Certificate child, X509Certificate parent)
	{
		return default(bool);
	}
}
