// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsSslCtx
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Mono.Util;

namespace Mono.Btls;

[Token(Token = "0x2000084")]
internal class MonoBtlsSslCtx : MonoBtlsObject
{
	[Token(Token = "0x2000085")]
	internal class BoringSslCtxHandle : MonoBtlsHandle
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringSslCtxHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x600026A")]
		[Address(RVA = "0x282D3E0", Offset = "0x282B9E0", VA = "0x18282D3E0", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000086")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int NativeVerifyFunc(IntPtr instance, int preverify_ok, IntPtr ctx);

	[Token(Token = "0x2000087")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int NativeSelectFunc(IntPtr instance, int count, IntPtr sizes, IntPtr data);

	[Token(Token = "0x2000088")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int NativeServerNameFunc(IntPtr instance);

	[Token(Token = "0x400014F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private NativeVerifyFunc verifyFunc;

	[Token(Token = "0x4000150")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private NativeSelectFunc selectFunc;

	[Token(Token = "0x4000151")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private NativeServerNameFunc serverNameFunc;

	[Token(Token = "0x4000152")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr verifyFuncPtr;

	[Token(Token = "0x4000153")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private IntPtr selectFuncPtr;

	[Token(Token = "0x4000154")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private IntPtr serverNameFuncPtr;

	[Token(Token = "0x4000155")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private MonoBtlsVerifyCallback verifyCallback;

	[Token(Token = "0x4000156")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MonoBtlsSelectCallback selectCallback;

	[Token(Token = "0x4000157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private MonoBtlsServerNameCallback serverNameCallback;

	[Token(Token = "0x4000158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private MonoBtlsX509Store store;

	[Token(Token = "0x4000159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GCHandle instance;

	[Token(Token = "0x400015A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IntPtr instancePtr;

	[Token(Token = "0x1700006A")]
	internal new BoringSslCtxHandle Handle
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x28337B0", Offset = "0x2831DB0", VA = "0x1828337B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006B")]
	public MonoBtlsX509Store CertificateStore
	{
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x2833940", Offset = "0x2831F40", VA = "0x182833940")]
	private static extern IntPtr mono_btls_ssl_ctx_new();

	[PreserveSig]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x2833830", Offset = "0x2831E30", VA = "0x182833830")]
	private static extern int mono_btls_ssl_ctx_free(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x28338B0", Offset = "0x2831EB0", VA = "0x1828338B0")]
	private static extern void mono_btls_ssl_ctx_initialize(IntPtr handle, IntPtr instance);

	[PreserveSig]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x2833A40", Offset = "0x2832040", VA = "0x182833A40")]
	private static extern void mono_btls_ssl_ctx_set_cert_verify_callback(IntPtr handle, IntPtr func, int cert_required);

	[PreserveSig]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x28339B0", Offset = "0x2831FB0", VA = "0x1828339B0")]
	private static extern void mono_btls_ssl_ctx_set_cert_select_callback(IntPtr handle, IntPtr func);

	[PreserveSig]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x2833C90", Offset = "0x2832290", VA = "0x182833C90")]
	private static extern void mono_btls_ssl_ctx_set_min_version(IntPtr handle, int version);

	[PreserveSig]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x2833C00", Offset = "0x2832200", VA = "0x182833C00")]
	private static extern void mono_btls_ssl_ctx_set_max_version(IntPtr handle, int version);

	[PreserveSig]
	[Token(Token = "0x6000254")]
	[Address(RVA = "0x2833AE0", Offset = "0x28320E0", VA = "0x182833AE0")]
	private static extern int mono_btls_ssl_ctx_set_ciphers(IntPtr handle, int count, IntPtr data, int allow_unsupported);

	[PreserveSig]
	[Token(Token = "0x6000255")]
	[Address(RVA = "0x2833DB0", Offset = "0x28323B0", VA = "0x182833DB0")]
	private static extern int mono_btls_ssl_ctx_set_verify_param(IntPtr handle, IntPtr param);

	[PreserveSig]
	[Token(Token = "0x6000256")]
	[Address(RVA = "0x2833B70", Offset = "0x2832170", VA = "0x182833B70")]
	private static extern int mono_btls_ssl_ctx_set_client_ca_list(IntPtr handle, int count, IntPtr sizes, IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6000257")]
	[Address(RVA = "0x2833D20", Offset = "0x2832320", VA = "0x182833D20")]
	private static extern void mono_btls_ssl_ctx_set_server_name_callback(IntPtr handle, IntPtr func);

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x2833210", Offset = "0x2831810", VA = "0x182833210")]
	public MonoBtlsSslCtx()
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x28332E0", Offset = "0x28318E0", VA = "0x1828332E0")]
	internal MonoBtlsSslCtx(BoringSslCtxHandle handle)
	{
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x28331F0", Offset = "0x28317F0", VA = "0x1828331F0")]
	private int VerifyCallback(bool preverify_ok, MonoBtlsX509StoreCtx ctx)
	{
		return default(int);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x2832370", Offset = "0x2830970", VA = "0x182832370")]
	[MonoPInvokeCallback(typeof(NativeVerifyFunc))]
	private static int NativeVerifyCallback(IntPtr instance, int preverify_ok, IntPtr store_ctx)
	{
		return default(int);
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x28320C0", Offset = "0x28306C0", VA = "0x1828320C0")]
	[MonoPInvokeCallback(typeof(NativeSelectFunc))]
	private static int NativeSelectCallback(IntPtr instance, int count, IntPtr sizes, IntPtr data)
	{
		return default(int);
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x2831C90", Offset = "0x2830290", VA = "0x182831C90")]
	private static string[] CopyIssuers(int count, IntPtr sizesPtr, IntPtr dataPtr)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x2833010", Offset = "0x2831610", VA = "0x182833010")]
	public void SetVerifyCallback(MonoBtlsVerifyCallback callback, bool client_cert_required)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x2832E90", Offset = "0x2831490", VA = "0x182832E90")]
	public void SetSelectCallback(MonoBtlsSelectCallback callback)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x2832DE0", Offset = "0x28313E0", VA = "0x182832DE0")]
	public void SetMinVersion(int version)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x2832D30", Offset = "0x2831330", VA = "0x182832D30")]
	public void SetMaxVersion(int version)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x28326E0", Offset = "0x2830CE0", VA = "0x1828326E0")]
	public void SetCiphers(short[] ciphers, bool allow_unsupported)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x28330E0", Offset = "0x28316E0", VA = "0x1828330E0")]
	public void SetVerifyParam(MonoBtlsX509VerifyParam param)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x28328E0", Offset = "0x2830EE0", VA = "0x1828328E0")]
	public void SetClientCertificateIssuers(string[] acceptableIssuers)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x2832F50", Offset = "0x2831550", VA = "0x182832F50")]
	public void SetServerNameCallback(MonoBtlsServerNameCallback callback)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x2832230", Offset = "0x2830830", VA = "0x182832230")]
	[MonoPInvokeCallback(typeof(NativeServerNameFunc))]
	private static int NativeServerNameCallback(IntPtr instance)
	{
		return default(int);
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x2831C40", Offset = "0x2830240", VA = "0x182831C40", Slot = "5")]
	protected override void Close()
	{
	}
}
