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
		[Address(RVA = "0x3A46A20", Offset = "0x3A46A20", VA = "0x3A46A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3A469B0", Offset = "0x3A469B0", VA = "0x3A469B0")]
	public X509Chain()
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3A46BB0", Offset = "0x3A46BB0", VA = "0x3A46BB0")]
	public void LoadCertificates(X509CertificateCollection collection)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3A46BD0", Offset = "0x3A46BD0", VA = "0x3A46BD0")]
	public bool Build(X509Certificate leaf)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3A47BC0", Offset = "0x3A47BC0", VA = "0x3A47BC0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3A47AC0", Offset = "0x3A47AC0", VA = "0x3A47AC0")]
	private bool IsValid(X509Certificate cert)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3A47290", Offset = "0x3A47290", VA = "0x3A47290")]
	private X509Certificate FindCertificateParent(X509Certificate child)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3A47580", Offset = "0x3A47580", VA = "0x3A47580")]
	private X509Certificate FindCertificateRoot(X509Certificate potentialRoot)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3A47C10", Offset = "0x3A47C10", VA = "0x3A47C10")]
	private bool IsTrusted(X509Certificate potentialTrusted)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3A478E0", Offset = "0x3A478E0", VA = "0x3A478E0")]
	private bool IsParent(X509Certificate child, X509Certificate parent)
	{
		return default(bool);
	}
}
