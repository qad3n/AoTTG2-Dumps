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
	[Token(Token = "0x17000046")]
	public SslClientAuthenticationOptions Options
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x5E3D080", Offset = "0x5E3C080", VA = "0x5E3D080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	public override bool ServerMode
	{
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x5E3D090", Offset = "0x5E3C090", VA = "0x5E3D090", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000048")]
	public override X509RevocationMode CertificateRevocationCheckMode
	{
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x5E3D0A0", Offset = "0x5E3C0A0", VA = "0x5E3D0A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public override EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x5E3D0C0", Offset = "0x5E3C0C0", VA = "0x5E3D0C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public override SslProtocols EnabledSslProtocols
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x5E3D0E0", Offset = "0x5E3C0E0", VA = "0x5E3D0E0", Slot = "5")]
		get
		{
			return default(SslProtocols);
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x5E3D100", Offset = "0x5E3C100", VA = "0x5E3D100", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public override string TargetHost
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x5E3D120", Offset = "0x5E3C120", VA = "0x5E3D120", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x5E3D140", Offset = "0x5E3C140", VA = "0x5E3D140", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public override bool ClientCertificateRequired
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x5E3D160", Offset = "0x5E3C160", VA = "0x5E3D160", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	public override X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x5E3D1A0", Offset = "0x5E3C1A0", VA = "0x5E3D1A0", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x5E3D1C0", Offset = "0x5E3C1C0", VA = "0x5E3D1C0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public override X509Certificate ServerCertificate
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x5E3D1E0", Offset = "0x5E3C1E0", VA = "0x5E3D1E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x5E39F30", Offset = "0x5E38F30", VA = "0x5E39F30")]
	public MonoSslClientAuthenticationOptions()
	{
	}
}
