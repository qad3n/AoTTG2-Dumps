// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509StoreCtx
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x20000A0")]
internal class MonoBtlsX509StoreCtx : MonoBtlsObject
{
	[Token(Token = "0x20000A1")]
	internal class BoringX509StoreCtxHandle : MonoBtlsHandle
	{
		[Token(Token = "0x40001DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool dontFree;

		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x282D7B0", Offset = "0x282BDB0", VA = "0x18282D7B0")]
		internal BoringX509StoreCtxHandle(IntPtr handle, bool ownsHandle = true)
		{
		}

		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x282D7E0", Offset = "0x282BDE0", VA = "0x18282D7E0", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40001DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int? verifyResult;

	[Token(Token = "0x17000073")]
	internal new BoringX509StoreCtxHandle Handle
	{
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x283AC50", Offset = "0x2839250", VA = "0x18283AC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public int VerifyResult
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x283ACD0", Offset = "0x28392D0", VA = "0x18283ACD0")]
		get
		{
			return default(int);
		}
	}

	[PreserveSig]
	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x283B090", Offset = "0x2839690", VA = "0x18283B090")]
	private static extern IntPtr mono_btls_x509_store_ctx_new();

	[PreserveSig]
	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x283ADE0", Offset = "0x28393E0", VA = "0x18283ADE0")]
	private static extern IntPtr mono_btls_x509_store_ctx_from_ptr(IntPtr ctx);

	[PreserveSig]
	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x283AEE0", Offset = "0x28394E0", VA = "0x18283AEE0")]
	private static extern MonoBtlsX509Error mono_btls_x509_store_ctx_get_error(IntPtr handle, out IntPtr error_string);

	[PreserveSig]
	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x283AE60", Offset = "0x2839460", VA = "0x18283AE60")]
	private static extern IntPtr mono_btls_x509_store_ctx_get_chain(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x283AFF0", Offset = "0x28395F0", VA = "0x18283AFF0")]
	private static extern int mono_btls_x509_store_ctx_init(IntPtr handle, IntPtr store, IntPtr chain);

	[PreserveSig]
	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x283B100", Offset = "0x2839700", VA = "0x18283B100")]
	private static extern int mono_btls_x509_store_ctx_set_param(IntPtr handle, IntPtr param);

	[PreserveSig]
	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x283B210", Offset = "0x2839810", VA = "0x18283B210")]
	private static extern int mono_btls_x509_store_ctx_verify_cert(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x283AF70", Offset = "0x2839570", VA = "0x18283AF70")]
	private static extern IntPtr mono_btls_x509_store_ctx_get_untrusted(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x283B190", Offset = "0x2839790", VA = "0x18283B190")]
	private static extern IntPtr mono_btls_x509_store_ctx_up_ref(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x283AD60", Offset = "0x2839360", VA = "0x18283AD60")]
	private static extern void mono_btls_x509_store_ctx_free(IntPtr handle);

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x283AB50", Offset = "0x2839150", VA = "0x18283AB50")]
	internal MonoBtlsX509StoreCtx()
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x283A290", Offset = "0x2838890", VA = "0x18283A290")]
	private static BoringX509StoreCtxHandle Create_internal(IntPtr store_ctx)
	{
		return null;
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x283A9F0", Offset = "0x2838FF0", VA = "0x18283A9F0")]
	internal MonoBtlsX509StoreCtx(int preverify_ok, IntPtr store_ctx)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x283AC20", Offset = "0x2839220", VA = "0x18283AC20")]
	internal MonoBtlsX509StoreCtx(BoringX509StoreCtxHandle ptr, int? verifyResult)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x283A4D0", Offset = "0x2838AD0", VA = "0x18283A4D0")]
	public MonoBtlsX509Error GetError()
	{
		return default(MonoBtlsX509Error);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x283A3A0", Offset = "0x28389A0", VA = "0x18283A3A0")]
	public MonoBtlsX509Chain GetChain()
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x283A580", Offset = "0x2838B80", VA = "0x18283A580")]
	public MonoBtlsX509Chain GetUntrusted()
	{
		return null;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x283A6B0", Offset = "0x2838CB0", VA = "0x18283A6B0")]
	public void Initialize(MonoBtlsX509Store store, MonoBtlsX509Chain chain)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x283A7F0", Offset = "0x2838DF0", VA = "0x18283A7F0")]
	public void SetVerifyParam(MonoBtlsX509VerifyParam param)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x283A8F0", Offset = "0x2838EF0", VA = "0x18283A8F0")]
	public int Verify()
	{
		return default(int);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x283A140", Offset = "0x2838740", VA = "0x18283A140")]
	public MonoBtlsX509StoreCtx Copy()
	{
		return null;
	}
}
