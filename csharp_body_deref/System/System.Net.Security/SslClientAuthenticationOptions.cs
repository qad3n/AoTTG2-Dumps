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

[Token(Token = "0x20003C8")]
public class SslClientAuthenticationOptions
{
	[Token(Token = "0x40010C8")]
	[FieldOffset(Offset = "0x10")]
	private EncryptionPolicy _encryptionPolicy;

	[Token(Token = "0x40010C9")]
	[FieldOffset(Offset = "0x14")]
	private X509RevocationMode _checkCertificateRevocation;

	[Token(Token = "0x40010CA")]
	[FieldOffset(Offset = "0x18")]
	private SslProtocols _enabledSslProtocols;

	[Token(Token = "0x40010CB")]
	[FieldOffset(Offset = "0x1C")]
	private bool _allowRenegotiation;

	[Token(Token = "0x1700056D")]
	public bool AllowRenegotiation
	{
		[Token(Token = "0x600199F")]
		[Address(RVA = "0xE5A3F0", Offset = "0xE589F0", VA = "0x180E5A3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056E")]
	public string TargetHost
	{
		[Token(Token = "0x60019A0")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60019A1")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700056F")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x60019A2")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60019A3")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000570")]
	public X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x60019A4")]
		[Address(RVA = "0x281A660", Offset = "0x2818C60", VA = "0x18281A660")]
		set
		{
		}
	}

	[Token(Token = "0x17000571")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x60019A5")]
		[Address(RVA = "0x281A700", Offset = "0x2818D00", VA = "0x18281A700")]
		set
		{
		}
	}

	[Token(Token = "0x17000572")]
	public SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x60019A6")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(SslProtocols);
		}
		[Token(Token = "0x60019A7")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		set
		{
		}
	}

	[Token(Token = "0x60019A8")]
	[Address(RVA = "0x281A650", Offset = "0x2818C50", VA = "0x18281A650")]
	public SslClientAuthenticationOptions()
	{
	}
}
