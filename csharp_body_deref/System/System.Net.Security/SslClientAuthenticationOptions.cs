// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Security.SslClientAuthenticationOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x49CA100", Offset = "0x49CA100", VA = "0x49CA100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x49CA110", Offset = "0x49CA110", VA = "0x49CA110")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000317")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x49CA120", Offset = "0x49CA120", VA = "0x49CA120")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x49CA130", Offset = "0x49CA130", VA = "0x49CA130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000318")]
	public X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x6000DC4")]
		[Address(RVA = "0x49CA140", Offset = "0x49CA140", VA = "0x49CA140")]
		set
		{
		}
	}

	[Token(Token = "0x17000319")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6000DC5")]
		[Address(RVA = "0x49CA1D0", Offset = "0x49CA1D0", VA = "0x49CA1D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700031A")]
	public SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x6000DC6")]
		[Address(RVA = "0x49CA260", Offset = "0x49CA260", VA = "0x49CA260")]
		get
		{
			return default(SslProtocols);
		}
		[Token(Token = "0x6000DC7")]
		[Address(RVA = "0x49CA270", Offset = "0x49CA270", VA = "0x49CA270")]
		set
		{
		}
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x49CA280", Offset = "0x49CA280", VA = "0x49CA280")]
	public SslClientAuthenticationOptions()
	{
	}
}
