using System.Runtime.CompilerServices;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net.Security;

[Token(Token = "0x2000230")]
public class SslClientAuthenticationOptions
{
	[Token(Token = "0x4000C75")]
	[FieldOffset(Offset = "0x10")]
	private EncryptionPolicy _encryptionPolicy;

	[Token(Token = "0x4000C76")]
	[FieldOffset(Offset = "0x14")]
	private X509RevocationMode _checkCertificateRevocation;

	[Token(Token = "0x4000C77")]
	[FieldOffset(Offset = "0x18")]
	private SslProtocols _enabledSslProtocols;

	[Token(Token = "0x4000C78")]
	[FieldOffset(Offset = "0x1C")]
	private bool _allowRenegotiation;

	[Token(Token = "0x17000316")]
	public string TargetHost
	{
		[Token(Token = "0x6000DC0")]
		[Address(RVA = "0x46A5000", Offset = "0x46A5000", VA = "0x46A5000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x46A5010", Offset = "0x46A5010", VA = "0x46A5010")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000317")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x46A5020", Offset = "0x46A5020", VA = "0x46A5020")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x46A5030", Offset = "0x46A5030", VA = "0x46A5030")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000318")]
	public X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x6000DC4")]
		[Address(RVA = "0x46A5040", Offset = "0x46A5040", VA = "0x46A5040")]
		set
		{
		}
	}

	[Token(Token = "0x17000319")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6000DC5")]
		[Address(RVA = "0x46A50D0", Offset = "0x46A50D0", VA = "0x46A50D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700031A")]
	public SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x6000DC6")]
		[Address(RVA = "0x46A5160", Offset = "0x46A5160", VA = "0x46A5160")]
		get
		{
			return default(SslProtocols);
		}
		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x46A5170", Offset = "0x46A5170", VA = "0x46A5170")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x46A5180", Offset = "0x46A5180", VA = "0x46A5180")]
	public SslClientAuthenticationOptions()
	{
	}
}
