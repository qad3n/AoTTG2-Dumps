// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509Store
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200009E")]
internal class MonoBtlsX509Store : MonoBtlsObject
{
	[Token(Token = "0x200009F")]
	internal class BoringX509StoreHandle : MonoBtlsHandle
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringX509StoreHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x282D870", Offset = "0x282BE70", VA = "0x18282D870", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40001DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Dictionary<IntPtr, MonoBtlsX509Lookup> lookupHash;

	[Token(Token = "0x17000072")]
	internal new BoringX509StoreHandle Handle
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x283C440", Offset = "0x283AA40", VA = "0x18283C440")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x283C650", Offset = "0x283AC50", VA = "0x18283C650")]
	private static extern IntPtr mono_btls_x509_store_new();

	[PreserveSig]
	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x283C5D0", Offset = "0x283ABD0", VA = "0x18283C5D0")]
	private static extern IntPtr mono_btls_x509_store_from_ssl_ctx(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x283C4C0", Offset = "0x283AAC0", VA = "0x18283C4C0")]
	private static extern int mono_btls_x509_store_add_cert(IntPtr handle, IntPtr x509);

	[PreserveSig]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x283C550", Offset = "0x283AB50", VA = "0x18283C550")]
	private static extern void mono_btls_x509_store_free(IntPtr handle);

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x283C100", Offset = "0x283A700", VA = "0x18283C100")]
	private static BoringX509StoreHandle Create_internal()
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x283BFE0", Offset = "0x283A5E0", VA = "0x18283BFE0")]
	private static BoringX509StoreHandle Create_internal(MonoBtlsSslCtx.BoringSslCtxHandle ctx)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x283C200", Offset = "0x283A800", VA = "0x18283C200")]
	internal MonoBtlsX509Store()
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x283C310", Offset = "0x283A910", VA = "0x18283C310")]
	internal MonoBtlsX509Store(MonoBtlsSslCtx.BoringSslCtxHandle ctx)
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x283B8B0", Offset = "0x2839EB0", VA = "0x18283B8B0")]
	public void AddCertificate(MonoBtlsX509 x509)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x283BC50", Offset = "0x283A250", VA = "0x18283BC50")]
	public MonoBtlsX509Lookup AddLookup(MonoBtlsX509LookupType type)
	{
		return null;
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x283BA60", Offset = "0x283A060", VA = "0x18283BA60")]
	public void AddDirectoryLookup(string dir, MonoBtlsX509FileType type)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x283B9B0", Offset = "0x2839FB0", VA = "0x18283B9B0")]
	public void AddCollection(X509CertificateCollection collection, MonoBtlsX509TrustKind trust)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x283BE20", Offset = "0x283A420", VA = "0x18283BE20", Slot = "5")]
	protected override void Close()
	{
	}
}
