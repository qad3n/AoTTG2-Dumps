// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509VerifyParam
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x20000A5")]
internal class MonoBtlsX509VerifyParam : MonoBtlsObject
{
	[Token(Token = "0x20000A6")]
	internal class BoringX509VerifyParamHandle : MonoBtlsHandle
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringX509VerifyParamHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x600030A")]
		[Address(RVA = "0x282D8F0", Offset = "0x282BEF0", VA = "0x18282D8F0", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000075")]
	internal new BoringX509VerifyParamHandle Handle
	{
		[Token(Token = "0x60002F9")]
		[Address(RVA = "0x283D000", Offset = "0x283B600", VA = "0x18283D000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	public bool CanModify
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x283CF60", Offset = "0x283B560", VA = "0x18283CF60")]
		get
		{
			return default(bool);
		}
	}

	[PreserveSig]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x283D100", Offset = "0x283B700", VA = "0x18283D100")]
	private static extern IntPtr mono_btls_x509_verify_param_copy(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x283D200", Offset = "0x283B800", VA = "0x18283D200")]
	private static extern IntPtr mono_btls_x509_verify_param_lookup(IntPtr name);

	[PreserveSig]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x283D080", Offset = "0x283B680", VA = "0x18283D080")]
	private static extern int mono_btls_x509_verify_param_can_modify(IntPtr param);

	[PreserveSig]
	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x283D280", Offset = "0x283B880", VA = "0x18283D280")]
	private static extern int mono_btls_x509_verify_param_set_host(IntPtr handle, IntPtr name, int namelen);

	[PreserveSig]
	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x283D320", Offset = "0x283B920", VA = "0x18283D320")]
	private static extern int mono_btls_x509_verify_param_set_time(IntPtr handle, long time);

	[PreserveSig]
	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x283D180", Offset = "0x283B780", VA = "0x18283D180")]
	private static extern void mono_btls_x509_verify_param_free(IntPtr handle);

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x270D250", Offset = "0x270B850", VA = "0x18270D250")]
	internal MonoBtlsX509VerifyParam(BoringX509VerifyParamHandle handle)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x283C6C0", Offset = "0x283ACC0", VA = "0x18283C6C0")]
	public MonoBtlsX509VerifyParam Copy()
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x283C7F0", Offset = "0x283ADF0", VA = "0x18283C7F0")]
	public static MonoBtlsX509VerifyParam GetSslClient()
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x283C830", Offset = "0x283AE30", VA = "0x18283C830")]
	public static MonoBtlsX509VerifyParam GetSslServer()
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x283C870", Offset = "0x283AE70", VA = "0x18283C870")]
	public static MonoBtlsX509VerifyParam Lookup(string name, bool fail = false)
	{
		return null;
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x283CE70", Offset = "0x283B470", VA = "0x18283CE70")]
	private void WantToModify()
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x283CAF0", Offset = "0x283B0F0", VA = "0x18283CAF0")]
	public void SetHost(string name)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x283CCA0", Offset = "0x283B2A0", VA = "0x18283CCA0")]
	public void SetTime(DateTime time)
	{
	}
}
