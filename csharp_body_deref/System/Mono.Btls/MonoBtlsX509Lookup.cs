// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509Lookup
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x2000094")]
internal class MonoBtlsX509Lookup : MonoBtlsObject
{
	[Token(Token = "0x2000095")]
	internal class BoringX509LookupHandle : MonoBtlsHandle
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringX509LookupHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x282D620", Offset = "0x282BC20", VA = "0x18282D620", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40001B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private MonoBtlsX509Store store;

	[Token(Token = "0x40001B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MonoBtlsX509LookupType type;

	[Token(Token = "0x40001B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private List<MonoBtlsX509LookupMono> monoLookups;

	[Token(Token = "0x1700006F")]
	internal new BoringX509LookupHandle Handle
	{
		[Token(Token = "0x6000299")]
		[Address(RVA = "0x2838FC0", Offset = "0x28375C0", VA = "0x182838FC0")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x600029A")]
	[Address(RVA = "0x28391F0", Offset = "0x28377F0", VA = "0x1828391F0")]
	private static extern IntPtr mono_btls_x509_lookup_new(IntPtr store, MonoBtlsX509LookupType type);

	[PreserveSig]
	[Token(Token = "0x600029B")]
	[Address(RVA = "0x2839040", Offset = "0x2837640", VA = "0x182839040")]
	private static extern int mono_btls_x509_lookup_add_dir(IntPtr handle, IntPtr dir, MonoBtlsX509FileType type);

	[PreserveSig]
	[Token(Token = "0x600029C")]
	[Address(RVA = "0x28390E0", Offset = "0x28376E0", VA = "0x1828390E0")]
	private static extern int mono_btls_x509_lookup_add_mono(IntPtr handle, IntPtr monoLookup);

	[PreserveSig]
	[Token(Token = "0x600029D")]
	[Address(RVA = "0x2839170", Offset = "0x2837770", VA = "0x182839170")]
	private static extern void mono_btls_x509_lookup_free(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600029E")]
	[Address(RVA = "0x2839280", Offset = "0x2837880", VA = "0x182839280")]
	private static extern IntPtr mono_btls_x509_lookup_peek_lookup(IntPtr handle);

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x2838C80", Offset = "0x2837280", VA = "0x182838C80")]
	private static BoringX509LookupHandle Create_internal(MonoBtlsX509Store store, MonoBtlsX509LookupType type)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x2838E50", Offset = "0x2837450", VA = "0x182838E50")]
	internal MonoBtlsX509Lookup(MonoBtlsX509Store store, MonoBtlsX509LookupType type)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x2838DB0", Offset = "0x28373B0", VA = "0x182838DB0")]
	internal IntPtr GetNativeLookup()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x28386F0", Offset = "0x2836CF0", VA = "0x1828386F0")]
	public void AddDirectory(string dir, MonoBtlsX509FileType type)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x2838880", Offset = "0x2836E80", VA = "0x182838880")]
	internal void AddMono(MonoBtlsX509LookupMono monoLookup)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x28385E0", Offset = "0x2836BE0", VA = "0x1828385E0")]
	internal void AddCertificate(MonoBtlsX509 certificate)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x2838AF0", Offset = "0x28370F0", VA = "0x182838AF0", Slot = "5")]
	protected override void Close()
	{
	}
}
