// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509Chain
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200008F")]
internal class MonoBtlsX509Chain : MonoBtlsObject
{
	[Token(Token = "0x2000090")]
	internal class BoringX509ChainHandle : MonoBtlsHandle
	{
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringX509ChainHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x6000298")]
		[Address(RVA = "0x282D500", Offset = "0x282BB00", VA = "0x18282D500", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006D")]
	internal new BoringX509ChainHandle Handle
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x28373C0", Offset = "0x28359C0", VA = "0x1828373C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006E")]
	public int Count
	{
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x2837320", Offset = "0x2835920", VA = "0x182837320")]
		get
		{
			return default(int);
		}
	}

	[PreserveSig]
	[Token(Token = "0x600028B")]
	[Address(RVA = "0x2837660", Offset = "0x2835C60", VA = "0x182837660")]
	private static extern IntPtr mono_btls_x509_chain_new();

	[PreserveSig]
	[Token(Token = "0x600028C")]
	[Address(RVA = "0x28375E0", Offset = "0x2835BE0", VA = "0x1828375E0")]
	private static extern int mono_btls_x509_chain_get_count(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600028D")]
	[Address(RVA = "0x2837550", Offset = "0x2835B50", VA = "0x182837550")]
	private static extern IntPtr mono_btls_x509_chain_get_cert(IntPtr Handle, int index);

	[PreserveSig]
	[Token(Token = "0x600028E")]
	[Address(RVA = "0x2837440", Offset = "0x2835A40", VA = "0x182837440")]
	private static extern int mono_btls_x509_chain_add_cert(IntPtr chain, IntPtr x509);

	[PreserveSig]
	[Token(Token = "0x600028F")]
	[Address(RVA = "0x28376D0", Offset = "0x2835CD0", VA = "0x1828376D0")]
	private static extern IntPtr mono_btls_x509_chain_up_ref(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x6000290")]
	[Address(RVA = "0x28374D0", Offset = "0x2835AD0", VA = "0x1828374D0")]
	private static extern void mono_btls_x509_chain_free(IntPtr handle);

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x2837250", Offset = "0x2835850", VA = "0x182837250")]
	public MonoBtlsX509Chain()
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x270D250", Offset = "0x270B850", VA = "0x18270D250")]
	internal MonoBtlsX509Chain(BoringX509ChainHandle handle)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x28370C0", Offset = "0x28356C0", VA = "0x1828370C0")]
	public MonoBtlsX509 GetCertificate(int index)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x2836ED0", Offset = "0x28354D0", VA = "0x182836ED0")]
	public void AddCertificate(MonoBtlsX509 x509)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x2836F90", Offset = "0x2835590", VA = "0x182836F90")]
	internal MonoBtlsX509Chain Copy()
	{
		return null;
	}
}
