// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MonoSslAuthenticationOptions
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x1700003D")]
	public abstract bool ServerMode
	{
		[Token(Token = "0x6000139")]
		get;
	}

	[Token(Token = "0x1700003E")]
	public abstract SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x600013A")]
		get;
		[Token(Token = "0x600013B")]
		set;
	}

	[Token(Token = "0x1700003F")]
	public abstract EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x600013C")]
		set;
	}

	[Token(Token = "0x17000040")]
	public abstract X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x600013D")]
		set;
	}

	[Token(Token = "0x17000041")]
	public abstract string TargetHost
	{
		[Token(Token = "0x600013E")]
		get;
		[Token(Token = "0x600013F")]
		set;
	}

	[Token(Token = "0x17000042")]
	public abstract X509Certificate ServerCertificate
	{
		[Token(Token = "0x6000140")]
		get;
	}

	[Token(Token = "0x17000043")]
	public abstract X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000141")]
		get;
		[Token(Token = "0x6000142")]
		set;
	}

	[Token(Token = "0x17000044")]
	public abstract bool ClientCertificateRequired
	{
		[Token(Token = "0x6000143")]
		get;
	}

	[Token(Token = "0x17000045")]
	internal ServerCertSelectionCallback ServerCertSelectionDelegate
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x4529470", Offset = "0x4529470", VA = "0x4529470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4529480", Offset = "0x4529480", VA = "0x4529480")]
	protected MonoSslAuthenticationOptions()
	{
	}
}
