// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsPkcs12
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono.Btls;

[Token(Token = "0x200007B")]
internal class MonoBtlsPkcs12 : MonoBtlsObject
{
	[Token(Token = "0x200007C")]
	internal class BoringPkcs12Handle : MonoBtlsHandle
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x248F970", Offset = "0x248DF70", VA = "0x18248F970")]
		public BoringPkcs12Handle(IntPtr handle)
		{
		}

		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x248FA00", Offset = "0x248E000", VA = "0x18248FA00", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400014B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private MonoBtlsKey privateKey;

	[Token(Token = "0x1700005F")]
	internal new BoringPkcs12Handle Handle
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x2499D40", Offset = "0x2498340", VA = "0x182499D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000060")]
	public int Count
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x2499CA0", Offset = "0x24982A0", VA = "0x182499CA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000061")]
	public bool HasPrivateKey
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x2499DC0", Offset = "0x24983C0", VA = "0x182499DC0")]
		get
		{
			return default(bool);
		}
	}

	[PreserveSig]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x2499E60", Offset = "0x2498460", VA = "0x182499E60")]
	private static extern void mono_btls_pkcs12_free(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x249A1E0", Offset = "0x24987E0", VA = "0x18249A1E0")]
	private static extern IntPtr mono_btls_pkcs12_new();

	[PreserveSig]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x2499F70", Offset = "0x2498570", VA = "0x182499F70")]
	private static extern int mono_btls_pkcs12_get_count(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x2499EE0", Offset = "0x24984E0", VA = "0x182499EE0")]
	private static extern IntPtr mono_btls_pkcs12_get_cert(IntPtr Handle, int index);

	[PreserveSig]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x249A0F0", Offset = "0x24986F0", VA = "0x18249A0F0")]
	private unsafe static extern int mono_btls_pkcs12_import(IntPtr chain, void* data, int len, Microsoft.Win32.SafeHandles.SafePasswordHandle password);

	[PreserveSig]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x249A070", Offset = "0x2498670", VA = "0x18249A070")]
	private static extern int mono_btls_pkcs12_has_private_key(IntPtr pkcs12);

	[PreserveSig]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x2499FF0", Offset = "0x24985F0", VA = "0x182499FF0")]
	private static extern IntPtr mono_btls_pkcs12_get_private_key(IntPtr pkcs12);

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x2499BC0", Offset = "0x24981C0", VA = "0x182499BC0")]
	internal MonoBtlsPkcs12()
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x2499630", Offset = "0x2497C30", VA = "0x182499630")]
	public MonoBtlsX509 GetCertificate(int index)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x2499A50", Offset = "0x2498050", VA = "0x182499A50")]
	public void Import(byte[] buffer, Microsoft.Win32.SafeHandles.SafePasswordHandle password)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x2499830", Offset = "0x2497E30", VA = "0x182499830")]
	public MonoBtlsKey GetPrivateKey()
	{
		return null;
	}
}
