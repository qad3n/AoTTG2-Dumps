// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.MobileTlsContext
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security;

[Token(Token = "0x200005C")]
internal abstract class MobileTlsContext : IDisposable
{
	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x10")]
	private ChainValidationHelper certificateValidator;

	[Token(Token = "0x17000032")]
	internal MonoSslAuthenticationOptions Options
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000033")]
	internal MobileAuthenticatedStream Parent
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x2494680", Offset = "0x2492C80", VA = "0x182494680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public abstract bool IsAuthenticated
	{
		[Token(Token = "0x6000122")]
		get;
	}

	[Token(Token = "0x17000036")]
	public bool IsServer
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000037")]
	internal string TargetHost
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	protected string ServerName
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000039")]
	protected bool AskForClientCertificate
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003A")]
	protected SslProtocols EnabledProtocols
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		[CompilerGenerated]
		get
		{
			return default(SslProtocols);
		}
	}

	[Token(Token = "0x1700003B")]
	protected X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	internal X509Certificate LocalServerCertificate
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	internal abstract X509Certificate LocalClientCertificate
	{
		[Token(Token = "0x600012F")]
		get;
	}

	[Token(Token = "0x1700003E")]
	public abstract X509Certificate2 RemoteCertificate
	{
		[Token(Token = "0x6000130")]
		get;
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x24943F0", Offset = "0x24929F0", VA = "0x1824943F0")]
	protected MobileTlsContext(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x2493AE0", Offset = "0x24920E0", VA = "0x182493AE0")]
	protected void GetProtocolVersions(out TlsProtocolCode? min, out TlsProtocolCode? max)
	{
	}

	[Token(Token = "0x600012A")]
	public abstract void StartHandshake();

	[Token(Token = "0x600012B")]
	public abstract bool ProcessHandshake();

	[Token(Token = "0x600012C")]
	public abstract void FinishHandshake();

	[Token(Token = "0x6000131")]
	public abstract void Flush();

	[Token(Token = "0x6000132")]
	public abstract (int, bool) Read(byte[] buffer, int offset, int count);

	[Token(Token = "0x6000133")]
	public abstract (int, bool) Write(byte[] buffer, int offset, int count);

	[Token(Token = "0x6000134")]
	public abstract void Shutdown();

	[Token(Token = "0x6000135")]
	public abstract bool PendingRenegotiation();

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x2494390", Offset = "0x2492990", VA = "0x182494390")]
	protected bool ValidateCertificate(X509Certificate2 leaf, X509Chain chain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x24940E0", Offset = "0x24926E0", VA = "0x1824940E0")]
	protected X509Certificate SelectServerCertificate(string serverIdentity)
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x2493BC0", Offset = "0x24921C0", VA = "0x182493BC0")]
	protected X509Certificate SelectClientCertificate(string[] acceptableIssuers)
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	public abstract void Renegotiate();

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x2493A10", Offset = "0x2492010", VA = "0x182493A10", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "17")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x2493A70", Offset = "0x2492070", VA = "0x182493A70", Slot = "1")]
	~MobileTlsContext()
	{
	}
}
