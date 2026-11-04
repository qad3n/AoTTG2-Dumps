// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509Name
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200009B")]
internal class MonoBtlsX509Name : MonoBtlsObject
{
	[Token(Token = "0x200009C")]
	internal class BoringX509NameHandle : MonoBtlsHandle
	{
		[Token(Token = "0x40001C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool dontFree;

		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x282D7B0", Offset = "0x282BDB0", VA = "0x18282D7B0")]
		internal BoringX509NameHandle(IntPtr handle, bool ownsHandle)
		{
		}

		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x282D720", Offset = "0x282BD20", VA = "0x18282D720", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000071")]
	internal new BoringX509NameHandle Handle
	{
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x2839C50", Offset = "0x2838250", VA = "0x182839C50")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x283A0C0", Offset = "0x28386C0", VA = "0x18283A0C0")]
	private static extern long mono_btls_x509_name_hash(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x2839DF0", Offset = "0x28383F0", VA = "0x182839DF0")]
	private static extern int mono_btls_x509_name_get_entry_count(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x2839FA0", Offset = "0x28385A0", VA = "0x182839FA0")]
	private static extern MonoBtlsX509NameEntryType mono_btls_x509_name_get_entry_type(IntPtr name, int index);

	[PreserveSig]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x2839F10", Offset = "0x2838510", VA = "0x182839F10")]
	private static extern int mono_btls_x509_name_get_entry_oid(IntPtr name, int index, IntPtr buffer, int size);

	[PreserveSig]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x2839E70", Offset = "0x2838470", VA = "0x182839E70")]
	private static extern int mono_btls_x509_name_get_entry_oid_data(IntPtr name, int index, out IntPtr data);

	[PreserveSig]
	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x283A030", Offset = "0x2838630", VA = "0x18283A030")]
	private static extern int mono_btls_x509_name_get_entry_value(IntPtr name, int index, out int tag, out IntPtr str);

	[PreserveSig]
	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x2839D50", Offset = "0x2838350", VA = "0x182839D50")]
	private unsafe static extern IntPtr mono_btls_x509_name_from_data(void* data, int len, int use_canon_enc);

	[PreserveSig]
	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x2839CD0", Offset = "0x28382D0", VA = "0x182839CD0")]
	private static extern void mono_btls_x509_name_free(IntPtr handle);

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x270D250", Offset = "0x270B850", VA = "0x18270D250")]
	internal MonoBtlsX509Name(BoringX509NameHandle handle)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x2839BB0", Offset = "0x28381B0", VA = "0x182839BB0")]
	public long GetHash()
	{
		return default(long);
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x2839490", Offset = "0x2837A90", VA = "0x182839490")]
	public int GetEntryCount()
	{
		return default(int);
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x28398C0", Offset = "0x2837EC0", VA = "0x1828398C0")]
	public MonoBtlsX509NameEntryType GetEntryType(int index)
	{
		return default(MonoBtlsX509NameEntryType);
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x2839690", Offset = "0x2837C90", VA = "0x182839690")]
	public string GetEntryOid(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x2839530", Offset = "0x2837B30", VA = "0x182839530")]
	public byte[] GetEntryOidData(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x28399B0", Offset = "0x2837FB0", VA = "0x1828399B0")]
	public string GetEntryValue(int index, out int tag)
	{
		return null;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x2839300", Offset = "0x2837900", VA = "0x182839300")]
	public static MonoBtlsX509Name CreateFromData(byte[] data, bool use_canon_enc)
	{
		return null;
	}
}
