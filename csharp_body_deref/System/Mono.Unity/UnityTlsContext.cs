// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.UnityTlsContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;
using Mono.Util;

namespace Mono.Unity;

[Token(Token = "0x2000041")]
internal class UnityTlsContext : MobileTlsContext
{
	[Token(Token = "0x4000081")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private unsafe UnityTls.unitytls_tlsctx* tlsContext;

	[Token(Token = "0x4000082")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private unsafe UnityTls.unitytls_x509list* requestedClientCertChain;

	[Token(Token = "0x4000083")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private unsafe UnityTls.unitytls_key* requestedClientKey;

	[Token(Token = "0x4000084")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private UnityTls.unitytls_tlsctx_read_callback readCallback;

	[Token(Token = "0x4000085")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private UnityTls.unitytls_tlsctx_write_callback writeCallback;

	[Token(Token = "0x4000086")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private UnityTls.unitytls_tlsctx_certificate_callback certificateCallback;

	[Token(Token = "0x4000087")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private UnityTls.unitytls_tlsctx_x509verify_callback verifyCallback;

	[Token(Token = "0x4000088")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private X509Certificate localClientCertificate;

	[Token(Token = "0x4000089")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private X509Certificate2 remoteCertificate;

	[Token(Token = "0x400008A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private MonoTlsConnectionInfo connectioninfo;

	[Token(Token = "0x400008B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private bool isAuthenticated;

	[Token(Token = "0x400008C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA9")]
	private bool hasContext;

	[Token(Token = "0x400008D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAA")]
	private bool closedGraceful;

	[Token(Token = "0x400008E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private byte[] writeBuffer;

	[Token(Token = "0x400008F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private byte[] readBuffer;

	[Token(Token = "0x4000090")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GCHandle handle;

	[Token(Token = "0x4000091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Exception lastException;

	[Token(Token = "0x1700000A")]
	public override bool IsAuthenticated
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x451E0F0", Offset = "0x451E0F0", VA = "0x451E0F0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000B")]
	internal override X509Certificate LocalClientCertificate
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x451E100", Offset = "0x451E100", VA = "0x451E100", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public override X509Certificate2 RemoteCertificate
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x451E110", Offset = "0x451E110", VA = "0x451E110", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x451D0B0", Offset = "0x451D0B0", VA = "0x451D0B0")]
	public UnityTlsContext(MobileAuthenticatedStream parent, MonoSslAuthenticationOptions options)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x451DD80", Offset = "0x451DD80", VA = "0x451DD80")]
	private unsafe static void ExtractNativeKeyAndChainFromManagedCertificate(X509Certificate cert, UnityTls.unitytls_errorstate* errorState, out UnityTls.unitytls_x509list* nativeCertChain, out UnityTls.unitytls_key* nativeKey)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x451E120", Offset = "0x451E120", VA = "0x451E120", Slot = "11")]
	public override (int, bool) Read(byte[] buffer, int offset, int count)
	{
		return default((int, bool));
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x451E300", Offset = "0x451E300", VA = "0x451E300", Slot = "12")]
	public override (int, bool) Write(byte[] buffer, int offset, int count)
	{
		return default((int, bool));
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x451E4E0", Offset = "0x451E4E0", VA = "0x451E4E0", Slot = "15")]
	public override void Renegotiate()
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x451E520", Offset = "0x451E520", VA = "0x451E520", Slot = "14")]
	public override bool PendingRenegotiation()
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x451E530", Offset = "0x451E530", VA = "0x451E530", Slot = "13")]
	public override void Shutdown()
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x451E670", Offset = "0x451E670", VA = "0x451E670", Slot = "16")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x451E7A0", Offset = "0x451E7A0", VA = "0x451E7A0", Slot = "6")]
	public override void StartHandshake()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x451E940", Offset = "0x451E940", VA = "0x451E940", Slot = "7")]
	public override bool ProcessHandshake()
	{
		return default(bool);
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x451EB30", Offset = "0x451EB30", VA = "0x451EB30", Slot = "8")]
	public override void FinishHandshake()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x451CC90", Offset = "0x451CC90", VA = "0x451CC90")]
	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_write_callback))]
	private unsafe static IntPtr WriteCallback(void* userData, byte* data, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x451ECA0", Offset = "0x451ECA0", VA = "0x451ECA0")]
	private unsafe IntPtr WriteCallback(byte* data, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x451CDA0", Offset = "0x451CDA0", VA = "0x451CDA0")]
	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_read_callback))]
	private unsafe static IntPtr ReadCallback(void* userData, byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x451F1D0", Offset = "0x451F1D0", VA = "0x451F1D0")]
	private unsafe IntPtr ReadCallback(byte* buffer, IntPtr bufferLen, UnityTls.unitytls_errorstate* errorState)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x451CEB0", Offset = "0x451CEB0", VA = "0x451CEB0")]
	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_x509verify_callback))]
	private unsafe static UnityTls.unitytls_x509verify_result VerifyCallback(void* userData, UnityTls.unitytls_x509list_ref chain, UnityTls.unitytls_errorstate* errorState)
	{
		return default(UnityTls.unitytls_x509verify_result);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x451F680", Offset = "0x451F680", VA = "0x451F680")]
	private unsafe UnityTls.unitytls_x509verify_result VerifyCallback(UnityTls.unitytls_x509list_ref chain, UnityTls.unitytls_errorstate* errorState)
	{
		return default(UnityTls.unitytls_x509verify_result);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x451CFB0", Offset = "0x451CFB0", VA = "0x451CFB0")]
	[MonoPInvokeCallback(typeof(UnityTls.unitytls_tlsctx_certificate_callback))]
	private unsafe static void CertificateCallback(void* userData, UnityTls.unitytls_tlsctx* ctx, byte* cn, IntPtr cnLen, UnityTls.unitytls_x509name* caList, IntPtr caListLen, UnityTls.unitytls_x509list_ref* chain, UnityTls.unitytls_key_ref* key, UnityTls.unitytls_errorstate* errorState)
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x451FC30", Offset = "0x451FC30", VA = "0x451FC30")]
	private unsafe void CertificateCallback(UnityTls.unitytls_tlsctx* ctx, byte* cn, IntPtr cnLen, UnityTls.unitytls_x509name* caList, IntPtr caListLen, UnityTls.unitytls_x509list_ref* chain, UnityTls.unitytls_key_ref* key, UnityTls.unitytls_errorstate* errorState)
	{
	}
}
