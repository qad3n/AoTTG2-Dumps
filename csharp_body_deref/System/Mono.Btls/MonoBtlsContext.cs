// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsContext
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace Mono.Btls;

[Token(Token = "0x2000074")]
internal class MonoBtlsContext : MobileTlsContext, IMonoBtlsBioMono
{
	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x58")]
	private X509Certificate2 remoteCertificate;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x60")]
	private X509Certificate clientCertificate;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x68")]
	private X509CertificateImplBtls nativeServerCertificate;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x70")]
	private X509CertificateImplBtls nativeClientCertificate;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x78")]
	private MonoBtlsSslCtx ctx;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x80")]
	private MonoBtlsSsl ssl;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x88")]
	private MonoBtlsBio bio;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x90")]
	private MonoBtlsBio errbio;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x98")]
	private MonoTlsConnectionInfo connectionInfo;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0xA0")]
	private bool certificateValidated;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0xA1")]
	private bool isAuthenticated;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0xA2")]
	private bool connected;

	[Token(Token = "0x17000058")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x1C5E3F0", Offset = "0x1C5C9F0", VA = "0x181C5E3F0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000059")]
	internal override X509Certificate LocalClientCertificate
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public override X509Certificate2 RemoteCertificate
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x2497F70", Offset = "0x2496570", VA = "0x182497F70")]
	public MonoBtlsContext(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x2496330", Offset = "0x2494930", VA = "0x182496330")]
	private static X509CertificateImplBtls GetPrivateCertificate(X509Certificate certificate)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x2497B00", Offset = "0x2496100", VA = "0x182497B00")]
	private int VerifyCallback(MonoBtlsX509StoreCtx storeCtx)
	{
		return default(int);
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x24974F0", Offset = "0x2495AF0", VA = "0x1824974F0")]
	private int SelectCallback(string[] acceptableIssuers)
	{
		return default(int);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x24975C0", Offset = "0x2495BC0", VA = "0x1824975C0")]
	private int ServerNameCallback()
	{
		return default(int);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x24979B0", Offset = "0x2495FB0", VA = "0x1824979B0", Slot = "6")]
	public override void StartHandshake()
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x2497630", Offset = "0x2495C30", VA = "0x182497630")]
	private void SetPrivateCertificate(X509CertificateImplBtls privateCert)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x2495DF0", Offset = "0x24943F0", VA = "0x182495DF0")]
	private static Exception GetException(MonoBtlsSslError status)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x2497080", Offset = "0x2495680", VA = "0x182497080", Slot = "7")]
	public override bool ProcessHandshake()
	{
		return default(bool);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x2495D40", Offset = "0x2494340", VA = "0x182495D40")]
	private MonoBtlsSslError DoProcessHandshake()
	{
		return default(MonoBtlsSslError);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x2495D90", Offset = "0x2494390", VA = "0x182495D90", Slot = "8")]
	public override void FinishHandshake()
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x24965E0", Offset = "0x2494BE0", VA = "0x1824965E0")]
	private void InitializeConnection()
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x2496250", Offset = "0x2494850", VA = "0x182496250")]
	private void GetPeerCertificate()
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x2496DF0", Offset = "0x24953F0", VA = "0x182496DF0")]
	private void InitializeSession()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x2496560", Offset = "0x2494B60", VA = "0x182496560")]
	private static TlsProtocols GetProtocol(TlsProtocolCode protocol)
	{
		return default(TlsProtocols);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x2495DB0", Offset = "0x24943B0", VA = "0x182495DB0", Slot = "11")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x24971E0", Offset = "0x24957E0", VA = "0x1824971E0", Slot = "12")]
	public override (int, bool) Read(byte[] buffer, int offset, int size)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x2497D20", Offset = "0x2496320", VA = "0x182497D20", Slot = "13")]
	public override (int, bool) Write(byte[] buffer, int offset, int size)
	{
		return default((int, bool));
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x24974B0", Offset = "0x2495AB0", VA = "0x1824974B0", Slot = "16")]
	public override void Renegotiate()
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x2497950", Offset = "0x2495F50", VA = "0x182497950", Slot = "14")]
	public override void Shutdown()
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x2497050", Offset = "0x2495650", VA = "0x182497050", Slot = "15")]
	public override bool PendingRenegotiation()
	{
		return default(bool);
	}

	[Token(Token = "0x60001B5")]
	private void Dispose<T>(ref T disposable) where T : class, IDisposable
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x2495BE0", Offset = "0x24941E0", VA = "0x182495BE0", Slot = "17")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x2496FF0", Offset = "0x24955F0", VA = "0x182496FF0", Slot = "18")]
	private int Mono_002EBtls_002EIMonoBtlsBioMono_002ERead(byte[] buffer, int offset, int size, out bool wantMore)
	{
		return default(int);
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x2497020", Offset = "0x2495620", VA = "0x182497020", Slot = "19")]
	private bool Mono_002EBtls_002EIMonoBtlsBioMono_002EWrite(byte[] buffer, int offset, int size)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	private void Mono_002EBtls_002EIMonoBtlsBioMono_002EFlush()
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	private void Mono_002EBtls_002EIMonoBtlsBioMono_002EClose()
	{
	}
}
