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
	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x10")]
	private ChainValidationHelper certificateValidator;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly MonoSslAuthenticationOptions _003COptions_003Ek__BackingField;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x44")]
	[CompilerGenerated]
	private readonly SslProtocols _003CEnabledProtocols_003Ek__BackingField;

	[Token(Token = "0x17000032")]
	internal MobileAuthenticatedStream Parent
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x5E3CF30", Offset = "0x5E3BF30", VA = "0x5E3CF30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000033")]
	public MonoTlsSettings Settings
	{
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x5E32BF0", Offset = "0x5E31BF0", VA = "0x5E32BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public abstract bool IsAuthenticated
	{
		[Token(Token = "0x6000120")]
		get;
	}

	[Token(Token = "0x17000035")]
	public bool IsServer
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x5E3CF40", Offset = "0x5E3BF40", VA = "0x5E3CF40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000036")]
	internal string TargetHost
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x5E3CF50", Offset = "0x5E3BF50", VA = "0x5E3CF50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000037")]
	protected string ServerName
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x5E3CF60", Offset = "0x5E3BF60", VA = "0x5E3CF60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000038")]
	protected bool AskForClientCertificate
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x5E3CF70", Offset = "0x5E3BF70", VA = "0x5E3CF70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	protected X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x5E3CF80", Offset = "0x5E3BF80", VA = "0x5E3CF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003A")]
	internal X509Certificate LocalServerCertificate
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x5E3CF90", Offset = "0x5E3BF90", VA = "0x5E3CF90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x5E3CFA0", Offset = "0x5E3BFA0", VA = "0x5E3CFA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	internal abstract X509Certificate LocalClientCertificate
	{
		[Token(Token = "0x600012B")]
		get;
	}

	[Token(Token = "0x1700003C")]
	public abstract X509Certificate2 RemoteCertificate
	{
		[Token(Token = "0x600012C")]
		get;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x5E32130", Offset = "0x5E31130", VA = "0x5E32130")]
	protected MobileTlsContext(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options)
	{
	}

	[Token(Token = "0x6000126")]
	public abstract void StartHandshake();

	[Token(Token = "0x6000127")]
	public abstract bool ProcessHandshake();

	[Token(Token = "0x6000128")]
	public abstract void FinishHandshake();

	[Token(Token = "0x600012D")]
	public abstract (int, bool) Read(byte[] buffer, int offset, int count);

	[Token(Token = "0x600012E")]
	public abstract (int, bool) Write(byte[] buffer, int offset, int count);

	[Token(Token = "0x600012F")]
	public abstract void Shutdown();

	[Token(Token = "0x6000130")]
	public abstract bool PendingRenegotiation();

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x5E330D0", Offset = "0x5E320D0", VA = "0x5E330D0")]
	protected bool ValidateCertificate(X509Certificate2 leaf, X509Chain chain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x5E342B0", Offset = "0x5E332B0", VA = "0x5E342B0")]
	protected X509Certificate SelectClientCertificate(string[] acceptableIssuers)
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	public abstract void Renegotiate();

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x5E3ABD0", Offset = "0x5E39BD0", VA = "0x5E3ABD0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x5E3CFB0", Offset = "0x5E3BFB0", VA = "0x5E3CFB0", Slot = "16")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x5E3CFC0", Offset = "0x5E3BFC0", VA = "0x5E3CFC0", Slot = "1")]
	~MobileTlsContext()
	{
	}
}
