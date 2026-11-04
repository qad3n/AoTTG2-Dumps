// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MonoSslAuthenticationOptions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Security;
using System.Runtime.CompilerServices;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x200005E")]
internal abstract class MonoSslAuthenticationOptions
{
	[Token(Token = "0x1700003F")]
	public abstract bool ServerMode
	{
		[Token(Token = "0x6000140")]
		get;
	}

	[Token(Token = "0x17000040")]
	public abstract bool AllowRenegotiation
	{
		[Token(Token = "0x6000141")]
		get;
	}

	[Token(Token = "0x17000041")]
	public abstract SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x6000142")]
		get;
		[Token(Token = "0x6000143")]
		set;
	}

	[Token(Token = "0x17000042")]
	public abstract EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6000144")]
		set;
	}

	[Token(Token = "0x17000043")]
	public abstract X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x6000145")]
		set;
	}

	[Token(Token = "0x17000044")]
	public abstract string TargetHost
	{
		[Token(Token = "0x6000146")]
		get;
		[Token(Token = "0x6000147")]
		set;
	}

	[Token(Token = "0x17000045")]
	public abstract X509Certificate ServerCertificate
	{
		[Token(Token = "0x6000148")]
		get;
	}

	[Token(Token = "0x17000046")]
	public abstract X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000149")]
		get;
		[Token(Token = "0x600014A")]
		set;
	}

	[Token(Token = "0x17000047")]
	public abstract bool ClientCertificateRequired
	{
		[Token(Token = "0x600014B")]
		get;
	}

	[Token(Token = "0x17000048")]
	internal ServerCertSelectionCallback ServerCertSelectionDelegate
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected MonoSslAuthenticationOptions()
	{
	}
}
