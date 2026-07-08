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
	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x10")]
	private ChainValidationHelper certificateValidator;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly MonoSslAuthenticationOptions _003COptions_003Ek__BackingField;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x44")]
	[CompilerGenerated]
	private readonly SslProtocols _003CEnabledProtocols_003Ek__BackingField;

	[Token(Token = "0x17000032")]
	internal MobileAuthenticatedStream Parent
	{
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x4543160", Offset = "0x4543160", VA = "0x4543160")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000033")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x4538460", Offset = "0x4538460", VA = "0x4538460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public abstract bool IsAuthenticated
	{
		[Token(Token = "0x600011F")]
		get;
	}

	[Token(Token = "0x17000035")]
	public bool IsServer
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x4543170", Offset = "0x4543170", VA = "0x4543170")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000036")]
	internal string TargetHost
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x4543180", Offset = "0x4543180", VA = "0x4543180")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000037")]
	protected string ServerName
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x4543190", Offset = "0x4543190", VA = "0x4543190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	protected bool AskForClientCertificate
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x45431A0", Offset = "0x45431A0", VA = "0x45431A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	protected X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x45431B0", Offset = "0x45431B0", VA = "0x45431B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003A")]
	internal X509Certificate LocalServerCertificate
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x45431C0", Offset = "0x45431C0", VA = "0x45431C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x45431D0", Offset = "0x45431D0", VA = "0x45431D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	internal abstract X509Certificate LocalClientCertificate
	{
		[Token(Token = "0x600012A")]
		get;
	}

	[Token(Token = "0x1700003C")]
	public abstract X509Certificate2 RemoteCertificate
	{
		[Token(Token = "0x600012B")]
		get;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4537950", Offset = "0x4537950", VA = "0x4537950")]
	protected MobileTlsContext(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options)
	{
	}

	[Token(Token = "0x6000125")]
	public abstract void StartHandshake();

	[Token(Token = "0x6000126")]
	public abstract bool ProcessHandshake();

	[Token(Token = "0x6000127")]
	public abstract void FinishHandshake();

	[Token(Token = "0x600012C")]
	public abstract (int, bool) Read(byte[] buffer, int offset, int count);

	[Token(Token = "0x600012D")]
	public abstract (int, bool) Write(byte[] buffer, int offset, int count);

	[Token(Token = "0x600012E")]
	public abstract void Shutdown();

	[Token(Token = "0x600012F")]
	public abstract bool PendingRenegotiation();

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4538900", Offset = "0x4538900", VA = "0x4538900")]
	protected bool ValidateCertificate(X509Certificate2 leaf, X509Chain chain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4539E30", Offset = "0x4539E30", VA = "0x4539E30")]
	protected X509Certificate SelectClientCertificate(string[] acceptableIssuers)
	{
		return null;
	}

	[Token(Token = "0x6000132")]
	public abstract void Renegotiate();

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4540830", Offset = "0x4540830", VA = "0x4540830", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x45431E0", Offset = "0x45431E0", VA = "0x45431E0", Slot = "16")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x45431F0", Offset = "0x45431F0", VA = "0x45431F0", Slot = "1")]
	~MobileTlsContext()
	{
	}
}
