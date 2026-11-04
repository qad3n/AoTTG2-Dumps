// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MonoSslClientAuthenticationOptions
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

[Token(Token = "0x200005F")]
internal sealed class MonoSslClientAuthenticationOptions : MonoSslAuthenticationOptions
{
	[Token(Token = "0x17000049")]
	public SslClientAuthenticationOptions Options
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public override bool ServerMode
	{
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public override bool AllowRenegotiation
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x249C890", Offset = "0x249AE90", VA = "0x18249C890", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	public override X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x249C930", Offset = "0x249AF30", VA = "0x18249C930", Slot = "9")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public override EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x249C9A0", Offset = "0x249AFA0", VA = "0x18249C9A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public override SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x1A07BE0", Offset = "0x1A061E0", VA = "0x181A07BE0", Slot = "6")]
		get
		{
			return default(SslProtocols);
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x249C980", Offset = "0x249AF80", VA = "0x18249C980", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public override string TargetHost
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x1CB0C00", Offset = "0x1CAF200", VA = "0x181CB0C00", Slot = "10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x1CB0C70", Offset = "0x1CAF270", VA = "0x181CB0C70", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public override bool ClientCertificateRequired
	{
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x249C8B0", Offset = "0x249AEB0", VA = "0x18249C8B0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000051")]
	public override X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x1CB0D40", Offset = "0x1CAF340", VA = "0x181CB0D40", Slot = "13")]
		get
		{
			return null;
		}
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x249C950", Offset = "0x249AF50", VA = "0x18249C950", Slot = "14")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public override X509Certificate ServerCertificate
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x249C8F0", Offset = "0x249AEF0", VA = "0x18249C8F0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x249C820", Offset = "0x249AE20", VA = "0x18249C820")]
	public MonoSslClientAuthenticationOptions()
	{
	}
}
