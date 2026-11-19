// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Security.SslClientAuthenticationOptions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net.Security;

[Token(Token = "0x2000384")]
public class SslClientAuthenticationOptions
{
	[Token(Token = "0x4000FE0")]
	[FieldOffset(Offset = "0x10")]
	private EncryptionPolicy _encryptionPolicy;

	[Token(Token = "0x4000FE1")]
	[FieldOffset(Offset = "0x14")]
	private X509RevocationMode _checkCertificateRevocation;

	[Token(Token = "0x4000FE2")]
	[FieldOffset(Offset = "0x18")]
	private SslProtocols _enabledSslProtocols;

	[Token(Token = "0x4000FE3")]
	[FieldOffset(Offset = "0x1C")]
	private bool _allowRenegotiation;

	[Token(Token = "0x17000540")]
	public string TargetHost
	{
		[Token(Token = "0x60017E6")]
		[Address(RVA = "0x61CD600", Offset = "0x61CC600", VA = "0x61CD600")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E7")]
		[Address(RVA = "0x61CD610", Offset = "0x61CC610", VA = "0x61CD610")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000541")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x60017E8")]
		[Address(RVA = "0x61CD620", Offset = "0x61CC620", VA = "0x61CD620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x61CD630", Offset = "0x61CC630", VA = "0x61CD630")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000542")]
	public X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x61CD640", Offset = "0x61CC640", VA = "0x61CD640")]
		set
		{
		}
	}

	[Token(Token = "0x17000543")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x61CD6D0", Offset = "0x61CC6D0", VA = "0x61CD6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000544")]
	public SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x60017EC")]
		[Address(RVA = "0x61CD760", Offset = "0x61CC760", VA = "0x61CD760")]
		get
		{
			return default(SslProtocols);
		}
		[Token(Token = "0x60017ED")]
		[Address(RVA = "0x61CD770", Offset = "0x61CC770", VA = "0x61CD770")]
		set
		{
		}
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x61CD780", Offset = "0x61CC780", VA = "0x61CD780")]
	public SslClientAuthenticationOptions()
	{
	}
}
