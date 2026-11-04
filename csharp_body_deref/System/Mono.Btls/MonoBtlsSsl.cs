// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsSsl
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Mono.Util;

namespace Mono.Btls;

[Token(Token = "0x2000081")]
internal class MonoBtlsSsl : MonoBtlsObject
{
	[Token(Token = "0x2000082")]
	internal class BoringSslHandle : MonoBtlsHandle
	{
		[Token(Token = "0x6000248")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringSslHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x6000249")]
		[Address(RVA = "0x282D470", Offset = "0x282BA70", VA = "0x18282D470", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000083")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int PrintErrorsCallbackFunc(IntPtr str, IntPtr len, IntPtr ctx);

	[Token(Token = "0x400014C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private MonoBtlsBio bio;

	[Token(Token = "0x400014D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private PrintErrorsCallbackFunc printErrorsFunc;

	[Token(Token = "0x400014E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private IntPtr printErrorsFuncPtr;

	[Token(Token = "0x17000069")]
	internal new BoringSslHandle Handle
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x2835870", Offset = "0x2833E70", VA = "0x182835870")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x2835B00", Offset = "0x2834100", VA = "0x182835B00")]
	private static extern void mono_btls_ssl_destroy(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000217")]
	[Address(RVA = "0x2835E90", Offset = "0x2834490", VA = "0x182835E90")]
	private static extern IntPtr mono_btls_ssl_new(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x2836380", Offset = "0x2834980", VA = "0x182836380")]
	private static extern int mono_btls_ssl_use_certificate(IntPtr handle, IntPtr x509);

	[PreserveSig]
	[Token(Token = "0x6000219")]
	[Address(RVA = "0x2836410", Offset = "0x2834A10", VA = "0x182836410")]
	private static extern int mono_btls_ssl_use_private_key(IntPtr handle, IntPtr key);

	[PreserveSig]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x2835970", Offset = "0x2833F70", VA = "0x182835970")]
	private static extern int mono_btls_ssl_add_chain_certificate(IntPtr handle, IntPtr x509);

	[PreserveSig]
	[Token(Token = "0x600021B")]
	[Address(RVA = "0x28358F0", Offset = "0x2833EF0", VA = "0x1828358F0")]
	private static extern int mono_btls_ssl_accept(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x2835A80", Offset = "0x2834080", VA = "0x182835A80")]
	private static extern int mono_btls_ssl_connect(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x2835E10", Offset = "0x2834410", VA = "0x182835E10")]
	private static extern int mono_btls_ssl_handshake(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x2835A00", Offset = "0x2834000", VA = "0x182835A00")]
	private static extern void mono_btls_ssl_close(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x2836300", Offset = "0x2834900", VA = "0x182836300")]
	private static extern int mono_btls_ssl_shutdown(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x2836150", Offset = "0x2834750", VA = "0x182836150")]
	private static extern void mono_btls_ssl_set_quiet_shutdown(IntPtr handle, int mode);

	[PreserveSig]
	[Token(Token = "0x6000221")]
	[Address(RVA = "0x28360C0", Offset = "0x28346C0", VA = "0x1828360C0")]
	private static extern void mono_btls_ssl_set_bio(IntPtr handle, IntPtr bio);

	[PreserveSig]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x2835FA0", Offset = "0x28345A0", VA = "0x182835FA0")]
	private static extern int mono_btls_ssl_read(IntPtr handle, IntPtr data, int len);

	[PreserveSig]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x28364A0", Offset = "0x2834AA0", VA = "0x1828364A0")]
	private static extern int mono_btls_ssl_write(IntPtr handle, IntPtr data, int len);

	[PreserveSig]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x2835C00", Offset = "0x2834200", VA = "0x182835C00")]
	private static extern int mono_btls_ssl_get_error(IntPtr handle, int ret_code);

	[PreserveSig]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x2835D90", Offset = "0x2834390", VA = "0x182835D90")]
	private static extern int mono_btls_ssl_get_version(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000226")]
	[Address(RVA = "0x2835B80", Offset = "0x2834180", VA = "0x182835B80")]
	private static extern int mono_btls_ssl_get_cipher(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000227")]
	[Address(RVA = "0x2835C90", Offset = "0x2834290", VA = "0x182835C90")]
	private static extern IntPtr mono_btls_ssl_get_peer_certificate(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000228")]
	[Address(RVA = "0x2835F10", Offset = "0x2834510", VA = "0x182835F10")]
	private static extern void mono_btls_ssl_print_errors_cb(IntPtr func, IntPtr ctx);

	[PreserveSig]
	[Token(Token = "0x6000229")]
	[Address(RVA = "0x2836270", Offset = "0x2834870", VA = "0x182836270")]
	private static extern int mono_btls_ssl_set_server_name(IntPtr handle, IntPtr name);

	[PreserveSig]
	[Token(Token = "0x600022A")]
	[Address(RVA = "0x2835D10", Offset = "0x2834310", VA = "0x182835D10")]
	private static extern IntPtr mono_btls_ssl_get_server_name(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600022B")]
	[Address(RVA = "0x28361E0", Offset = "0x28347E0", VA = "0x1828361E0")]
	private static extern void mono_btls_ssl_set_renegotiate_mode(IntPtr handle, int mode);

	[PreserveSig]
	[Token(Token = "0x600022C")]
	[Address(RVA = "0x2836040", Offset = "0x2834640", VA = "0x182836040")]
	private static extern int mono_btls_ssl_renegotiate_pending(IntPtr handle);

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x2834180", Offset = "0x2832780", VA = "0x182834180")]
	private static BoringSslHandle Create_internal(MonoBtlsSslCtx ctx)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x2835610", Offset = "0x2833C10", VA = "0x182835610")]
	public MonoBtlsSsl(MonoBtlsSslCtx ctx)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x2834CD0", Offset = "0x28332D0", VA = "0x182834CD0")]
	public void SetBio(MonoBtlsBio bio)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x2835370", Offset = "0x2833970", VA = "0x182835370")]
	private Exception ThrowError([Optional][CallerMemberName] string callerName)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x2834390", Offset = "0x2832990", VA = "0x182834390")]
	private MonoBtlsSslError GetError(int ret_code)
	{
		return default(MonoBtlsSslError);
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x2834DC0", Offset = "0x28333C0", VA = "0x182834DC0")]
	public void SetCertificate(MonoBtlsX509 x509)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x2834EC0", Offset = "0x28334C0", VA = "0x182834EC0")]
	public void SetPrivateKey(MonoBtlsKey key)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x2833F00", Offset = "0x2832500", VA = "0x182833F00")]
	public void AddIntermediateCertificate(MonoBtlsX509 x509)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x2833E40", Offset = "0x2832440", VA = "0x182833E40")]
	public MonoBtlsSslError Accept()
	{
		return default(MonoBtlsSslError);
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x28340C0", Offset = "0x28326C0", VA = "0x1828340C0")]
	public MonoBtlsSslError Connect()
	{
		return default(MonoBtlsSslError);
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x2834850", Offset = "0x2832E50", VA = "0x182834850")]
	public MonoBtlsSslError Handshake()
	{
		return default(MonoBtlsSslError);
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x2834910", Offset = "0x2832F10", VA = "0x182834910")]
	[MonoPInvokeCallback(typeof(PrintErrorsCallbackFunc))]
	private static int PrintErrorsCallback(IntPtr str, IntPtr len, IntPtr ctx)
	{
		return default(int);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x2834410", Offset = "0x2832A10", VA = "0x182834410")]
	public string GetErrors()
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x2834A60", Offset = "0x2833060", VA = "0x182834A60")]
	public void PrintErrors()
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x2834B30", Offset = "0x2833130", VA = "0x182834B30")]
	public MonoBtlsSslError Read(IntPtr data, ref int dataSize)
	{
		return default(MonoBtlsSslError);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x2835510", Offset = "0x2833B10", VA = "0x182835510")]
	public MonoBtlsSslError Write(IntPtr data, ref int dataSize)
	{
		return default(MonoBtlsSslError);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x28347B0", Offset = "0x2832DB0", VA = "0x1828347B0")]
	public int GetVersion()
	{
		return default(int);
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x28342B0", Offset = "0x28328B0", VA = "0x1828342B0")]
	public int GetCipher()
	{
		return default(int);
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x28345A0", Offset = "0x2832BA0", VA = "0x1828345A0")]
	public MonoBtlsX509 GetPeerCertificate()
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x2835110", Offset = "0x2833710", VA = "0x182835110")]
	public void SetServerName(string name)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x28346C0", Offset = "0x2832CC0", VA = "0x1828346C0")]
	public string GetServerName()
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x28352A0", Offset = "0x28338A0", VA = "0x1828352A0")]
	public void Shutdown()
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x2834FC0", Offset = "0x28335C0", VA = "0x182834FC0")]
	public void SetQuietShutdown()
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x2834000", Offset = "0x2832600", VA = "0x182834000", Slot = "5")]
	protected override void Close()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x2835060", Offset = "0x2833660", VA = "0x182835060")]
	public void SetRenegotiateMode(MonoBtlsSslRenegotiateMode mode)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x2834C30", Offset = "0x2833230", VA = "0x182834C30")]
	public bool RenegotiatePending()
	{
		return default(bool);
	}
}
